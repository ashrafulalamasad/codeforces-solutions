#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        ll res = 1, i = 0;
        while(s[i] != '*') i++;
        while(true){
            ll j = min(n - 1, i + k);
            while(j > i && s[j] != '*') j--;
            if(i == j) break;
            res++;
            i = j;
        }
        cout << res << endl;
    }
    return 0;
}
