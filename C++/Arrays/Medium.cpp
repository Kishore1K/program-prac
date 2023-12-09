#include <bits/stdc++.h>
using namespace std;

pair<int, int> twoSum(int arr[], int n, int target)
{
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == target)
    //         {
    //             return {i, j};
    //         }
    //     }
    // }
    // return {-1, -1};
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num;
        if (m.find(moreNeeded) != m.end())
        {
            return {m[moreNeeded], i};
        }
        m[num] = i;
    }
    return {-1, -1};
}
int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    pair<int, int> id = twoSum(arr, 5, 14);
    cout << id.first << " " << id.second << endl;
    return 0;
}