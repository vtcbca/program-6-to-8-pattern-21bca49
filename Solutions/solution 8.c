
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    printf("\tEnter the Number: ");
    scanf("%d",&d);
    for(c=1; c<=d; c++)
    {
        for(e=d; e>=c; e--)
        {
            printf("  ");
        }
        for(a=c; a>=1; a--)
        {
            printf(" %d",a);
        }
        for(a=2; a<=c; a++)
        {
            printf(" %d",a);
        }
        printf("\n");
    }
    getch();
}