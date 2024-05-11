#include <stdio.h>  // Einbinden der Standard Input/Output Bibliothek
#include <stdbool.h>



struct Student{
    int id;
    char name[100];
    float percentage;
    void (*print)(struct Student *); //    "Der Ausdruck void (*print)(struct Student *); in C definiert eine Funktionszeigervariable namens print. Diese Variable kann auf eine Funktion verweisen, die einen Pointer auf eine Struktur vom Typ Student als Argument nimmt und keinen Wert zurückgibt (void)."

};

void printStudent(struct Student *s) {
    printf("Student ID : %d\n", s->id);
    printf("Student Name : %s\n", s->name);
    printf("Student Percentage : %.2f%%\n", s->percentage);
}

int main() {
    // Ausgabe auf der Konsole
    for (int i = 0; i < 3; ++i) {
        printf("Hello!\n");
        printf("u");
    }

    struct Student stud1 = {1, "Tim Schule", 75.5, printStudent};
    stud1.print(&stud1);

    bool truth = false;
    printf("%d\n", !truth);
    printf("%d\n", truth);




    return 0;  // Beendet das Programm mit dem Statuscode 0 (keine Fehler)
}
