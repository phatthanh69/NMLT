#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;
    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};
class SinglyLinkedList
{
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;
    SinglyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }
};
SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    temp->next = llist;
    return temp;
}
SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *p;
    if (head == NULL)
        return temp;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    return head;
}
SinglyLinkedListNode *insertNodeAtASpecificePosition(SinglyLinkedListNode *llist, int position, int data)
{
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *add = llist;
    for (int i = 0; i < position - 1; i++)
    {
        add = add->next;
    }
    SinglyLinkedListNode *target;
}