#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str)
{
    int i = 0;
    int j = str.size() - 1;
    while (i <= j)
    {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i++;
        j--;
    }
}
void duplicateChar(string s)
{
    int n = s.length();
    int flag = 0;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%c\n", s[i]);
        }
    }
}
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;
    unordered_map<char, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        mp[t[i]]--;
    }

    for (auto m : mp)
    {
        if (m.second != 0)
        {
            return false;
        }
    }
    return true;
}
void permutation(string s, int l, int r)
{
    if (l == r)
    {
        cout << s << endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permutation(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}
int main()
{
    string s = "Kishore";
    reverseString(s);
    cout << s << endl;
    duplicateChar("Javav");
    cout << isAnagram("AMMA", "MAMA") << endl;
    string s1 = "ABC";
    permutation(s1, 0, s1.length() - 1);
}
//
//