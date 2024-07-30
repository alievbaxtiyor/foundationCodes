#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find_most_frequent_char(char str[]) {
    int freq[256] = {0}; 
    int max_freq = 0; 
    char most_frequent_char; 

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            char ch = toupper(str[i]); 
            freq[ch]++;
            if (freq[ch] > max_freq) {
                max_freq = freq[ch];
                most_frequent_char = ch;
            }
        }
    }

    printf("Eng ko'p uchraydigan harf: %c\n", most_frequent_char);
}

int main() {
    char str[100]; 
    printf("Seriyani kiriting: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    find_most_frequent_char(str);

    return 0;
}
