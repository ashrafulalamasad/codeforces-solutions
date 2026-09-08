#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> mice(k);
        for(ll i = 0; i < k; i++) cin >> mice[i];
        sort(mice.rbegin(), mice.rend());
        ll elapsed = 0, answer = 0;
        for(ll mouse : mice){
            if(mouse > elapsed){
                answer++;
                elapsed += n - mouse;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
