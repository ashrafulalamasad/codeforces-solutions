#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string s; cin >> s;
        ll firstA = n;
        ll lastB = -1;
        for(ll i = 0; i < n; i++){
            if(s[i] == 'A'){
                firstA = min(firstA, i);
            }
            if(s[i] == 'B'){
                lastB = i;
            }
        }
        cout << max(0LL, lastB - firstA) << endl;
    }
    return 0;
}
