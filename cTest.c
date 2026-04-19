#include "rijndael.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char yAxis0[][2] = {"63", "ca", "b7", "04", "09", "53", "d0", "51", "cd" ,"60" ,"e0", "e7", "ba", "70", "e1", "8c"};
char yAxis1[][2] = {"7c", "82", "fd", "c7", "83", "d1", "ef", "a3", "0c" ,"81" ,"32", "c8", "78", "3e", "f8", "a1"};
char yAxis2[][2] = {"77", "c9", "93", "23", "2c", "00", "aa", "40", "13" ,"4f" ,"3a", "37", "25", "b5", "98", "89"};
char yAxis3[][2] = {"7b", "7d", "26", "c3", "1a", "ed", "fb", "8f", "ec" ,"dc" ,"0a", "6d", "2e", "66", "11", "0d"};
char yAxis4[][2] = {"f2", "fa", "36", "18", "1b", "20", "43", "92", "5f" ,"22" ,"49", "8d", "1c", "48", "69", "bf"};
char yAxis5[][2] = {"6b", "59", "3f", "96", "6e", "fc", "4d", "9d", "97" ,"2a" ,"06", "d5", "a6", "03", "d9", "e6"};
char yAxis6[][2] = {"6f", "47", "f7", "05", "5a", "b1", "33", "38", "44" ,"90" ,"24", "4e", "b4", "f6", "8e", "42"};
char yAxis7[][2] = {"c5", "f0", "cc", "9a", "a0", "5b", "85", "f5", "17" ,"88" ,"5c", "a9", "c6", "0e", "94", "68"};
char yAxis8[][2] = {"30", "ad", "34", "07", "52", "6a", "45", "bc", "c4" ,"46" ,"c2", "6c", "e8", "61", "9b", "41"};
char yAxis9[][2] = {"01", "d4", "a5", "12", "3b", "cb", "f9", "b6", "a7" ,"ee" ,"d3", "56", "dd", "35", "1e", "99"};
char yAxis10[][2] = {"67", "a2", "e5", "80", "d6", "be", "02", "da", "7e" ,"b8" ,"ac", "f4", "74", "57", "87", "2d"};
char yAxis11[][2] = {"2b", "af", "f1", "e2", "b3", "39", "7f", "21", "3d" ,"14" ,"62", "ea", "1f", "b9", "e9", "0f"};
char yAxis12[][2] = {"fe", "9c", "71", "eb", "29", "4a", "50", "10", "64" ,"de" ,"91", "65", "4b", "86", "ce", "b0"};
char yAxis13[][2] = {"d7", "a4", "d8", "27", "e3", "4c", "3c", "ff", "5d" ,"5e" ,"95", "7a", "bd", "c1", "55", "54"};
char yAxis14[][2] = {"ab", "72", "31", "b2", "2f", "58", "9f", "f3", "19" ,"0b" ,"e4", "ae", "8b", "1d", "28", "bb"};
char yAxis15[][2] = {"76", "c0", "15", "75", "84", "cf", "a8", "d2", "73" ,"db" ,"79", "08", "8a", "9e", "df", "16"};

unsigned char* encrypt(unsigned char* plaintext, unsigned char* key, aes_block_size_t block_size) 
{
  int loopAmount = 0;
  unsigned char* output = (unsigned char*) malloc
  (
    sizeof(unsigned char) * block_size
  );

  if (block_size == 16)
  {
    loopAmount = 1;
  }  
  else if (block_size == 32)
  {
    loopAmount = 12;
  }
  else if (block_size == 64)
  {
    loopAmount = 14;
  }
  else
  {
    printf("%d", block_size);
    printf(" Not a valid encryption type eee");
    return 0;
  }

  unsigned char* cipherText = plaintext;

  //cipherText = add_round_key(cipherText, key, block_size);

  for (int i = 0; i < loopAmount - 1; i++) 
  {
    //*cipherText = sub_bytes(cipherText, block_size);
    //*cipherText = shift_rows(cipherText, block_size);
    //*cipherText = mix_columns(cipherText, block_size);
    //*cipherText = add_round_key(cipherText, key, block_size);
  }

  //*cipherText = sub_bytes(cipherText, block_size);
  //*cipherText = shift_rows(cipherText, block_size);
  //*cipherText = add_round_key(cipherText, key, block_size);

  return output;
}

int main()
{
    unsigned char cip = encrypt("are", "sfdg", 16);
    //decrypt(cip, "sfdg", 16);
}