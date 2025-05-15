// Online C compiler to run C program online
#include <stdio.h>

struct student
{
    int id;
    char name[10];
};

int main()
{
    int n;
    printf("Enter data size: ");
    scanf("%d", n);
    struct student data[n];

    for (int i = 0; i < n; i++)
    {
        printf("ID: ");
        scanf("%d", data[i].id);
    }

    printf("Output\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d", data[i].id);
    }
    // Write C code here
    printf("Try programiz.pro");

    return 0;
}
