#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string a, b; cin >> n >> a >> b;
        vector<ll> answer;
        for(ll i = n - 1; i >= 0; i--){
            if(a[i] == b[i]) continue;
            if(a[0] == b[i]){
                answer.push_back(1);
                a[0] = a[0] == '0' ? '1' : '0';
            }
            answer.push_back(i + 1);
            reverse(a.begin(), a.begin() + i + 1);
            for(ll j = 0; j <= i; j++) a[j] = a[j] == '0' ? '1' : '0';
        }
        cout << answer.size() << " ";
        for(ll x : answer) cout << x << " ";
        cout << endl;
    }
    return 0;
}
