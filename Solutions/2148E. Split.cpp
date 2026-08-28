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
        vector<ll> a(n), limit(n + 1), current(n + 1);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            limit[a[i]]++;
        }
        bool possible = true;
        for(ll value = 1; value <= n; value++){
            if(limit[value] % k != 0) possible = false;
            limit[value] /= k;
        }
        if(!possible){
            cout << 0 << endl;
            continue;
        }
        ll answer = 0, left = 0;
        for(ll right = 0; right < n; right++){
            current[a[right]]++;
            while(current[a[right]] > limit[a[right]]){
                current[a[left]]--;
                left++;
            }
            answer += right - left + 1;
        }
        cout << answer << endl;
    }
    return 0;
}
