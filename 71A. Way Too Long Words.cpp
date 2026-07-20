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
        ll n = s.length();
        if(n > 10){
            cout << s[0] << n-2 << s[n-1] << endl;
        }else{
            cout << s << endl;
        }
    }
    return 0;
}
