#include<stdio.h>

void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;

    printf("\n Enter Value for Matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Enter Value [%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     printf("\n Enter Value for Matrix B\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("\n Enter Value [%d][%d] : ",i,j);
             scanf("%d",&b[i][j]);
         }
     }
     //logic
     printf("\n Matrix A\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%5d",a[i][j]);
         }
         printf("\n");
    }
    printf("\n Matrix c\n");
    for(i=0;i<3;i++)
    {
        for (j = 0; j <3; j++)
            printf("%5d", c[i][j]);
        }
        printf("\n");
        {

    }

}





