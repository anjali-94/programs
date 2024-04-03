
#include <stdio.h>

struct address
{
    int plotno;
    char city[20];
    long int pin;
};

struct company
{
    char name[30];
    struct address add;
    long int phone;
    int no_of_employee;
};

int main()
{
    int i;
    struct company c1[3];
    for (i = 0; i < 3; i++)
    {
        printf("-----Enter the details of Company %d----- \n", i+1);
        printf("Enter the Company's Name :");
        scanf("%s", c1[i].name);
        printf("Enter the Company's Address\n");
        printf("Plot No: ");
        scanf("%d", &c1[i].add.plotno);
        printf("City: ");
        scanf("%s", &c1[i].add.city);
        printf("Pin No: ");
        scanf("%d", &c1[i].add.pin);
        printf("Enter the phone no :");
        scanf("%ld", &c1[i].phone);
        printf("Enter the no of employees :");
        scanf("%d", &c1[i].no_of_employee);

    }
    printf("---------DISPLAYING THE DATA--------\n");

    for (i = 0; i < 3; i++)
    {
        printf("\nDATA OF COMPANY %d\n", i+1);
        printf("Company's Name : %s\n",c1[i].name);
        printf("Company's Address :\n");
        printf("Plot No: %d",c1[i].add.plotno);
        printf("City: %s\n",c1[i].add.city);
        printf("Pin No: %d\n",c1[i].add.pin);
        printf("Phone no : %ld\n",c1[i].phone);
        printf("No of employees: %d\n",c1[i].no_of_employee);
        printf("---------------------");
    }

}