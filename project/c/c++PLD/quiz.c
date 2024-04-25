#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*This programme implements the concept of structure and typedef in creating a quiz application*/
/*structure defination*/
typedef struct myquiz
{
    char username[30];
    int score;
}mq;

int main(void)
{
    char q1[20], q3[20], q4[20], q5[20];
    int q2;
    mq student1;
    /*print welcome message*/
    printf("welcome to my quiz app\n");
    printf("input your username: \n");
    scanf("%s", student1.username); /*accept username*/
    printf("welcome %s, lets see how smart you are\n lets get started\n", student1.username);
    /*Print the quizz questions*/
    printf("1. What is the capital of Nigeria?\n");
    scanf("%s", q1);
    printf("2. How many books of the bible are in the new testament?\n");
    scanf("%i", &q2);
    printf("3. What is capital of portugal?\n");
    scanf("%s", q3);
    printf("4. Who was regarded as the meekest man on earth by God?\n");
    scanf("%s", q4);
    printf("5. Which of the apostles was a medical doctor?\n");
    scanf("%s", q5);

    student1.score = 0;
    if (strcmp(q1, "Abuja") == 0 || strcmp(q1, "abuja") == 0 || strcmp(q1, "ABUJA") == 0)
        student1.score += 1;
    else
        printf("you got question 1 incorrect\n");
    if (q2 == 29)
        student1.score += 1;
    else
        printf("you got question 2 incorrect\n");
    if (strcmp(q3, "Lisbon") == 0 || strcmp(q3, "lisbon") == 0 || strcmp(q3, "LISBON") == 0)
        student1.score += 1;
    else
        printf("you got question 3 incorrect\n");
    if (strcmp(q4, "Moses") == 0 || strcmp(q4, "moses") == 0 || strcmp(q4, "MOSES") == 0)
        student1.score += 1;
    else
        printf("you got question 4 incorrect\n");
    if (strcmp(q5, "Luke") == 0 || strcmp(q5, "luke") == 0 || strcmp(q1, "LUKE") == 0)
        student1.score += 1;
    else
        printf("you got question 5 incorrect\n");
    if (student1.score >= 4)
        printf("Excellent result %s, keep it up\n", student1.username);
    else if(student1.score == 3)
        printf("A fair result %s, do better next time\n", student1.username);
    else if(student1.score < 3)
        printf("A poor performance %s, do better next time\n", student1.username);

    return(0);
}