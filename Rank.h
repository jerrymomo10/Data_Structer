#ifndef _Rank_cc_
#define _Rank_cc_
#include <iostream>
#define Left(a) (((a)<<1)+1)
#define Right(a) (((a)<<1)+2)
void SelectSort(int* l,int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(l[min]>l[j])min=j;
        }
        temp=l[i];
        l[i]=l[min];
        l[min]=temp;
    }
}
void BubSort(int* l,int n)
{
    int temp;
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(l[j]>l[j+1])
            {
                temp=l[j];
                l[j]=l[j+1];
                l[j+1]=temp;
            }
        }
    }
}
void InsertSort(int* l,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=l[i];
        int j=i-1;
        while(j>=0&&l[j]>temp)
        {
            l[j+1]=l[j];
            j--;
        }
        l[j+1]=temp;
    }
}
void BinaryInsertSort(int* l,int n)
{
    int temp,left,right,mid,j;
    for(int i=1;i<n;i++)
    {
        temp=l[i];
        left=0;right=i-1;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            if(l[mid]>temp) right=mid-1;
            else left=mid+1;
        }
        for(j=i;j>left;j--)
        {
            l[j]=l[j-1];
        }
        l[left]=temp;
    }
}
void ShellSort(int* l,int n)
{
    int gap,temp;
    for(gap=n/2;gap>0;gap=gap/2)//增量缩小每次变为一半
    {
        for(int i=0;i<gap;i++)//对每一个分组进行插入排序
        {
            for(int j=i+gap;j<n;j+=gap)
            {
                temp=l[j];
                int m=j-gap;
                while(l[m]>temp&&m>=0){l[m+gap]=l[m];m-=gap;}
                l[m+gap]=temp;
            }
        }
    }
}
//TIME:lg(n)
void adjustheap(int* arr,const int len,const int pos)
{
    if(!arr||len<0||pos>len||pos<0)
    {
        return;
    }
    int temp=0;
    int largest=pos;
    int left=Left(pos);
    int right=Right(pos);
    if(left<len&&arr[left]>arr[pos])
    {
        largest=left;
    }
    if(right<len&&arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=pos)
    {
        temp=arr[pos];
        arr[pos]=arr[largest];
        arr[largest]=temp;
        adjustheap(arr,len,largest);
    }
}
//TIME: O(n)
void buildheap(int *arr,int n)
{
    if(!arr||n<0)return;
    int pos=(n-1)/2-1;
    for(;pos>=0;pos--)
    {
        adjustheap(arr,n,pos);
    }

}
void heapsort(int* arr,int n)
{
    if(!arr||n<0)return;
    int temp;
    buildheap(arr,n);
    for(int i=0;i<n;i++)
    {
        temp=arr[0];
        arr[0]=arr[n-i-1];
        arr[n-i-1]=arr[0];
        adjustheap(arr,n-i-1,0);
          for(int i=0;i<(int)(sizeof(arr)/sizeof(int));i++)
    {
        std::cout<<arr[i]<<'\t';
    }
    std::cout<<endl;
    }
}
#endif
