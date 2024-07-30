#include <stdio.h>
#include <stdlib.h>

struct User {
    char name[64];
    char login[64];
    char password[64];
    short age;
    char country[64];
    char gender[64];
    float height;
    double weight;
    int birth_year;
    char email[64];
    short years_of_experience;
    short children;
};

int main () {
    system("cls");

    struct User person = {"Baxtiyor", "Bakhti4ka", "qwerty123",
                          20, "Uzbekistan", "Erkak", 1.80, 65.4, 2004, "yusufoviich", 1, 0};

    printf("Ismi:\t\t\t%s\n", person.name);
    printf("Login:\t\t\t%s\n", person.login);
    printf("Parol:\t\t\t%s\n", person.password);
    printf("Yoshi:\t\t\t%d\n", person.age);
    printf("Davlati:\t\t%s\n", person.country);
    printf("Gender:\t\t\t%s\n", person.gender);
    printf("Bo'yi:\t\t\t%.2f\n", person.height);
    printf("Vazni:\t\t\t%.2lf\n", person.weight);
    printf("Yili:\t\t\t%d\n", person.birth_year);
    printf("Gmail:\t\t\t%s\n", person.email);
    printf("Ish tajriba yili:\t%d\n", person.years_of_experience);
    printf("Bolasi:\t\t\t%d\n", person.children);

    return 0;
}