#include <bits/stdc++.h>
using namespace std;

void largestAndSmallElem(int arr[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;
    cout << "MAX : " << max << " :: "
         << "MIN : " << min << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "MAX : " << max << " :: "
         << "MIN : " << min << endl;
}
void secondLargestAndSmallest(int arr[], int n)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] > smallest)
        {
            secondSmallest = arr[i];
        }
    }
    cout << "Second Largest : " << secondLargest << " :: "
         << "Second Smallest : " << secondSmallest << endl;
}
bool isArraySorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}
int removeDuplicate(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
void rotateLeftArray(int arr[], int n, int k)
{
    int elem;
    for (int i = 0; i < k; i++)
    {
        elem = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = elem;
    }
}
void rotateRightArray(int arr[], int n, int k)
{
    int elem;
    for (int i = 0; i < k; i++)
    {
        elem = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = elem;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(vector<int> &arr, int n)
{
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
void moveZerosEnd(int arr[], int n)
{
    // Two pointerApproach
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return;
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return;
}
int linearSearch(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}
vector<int> unionOfArrays(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    vector<int> Union;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < m)
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < n)
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }

    return Union;
}
void findMissingNum(int arr[], int n)
{
    int sum = n * (n + 1) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        sum -= arr[i];
    }
    cout << sum << " is Missing" << endl;
}
void findMaxConsecutiveOnes(int arr[], int n)
{
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count++;
        else
            count = 0;

        if (count > maxCount)
            maxCount = count;
    }
    cout << "Max ConsecutiveOnes " << maxCount << endl;
}
void getSingleElement(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto i : m)
    {
        if (i.second == 1)
        {
            cout << i.first << endl;
            break;
        }
    }
    return;
}
void getLongestSubArray(int arr[], int n, int k)
{
    int sum, len = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << "The length of the longest subArray is: " << len << endl;
}
int main()
{
    // int arr[] = {2, 5, 1, 3, 0, -30, 1, 4, 2, 1, 0, 3};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // largestAndSmallElem(arr, n);
    // secondLargestAndSmallest(arr, n);
    // sort(arr + 0, arr + n);
    // cout << isArraySorted(arr, n) << endl;
    // int k = removeDuplicate(arr, n);
    // printArray(arr, k);
    // int arr1[] = {1, 2, 3, 4, 5};
    // printArray(arr1, 5);
    // rotateRightArray(arr1, 5, 2);
    // printArray(arr1, 5);
    // printArray(arr, n);
    // moveZerosEnd(arr, n);
    // printArray(arr, n);
    // cout << "Linear Search" << linearSearch(arr1, 5, 3) << endl;
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    printArray(arr1, n);
    printArray(arr2, m);
    vector<int> Union = unionOfArrays(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    printArray(Union, Union.size());
    int arr3[] = {1, 2, 4, 5};
    findMissingNum(arr3, 5);
    int nums[] = {1, 1, 0, 1, 1, 1};
    findMaxConsecutiveOnes(nums, 6);
    int nums1[] = {4, 1, 2, 1, 2};
    getSingleElement(nums1, 5);
    int nums2[] = {2, 3, 5, 1, 9};
    getLongestSubArray(nums2, 5, 10);

    return 0;
}