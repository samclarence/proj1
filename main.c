#include <stdio.h>

int main() {
    
    char encryption[50];
    int a; 
    char option = 'C';
    char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; //standard alphabet for conversion
    char sub_key[26] =  {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'}; //substitution alphabet - needs input
    int n = 0;
    int indexcount;
    char b; 
    char c;
    int index;
    int key;
      
    printf("Please select an option:\n");
    printf("A) Encrypt a message using a rotation cipher and a given key.\n");
    printf("B) Decrypt a message using a rotation cipher and a given key.\n");
    printf("C) Encrypt a message using a substitution cipher and a given key.\n");
    printf("D) Decrypt a message using a substitution cipher and a given key.\n"); 
    
    printf("\n"); //delete later */
    
   // scanf("%[^\n]c", &option);
    scanf("%[^\n]s", encryption); //receives the phrase to be encrypted from 'input'
    scanf("%d", &key); //receives the cipher key from 'input'
    
    switch(option) {
        case 'A' : printf("The encrypted message is: ");
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
                    
        case 'B' : printf("The decrypted message is: ");
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
                    
        case 'C' : printf("The encrypted message is: ");
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
                    
        case 'D' : printf("The decrypted message is: ");
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