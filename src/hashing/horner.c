#include "horner.h"

#include <stddef.h>

size_t horner ( const char* val, size_t seed ) {
    size_t result = 0;
    for (size_t i = 0; val[i]; ++i)
        result = result * seed + val[i];
    return result;
}
