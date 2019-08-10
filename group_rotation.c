#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    scanf("%d ",&n);
    scanf("%d ",&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i+=k)
    {
        if(n-i>=k)
        {
            for(int j=0;j<k/2;j++)
            {
                int temp=arr[i+j];
                arr[i+j]=arr[i+k-j-1];
                arr[i+k-j-1]=temp;
            }
        }
        else
        {
            for(int j=0;j<(n-i)/2;j++)
            {
                int temp=arr[i+j];
                arr[i+j]=arr[i+(n%k)-1-j];
                arr[i+(n%k)-1-j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

