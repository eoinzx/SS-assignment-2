/* Eoin Laffan Downes
 * A00049183
 * TODO: a brief description of this code.
 */

#include "rijndael.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char* message(char n) 
{
  char* output = (char*)malloc(7);
  strcpy(output, "hello");
  output[5] = n;
  output[6] = 0;
  return output;
}

void cTypTest()
{
  printf("testWorks");
}

// Operations used when encrypting a block
unsigned char sub_bytes(unsigned char* block, aes_block_size_t block_size) 
{
  return *block;
}

unsigned char shift_rows(unsigned char* block, aes_block_size_t block_size) 
{
  return *block;
}

unsigned char mix_columns(unsigned char* block, aes_block_size_t block_size) 
{
  return *block;
}

// Operations used when decrypting a block
unsigned char invert_sub_bytes(unsigned char* block, aes_block_size_t block_size) 
{
  return *block;
}

unsigned char invert_shift_rows(unsigned char* block, aes_block_size_t block_size) 
{
  return *block;
}

unsigned char invert_mix_columns(unsigned char* block, aes_block_size_t block_size) 
{
  return *block;
}

/*
 * This operation is shared between encryption and decryption
 */
unsigned char add_round_key(unsigned char* block, unsigned char* round_key, aes_block_size_t block_size) 
{
  return *block;
}

/*
 * This function should expand the round key. Given an input,
 * which is a single 128-bit key, it should return a 176-byte
 * vector, containing the 11 round keys one after the other
*/

unsigned char* expand_key(unsigned char* cipher_key, aes_block_size_t block_size) 
{
  return *cipher_key;
}

/* header is
 * rijndael
*/

unsigned char* aes_encrypt_block(unsigned char* plaintext, unsigned char* key, aes_block_size_t block_size) 
{
  unsigned char* output = (unsigned char*) malloc
  (
    sizeof(unsigned char) * block_size
  );

  return output;
}

unsigned char* aes_decrypt_block(unsigned char* ciphertext, unsigned char* key, aes_block_size_t block_size) 
{
  
  unsigned char* output = (unsigned char*) malloc
  (
    sizeof(unsigned char) * block_size
  );

  return output;
}
