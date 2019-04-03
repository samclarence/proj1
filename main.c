#include <stdio.h>

int main() {
    printf("Please select an option:\n");
    printf("a) Encrypt a message using a rotation cipher and a given key.\n");
    printf("b) Decrypt a message using a rotation cipher and a given key.\n");
    printf("c) Encrypt a message using a substitution cipher and a given key.\n");
    printf("d) Decrypt a message using a substitution cipher and a given key.\n");
    
    printf("\n"); //delete later
    
    char encryption[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char a = 'A';
    char encA; // encryption of a
    int index;
    
    // scanf("%c", &a);
    // printf("c\n", a);
    index =  ((a - 65) + 3)%26; /* Enx = (x + n)(mod26) where x = letter to be encrypted and n = key */
    encA = encryption[index];
    printf("The letter %c becomes %c.\n", a, encA);
    
  return 0;
}
