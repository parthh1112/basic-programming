#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int, int>
#define umci unordered_map<char, int>
#define umsi unordered_map<string, int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define pb push_back

int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (i < s.size())
    {
        if (s[i] >= 65 && s[i] <= 91)
        {
            cout << endl;
        }
        cout << s[i];
        i++;
    }
    cout << endl;
    return 0;
}