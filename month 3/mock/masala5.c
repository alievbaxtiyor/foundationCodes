#include <stdio.h>
#include <string.h>

#define STUDENT_COUNT 7

struct Student {
    char name[50];
    int age;
    int course;
    char studyType[50];
};

void printStudent(struct Student student) {
    printf("Ismi: %s, Yoshi: %d, Kursi: %d, O'qish turi: %s\n", student.name, student.age, student.course, student.studyType);
}

int main() {
    struct Student students[STUDENT_COUNT] = {
        {"Ali", 23, 2, "kunduzgi"},
        {"Vali", 21, 3, "kechki"},
        {"Gulnora", 22, 2, "kunduzgi"},
        {"Xurshid", 24, 1, "kunduzgi"},
        {"Maqsud", 25, 2, "kechki"},
        {"Dilnoza", 20, 2, "kunduzgi"},
        {"Zamira", 23, 3, "kunduzgi"}
    };

    printf("Yoshi 22 dan katta va 2-kurs talabalar:\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        if (students[i].age > 22 && students[i].course == 2) {
            printStudent(students[i]);
        }
    }

    return 0;
}
