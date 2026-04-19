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

char* mixCol[][2] = {"02", "03", "01", "01", "01", "02", "03", "01", "01", "01", "02", "03", "03", "01", "01", "02"};

// Operations used when encrypting a block
unsigned char hexChecker(int* row, int* col)
{
    int newCol = *"";
    char* new = "";

    if (col[0] == 0)
    {
        if (col[1] == 0)
        {
            if (col[2] == 0)
            {
                if (col[3] == 0)
                {
                    newCol = 0;
                }
                else
                {
                    newCol = 1;            
                }
            }
            else
            {
                if (col[3] == 0)
                {
                    newCol = 2;
                }
                else
                {
                    newCol = 3;
                }
            }
        }
        else
        {
            if (col[2] == 0)
            {
                if (col[3] == 0)
                {
                    newCol = 4;
                }
                else
                {
                    newCol = 5;
                }
            }
            else
            {
                if (col[3] == 0)
                {
                    newCol = 6;
                }
                else
                {
                    newCol = 7;            
                }          
            }
        }
    }
    else
    {
        if (col[1] == 0)
        {
            if (col[2] == 0)
            {
                if (col[3] == 0)
                {
                    newCol = 8;
                }
                else
                {
                    newCol = 9;            
                }
            }
            else
            {
                if (col[3] == 0)
                {
                    newCol = 10;
                }
                else
                {
                    newCol = 11;            
                }
            }
        }
        else
        {
            if (col[2] == 0)
            {
                if (col[3] == 0)
                {
                    newCol = 12;
                }
                else
                {
                    newCol = 13;            
                }
            }
            else
            {
                if (col[3] == 0)
                {
                    newCol = 14;
                }
                else
                {
                    newCol = 15;            
                }
            }
        }
    }

    if (row[0] == 0)
    {
        if (row[1] == 0)
        {
            if (row[2] == 0)
            {
                if (row[3] == 0)
                {
                    new = yAxis0[newCol];
                }
                else
                {
                    new = yAxis1[newCol];           
                }
            }
            else
            {
                if (row[3] == 0)
                {
                    new = yAxis2[newCol];
                }
                else
                {
                    new = yAxis3[newCol];
                }
            }
        }
        else
        {
            if (row[2] == 0)
            {
                if (row[3] == 0)
                {
                    new = yAxis4[newCol];
                }
                else
                {
                    new = yAxis5[newCol];
                }
            }
            else
            {
                if (row[3] == 0)
                {
                    new = yAxis6[newCol];
                }
                else
                {
                    new = yAxis7[newCol];        
                }          
            }
        }
    }
    else
    {
        if (row[1] == 0)
        {
            if (row[2] == 0)
            {
                if (row[3] == 0)
                {
                    new = yAxis8[newCol];
                }
                else
                {
                    new = yAxis9[newCol];          
                }
            }
            else
            {
                if (row[3] == 0)
                {
                    new = yAxis10[newCol];
                }
                else
                {
                    new = yAxis11[newCol];           
                }
            }
        }
        else
        {
            if (row[2] == 0)
            {
                if (row[3] == 0)
                {
                    new = yAxis12[newCol];
                }
                else
                {
                    new = yAxis13[newCol];          
                }
            }
            else
            {
                if (row[3] == 0)
                {
                    new = yAxis14[newCol];
                }
                else
                {
                    new = yAxis15[newCol];          
                }
            }
        }
    }

    printf("ss %s", new);
    char* newChar = *new;
    return *newChar;
}

unsigned char sub_bytes(unsigned char* block, aes_block_size_t block_size) 
{
  char* newBlock = "";

  for(int i = 0; i < strlen(block); i++)
  {
    int row[4] = {0, 0, 0, 0};
    int col[4] = {0, 0, 0, 0};

    for(int j = 0; j < 8; j++)
    {
        if (j < 4)
        {            
            row[j] = (0 != (block[i/8] & 1 << (~j&7)));
        }
        else
        {
            col[j - 4] = (0 != (block[i/8] & 1 << (~j&7)));
        }
    }

    newBlock[i] = hexChecker(row, col);
    printf("%s", newBlock);
  }

  return *newBlock;
}

