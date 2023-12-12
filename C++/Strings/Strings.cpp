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
void removeVowels(string s)
{
    string ans = "";

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            // continue;
            s.replace(i, 1, "");
            i -= 1;
        }
        // else
        // {
        //     ans.push_back(s[i]);
        // }
    }
    cout << s << endl;
}
void suffleStr(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        swap(s[i], s[rand() % s.length()]);
    }
    cout << s << endl;
}
void toLowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]) && isupper(s[i]))
        {
            s[i] = (s[i] + 32);
        }
    }
    cout << s << endl;
}
bool validParentheses(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            if (!st.empty() && s[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
            if (!st.empty() && s[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
        }
    }
    return st.empty();
}
void longestCommonPrefix(string arr[], int n)
{
    string res = arr[0];
    int len = res.length();
    for (int i = 0; i < n; i++)
    {

        while (arr[i].find(res) != 0)
        {
            res = res.substr(0, len - 1);
            len--;

            if (res.empty())
            {
                cout << "NONEd";
            }
        }
    }
    cout << res << endl;
}
bool isPalandrome(string s)
{
    string s1 = s;
    for (int i = 0; i < s.length() / 2; i++)
    {
        char temp = s[i];
        s[i] = s[s.length() - i - 1];
        s[s.length() - i - 1] = temp;
    }
    return s1 == s;
}
void longestPalindromicSubstring(string s)
{
    int max = 0;
    int n = s.length();
    string str = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; i + j <= n; j++)
        {
            string str1 = s.substr(i, j);
            if (isPalandrome(str1))
            {
                int len = str1.length();
                if (len > max)
                {
                    max = len;
                    str = str1;
                }
            }
        }
    }
    cout << str << endl;
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
    removeVowels("welcome to geeksforgeeks");
    suffleStr("MEDIUM");
    toLowerCase("Kisho1re");
    cout << validParentheses("{()}[]") << endl;
    string arr[] = {"apple", "ape", "april"};
    longestCommonPrefix(arr, 3);
    longestPalindromicSubstring("babad");
}
//
//