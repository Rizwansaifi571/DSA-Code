#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *child;
    Node() : data(0), next(nullptr), child(nullptr) {}
    Node(int x) : data(x), next(nullptr), child(nullptr) {}
    Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
};


Node *merge(Node *a, Node *b) {
    if (!a)
        return b;
    if (!b)
        return a;

    Node *dummy = new Node(-1);
    Node *temp = dummy;

    while (a && b)
    {
        if (a->data < b->data)
        {
            temp->child = a;
            a = a->child;
        }
        else
        {
            temp->child = b;
            b = b->child;
        }
        temp = temp->child;
    }

    if (a)
        temp->child = a;
    else
        temp->child = b;

    Node *result = dummy->child;
    delete dummy;
    return result;
}

Node *flattenLinkedList(Node *head)
{
    if (!head || !head->next)
        return head;

    head->next = flattenLinkedList(head->next);
    head = merge(head, head->next);
    head->next = NULL;

    return head;
}
