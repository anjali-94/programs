#include <stdio.h>
#include <string.h>

struct bank_details
{
    char name[34];
    long account_no;
    int balance;
};

void min_balance(struct bank_details c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (c[i].balance < 200)
        {
            printf("Name: %s\n", c[i].name);
        }
    }
}

void increased_balance(struct bank_details c[], int n)
{
     printf("\nName    Incremented balance\n");
    for (int i = 0; i < n; i++)
    {
        if (c[i].balance > 1000)
        {
            c[i].balance += 100;
            printf("%s    %d\n", c[i].name,c[i].balance);
        }
    }
}



int main()
{
    struct bank_details c[12] = {
        {"manish", 12765322, 200},
        {"ajay", 12765323, 100},
        {"anjali", 12765343, 2500},
        {"shrashank", 12165367, 500},
        {"prachi", 12165387, 1000},
        {"vishal", 12765398, 50},
        {"twinkle", 12165378, 300},
        {"ashish", 12195376, 700},
        {"mihika", 12765355, 150},
        {"bhumika", 12198329, 1200},
        {"gauri", 12198719, 2100},
        {"shivangi", 12165311, 25}
    };

    min_balance(c, 12);
    increased_balance(c,12);

    return 0;
}
