//pattern generation
#include<stdio.h>
#include<stdlib.h>

int **matrix();

int main()
{
    int **p;
    int i,j,k;
    int mat[10][5];
    p=matrix();
    printf("\t.......10x5 matrix generated......\n\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            mat[i][j]=p[i][j];
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
printf("\t ......Pattern Generated ......\t\n");
    for(i=0;i<10;i++)
    {
        if(mat[i][0]==(i+1)&&mat[i][0]<=5)
        {
            for(j=0;j<=i;j++)
                printf("*\t");

            printf("\n");
        }
        else
        {
            for(k=j;k>0;k--)
            {
                printf("*\t");
            }
            j=j-1;
            printf("\n");
        }
        printf("\n");
    }
    printf("\n .........END...........\n");
    return 0;
}

int **matrix()
{
    int **ptr;
    int i,j;
    ptr=malloc(10*sizeof(int));
    for(i=0;i<10;i++)
    {
        ptr[i]=malloc(5*sizeof(int));

    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
            ptr[i][j]=i+1;
    }
    return ptr;
}
