#include <bits/stdc++.h>
using namespace std;
class DLL
{
public:
    int val;
    DLL *next;
    DLL *prev;
    DLL(int data, DLL *prev, DLL *next)
    {
        val = data;
        this->prev = prev;
        this->next = next;
    }
    DLL(int data)
    {
        val = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

DLL *insertAtFirst(int data, DLL *head)
{
    DLL *newNode = new DLL(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        newNode->prev = NULL;
    }
    head = newNode;
    return head;
}
DLL *insertAtEnd(int data, DLL *head)
{
    DLL *newNode = new DLL(data);
    DLL *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    newNode->next = NULL;
    temp->next->next = newNode;
    newNode->prev = temp;
    return head;
}

void printDLL(DLL *head)
{
    DLL *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    DLL *head = NULL;
    head = insertAtFirst(10, head);
    head = insertAtFirst(20, head);
    head = insertAtFirst(30, head);
    head = insertAtFirst(40, head);
    head = insertAtFirst(50, head);
    head = insertAtEnd(60, head);
    printDLL(head);
}