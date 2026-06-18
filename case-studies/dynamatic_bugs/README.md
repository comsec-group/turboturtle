Bug 1-3 most likely have the same root cause. In all cases a multiplication with a binary result is performed and turned into a conditional branch by LLVM.
In some cases these branches lead to a timing side channel in the generated hardware (depending on how much other - not necessarily relevant - code is present).

bug2.c and bug3.c pass with Bambu, but fail with Dynamatic