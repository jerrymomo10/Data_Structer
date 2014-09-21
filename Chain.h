#ifndef _CHAIN_H_
#define _CHAIN_H_
#include <iostream>
class Chain;
class Chain_Node{
    friend class Chain;
    private:
        int data;
        Chain_Node *link;
};
class Chain{
    public:
        Chain(){first=0;}
        ~Chain();
        bool IsEmpty()const{return first==0;}//inline
        int Length()const;
        bool Find(int k,int& x)const;
        int Search(const int& x)const;
        Chain &Delete(int k,int& x);
        Chain &Insert(int k,const int&x);
        void Output(std::ostream& os)const;
    private:
        Chain_Node *first;
};
#endif /*_CHAIN_H_*/
