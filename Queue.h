#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <iostream>
using namespace std;
class Queue{
    public:
        Queue(int MaxQueueSize=10);
        ~Queue(){delete []queue;}
        bool IsEmpty()const{return front==rear;}
        bool IsFull()const{return front==(rear+1)%MaxSize;}
        bool First(int& x)const;
        bool Last(int& x)const;
        Queue& Add(const int& x);
        Queue& Delete(int& x);
        void Output(ostream& out)const;
    private:
        int front;
        int rear;
        int MaxSize;
        int* queue;
};
#endif
