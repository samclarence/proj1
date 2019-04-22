#include <stdio.h>

int main() {
   /* printf("Please select an option:\n");
    printf("a) Encrypt a message using a rotation cipher and a given key.\n");
    printf("b) Decrypt a message using a rotation cipher and a given key.\n");
    printf("c) Encrypt a message using a substitution cipher and a given key.\n");
    printf("d) Decrypt a message using a substitution cipher and a given key.\n"); 
    
    printf("\n"); //delete later */
    
    
    char encryption[50];
    char a; 
    char b; 
    int index;
    int key;
            
        
    scanf("%[^\n]s", encryption); //receives the phrase to be encrypted from 'input'
    scanf("%d", &key); //receives the cipher key from 'input'
   
   /* ENCRYPTION CAESER for(index = 0; encryption[index] != '\0' ; index++) {
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
           
        }  */
         
  /* DECRYPTION CAESER for(index = 0; encryption[index] != '\0'; index++) {
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
    } */

//substitution cipher
char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char sub_key[26] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};



for(index = 0 ; encryption[index] != '\0' ; index++ ) {
    a = encryption[index] - 65;
    b = sub_key[a];
    printf("%c", b);
    
    
    
    
    
 }



 return 0;
}