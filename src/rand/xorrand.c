
#include "xorrand.h"

void seed_random( snl_random* rand, const uint32_t seed ) {
	rand->x = seed;
	rand->y = 0;
	rand->w = 0;
	rand->z = 0;
}

uint32_t next_rand_u32( snl_random* rand ) {
	const uint32_t t1 = rand->x ^ (rand->x << 11);
    	rand->x = rand->y;
	rand->y = rand->z;
	rand->z = rand->w;
    	return rand->w = rand->w ^ (rand->w >> 19) ^ t1 ^ (t1 >> 8);
}
