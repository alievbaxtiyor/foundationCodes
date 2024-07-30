#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    int id_group;
};

struct Student inputUcer () {
    struct Student new;

    printf("Talabaning ismi: ");
    scanf("%[^\n]s", new.name);

    printf("Talabaning yoshi: ");
    scanf("%d", &new.age);

    printf("Talabaning guruh raqami: ");
    scanf("%d", &new.id_group);

    return new;
}

void printStudent (struct Student new) {
    puts("");
    printf("Talabaning ismi: %s\n", new.name);
    printf("Talabaning ismi: %d\n", new.age);
    printf("Talabaning ismi: %d\n", new.id_group);
}

int main () {
    system("cls");

    struct Student persons = inputUcer();
    printStudent(persons);

    return 0;
}