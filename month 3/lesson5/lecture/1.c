#include <stdio.h>
#include <string.h>

void find_shortest_word(char str[]) {
    char *word;
    char shortest_word[100];
    int min_length = 100;
    
    word = strtok(str, " ");//Aliyev Baxtiyor
    while (word != NULL) {
        if (strlen(word) < min_length) {
            min_length = strlen(word);
            strcpy(shortest_word, word);
        }
        word = strtok(NULL, " ");
    }
    
    printf("Eng qisqa so'z: %s\n", shortest_word);
}

int main() {
    char str[] = "Salom bolalar yaxshimisizlar tuzumi";
    
    find_shortest_word(str);
    
    return 0;
}
