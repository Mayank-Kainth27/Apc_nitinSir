#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max=0,sum=0,result=0;
    int l[3]={2,1,3};
    int r[3]={5,3,9};
    for (int i=0;i<3;i++)
    {
        if(r[i]>max)
        {
            max=r[i];
        }
    }
    int arr[max+2]={0};
    for(int i=0;i<3;i++)
    {
        arr[l[i]]++;
        arr[r[i]]--;
    }
    for(int i=0;i<max;i++)
    {
        if(arr[i+1]+sum>result)
    

