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
        ll cnt = 0;
        for(auto c : s) if(c == 'Y') cnt++;
        if(cnt <= 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
