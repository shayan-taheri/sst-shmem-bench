
OSHMEM_CC=shmemcc
OSHMEM_C_FLAGS=-O3 -g

atomicinc: bench-atomic-inc/atomicinc.c
	$(OSHMEM_CC) $(OSHMEM_C_FLAGS) -o $@ $<

clean:
	rm atomicinc

