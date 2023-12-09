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
void sortArray(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
void majorityElement(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto x : mp)
    {
        if (x.second > (n / 2))
        {
            cout << x.first << endl;
        }
    }
}
void maxSubarraySum(int arr[], int n)
{
    int sum = 0, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxi << endl;
}
void maxProfit(int arr[], int n)
{
    int maxProfit = 0;
    int minPrice = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     minPrice = min(minPrice, arr[i]);
    //     maxProfit = max(maxProfit, arr[i] - minPrice);
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                maxProfit = max(arr[j] - arr[i], maxProfit);
            }
        }
    }
    cout << maxProfit << endl;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 6, 5, 8, 11};
    pair<int, int> id = twoSum(arr, 5, 14);
    cout << id.first << " " << id.second << endl;
    int arr1[] = {0, 2, 1, 2, 0, 1};
    sortArray(arr1, 6);
    printArray(arr1, 6);
    int arr2[] = {2, 2, 1, 1, 1, 2, 2};
    majorityElement(arr2, 7);
    int arr3[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubarraySum(arr3, sizeof(arr3) / sizeof(arr3[0]));
    int arr4[] = {7, 1, 5, 3, 6, 4};
    maxProfit(arr4, sizeof(arr4) / sizeof(arr4[0]));
    return 0;
}