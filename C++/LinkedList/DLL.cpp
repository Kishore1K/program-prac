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
        newNode->next = newNode->prev = NULL;
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

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newNode->next = NULL;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}
DLL *insertAtPos(int data, int pos, DLL *head)
{
    DLL *temp = head;
    int count = 0;
    DLL *newNode = new DLL(data);
    while (temp != NULL)
    {
        count++;
        if (count == pos)
        {
            break;
        }
        temp = temp->next;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    return head;
}
DLL *deleteAtFirst(DLL *head)
{
    DLL *temp = head;
    head = temp->next;
    temp->next->prev = NULL;
    delete temp;
    return head;
}
DLL *deleteAtEnd(DLL *head)
{
    DLL *temp = head;
    DLL *prev;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next->prev = NULL;
    prev->next = NULL;
    delete temp;
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

void printDLLReverse(DLL *head)
{
    DLL *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << temp->val << " ";
    while (temp->prev != NULL)
    {
        temp = temp->prev;
        cout << temp->val << " ";
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
    head = insertAtPos(100, 3, head);
    printDLL(head);
    printDLLReverse(head);
    head = deleteAtEnd(head);
    printDLL(head);
    printDLLReverse(head);
}