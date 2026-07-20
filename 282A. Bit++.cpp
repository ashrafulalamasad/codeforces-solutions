#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll res = 0;
    tc{
        string s; cin >> s;
        if(s[1] == '+'){
            res++;
        }else{
            res--;
        }
    }
    cout << res << endl;
    return 0;
}
