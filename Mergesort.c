#include<stdio.h>
void merge(int a[],int left,int middle,int right)
{
    int i,j,k;
    int n1=middle-left+1;
    int n2=right-middle;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=a[left+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=a[middle+1+j];
    }
    i=0;j=0;k=left;
    while(i<n1&&j<n2)
    {
    if(L[i]<=R[j])
    {
        a[k]=L[i];
        i++;
    }
    else
    {
        a[k]=R[j];
        j++;
    }
    k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        k++;
        j++;
    }
}
void mergesort(int a[],int left,int right)
{
if(left<right)
{
int middle=(left+right)/2;
mergesort(a,left,middle);
mergesort(a,middle+1,right);
merge(a,left,middle,right);
}
}
void print(int a[],int b)
{
    for(int j=0;j<b;j++)
        printf("%d\n",a[j]);
}
int main()
{
    printf("\t\t***MERGE SORT***");
    printf("\nEnter Array Size:");
    int n;
    scanf("\n%d",&n);
    int arr[n];
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++)
    scanf("\n%d",&arr[i]);
    printf("Before Sorting:\n");
    print(arr,n);
    mergesort(arr,n-n,n);
    printf("After Sorting:\n");
    print(arr,n);
    return 0;
}
