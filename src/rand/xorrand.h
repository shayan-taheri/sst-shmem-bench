
#ifndef _H_SNL_RANDOM
#define _H_SNL_RANDOM

#include <inttypes.h>

typedef struct {
	uint32_t x;
	uint32_t y;
	uint32_t z;
	uint32_t w;
} snl_random;

void seed_random( snl_random* rand, const uint32_t seed );
uint32_t next_rand_u32( snl_random* rand );

#endif
