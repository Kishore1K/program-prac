#include <bits/stdc++.h>
using namespace std;

// Reverse words in a given string
string reverseWord(string s)
{
    string ans = "";
    string temp = "";
    int i = 0;
    while (i < s.length())
    {
        char ch = s[i];

        if (s[i] != ' ')
        {
            temp += ch;
        }

        if (s[i] == ' ')
        {
            if (ans != "")
            {
                ans = temp + " " + ans;
            }
            else
            {
                ans += temp;
            }
            temp = "";
        }
        i++;
    }
    if (temp != "")
    {
        if (ans != "")
        {
            ans = temp + " " + ans;
        }
        else
        {
            ans += temp;
        }
        temp = "";
    }
    return ans;
}
string longestCommonPrefix(string arr[], int n)
{
    string res = arr[0];
    int len = res.length();

    for (int i = 1; i < n; i++)
    {
        while (arr[i].find(res) != 0)
        {
            res = res.substr(0, len - 1);
            len--;
            if (res.empty())
            {
                return "-1";
            }
        }
    }
    return res;
}
int romanToInt(string s)
{
    unordered_map<char, int> mp = {{'I', 1}, {'V', 5}, {'X', 10}, {'C', 100}, {'L', 50}, {'M', 1000}, {'D', 500}};
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] < mp[s[i + 1]])
        {
            ans -= mp[s[i]];
        }
        else
        {
            ans += mp[s[i]];
        }
    }
    return ans;
}
string int2Roman(int num)
{
    // string ans;
    // map<int, char> mp = {{1, 'I'}, {5, 'V'}, {10, 'X'}, {100, 'C'}, {50, 'L'}, {1000, 'M'}, {500, 'D'}};
    string ans = "";
    // calculate the roman numbers
    while (num)
    {
        if (num >= 1000)
        {
            ans += "M";
            num -= 1000;
        }
        // check for all the corner cases like 900,400,90,40,9,4 etc.
        else if (num >= 900 && num < 1000)
        {
            ans += "CM";
            num -= 900;
        }
        else if (num >= 500 && num < 900)
        {
            ans += "D";
            num -= 500;
        }
        else if (num >= 400 && num < 500)
        {
            ans += "CD";
            num -= 400;
        }
        else if (num >= 100 && num < 400)
        {
            ans += "C";
            num -= 100;
        }
        else if (num >= 90 && num < 100)
        {
            ans += "XC";
            num -= 90;
        }
        else if (num >= 50 && num < 90)
        {
            ans += "L";
            num -= 50;
        }
        else if (num >= 40 && num < 50)
        {
            ans += "XL";
            num -= 40;
        }
        else if (num >= 10 && num < 40)
        {
            ans += "X";
            num -= 10;
        }
        else if (num == 9)
        {
            ans += "IX";
            num -= 9;
        }
        else if (num >= 5 && num < 9)
        {
            ans += "V";
            num -= 5;
        }
        else if (num == 4)
        {
            ans += "IV";
            num -= 4;
        }
        else if (num < 4)
        {
            ans += "I";
            num--;
        }
    }
    return ans;
}
bool isIsomorphic(string s1, string t1)
{
    if (t1.length() != s1.size())
        return false;
    map<char, char> m1, m2;

    for (int i = 0; i < s1.size(); i++)
    {
        if (m1[s1[i]] && m1[s1[i]] != t1[i])
            return false;
        if (m2[t1[i]] && m2[t1[i]] != s1[i])
            return false;
        m1[s1[i]] = t1[i];
        m2[t1[i]] = s1[i];
    }
    return false;
}
bool isAnagram(string s, string t)
{

    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}
bool isPanagram(string s)
{
    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            freq[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
            return false;
    }
    return true;
}
bool isRotated(string s, string t)
{
    if (s.length() != t.length())
        return false;

    string clk = "";
    string aclk = "";
    int len = t.length();

    aclk += t.substr(len - 2, 2) + t.substr(0, len - 2);
    clk += t.substr(2) + t.substr(0, 2);

    return s.compare(clk) == 0 || s.compare(aclk) == 0;
}
int main()
{
    cout << reverseWord("Hello Kishore How are You") << endl;
    string input[] = {"Kishore", "King", "Kishan", "iKiei"};
    int n = sizeof(input) / sizeof(input[0]);
    cout << "The longest Common Prefix is : "
         << longestCommonPrefix(input, n) << endl;
    cout << romanToInt("CM") << endl;
    cout << int2Roman(900);
}