unsigned char shift_rows(unsigned char* block, aes_block_size_t block_size) 
{
  char* newBlock = "";

  for(int i = 0; i < strlen(block) / 4; i++)
  {
    for(int j = 0; j < 16; j++)
    {
        char temp = block[i]&block[i+1];
        if (temp == yAxis0[j])
        {
            newBlock[i + 1] = yAxis15[j];
            newBlock[i + 2] = yAxis14[j];
            newBlock[i + 3] = yAxis13[j];
            break;
        }
        else if (temp == yAxis1[j])
        {
            newBlock[i + 1] = yAxis0[j];
            newBlock[i + 2] = yAxis15[j];
            newBlock[i + 3] = yAxis14[j];
            break;
        }
        else if (temp == yAxis2[j])
        {
            newBlock[i + 1] = yAxis1[j];
            newBlock[i + 2] = yAxis0[j];
            newBlock[i + 3] = yAxis15[j];
            break;
        }
        else if (temp == yAxis3[j])
        {
            newBlock[i + 1] = yAxis2[j];
            newBlock[i + 2] = yAxis1[j];
            newBlock[i + 3] = yAxis0[j];
            break;
        }
        else if (temp == yAxis4[j])
        {
            newBlock[i + 1] = yAxis3[j];
            newBlock[i + 2] = yAxis2[j];
            newBlock[i + 3] = yAxis1[j];
            break;
        }
        else if (temp == yAxis5[j])
        {
            newBlock[i + 1] = yAxis4[j];
            newBlock[i + 2] = yAxis3[j];
            newBlock[i + 3] = yAxis2[j];
            break;
        }
        else if (temp == yAxis6[j])
        {
            newBlock[i + 1] = yAxis5[j];
            newBlock[i + 2] = yAxis4[j];
            newBlock[i + 3] = yAxis3[j];
            break;
        }
        else if (temp == yAxis7[j])
        {
            newBlock[i + 1] = yAxis6[j];
            newBlock[i + 2] = yAxis5[j];
            newBlock[i + 3] = yAxis4[j];
            break;
        }
        else if (temp == yAxis8[j])
        {
            newBlock[i + 1] = yAxis7[j];
            newBlock[i + 2] = yAxis6[j];
            newBlock[i + 3] = yAxis5[j];
            break;
        }
        else if (temp == yAxis9[j])
        {
            newBlock[i + 1] = yAxis8[j];
            newBlock[i + 2] = yAxis7[j];
            newBlock[i + 3] = yAxis6[j];
            break;
        }
        else if (temp == yAxis10[j])
        {
            newBlock[i + 1] = yAxis9[j];
            newBlock[i + 2] = yAxis8[j];
            newBlock[i + 3] = yAxis7[j];
            break;
        }
        else if (temp == yAxis11[j])
        {
            newBlock[i + 1] = yAxis10[j];
            newBlock[i + 2] = yAxis9[j];
            newBlock[i + 3] = yAxis8[j];
            break;
        }
        else if (temp == yAxis12[j])
        {
            newBlock[i + 1] = yAxis11[j];
            newBlock[i + 2] = yAxis10[j];
            newBlock[i + 3] = yAxis9[j];
            break;
        }
        else if (temp == yAxis13[j])
        {
            newBlock[i + 1] = yAxis12[j];
            newBlock[i + 2] = yAxis11[j];
            newBlock[i + 3] = yAxis10[j];
            break;
        }
        else if (temp == yAxis14[j])
        {
            newBlock[i + 1] = yAxis13[j];
            newBlock[i + 2] = yAxis12[j];
            newBlock[i + 3] = yAxis11[j];
            break;
        }
        else if (temp == yAxis15[j])
        {
            newBlock[i + 1] = yAxis14[j];
            newBlock[i + 2] = yAxis13[j];
            newBlock[i + 3] = yAxis12[j];
            break;
        }
    }
;
    printf("%s", newBlock);
  }

  return *block;
}

