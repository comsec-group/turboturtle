// fn_arg_0_secret,fn_arg_1
#include <stdint.h>

{{ datatype }} mysecretfunction({{ datatype }} fn_arg_0_secret, {{ datatype }} fn_arg_1)
{
  return fn_arg_1 {{ operation }} fn_arg_0_secret;
}
