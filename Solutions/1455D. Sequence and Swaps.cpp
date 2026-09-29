#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> sortedSuffix(n + 1, 0);
        sortedSuffix[n] = 1;
        sortedSuffix[n - 1] = 1;
        for(ll i = n - 2; i >= 0; i--){
            if(a[i] <= a[i + 1]) sortedSuffix[i] = sortedSuffix[i + 1];
        }
        ll answer = 0, start = 0;
        bool possible = true;
        while(true){
            ll next = start;
            while(next < n && a[next] <= x) next++;
            for(ll i = start; i < next; i++){
                if(i > 0 && a[i - 1] > a[i]) possible = false;
            }
            if(!possible) break;
            if(sortedSuffix[next]) break;
            swap(a[next], x);
            answer++;
            start = next;
        }
        if(possible) cout << answer << endl;
        else cout << -1 << endl;
    }
    return 0;
}
