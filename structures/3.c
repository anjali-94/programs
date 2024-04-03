#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[34];
    int age; // should be between 11 to 14
    char address[50];
};

void print_name(struct student s[], int n)
{
    printf("Name of the students having age 14 are:\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].age == 14)
        {
            printf(" %s\n", s[i].name);
        }
    }
}

void even_rollno(struct student s[], int n)
{
    printf("\nName of the students having even roll no :\n");
    for (int i = 0; i < n; i++)
    {
        if (s[i].rollno % 2 == 0)
        {
            printf(" %s\n", s[i].name);
        }
    }
}

void show_details(struct student s[], int n)
{
    int roll_number;
    printf("\nEnter the roll no of a student:");
    scanf("%d", &roll_number);

    // Search for the student with the entered roll number
    for (int i = 0; i < n; i++)
    {
        if (s[i].rollno == roll_number)
        {
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            printf("Address: %s\n", s[i].address);
        }
    }
}

int main()
{
    struct student s[12] = {
        {1, "prerna", 11, " C-542 dhruv gali chajjupur shahdara delhi-32"},
        {2, "samarth", 12, " D-542 dhruv gali naveen shahdara delhi-30"},
        {3, "bhavya", 14, " C-543 dhruv gali chajjupur shahdara delhi-32"},
        {4, "krishna", 13, " C-590 dhruv gali chajjupur shahdara delhi-32"},
        {5, "anjali", 13, " C-567 dhruv gali chajjupur shahdara delhi-10"},
        {6, "shivay", 12, " C-554 dhruv gali naveen shahdara delhi-22"},
        {7, "pranay", 14, " C-583 dhruv gali chajjupur shahdara delhi-32"},
        {8, "prachi", 14, " C-510 dhruv gali chajjupur shahdara delhi-56"},
        {9, "vishal", 13, " H-523 dhruv gali chajjupur shahdara delhi-42"},
        {10, "tanmay", 13, " C-582 dhruv gali chajjupur shahdara delhi-32"},
        {11, "shivam", 12, " C-592 dhruv gali naveen shahdara delhi-32"},
        {12, "shivani", 13, " C-511 dhruv gali chajjupur shahdara delhi-32"},
    };

    print_name(s, 12);
    even_rollno(s, 12);
    show_details(s, 12);

    return 0;
}
