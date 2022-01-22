#include<stdio.h>
int r,c,l;
int t[10][10];
int T[10][10];
int ar[10][10];
void main()
{
    printf("Enter row and column of matrix\n");
    scanf("%d %d",&r,&c);
    ar[r][c];
    printf("Enter elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&l);
            ar[i][j]=l;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",ar[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            t[i][j]=1;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
               T[j][i]=ar[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",T[i][j]);
        }
        printf("\n");
    }
}   