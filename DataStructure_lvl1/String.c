/* Consider the following string transformation:
   1. Append the character # to the string. */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    string s; cin>>s;
    vector<int> v;
    vector<int> a[26];
    int n= s.size();
    for(i=0;i<=n;i++) {
        if (s[i] == '#')
            v.push_back(i);
        else
            a[s[i]-'a'].push_back(i);
    }
    for (int i = 0; i < 26; i++) {
        for (auto j: a[i])
            v.push_back(j);
    }
    string ans;
    int j = v[v[0]];
    while(s[j] != '#') {
        ans += s[j];
        j = v[j];
    }
    cout<<ans;
    return 0;
}
