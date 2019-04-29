#include <stdio.h> 
#include "ProgramInfo.h" //the ProgramInfo header file is used to initiiliase the 'option', 'key', 'encryption' & 'sub_key' variables.

/* The following program contains code which allows for the encryption and decryption of messages with a given key using a rotation cipher and also the 
encryption and decryption of substitution ciphers with a given key. */

/* Before running the code enter the value for the following variables in the header file titled 'ProgramInfo.h':
   option - the number (between 1 & 4) which correlates to the conversion required, run the program to view options menu.
   key - the number used to define the degree of rotation in rotation ciphers.
   encryption - the text to be converted.
   sub_key - the substitute alphabet to be used in substitution ciphers only.
 */

int main()
{
    
    int a; //an integer used in the manipulation of ASCII characters for rotation ciphers.
    char alphabet[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; //standard alphabet used for substitution cipher conversion.
    int n = 0; //used in the decryption of substitution ciphers to determine the element at which a character appears in an array.
    int index; //the current array element which is being tested and converted.
    char b; //takes the value of the current array element being tested in a substitution cipher for testing and conversion if necessary.
    
                 
    printf("Please select an option by editing the header file:\n"); //prints an option menu to the screen which prompts the user to select a task.
    printf("1) Encrypt a message using a rotation cipher and a given key.\n");
    printf("2) Decrypt a message using a rotation cipher and a given key.\n");
    printf("3) Encrypt a message using a substitution cipher and a given key.\n");
    printf("4) Decrypt a message using a substitution cipher and a given key.\n"); 
    
    printf("\n"); 
   
   
   
    switch(option) {
        case 1 : printf("1) The encrypted message is: "); //Option 1 allows for the encryption of text using a rotation cipher.
               for(index = 0; encryption[index] != '\0' ; index++) { //a for loop which allows for all elements of the encryption text to be test & converted.
                  a = encryption[index]; //defines 'a' as the current element being tested.
                  if(a >= 'A' && a <= 'Z'){ //tests if 'a' is a letter.
                     a =  (a + key); //allows the integer 'a' to take a new value which includes the addition of the value of the 'key'.
                     if(a > 'Z'){ 
                        a = a - 26; //ensures that 'a' is defined as a letter of the alphabet when converted via ASCII code.
                     }
                  }
                  else if(a >= 'a' && a <= 'z') { //same process as above, however, this variant accounts for lower case letters
                     a = (a + key);
                     if(a > 'z') {
                        a = a - 26;
                     }
                  }
                printf("%c", a); //prints the modified value of 'a' or the unmodified special character or number.
                             
                }
                    break;
                    
        case 2 : printf("2) The decrypted message is: "); //Option 2 allows for the decryption of text encrypted with a rotation cipher.
               for(index = 0; encryption[index] != '\0'; index++) { //a for loop which allows for all elements of the encryption text to be test & converted.
                  a = encryption[index]; //the following code is very similar to the above encryption code, with the key being subtracted rather than added.
                  if(a >= 'A' && a <= 'Z') { //tests if 'a' is a letter.
                      a = (a - key); //allows 'a' to take on a new value which is its original value minus the 'key' value.
                     if(a < 'A') { //ensures that 'a' is defined as a letter of the english alphabet when converted via ASCII code.
                        a = a + 26;
                     }
                 }
                 else if(a >= 'a' && a <= 'z') { //same as above code, however, allows for the conversion of lower case letters.
                    a = (a - key);
                    if(a < 'a'){
                       a = a + 26;
                    }
                 }
                printf("%c", a);
               }
                    break;
                    
        case 3 : printf("3) The encrypted message is: "); //Option 3 allows for the encryption of text using a substitution cipher.
               for(index = 0 ; encryption[index] != '\0' ; index++) { //a for loop which allows for all elements of the encryption text to be test & converted.
                  a = encryption[index] - 65; //'a' becomes the value of the letter as an element of the standard alphabet.
                  if(a >= 0 && a < 26.0) { //tests if the value of 'a' is associated with a letter of the alphabet.
                     b = sub_key[a]; //uses the calculated value of 'a' to produce the text using the substituted alphabet.
                     printf("%c", b);
                  }
                  else if (a < 0 || a > 26.0){ //allows for non-letter characters to be printed.
                     b = encryption[index]; 
                     printf("%c", b);
                  }
               }
                    break;
                    
        case 4 : printf("4) The decrypted message is: "); //Option 4 allows for the decryption of text encrypted with a substitution cipher.
               for(index = 0 ; encryption[index] != '\0' ; index++) { //a for loop which allows for all elements of the encryption text to be test & converted.
                  b = encryption[index]; //defines 'b' as the character currently being tested.
                  for(n = 0 ; sub_key[n] != b ; n++){ //determines the array element of the letter to be decrypted.
                  } 
                  if(n >= 0 && n < 26.0){
                     b = alphabet[n]; //uses the array element calculated above which is stored in 'n' to print a value of the standard alphabet at that location.
                     printf("%c", b);
                  }
                  else if(n < 0 || n > 26.0){
                   printf("%c", b); //allows for non-letter characters to be printed.
                  } 
              }
                    break;
        default: printf("Invalid command, please re-enter your selection.\n"); //prints an error message if an invalid option is selected by the user.
    }
    
  return 0; 
 }