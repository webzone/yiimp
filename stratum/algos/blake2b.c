/**
 * Blake2-B Implementation
 * webzone@github 2018-2018
 */

#include <string.h>
#include <stdint.h>

#include <sha3/blake2.h>

void blake2b_hash(const char* input, char* output, uint64_t len)
{
	uint16_t hash[BLAKE2B_OUTBYTES];
	blake2b_state blake2_ctx;

	blake2b_init(&blake2_ctx, BLAKE2B_OUTBYTES);
	blake2b_update(&blake2_ctx, input, len);
	blake2b_final(&blake2_ctx, hash, BLAKE2B_OUTBYTES);

	memcpy(output, hash, 64);
}

