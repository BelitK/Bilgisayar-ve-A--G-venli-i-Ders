#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int find_index(char code[], char char_to_find){
    int i;
    for (i=0; i<26; i++) {
        if (code[i] == char_to_find) {
            return i;
        }
    }
    return -1;
}

char *encrypt(char *message, char code[]){
    long int length = strlen(message);
    char *encrypted_message = (char *) malloc(sizeof(char)*length);
    int i;
    for (i=0; i<length; i++) {
        int encryption_index = tolower(message[i] - 'a');
        if (encryption_index >= 0 && encryption_index < 26) {
            encrypted_message[i] = code[encryption_index];
        } else {
            encrypted_message[i] = message[i];
        }
    }
    return encrypted_message;
}

char *decrypt(char *message, char code[]){
    long int length = strlen(message);
    char *decrypted_message = (char *) malloc(sizeof(char)*length);
    int i;
    for (i=0; i<length; i++) {
        int decryption_index = tolower(message[i] - 'a');
        if (decryption_index >= 0 && decryption_index < 26) {
            int code_index = find_index(code, tolower(message[i]));
            decrypted_message[i] = 'a' + code_index;
        } else {
            decrypted_message[i] = message[i];
        }
    }
    return decrypted_message;
}

int main(){
    char *message = "abac";
    //char alfb[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      char code[26] = {'z','e','b','r','a','s','d','c','f','g','l','i','w','k','h','m','n','o','y','q','p','u','v','j','x','t'};
    char *encrypted_message = encrypt(message, code);
    printf("Orjinal mesaj = %s\nžifrelenmis mesaj = %s\n", message, encrypted_message);
    char *decrypted_message = decrypt(encrypted_message, code);
    printf("Cozulen mesaj = %s\n", decrypted_message);
    return 0;
}