unsigned char mix_columns(unsigned char* block, aes_block_size_t block_size) 
{
  char* newBlock = "";

  for(int i = 0; i < strlen(block) / 2; i++)
  {
    char temp[16];
    char* mixTemp = mixCol[i][0];
    char* mixTemp2 = mixCol[i][1];
    for(int j = 0; j < 8; j++)
    {
        temp[j] = (0 != (block[(i * 2)/8] & 1 << (~j&7))) * (0 != (mixTemp[0/8] & 1 << (~j&7)));
        temp[j +8] = (0 != (block[((i * 2) + 1)/8] & 1 << (~j&7))) * (0 != (mixTemp2[0/8] & 1 << (~j&7)));
    }
   
    newBlock[i] = temp[0]&temp[1]&temp[2]&temp[3]&temp[4]&temp[5]&temp[6]&temp[7]&temp[8]&temp[9]&temp[10]&temp[11]&temp[12]&temp[13]&temp[14]&temp[15];
  }
  return *newBlock;
}

unsigned char invert_mix_columns(unsigned char* block, aes_block_size_t block_size) 
{
  char* newBlock = "";
  for(int i = 0; i < strlen(block) * 2; i++)
  {
    char temp[16];
    char* mixTemp = mixCol[i][0];
    char* mixTemp2 = mixCol[i][1];
        for(int j = 0; j < 15; j++)
        {
            temp[j] = (0 != (block[(i * 2)/8] & 1 << (~j&7))) / (0 != (mixTemp[0/8] & 1 << (~j&7)));
            temp[j +8] = (0 != (block[((i * 2) + 1)/8] & 1 << (~j&7))) / (0 != (mixTemp2[0/8] & 1 << (~j&7)));
        }
        newBlock[i] = temp[0]&temp[1]&temp[2]&temp[3]&temp[4]&temp[5]&temp[6]&temp[7]&temp[8]&temp[9]&temp[10]&temp[11]&temp[12]&temp[13]&temp[14]&temp[15];
  }
  
  return *newBlock;
}

