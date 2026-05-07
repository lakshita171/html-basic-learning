#include<stdio.h>

int main() {
    FILE *fp;
    char name[50], course[50];
    int roll;

    printf("Content-type: text/html\n\n");

    scanf("%s %d %s", name, &roll, course);

    fp = fopen("students.txt", "a");
    fprintf(fp, "%s %d %s\n", name, roll, course);
    fclose(fp);

    printf("<h2>Student Added Successfully!</h2>");
    return 0;
}