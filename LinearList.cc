#include "LinearList.h"
LinearList::LinearList(int MaxListsize)
{
    MaxSize=MaxListsize;
    element=new int[MaxSize];
    length=0;
}
bool LinearList::Find(int k,int& x)const
{
    if(k<1||k>length)return false;
    x=*(element+k-1);
    return true;
}

int LinearList::Search(const int& x)const
{
    for(int i=0;i<length;i++)
    {
        if(x==element[i])return i+1;
    }
    return 0;
}
LinearList& LinearList::Delete(int k,int& x)
{
    if(Find(k,x))
    {
        for(int i=k;i<length;i++)
            {element[i-1]=element[i];}
        length--;
    }
    return *this;
}
LinearList& LinearList::Insert(int k,const int& x)
{
    if(k<0||k>length)return *this;
    if(length==MaxSize)return *this;
    for(int i=length-1;i>=k;i--)
    {
        element[i+1]=element[i];
    }
    element[k]=x;
    length++;
    return *this;
}
void LinearList::Output(ostream& out)const
{
    for(int i=0;i<length;i++)
    {
        out<<element[i];
    }
}

