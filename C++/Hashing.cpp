#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    int maxFreq = 0, minFreq = n;
    int maxElem = 0, minElem = 0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        if (count > maxFreq)
        {
            maxElem = arr[i];
            maxFreq = count;
        }
        if (count < minFreq)
        {
            minElem = arr[i];
            minFreq = count;
        }
        cout << "The highest frequency element is: " << maxElem << "\n";
        cout << "The lowest frequency element is: " << minElem << "\n";
        cout << arr[i] << " " << count << endl;
    }
}
int main()
{

    int arr[] = {1, 2, 3, 1, 5, 4, 3, 2, 1};
    string s = "abacdejiabcd";
    int n = sizeof(arr) / sizeof(arr[0]);
    int hash[25] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        // hash[arr[i]]++;
        hash[s[i] - 'a']++;
    }
    cout << hash['b' - 'a'] << endl;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
    countFreq(arr, n);

    return 0;
}