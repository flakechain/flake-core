// keccak.h
// 19-Nov-11  Markku-Juhani O. Saarinen <mjos@iki.fi>
// 03-Jul-18  0xA01 <team@flakechain.com>

#ifndef KECCAK_H
#define KECCAK_H

#include <stdint.h>
#include <string.h>

#ifndef KECCAK_ROUNDS
#define KECCAK_ROUNDS 24
#endif

#define KECCAK_3200_ROUNDS 48

#ifndef ROTL64
#define ROTL64(x, y) (((x) << (y)) | ((x) >> (64 - (y))))
#endif

// compute a keccak hash (md) of given byte length from "in"
void keccak(const uint8_t *in, size_t inlen, uint8_t *md, int mdlen);

// update the state
void keccakf(uint64_t st[25], int norounds);

void keccak1600(const uint8_t *in, size_t inlen, uint8_t *md);

void keccak3200(const uint8_t *in, size_t inlen, uint8_t *md);

#endif
