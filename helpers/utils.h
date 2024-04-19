#pragma once

// the double expansion helps with nested macros
// REF: https://www.em-company.fr/blog/index.php/2017/11/03/nested-macros/
#define NESTED_MACRO(X) NESTED_MACRO2(X)
#define NESTED_MACRO2(X) #X
