
OSHMEM_CC=cc
OSHMEM_C_FLAGS=-O3 -g -I./rand -L./rand -DUSE_SNL_RANDOM

all: atomicinc hotspotinc

atomicinc: bench-atomic-inc/atomicinc.c
	$(OSHMEM_CC) $(OSHMEM_C_FLAGS) -o $@ $< -lsnlrand

hotspotinc: hotspot-atomic-inc/hotspotinc.c
	$(OSHMEM_CC) $(OSHMEM_C_FLAGS) -o $@ $< -lsnlrand

clean:
	rm atomicinc hotspotinc

