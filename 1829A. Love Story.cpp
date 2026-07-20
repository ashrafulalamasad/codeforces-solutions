#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        string target = "codeforces";
        ll diff = 0;
        for(ll i=0; i<10; i++){
            if(s[i] != target[i]) diff++;
        }
        cout << diff << endl;
    }
    return 0;
}
