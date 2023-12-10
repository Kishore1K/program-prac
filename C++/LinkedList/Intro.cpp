#include <bits/stdc++.h>
using namespace std;

class SLL
{
public:
    int val;
    SLL *next;

    SLL(int data)
    {
        val = data;
        next = NULL;
    }
    SLL(int data, SLL *ptr)
    {
        val = data;
        next = ptr;
    }
};
void printLL(SLL *head)
{
    SLL *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
SLL *insertAtFirst(int data, SLL *head)
{
    SLL *newNode = new SLL(data);
    newNode->next = head;
    head = newNode;
    return head;
}
SLL *insertAtEnd(int data, SLL *head)
{
    SLL *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    SLL *newNode = new SLL(data, NULL);
    temp->next = newNode;
    return head;
}
SLL *insertAtPos(int data, int pos, SLL *head)
{
    SLL *temp = head;
    int count = 0;
    SLL *newNode = new SLL(data);
    SLL *prev = NULL;
    while (temp->next != NULL)
    {
        count++;
        if (count == pos)
        {
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
SLL *deleteAtFirst(SLL *head)
{
    SLL *temp = head;
    head = head->next;
    delete temp;
    return head;
}
SLL *deleteAtLast(SLL *head)
{
    SLL *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

int lengthOfLL(SLL *head)
{
    int count = 0;
    SLL *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
bool isElementInLL(SLL *head, int key)
{
    SLL *temp = head;
    while (temp != NULL)
    {
        if (temp->val == key)
            return true;
        temp = temp->next;
    }
    return false;
}
SLL *middleOfLL(SLL *head)
{
    SLL *slow = head, *fast = head;
    while (slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
SLL *reverseLL(SLL *head)
{
    SLL *prev = NULL;
    SLL *curr = head;
    SLL *next = NULL;

    // while (curr)
    // {
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }
    // head = prev;
    /*Recursion*/
    SLL *temp = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}
int main()
{
    SLL *head = NULL;
    head = insertAtFirst(10, head);
    head = insertAtFirst(20, head);
    head = insertAtFirst(30, head);
    head = insertAtFirst(40, head);
    head = insertAtFirst(50, head);
    head = insertAtEnd(100, head);
    head = insertAtPos(150, 3, head);
    printLL(head);
    cout << "Length OF LL is : " << lengthOfLL(head) << endl;
    head = deleteAtFirst(head);
    printLL(head);
    printLL(head);
    head = reverseLL(head);
    printLL(head);
    cout << "Length OF LL is : " << lengthOfLL(head) << endl;
    cout << "ELement Present " << isElementInLL(head, 40) << endl;
}