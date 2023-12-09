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
int main()
{
    int arr[] = {2, 5, 1, 3, 0, -30, 1, 4, 2, 1, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // largestAndSmallElem(arr, n);
    // secondLargestAndSmallest(arr, n);
    // sort(arr + 0, arr + n);
    // cout << isArraySorted(arr, n) << endl;
    // int k = removeDuplicate(arr, n);
    // printArray(arr, k);
    int arr1[] = {1, 2, 3, 4, 5};
    // printArray(arr1, 5);
    // rotateRightArray(arr1, 5, 2);
    // printArray(arr1, 5);
    // printArray(arr, n);
    // moveZerosEnd(arr, n);
    // printArray(arr, n);
    cout << "Linear Search" << linearSearch(arr1, 5, 3) << endl;
    return 0;
}