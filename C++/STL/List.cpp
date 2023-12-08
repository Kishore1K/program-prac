#include <bits/stdc++.h>
using namespace std;
void printList(list<int> li)
{
    for (auto it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_front(30);
    li.push_front(40);
    li.push_front(50);
    cout << "The elements in the list are: ";
    printList(li);
    cout << "Reversing the list: ";
    li.reverse();
    printList(li);
    cout << "Sorting the list: ";
    li.sort();
    printList(li);
    cout << "The size of the list is: " << li.size() << endl;
    cout << "The first element in the list: " << li.front() << endl;
    cout << "Deleting the first element" << endl;
    li.pop_front();
    printList(li);
    cout << "The last element of the list: " << li.back() << endl;
    cout << "Deleting the last element" << endl;
    li.pop_back();
    printList(li);
    list<int> l1(li);
    l1.push_front(100);
    printList(l1);
    return 0;
}