#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Student {
    char name[50];
    int age;
    int course;
    char studyType[50];
};

void printStudent(struct Student student) {
    printf("\nIsmi: %s\n Yoshi: %d\n Kursi: %d\n O'qish turi: %s\n", student.name, student.age, student.course, student.studyType);
}

int main() {
    system("cls");

    struct Student students[10] = {
        {"Baxtiyor", 20, 4, "kunduzgi"},
        {"Jaxon", 18, 1, "kunduzgi"},
        {"Umid", 24, 2, "sirtki"},
        {"Zayniddin", 21, 4, "kunduzgi"},
        {"Nurjon", 22, 3, "kechki"},
        {"Fayzullo", 20, 2, "kunduzgi"},
        {"Oydina", 19, 3, "kunduzgi"},
        {"Aziza", 18, 2, "kunduzgi"},
        {"Ruxshona", 19, 3, "kunduzgi"},
        {"Behruz", 23, 2, "kunduzgi"},
    };

    printf("Yoshi 22 dan katta va 2-kurs talabalar:\n");
    for (int i = 0; i < 10; i++) {
        if (students[i].age > 22 && students[i].course == 2) {
            printStudent(students[i]);
        }
    }

    return 0;
}