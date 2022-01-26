#include<stdio.h>
#include<conio.h>

int main()

{

    int n,m;


    printf("Enter the number of rows:");


    scanf("%d",&n);


    m=n;


    for(int i=n; i>0; i--)

    {


        for(int j=1; j<=m+1; j++)

        {


            printf(" ");



        }

        for(int p=1; p<=2*i-1; p++)

        {


            printf("*");


        }
        printf("\n");
        m++;
        
    }
    getch();
 }


