import re
import sys

def extract_arguments(input_string):
    """Extract all arguments starting with -- from the input string."""
    # Find all arguments starting with --
    pattern = r'(--[a-zA-Z0-9_\-]+(=[a-zA-Z0-9_\-]+)?(?=\'))'
    arguments = re.findall(pattern, input_string)

    s = ""
    for args in arguments:
        s += args[0] + " "
    print(s)

if __name__ == "__main__":
    # Read filename from command line
    if len(sys.argv) > 1:
        filename = sys.argv[1]
    else:
        print("Error: Please provide a filename as a command line argument")
        sys.exit(1)

    # Read file content
    try:
        with open(filename, 'r') as f:
            input_str = f.read()
    except FileNotFoundError:
        print(f"Error: File '{filename}' not found")
        sys.exit(1)
    except Exception as e:
        print(f"Error reading file: {e}")
        sys.exit(1)

    extract_arguments(input_str)