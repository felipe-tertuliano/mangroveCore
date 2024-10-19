#ifndef RGBA_H_INCLUDED_CHECK
#define RGBA_H_INCLUDED_CHECK
#include <stdint.h>
struct RGBA {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};
typedef struct RGBA RGBA;
#endif