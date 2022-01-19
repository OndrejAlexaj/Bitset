typedef{
	// TODO
} bitset_t;

typedef unsigned long bitset_index_t;

void bitset_create(bitset_t *array, bitset_index_t size);

void bitset_alloc(bitset_t *array, bitset_index_t size);

void bitset_free(bitset_t *array);

void bitset_size(bitset_t *array);

void bitset_setbit(bitset_t *array, bitset_index_t index, bitset_index_t exp);

void bitset_getbit(bitset_t *array, bitset_index_t index);
