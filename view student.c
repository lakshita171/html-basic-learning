#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], course[50];
    int roll;

    printf("Content-type: text/html\n\n");
    printf("<h2>Student List</h2>");

    fp = fopen("students.txt", "r");

    while (fscanf(fp, "%s %d %s", name, &roll, course) != EOF) {
        printf("<p>Name: %s | Roll: %d | Course: %s</p>", name, roll, course);
    }

    fclose(fp);
    return 0;
}