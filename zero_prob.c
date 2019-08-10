#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r=1,c=1,n;
    printf("entry");
    scanf("%d",&n);
    int arr[n][n];
    //int *arr=(int *)malloc(n*n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
          
        }
    }//for inserction of array
    for(int i=0;i<n;i++)
    {
        if(arr[0][i]==0)
        {
            r=0;
            break;
            //if below  mention code id executef then break statement will be removed
        }
     /*
        if(arr[i][0]==0)
        {
            c=0;
        }
    */ 
    }//for finding r
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==0)
        {
            c=0;
            break;
        }
    }//for finding c
    for (int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                arr[0][j]=0;
                arr[i][0]=0;
            }
        }
    }//making outer zeroes
    for(int j=1;j<n;j++)
    {
        if(arr[0][j]==0)
        {
            for(int i=1;i<n;i++)
            {
                arr[i][j]=0;
            }
        }
    }//for making vertical inner values zero
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==0)
        {
            for(int j=1;j<n;j++)
            {
                arr[i][j]=0;
            }
        }
    }//horizontal values zero
    if(r==0)
    {
        for(int i=0;i<n;i++)
        {
            arr[0][i]=0;
        }
    }//finat step.1
    if(c==0)
    {
        for(int i=0;i<n;i++)
        {
            arr[i][0]=0;
        }
    }//final step.2
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }//printing array
}




















