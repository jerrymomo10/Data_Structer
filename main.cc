#include "Rank.h"
#include <iostream>
using namespace std;
int main()
{
    int l[]={1,2,3,4,5,6,7,8,9};
    //buildheap(l,9);
    heapsort(l,9);
    for(int i=0;i<(int)(sizeof(l)/sizeof(int));i++)
    {
        cout<<l[i]<<'\t';
    }
}
