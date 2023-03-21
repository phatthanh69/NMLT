#include "iostream"
#define MAX 100
using namespace std;

class Stack
{
private:
    int Data[MAX];
    int nTop;

public:
    Stack()
    {
        nTop = 0;
    }
    bool IsEmpty()
    {
        return (nTop == 0);
    }
    int Size()
    {
        return nTop;
    }
    void push(int _data)
    {
        nTop++;
        Data[nTop] = _data;
    }
    int pop()
    {
        nTop--;
        return Data[nTop];
    }
    int top()
    {
        return Data[nTop - 1];
    }
};

int main()
{
}