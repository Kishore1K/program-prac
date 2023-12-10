#include <bits/stdc++.h>
using namespace std;

void frequencySort(string s)
{
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto i : mp)
    {
        pq.push({i.second, i.first});
    }
    string res = "";
    while (!pq.empty())
    {
        int count = pq.top().first;
        int ch = pq.top().second;
        while (count--)
            res.push_back(ch);
        pq.pop();
    }
    cout << res << endl;
}
void maxDepth(string s)
{
    int n = 0, max = INT_MIN;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            n++;
            if (n > max)
            {
                max = n;
            }
        }
        else if (s[i] == ')')
        {
            n--;
        }
    }
    // if(max>0)
    cout << max << endl;
    // return 0
}
void romanToInt(string s)
{
    int ans = 0;
    unordered_map<char, int> u_map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    for (int i = 0; i < s.size(); i++)
    {
        if (u_map[s[i]] < u_map[s[i + 1]])
        {
            ans -= u_map[s[i]];
        }
        else
        {
            ans += u_map[s[i]];
        }
    }
    cout << "Value of  " << s << " = " << ans << endl;
}
int atoiImpl(string s)
{
    int i = 0;
    int sign = 1;
    int num = 0;
    while (s[i] == ' ')
        i++;

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        sign = 1;
        i++;
    }
    while (s[i] >= '0' && s[i] <= '9' && i < s.size())
    {
        num = num * 10 + (s[i] - '0');
        if (num * sign >= INT_MAX)
        {
            return INT_MAX;
        }
        else if (num * sign <= INT_MIN)
        {
            return sign * INT_MIN;
        }
        i++;
    }
    return num * sign;
}
int main()
{
    string s = "Aabb";
    frequencySort(s);
    string s1 = "(1) + ((2)) + (((3)))";
    maxDepth(s1);
    romanToInt("MCMXCIV");
    cout << atoiImpl("42") << endl;
    return 0;
}