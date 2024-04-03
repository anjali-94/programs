#include <stdio.h>
#include <string.h>

struct Marks
{
    int rollno;
    char name[15];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main()
{
    struct Marks student[5];
    for (int i = 1; i <= 5; i++)
    {       
        printf("\nMarks of Student %d", i);
        printf("\nRoll no: ");
        scanf("%d", &student[i].rollno);
        printf("Name: ");
        scanf("%s", &student[i].name);
        printf("Chemistry marks out of 100: ");
        scanf("%d", &student[i].chem_marks);
        printf("Maths marks our of 100: ");
        scanf("%d", &student[i].maths_marks);
        printf("Physics marks out of 100: ");
        scanf("%d", &student[i].phy_marks);
        float sum = student[i].chem_marks+student[i].maths_marks+student[i].phy_marks;
        float percentage = (sum*100)/300;
        printf("Total percentage: %.2f ",percentage);
        printf("\n*********************************************************");
    }

    return 0;
}