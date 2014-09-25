#ifndef _QUEUE_H_
#define _QUEUE_H_
class Queue{
    public:
    Queue(int MaxQueueSize=10);
    ~Queue(){delete []queue;}
    bool IsEmpty()const{return front==rear;}
    bool IsFull()const{return front==(rear+1)%MaxSize;}
    int First()const;
    int Last()const;
    Queue& Add(const int& x);
    Queue& Delete(int& x);
    private:
    int front;
    int rear;
    int MaxSize;
    int* queue;
};
#endif
