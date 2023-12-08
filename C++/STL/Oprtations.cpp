#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{

    vector<int> vec = {4, 2, 1};

    sort(vec.begin(), vec.end());

    cout << vec[0] << " " << vec[1] << " " << vec[2];

    int arr[] = {1, 2, 3};

    sort(arr, arr + 3, greater<int>());

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    vector<pair<int, int>> vec1 = {{10, 3}, {20, 1}, {30, 2}};
    sort(vec1.begin(), vec1.end(), sortbysec);

    for (int i = 0; i < 3; i++)
    {
        cout << vec1[i].first << " " << vec1[i].second << "\n";
    }
    return 0;
}