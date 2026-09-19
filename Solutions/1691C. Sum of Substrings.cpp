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
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        ll ones = 0, first = n, last = -1;
        for(ll i = 0; i < n; i++) if(s[i] == '1'){
            ones++;
            if(first == n) first = i;
            last = i;
        }
        ll add = 0;
        if(ones > 0 && n - 1 - last <= k){
            k -= n - 1 - last;
            add += 1;
            ones--;
        }
        if(ones > 0 && first <= k){
            k -= first;
            add += 10;
            ones--;
        }
        cout << 11 * ones + add << endl;
    }
    return 0;
}
