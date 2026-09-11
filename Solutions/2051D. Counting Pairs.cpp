#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll count_at_most(const vector<ll>& a, ll limit){
    ll left = 0, right = (ll)a.size() - 1, answer = 0;
    while(left < right){
        if(a[left] + a[right] <= limit){
            answer += right - left;
            left++;
        }else{
            right--;
        }
    }
    return answer;
}

int main()
{
    fast;
    tc{
        ll n, x, y; cin >> n >> x >> y;
        vector<ll> a(n); ll total = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            total += a[i];
        }
        sort(a.begin(), a.end());
        ll low = total - y, high = total - x;
        cout << count_at_most(a, high) - count_at_most(a, low - 1) << endl;
    }
    return 0;
}
