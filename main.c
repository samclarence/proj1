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
   // char encA; // encryption of a
    int index;
    int key;
        
    // printf("Enter word to be encrypted and key: \n");
    
    scanf("%s", encryption); //receives the word to encrypted from 'input'
    scanf("%d", &key); //receives the key to be used from 'input'
    
   /* a = encryption[1];
    printf("%c\n", a); */
    
            
    for(index = 0; encryption[index] != '\0' ; index++) {
        a = encryption[index];
        if (a >= 'A' && a <= 'Z'){
            a =  (a + key);  //Enx = (x + n)(mod26) where x = letter to be encrypted and n = key 
        }

        else if(a >= 'a' && a <= 'z') {
                a = (a + key);
            }
            printf("%c", a);
            
//            printf("%d\n", index); 
            
            // printf("%c", a);
        }  

    
        
            
        
            

 return 0;
}