// Operations used when decrypting a block
unsigned char invert_sub_bytes(unsigned char* block, aes_block_size_t block_size) 
{
  int row[4] = {0, 0, 0, 0};
  int col[4] = {0, 0, 0, 0};
  int coly = 0;
  char* newBlock = "";

  for(int i = 0; i < strlen(block) / 2; i++)
  {
    for(int j = 0; j < 16; j++)
    {
        coly = j;
        char temp = block[i]&block[i+1];
        if (temp == yAxis0[j])
        {
            row[0] = 0;
            row[1] = 0;
            row[2] = 0;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis1[j])
        {
            row[0] = 0;
            row[1] = 0;
            row[2] = 0;
            row[3] = 1;

            break;
        }
        else if (temp == yAxis2[j])
        {
            row[0] = 0;
            row[1] = 0;
            row[2] = 1;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis3[j])
        {
            row[0] = 0;
            row[1] = 0;
            row[2] = 1;
            row[3] = 1;

            break;
        }
        else if (temp == yAxis4[j])
        {
            row[0] = 0;
            row[1] = 1;
            row[2] = 0;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis5[j])
        {
            row[0] = 0;
            row[1] = 1;
            row[2] = 0;
            row[3] = 1;

            break;
        }
        else if (temp == yAxis6[j])
        {
            row[0] = 0;
            row[1] = 1;
            row[2] = 1;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis7[j])
        {
            row[0] = 0;
            row[1] = 1;
            row[2] = 1;
            row[3] = 1;

            break;
        }
        else if (temp == yAxis8[j])
        {
            row[0] = 1;
            row[1] = 0;
            row[2] = 0;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis9[j])
        {
            row[0] = 1;
            row[1] = 0;
            row[2] = 0;
            row[3] = 1;

            break;
        }
        else if (temp == yAxis10[j])
        {
            row[0] = 1;
            row[1] = 0;
            row[2] = 1;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis11[j])
        {
            row[0] = 1;
            row[1] = 0;
            row[2] = 1;
            row[3] = 1;

            break;
        }
        else if (temp == yAxis12[j])
        {
            row[0] = 1;
            row[1] = 1;
            row[2] = 0;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis13[j])
        {
            row[0] = 1;
            row[1] = 1;
            row[2] = 0;
            row[3] = 1;

            break;
        }
        else if (temp == yAxis14[j])
        {
            row[0] = 1;
            row[1] = 1;
            row[2] = 1;
            row[3] = 0;

            break;
        }
        else if (temp == yAxis15[j])
        {
            row[0] = 1;
            row[1] = 1;
            row[2] = 1;
            row[3] = 1;

            break;
        }
    }

    if (coly == 0)
    {
        col[0] = 0;
        col[1] = 0;
        col[2] = 0;
        col[3] = 0;

        break;
    }
    else if (coly == 1)
    {
        col[0] = 0;
        col[1] = 0;
        col[2] = 0;
        col[3] = 1;

        break;
    }
    else if (coly == 2)
    {
        col[0] = 0;
        col[1] = 0;
        col[2] = 1;
        col[3] = 0;

        break;
    }
    else if (coly == 3)
    {
        col[0] = 0;
        col[1] = 0;
        col[2] = 1;
        col[3] = 1;

        break;
    }
    else if (coly == 4)
    {
        col[0] = 0;
        col[1] = 1;
        col[2] = 0;
        col[3] = 0;

        break;
    }
    else if (coly == 5)
    {
        col[0] = 0;
        col[1] = 1;
        col[2] = 0;
        col[3] = 1;

        break;
    }
    else if (coly == 6)
    {
        col[0] = 0;
        col[1] = 1;
        col[2] = 1;
        col[3] = 0;

        break;
    }
    else if (coly == 7)
    {
        col[0] = 0;
        col[1] = 1;
        col[2] = 1;
        col[3] = 1;

        break;
    }
    else if (coly == 8)
    {
        col[0] = 1;
        col[1] = 0;
        col[2] = 0;
        col[3] = 0;

        break;
    }
    else if (coly == 9)
    {
        col[0] = 1;
        col[1] = 0;
        col[2] = 0;
        col[3] = 1;

        break;
    }
    else if (coly == 10)
    {
        col[0] = 1;
        col[1] = 0;
        col[2] = 1;
        col[3] = 0;

        break;
    }
    else if (coly == 11)
    {
        col[0] = 1;
        col[1] = 0;
        col[2] = 1;
        col[3] = 1;

        break;
    }
    else if (coly == 12)
    {
        col[0] = 1;
        col[1] = 1;
        col[2] = 0;
        col[3] = 0;

        break;
    }
    else if (coly == 13)
    {
        col[0] = 1;
        col[1] = 1;
        col[2] = 0;
        col[3] = 1;

        break;
    }
    else if (coly == 14)
    {
        col[0] = 1;
        col[1] = 1;
        col[2] = 1;
        col[3] = 0;

        break;
    }
    else if (coly == 15)
    {
        col[0] = 1;
        col[1] = 1;
        col[2] = 1;
        col[3] = 1;

        break;
    }
    char new = row[0]&row[1]&row[2]&row[3]&col[0]&col[1]&col[2]&col[3];
    printf("%s", new);
    newBlock[i] = new;
  }
  return *newBlock;
}

