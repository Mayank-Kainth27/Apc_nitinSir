#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max=0,sum=0,result=0,n;
    printf("Enter the number of ranges:");
    scanf("%d\n",&n );
    int *l=(int *)calloc(n,sizeof(int));
    int *r=(int *)calloc(n,sizeof(int));
    printf("Enter all the lower limits:\n");
    for (int i=0;i<n;i++)
    {
      scanf("%d",l+i );
    }
    printf("Enter all the upper limits:\n");
    for (int i=0;i<n;i++)
    {
      scanf("%d",r+i );
    }
    for (int i=0;i<n;i++)
    {
        if(r[i]>max)
        {
            max=r[i];
        }
    }
    int *arr=(int *)calloc(max+2,sizeof(int));
    for(int i=0;i<n;i++)
    {
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    for(int i=1;i<max+2;i++)
    {
        if(arr[i]+sum>result)
        {
          //result=sum+arr[i+1];//this will print the hifghest freqency..
          result=i;//this will print the number that has highest fre....
        }
        sum=sum+arr[i];
    }
    printf("%d",result);
    return 0;
}
