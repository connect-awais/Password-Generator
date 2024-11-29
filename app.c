#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void main()
{
    int lenght;
    char charset[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[100];

    srand(time(0));

    printf("Welcome to the random password generator!");
    printf("\n\nEnter the length of password:");
    scanf("%d",&lenght);

    for(int i = 0; i < lenght; i++)
    {
        password[i]=charset[rand() % (sizeof(charset) -1)];
    }

    password[lenght]='\0';

    printf("Generated password = %s",password);

    getch();
}