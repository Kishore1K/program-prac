#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int d)
    {
        data = d;
        next = NULL;
    }
};

class Solution
{
public:
    // Iterative
    ListNode *reverseLL(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *next = NULL, *prev = NULL, *curr = head;

        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Middle of LL
    ListNode *middleLL(ListNode *head)
    {
        ListNode *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    void deleteNodeLL(ListNode *head, int key)
    {
        ListNode *temp = head, *prev;

        while (temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
    }

    ListNode *mergeLL(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
            return l2;
        if (l2 == NULL)
            return l1;

        ListNode *dummy = new ListNode(INT_MIN);
        ListNode *temp = dummy;

        // Traverse
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->data < l2->data)
            {
                ListNode *newNode = new ListNode(l1->data);
                dummy->next = newNode;
                l1 = l1->next;
            }
            else
            {
                ListNode *newNode = new ListNode(l2->data);
                dummy->next = newNode;
                l2 = l2->next;
            }
            dummy = dummy->next;
        }
        if (l1 != NULL)
            dummy->next = l1;
        if (l2 != NULL)
            dummy->next = l2;

        return dummy->next;
    }
};