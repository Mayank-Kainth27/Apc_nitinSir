#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l=0,r=0,cnt=0;
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(r<arr.size)
    {
        if(arr[r]==1)
        {
            r++;
        }
        else if(arr[r]==0 && cnt<n)
        {
            r++;
            cnt++;
        }
        else if(arr[r]==0 && count_zero==n)
        {
            while(arr[l]!=0)
            {
                l++;
            }
            l++;
            cnt--;
        }
    }
}
