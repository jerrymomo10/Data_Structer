#include "Rank.h"
#include <iostream>
using namespace std;
int main()
{
    int l[]={19,18,7,6,5,4,3,2,1};
    heapsort(l,9);
    for(int i=0;i<(int)(sizeof(l)/sizeof(int));i++)
    {
        cout<<l[i]<<'\t';
    }
}
