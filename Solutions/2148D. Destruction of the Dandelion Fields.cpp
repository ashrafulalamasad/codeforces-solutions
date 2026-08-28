#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, evenSum = 0; cin >> n; vector<ll> odd;
        for(ll i = 0; i < n; i++){
            ll value; cin >> value;
            if(value % 2 == 0) evenSum += value;
            else odd.push_back(value);
        }
        if(odd.empty()) cout << 0 << endl;
        else{
            sort(odd.rbegin(), odd.rend());
            ll answer = evenSum;
            for(ll i = 0; i < (odd.size() + 1) / 2; i++) answer += odd[i];
            cout << answer << endl;
        }
    }
    return 0;
}
