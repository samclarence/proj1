#include <stdio.h>

int main() {
   /* printf("Please select an option:\n");
    printf("a) Encrypt a message using a rotation cipher and a given key.\n");
    printf("b) Decrypt a message using a rotation cipher and a given key.\n");
    printf("c) Encrypt a message using a substitution cipher and a given key.\n");
    printf("d) Decrypt a message using a substitution cipher and a given key.\n"); 
    
    printf("\n"); //delete later */
    
    
    char encryption[50];
    char a; //the current letter to be converted
    int index;
    int key;
        
        
    scanf("%[^\n]s", encryption); //receives the word to encrypted from 'input'
    scanf("%d", &key); //receives the key to be used from 'input'
   
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
         
   /* for(index = 0; encryption[index] != '\0'; index++) {
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




 return 0;
}