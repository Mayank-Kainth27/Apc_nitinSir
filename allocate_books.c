#include<stdio.h>
int books(int* A, int n1, int B) {
    int sum=0,sum1,i,l=0,mid,r,count=0;
    //int size=sizeof(A);
    if(n1<B)
    {
        return -1;
    }
    for(i=0;i<n1;i++)
    {
        sum+=*(A+i);
    }
    //int *arr=(int*)malloc(sum*sizeof(int));
    r=sum;
    //printf("%d ",sum);
    while(l!=r && l<r)
    {
        mid=(l+r)/2;
        sum1=0;
        count=0;
        for(i=0;i<n1;i++)
        {
            if((sum1+(*(A+i)))<=mid)
            {
                sum1+= *(A+i);
            }
            else
            {
                sum1=0;
                count++;
                i--;
            }
        }
        count++;
        //printf(" .%d. ",count);
        if(count>B)
        {
            l=mid+1;
        }
        else
        {
            r=mid;
        }
        //printf(" .%d. ",mid);
    }
    //printf(" %d",r);
    return l;
}
int main()
{
    int arr[27]={97, 26, 12, 67, 10, 33, 79, 49, 79, 21, 67, 72, 93, 36, 85, 45, 28, 91, 94, 57, 1, 53, 8, 44, 68, 90, 24};
    int n=27;
    int a=26;
    printf("%d",books(arr,n,a));
}

