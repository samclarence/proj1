#include <stdio.h>

int main() {
    printf("Please select an option:\n");
    printf("a) Encrypt a message using a rotation cipher and a given key.\n");
    printf("b) Decrypt a message using a rotation cipher and a given key.\n");
    printf("c) Encrypt a message using a substitution cipher and a given key.\n");
    printf("d) Decrypt a message using a substitution cipher and a given key.\n");
    
    printf("\n"); //delete later
    
       
    char c;
    scanf("%c", &c);
    c = c - 65;
    printf("%d", (int)c);
    
  return 0;
}
