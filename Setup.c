#include <stdio.h>

int main()
{
    char Firstname[20];
    char Lastname[20];
    char Title[20];

    printf("Hello. Please enter your first and last name with a space in between. ");
    scanf("%s %s", Firstname, Lastname);

    printf("Thank you. Please type the title you would like to be addressed by. ");
    scanf("%s", Title);

    printf("Hello, %s. %s %s \n", Title, Firstname, Lastname);

    return 0;
}