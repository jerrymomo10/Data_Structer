#include "Chain.h"
#include <iostream>
using namespace std;
int main()
{
    Chain *l=new Chain;
    l->Insert(0,9).Insert(0,8).Insert(0,7).Insert(0,6).Insert(0,5);
    if(l->IsEmpty())return 0;
    int m;
    l->Output(cout);
    cout<<endl;
    l->Find(2,m);
    cout<<"The 2th element is: "<<m<<endl;
    cout<<"The length of the chain is: "<<l->Length()<<endl;
    cout<<"The location of 7 is: "<<l->Search(7)<<endl;
    l->Delete(3,m);
    cout<<"The del element is: "<<m<<endl;
    cout<<"The chain after del is: "<<endl;
    l->Output(cout);

}
