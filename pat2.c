#include<stdio.h>
void main()
{
    int a[50],n,p,i,j,k=0,b[50],max,c[50][50];
    printf("enter no you want");
    scanf("%d",&n);
    printf("enter arraey");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    max=0;
    for(i=1; i<=n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    i=1;
    while(i<=n)
    {
        b[i]=max-a[i];
        i++;

    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=a[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=max; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(b[j]>0)
            {
                c[i][j]=" ";

            }
            else
            {
                c[i][j]="*";
            }
            b[j]=b[j]-1;
            printf(c[i][j]);
        }
        printf("\n");
    }

}

