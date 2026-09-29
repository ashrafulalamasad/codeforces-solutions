#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, l, r; cin >> n >> l >> r; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll sum = 0, answer = 0, left = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > r){
                sum = 0;
                left = i + 1;
                continue;
            }
            sum += a[i];
            while(sum > r) sum -= a[left++];
            if(sum >= l && sum <= r){
                answer++;
                sum = 0;
                left = i + 1;
            }
        }
        cout << answer << endl;
    }
    return 0;
}
