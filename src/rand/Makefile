
AR=ar
CC=gcc
CFLAGS=-O2

libsnlrand.a: xorrand.o
	$(AR) rc libsnlrand.a xorrand.o

xorrand.o: xorrand.h xorrand.c
	$(CC) $(CFLAGS) -c xorrand.c

clean:
	rm libsnlrand.a xorrand.o

