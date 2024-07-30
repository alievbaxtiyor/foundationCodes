#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void print(char arr[9]){
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", arr[0], arr[1], arr[2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", arr[3], arr[4], arr[5]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", arr[6], arr[7], arr[8]);
    printf("     |     |     \n");
}   
void toldirish(char arr[9]){
    for(int i = 1; i <= 9; i++){
        arr[i - 1] = (char)(i + 48);
    }
}
int cheking(char a[9]){
    if(a[0] == 'X' && a[1] == 'X' && a[2] == 'X'||
       a[3] == 'X' && a[4] == 'X' && a[5] == 'X'||
       a[6] == 'X' && a[7] == 'X' && a[8] == 'X'||
       a[0] == 'X' && a[3] == 'X' && a[6] == 'X'||
       a[1] == 'X' && a[4] == 'X' && a[7] == 'X'||
       a[2] == 'X' && a[5] == 'X' && a[8] == 'X'||
       a[0] == 'X' && a[4] == 'X' && a[8] == 'X'||
       a[2] == 'X' && a[4] == 'X' && a[6] == 'X'){
        return 0;
       }else if(a[0] == 'O' && a[1] == 'O' && a[2] == 'O'||
       a[3] == 'O' && a[4] == 'O' && a[5] == 'O'||
       a[6] == 'O' && a[7] == 'O' && a[8] == 'O'||
       a[0] == 'O' && a[3] == 'O' && a[6] == 'O'||
       a[1] == 'O' && a[4] == 'O' && a[7] == 'O'||
       a[2] == 'O' && a[5] == 'O' && a[8] == 'O'||
       a[0] == 'O' && a[4] == 'O' && a[8] == 'O'||
       a[2] == 'O' && a[4] == 'O' && a[6] == 'O'){
        return 1;
       }else{
        return 3;
       }
}
int main(){
    char arr[9];

    int i = 1, index;
    toldirish(arr);
    while(1){
        system("cls");
        print(arr);
         if(cheking(arr) == 0){
                printf("O'YIN TUGADI\nG'olib: X");
                return 0;
            }else if(cheking(arr) == 1){
                printf("O'YIN TUGADI\nG'olib: O");
                return 0;
            }
        if(i % 2 == 1){
            printf("X ni navbati\n");
        }else{
            printf("O ni navbati\n");
        }
        m:
        printf("katakni kiritng = ");
        scanf("%d", &index);
        if(arr[index - 1] == 'X' ||arr[index - 1] == 'O'|| index > 9 || index < 1){
            printf("Ushbu katak band, qayta kiriting\n");
            goto m;
        }else{
            if(i % 2 == 1){
                arr[index-1] = 'X';
            }else{
                arr[index-1] = 'O';
            }
        }
        ++i;
    }
}
