# Advance Encrypting Standard implementation

# python AES_imp.py
# TO RUN USE ^

#libaries
import ctypes
import os
import sys

#lib_path = os.path.abspath("rijndaelTest.so")
lib_path = os.path.abspath("rijndael.so")
rijn = ctypes.CDLL(lib_path)

rijn.cTypTest()

# Create rijndael.so by using the terminal code to make 32 file
# gcc -shared -o rijndael.so rijndael.c

blockSize = 0

print(" ")
encryptionType = input("Which bit do you want to encrypt with A : 128, B : 256 or C : 512 ")
print(" ")

if encryptionType == "128" or encryptionType == "A" or encryptionType == "a" or encryptionType == "1":
    blockSize = 16

elif encryptionType == "256" or encryptionType == "B" or encryptionType == "b" or encryptionType == "1":
    blockSize = 32

elif encryptionType == "512" or encryptionType == "C" or encryptionType == "C" or encryptionType == "3":
    blockSize = 64

else:
    sys.exit(f"{encryptionType} is not a valid Ecryption Bid")

print(" ")
phaseBeingEnc = input("What do you want to encrypt ")
print(" ")
phaseKey = input("What key do you want to use (must be the same length as what you encrypted) ")
print(" ")

if len(phaseKey) != len(phaseBeingEnc):
    sys.exit(f"{phaseBeingEnc} is {len(phaseBeingEnc)} digits while {phaseKey} is {len(phaseKey)}, they need to be the same")

print(" ")
rijn.aes_encrypt_block(phaseBeingEnc, phaseKey, blockSize)
print(" ")
#rijn.aes_decrypt_block(phaseBeingEnc, phaseKey, blockSize)
