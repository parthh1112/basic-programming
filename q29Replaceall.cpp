#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vvb vector<vector<bool>>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define umii unordered_map<int,int>
#define umci unordered_map<char,int>
#define umsi unordered_map<string,int>
#define usi unordered_set<int>
#define usc unordered_set<char>
#define uss unordered_set<string>
#define pb push_back

void replacepi(string &s,int i,string &ans){
    if(i >= s.size() - 1){
        return ;
    }
    if(s[i] == 'p' && s[i+1] == 'i'){
        ans += "3.14";
        i++;
    }
    else
    ans += s[i];
    i++;
    replacepi(s,i,ans);
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        s.pb('.');
        string ans = "";
        replacepi(s,0,ans);
        cout<<ans<<endl;
    }
return 0;
}