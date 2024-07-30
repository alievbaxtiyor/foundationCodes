#include <stdio.h>
#include <string.h>

void reorder_sentence(char *sentence) {
    char words[50][50], *token;
    int i = 0, j = 0;

    token = strtok(sentence, " ");
    while (token != NULL) {
        strcpy(words[i], token);
        i++;
        token = strtok(NULL, " ");
    }
    
    char temp[50];
    strcpy(temp, words[0]);
    strcpy(words[0], words[3]);
    strcpy(words[3], words[2]);
    strcpy(words[2], temp);
    strcpy(sentence, "");
    for (j = 0; j < i; j++) {
        strcat(sentence, words[j]);
        strcat(sentence, " ");
    }
    sentence[strlen(sentence) - 1] = '\0'; 
}

int main() {
    char input_sentence[100] = "Salom Foundation57 yaqinda exam.";
    
    printf("Input: %s\n", input_sentence);
    reorder_sentence(input_sentence);
    printf("Output: %s\n", input_sentence);
    
    return 0;
}
