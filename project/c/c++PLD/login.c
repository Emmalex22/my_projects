#include <stdio.h>
#include <string.h>
/*This program accepts user username and password and compares them with a string literal*/

int main(void)
{
    char username[20], password[20];

    printf("Welcome to my app\n");
    printf("Enter Username: \n");
    scanf("%s", username);
    printf("Enter Password: \n");
    scanf("%s", password);
    if (strcmp(username,"gentlesoul") == 0 && strcmp(password, "pteridophyta") == 0)
        printf("login successfull\n");
    else if (strcmp(username, "gentlesoul") == 0)
        printf("incorrect password\n");
    else if (strcmp(password, "pteridophyta") == 0)
        printf("incorrect username\n");
    else
        printf("incorrect username and password\n");

    return(0);
}