unsigned char invert_shift_rows(unsigned char* block, aes_block_size_t block_size) 
{
  char* newBlock = "";

  for(int i = 0; i < strlen(block) / 4; i++)
  {
    for(int j = 0; j < 16; j++)
    {
        char temp = block[i]&block[i+1];
        if (temp == yAxis0[j])
        {
            newBlock[i + 1] = yAxis1[j];
            newBlock[i + 2] = yAxis2[j];
            newBlock[i + 3] = yAxis3[j];
            break;
        }
        else if (temp == yAxis1[j])
        {
            newBlock[i + 1] = yAxis2[j];
            newBlock[i + 2] = yAxis3[j];
            newBlock[i + 3] = yAxis4[j];
            break;
        }
        else if (temp == yAxis2[j])
        {
            newBlock[i + 1] = yAxis3[j];
            newBlock[i + 2] = yAxis4[j];
            newBlock[i + 3] = yAxis5[j];
            break;
        }
        else if (temp == yAxis3[j])
        {
            newBlock[i + 1] = yAxis4[j];
            newBlock[i + 2] = yAxis5[j];
            newBlock[i + 3] = yAxis6[j];
            break;
        }
        else if (temp == yAxis4[j])
        {
            newBlock[i + 1] = yAxis5[j];
            newBlock[i + 2] = yAxis6[j];
            newBlock[i + 3] = yAxis7[j];
            break;
        }
        else if (temp == yAxis5[j])
        {
            newBlock[i + 1] = yAxis6[j];
            newBlock[i + 2] = yAxis7[j];
            newBlock[i + 3] = yAxis8[j];
            break;
        }
        else if (temp == yAxis6[j])
        {
            newBlock[i + 1] = yAxis7[j];
            newBlock[i + 2] = yAxis8[j];
            newBlock[i + 3] = yAxis9[j];
            break;
        }
        else if (temp == yAxis7[j])
        {
            newBlock[i + 1] = yAxis8[j];
            newBlock[i + 2] = yAxis9[j];
            newBlock[i + 3] = yAxis10[j];
            break;
        }
        else if (temp == yAxis8[j])
        {
            newBlock[i + 1] = yAxis9[j];
            newBlock[i + 2] = yAxis10[j];
            newBlock[i + 3] = yAxis11[j];
            break;
        }
        else if (temp == yAxis9[j])
        {
            newBlock[i + 1] = yAxis10[j];
            newBlock[i + 2] = yAxis11[j];
            newBlock[i + 3] = yAxis12[j];
            break;
        }
        else if (temp == yAxis10[j])
        {
            newBlock[i + 1] = yAxis11[j];
            newBlock[i + 2] = yAxis12[j];
            newBlock[i + 3] = yAxis13[j];
            break;
        }
        else if (temp == yAxis11[j])
        {
            newBlock[i + 1] = yAxis12[j];
            newBlock[i + 2] = yAxis13[j];
            newBlock[i + 3] = yAxis14[j];
            break;
        }
        else if (temp == yAxis12[j])
        {
            newBlock[i + 1] = yAxis13[j];
            newBlock[i + 2] = yAxis14[j];
            newBlock[i + 3] = yAxis15[j];
            break;
        }
        else if (temp == yAxis13[j])
        {
            newBlock[i + 1] = yAxis14[j];
            newBlock[i + 2] = yAxis15[j];
            newBlock[i + 3] = yAxis0[j];
            break;
        }
        else if (temp == yAxis14[j])
        {
            newBlock[i + 1] = yAxis15[j];
            newBlock[i + 2] = yAxis0[j];
            newBlock[i + 3] = yAxis1[j];
            break;
        }
        else if (temp == yAxis15[j])
        {
            newBlock[i + 1] = yAxis0[j];
            newBlock[i + 2] = yAxis1[j];
            newBlock[i + 3] = yAxis2[j];
            break;
        }
    }
;
    printf("%s", newBlock);
  }

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
    *cipherText = sub_bytes(cipherText, block_size);
    *cipherText = shift_rows(cipherText, block_size);
    //*cipherText = mix_columns(cipherText, block_size);
    //*cipherText = add_round_key(cipherText, key, block_size);
  }

  *cipherText = sub_bytes(cipherText, block_size);
  *cipherText = shift_rows(cipherText, block_size);
  //*cipherText = add_round_key(cipherText, key, block_size);

  return output;
}

unsigned char* aes_decrypt_block(unsigned char* ciphertext, unsigned char* key, aes_block_size_t block_size) 
{
  int loopAmount = 0;
  unsigned char* output = (unsigned char*) malloc
  (
    sizeof(unsigned char) * block_size
  );

  if (block_size == 16)
  {
    loopAmount = 10;
  }  
  else if (block_size == 32)
  {
    loopAmount = 14;
  }
  else if (block_size == 64)
  {
    loopAmount = 22;
  }
  else
  {
    printf("Not a valid encryption type eee");
    return 0;
  }

  printf("%d", sizeof(ciphertext));
  unsigned char* plaintext = ciphertext;

  //*plaintext = add_round_key(plaintext, key, block_size);
  *plaintext = invert_shift_rows(plaintext, block_size);
  *plaintext = invert_sub_bytes(plaintext, block_size);

  for (int i = 0; i < loopAmount - 1; i++) 
  {
    //*plaintext = add_round_key(plaintext, key, block_size);
    //*plaintext = invert_mix_columns(plaintext, block_size);
    *plaintext = invert_shift_rows(plaintext, block_size);
    *plaintext = invert_sub_bytes(plaintext, block_size);
  }

  //*plaintext = add_round_key(plaintext, key, block_size);

  return output;
}
