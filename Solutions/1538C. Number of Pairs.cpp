#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll count_less(const vector<ll>& a, ll limit){
    ll left = 0, right = (ll)a.size() - 1, answer = 0;
    while(left < right){
        if(a[left] + a[right] < limit){
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
        ll n, l, r; cin >> n >> l >> r; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        cout << count_less(a, r + 1) - count_less(a, l) << endl;
    }
    return 0;
}
