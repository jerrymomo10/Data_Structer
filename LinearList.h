#ifndef _LINEARLIST_H_
#define _LINEARLIST_H_
#include <iostream>
using namespace std;
class LinearList{
    public:
        LinearList(int MaxListSize=10);
        ~LinearList() {delete []element;}
        bool IsEmpty()const {return length==0;}//inline
        int Length()const {return length;}
        bool Find(int k,int& x)const;
        int Search(const int& x)const;
        LinearList& Delete(int k,int& x);
        LinearList& Insert(int k,const int& x);
        void Output(ostream& out)const;
    private:
        int length;
        int MaxSize;
        int* element;
};
#endif
