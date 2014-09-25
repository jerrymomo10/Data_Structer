#include "LinkedQueue.h"
LinkedQueue::~LinkedQueue()
{
    Node* next=front;
    while(next)
    {
        next=front->link;
        delete front;
        front=next;
    }
}
bool LinkedQueue::IsFull()const
{
    /*Node* x;
    try{
        x=new Node;
        delete x;
        return false;
    }catch(ioexception){return true;}*/
    return true;
}
bool LinkedQueue::First(int& x)const
{
    if(IsEmpty())return false;
    x=front->data;
    return true;
}
bool LinkedQueue::Last(int& x)const
{
    if(IsEmpty())return false;
    x=rear->data;
    return true;
}
LinkedQueue& LinkedQueue::Add(const int& x)
{
    Node* t=new Node;
    t->data=x;
    t->link=0;
    if(front) rear->link=t;
    else front=t;
    rear=t;
    return *this;
}
LinkedQueue& LinkedQueue::Delete(int& x)
{
    if(IsEmpty())return *this;
    x=front->data;
    Node* t=front;
    front=t->link;
    if(!front)rear=front;
    delete t;
    return *this;
}
void LinkedQueue::Output(ostream& out)const
{
    Node* t=front;
    while(t)
    {
        out<<t->data<<" ";
        t=t->link;
    }
}
