#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    string target = "hello";
    ll j = 0; bool ok = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == target[j]){
            j++;
        }
        if(j == target.size()){
            ok = true; break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
    return 0;
}
