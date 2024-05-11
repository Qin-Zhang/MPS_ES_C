#include <stdio.h>  // Einbinden der Standard Input/Output Bibliothek
#include <stdbool.h>


typedef struct {
    int id;
    char name[100];
    float percentage;
} typedefstructStudent;


struct Student{
    int id;
    char name[100];
    float percentage;
    void (*print)(struct Student *); //"Der Ausdruck void (*print)(struct Student *); in C definiert eine Funktionszeigervariable namens print. Diese Variable kann auf eine Funktion verweisen, die einen Pointer auf eine Struktur vom Typ Student als Argument nimmt und keinen Wert zurückgibt (void)."
};


void printStudent(struct Student *s) {
    printf("StudentID : %d, ", s->id);
    printf("Studentname : %s, ", s->name);
    printf("StudentPercentage : %.1f%%\n", s->percentage);
}




int main() {
    // Ausgabe auf der Konsole
    for (int i = 0; i < 3; ++i) {
        printf("Hello!\n");
        printf("u");
    }

    struct Student stud1 = {1, "Tim Schule", 75.5, printStudent};
    stud1.print(&stud1);

    typedefstructStudent stud2 = {2, "Su Zulo", 80.0};
    printf("Student ID: %d, Name: %s, Score: %.1f%%\n", stud2.id, stud2.name, stud2.percentage);


    bool truth = false; printf("%d\n", !truth);

    return 0;  // Beendet das Programm mit dem Statuscode 0 (keine Fehler)
}
