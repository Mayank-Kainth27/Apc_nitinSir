#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20]={0};
    int key,i,j;
    scanf("%d", &key);
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int temp=arr[i]+key;
        for(j=i;j<n;j++)
        {
            if(arr[j]==temp)
            {
                cnt=1;
                printf("has");
                break;
            }
        }
    }
    if(!cnt)
    {
        printf("has not");
    }
}
