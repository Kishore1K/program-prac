#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    stack<char> st;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(')');
            count++;
        }
    }
    if (count == st.size())
    {
        return count;
    }
    return -1;
}
string reverseWord(string s)
{
    int left = 0, right = s.size() - 1;
    string temp = "";
    string ans = "";
    while (left <= right)
    {
        char ch = s[left];
        if (ch != ' ')
        {
            temp += ch;
        }
        else if (ch == ' ')
        {
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
            temp = "";
        }
        left++;
    }
    if (temp != "")
    {
        if (ans != "")
            ans = temp + " " + ans;
        else
            ans = temp;
        temp = "";
    }
    return ans;
}
string largestOddNumber(string num)
{
    for (int i = num.length() - 1; i >= 0; i--)
    {
        if ((num[i]) % 2 != 0)
        {
            return num.substr(0, i + 1);
        }
    }
    return "";
}
string longestCommonPrefix(vector<string> &strs)
{
    bool ans = true;
    string s = "";
    int j = 0;
    while (j < strs[0].size())
    {
        char temp = strs[0][j];
        for (int i = 0; i < strs.size(); i++)
        {
            if (temp != strs[i][j])
                ans = false;
        }
        if (ans)
            s += temp;
        j++;
    }
    return s;
}
bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;
    unordered_map<char, char> m1, m2;
    for (int i = 0; i < s.size(); i++)
    {
        if (m1[s[i]] && m1[s[i]] != t[i])
            return false;
        if (m2[t[i]] && m2[t[i]] != s[i])
            return false;
        m1[s[i]] = t[i];
        m2[t[i]] = s[i];
    }
    return true;
}
bool anagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'A']++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[t[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string s = "(3*(4*(5*(6))))";
    cout << maxDepth(s) << endl;
    string s1 = "this is an amazing program";
    cout << "Reverse of String\t" << reverseWord(s1) << endl;
    string num = "52";

    cout << largestOddNumber(num) << endl;
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";
    if (anagram(Str1, Str2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}
