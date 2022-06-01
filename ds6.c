

#include <stdio.h>

struct school
{
    int sch_id;
    char sch_name[40];
};

struct student
{
    int Stud_id;
    float score;

    struct school a1;
}s1;

int main()
{
    printf("school Detail\n");

    printf("Enter school name: ");
    scanf("%s \n", s1.a1.sch_name);
    printf("Enter school ID: ");
    scanf("%d", &s1.a1.sch_id);

    printf("\nStudent Detail\n");

    printf("Enter Student ID: ");
    scanf("%d", &s1.Stud_id);
    printf("Enter Score: ");
    scanf("%d", &s1.score);


    printf("----------DISPLAY-----------\n");

    printf("school ID: %d\n", s1.a1.sch_id);
    printf("school Name: %s\n", s1.a1.sch_name);
    printf("\nStudent Id: %d\n", s1.Stud_id);
    printf("Student Score: %d\n", s1.score);

    return 0;
}
