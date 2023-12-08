#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // vector<char> v1;
    // vector<string> v2;

    // v.push_back(1);
    // v.emplace_back(2);
    // v1.push_back('K');
    // v1.emplace_back('I');
    // v2.push_back("Kishore");
    // v2.emplace_back("K");

    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << endl;

    // auto it1 = v1.end();
    // it1--;
    // cout << *(it1) << endl;
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    cout << "The Elements in vector is" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();
    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;
    if (v.empty())
        cout << "\nvector is empty";
    else
        cout << "\nvector is not empty" << endl;

    // coping vector to other
    vector<int> v1(v);

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size() << endl;

    cout << "After Coping" << endl;
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}