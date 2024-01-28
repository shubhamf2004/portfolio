#include<stdio.h>
void main()
{
    int day;
    clrscr();
    printf("Entdr the number 1 to 7");
    scanf(" %d",&day);
    switch(day)
    {
        case 1:printf("monday");
        break;

        case 2:printf("tuesday");
        break;

        case 3:printf("satarday");
        break;

        default:
        printf("please check internet");
    }
getch();
}