#ifndef _Rank_cc_
#define _Rank_cc_
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
#endif
