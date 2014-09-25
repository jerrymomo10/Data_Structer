#include "Queue.h"
Queue::Queue(int MaxQueueSize)
{
    front=0;
    rear=0;
    MaxSize=MaxQueueSize+1;
    queue=new int[MaxSize];
}
bool Queue::First(int& x)const
{
    if(rear==front)//empty
    {
        return false;
    }
    return queue[(front+1)%MaxSize];
}
bool Queue::Last(int& x)const
{
    if(rear==front)return false;
    return queue[rear];
}
Queue& Queue::Add(const int& x)
{
    if(!IsFull())
    {
        rear=(rear+1)%MaxSize;
        queue[rear]=x;
    }
    return *this;
}
Queue& Queue::Delete(int& x)
{
    if(!IsEmpty())
    {
        front=(front+1)%MaxSize;
        x=queue[front];
    }
    return *this;
}
void Queue::Output(ostream& out)const
{
    if(!IsEmpty())
    {
        int j=(rear+1)%MaxSize;
        int i=(front+1)%MaxSize;
        for(;i!=j;i=(i+1)%MaxSize)
        {
            out<<queue[i]<<" ";
        }
    }
}
