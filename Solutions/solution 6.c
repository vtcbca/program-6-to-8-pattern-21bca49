#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a;
    clrscr();
    printf("\n Enter the Number of rows:");
    scanf("%d",&a);
    for(i=0; i<a; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
}