#include <stdio.h>
#include <string.h>

void find_longest_word(char str[]) {
    char *word;
    char longest_word[100];
    int max_length = 0;
    
    word = strtok(str, " ");
    
    while (word != NULL) {
        if (strlen(word) > max_length) {
            max_length = strlen(word);
            strcpy(longest_word, word);
        }
        word = strtok(NULL, " ");
    }
    
    printf("Eng uzun so'z: %s\n", longest_word);
}

int main() {
    char str[] = "Salom bolalar yaxshimisizlar tuzumi";
    
    find_longest_word(str);
    
    return 0;
}
