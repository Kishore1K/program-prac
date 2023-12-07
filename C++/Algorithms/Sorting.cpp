#include <bits/stdc++.h>
using namespace std;
class Sorting
{
public:
    void bubbleSort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            bool flag = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
    } /*Bubble Sort*/
    void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    } /*Insertion Sort*/
    void selectionSort(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    min = j;
                }
            }
            if (min != i)
            {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
        }
    }
    void merge(int arr[], int low, int mid, int high)
    {
        int left = low;
        int right = mid + 1;
        int temp[high - low + 1];
        int i = 0;
        while (left <= mid && right <= high)
        {
            if (arr[left] <= arr[right])
            {
                temp[i] = arr[left];
                left++;
            }
            else
            {
                temp[i] = arr[right];
                right++;
            }
            i++;
        }
        while (left <= mid)
        {
            temp[i] = arr[left];
            left++;
            i++;
        }
        while (right <= high)
        {
            temp[i] = arr[right];
            right++;
            i++;
        }

        int count = low;
        for (int i = 0; i < high - low + 1; i++)
        {
            arr[count] = temp[i];
            count++;
        }
    }
    void mergeSort(int arr[], int low, int high)
    {
        if (low >= high)
            return;
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    } /*Merge Sort*/
    void printArray(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
};
int main()
{
    Sorting sol;
    int arr[] = {4, 8, 7, 3, 6, 9, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting" << endl;
    sol.printArray(arr, n);
    cout << "After Sorting" << endl;
    sol.mergeSort(arr, 0, n);
    sol.printArray(arr, n);
}