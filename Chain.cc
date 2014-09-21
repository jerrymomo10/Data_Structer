#include "Chain.h"
Chain::~Chain()
{
    Chain_Node *next=first;
    while(next)
    {
        next=first->link;
        delete first;
        first=next;
    }
}
void Chain::Output(std::ostream& os)const
{
    Chain_Node* temp=first;
    while(temp)
    {
        os<<temp->data<<" ";
        temp=temp->link;
    }
}
int Chain::Length()const
{
    int count=0;
    Chain_Node *temp=first;
    while(temp)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
//it is important
//考虑空表　在头部插入的情况
Chain& Chain::Insert(int k,const int& x)
{
    if(k<0)return *this;
    Chain_Node *temp=first;
    for(int i=1;i<k&&temp;i++)
    {
        temp=temp->link;
    }
    if(!temp&&k!=0)return *this;//两种情况，一种是本来就是空链表，一种是走到了链表的末尾，若是空链表则

    Chain_Node *n=new Chain_Node;
    n->data=x;
    if(k)
    {
        n->link=temp->link;
        temp->link=n;
    }
    else
    {
        n->link=first;
        first=n;
    }
    return *this;
}
bool Chain::Find(int k,int& x)const
{
    if(k<1) return false;
    Chain_Node* temp=first;
    for(int i=1;i<k&&temp;i++)
    {
        temp=temp->link;
    }
    if(!temp) return false;
    x=temp->data;
    return true;
}
int Chain::Search(const int& x)const
{
    Chain_Node* temp=first;
    int count=1;
    while(temp&&x!=temp->data)
    {
        temp=temp->link;
        count++;
    }
    if(!temp)return 0;
    return count;
}
Chain& Chain::Delete(int k,int& x)
{
    if(k<1||!first) return *this;
    Chain_Node* p=first;
    if(k==1)
        first=first->link;
    else{
            Chain_Node* q=first;
            for(int i=1;i<k-1&&q;i++)
            {
                q=q->link;
            }
            if(!q||!q->link)return *this;
            p=q->link;
            q->link=p->link;
        }
     x=p->data;
     delete p;
     return *this;
}
