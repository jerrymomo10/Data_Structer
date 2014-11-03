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
void BubSrot(int* l,int n)
{
   int temp;
   for(int i=n-1;i>0;i--)
   {
	for(int j=0;j<i;j++)
	{
	   if(l[j]>l[j+1])
	    temp=l[j];
	    l[j]=l[j+1];
	    l[j+1]=temp;
	}
   }
}
#endif
