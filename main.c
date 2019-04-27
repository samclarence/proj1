#include <stdio.h>
#include "ProgramInfo.h" //the ProgramInfo header file is used to initiiliase the 'option', 'key', 'encryption' & 'subkey' variables prior to running the program.

int main() {
    
    // char encryption[1024];
    int a; 
    // char option;
    char alphabet[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; //standard alphabet used for substitution cipher conversion
    // char sub_key[26] =  {"QWERTYUIOPASDFGHJKLZXCVBNM"}; //substitution alphabet
    int n = 0;
    int indexcount;
    char b; 
    char c;
    int index;
    // int key;
         
    printf("Please select an option:\n");
    printf("1) Encrypt a message using a rotation cipher and a given key.\n");
    printf("2) Decrypt a message using a rotation cipher and a given key.\n");
    printf("3) Encrypt a message using a substitution cipher and a given key.\n");
    printf("4) Decrypt a message using a substitution cipher and a given key.\n"); 
    
    printf("\n"); //delete later */
    
    // scanf("%c", &option);
   // scanf("%[^\n]s", encryption); //receives the phrase to be encrypted from 'input'
   // scanf("%d", &key); //receives the cipher key from 'input'
    
    switch(option) {
        case 1 : printf("1) The encrypted message is: ");
          for(index = 0; encryption[index] != '\0' ; index++) {
            a = encryption[index];
            if (a >= 'A' && a <= 'Z'){
                a =  (a + key); 
            if(a > 'Z'){
                a = a - 26;
              }
             }
        else if(a >= 'a' && a <= 'z') {
                a = (a + key);
            if (a > 'z') {
                a = a - 26;
            }
            }
            printf("%c", a);
                             
        }
                    break;
                    
        case 2 : printf("2) The decrypted message is: ");
            for(index = 0; encryption[index] != '\0'; index++) {
            a = encryption[index];
              if (a >= 'A' && a <= 'Z') {
            a = (a - key);
            if (a < 'A') {
                a = a + 26;
            }
           }
         else if(a >= 'a' && a <= 'z') {
            a = (a - key);
            if (a < 'a'){
                a = a + 26;
            }
        }
        printf("%c", a);
    }
                    break;
                    
        case 3 : printf("3) The encrypted message is: ");
          for(index = 0 ; encryption[index] != '\0' ; index++) {
            a = encryption[index] - 65;
             if (a >= 0 && a < 26.0) {
                b = sub_key[a];
                printf("%c", b);
               }
            else if (a < 0 || a > 26.0){
               c = encryption[index];
               printf("%c", c);
        }
       
 }
                    break;
                    
        case 4 : printf("4) The decrypted message is: ");
        for(index = 0 ; encryption[index] != '\0' ; index++) {
             b = encryption[index];
          // printf("%c ", b);
           for(n = 0 ; sub_key[n] != b ; n++){
                  indexcount = n;
           } 
           if(n >= 0 && n <= 25){
             c = alphabet[n];
             printf("%c", c);
            }
          else if(n < 0 || n > 25){
          c = encryption[index];
          printf("%c", c);
      }
   }
                    break;
        default: printf("Invalid command, please re-enter your selection.\n");
    }
    
 return 0;
}