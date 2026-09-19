#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; ll N = n + m + 1;
        vector<ll> a(N), b(N), cnt(2, 0), lim(2, 0);
        for(ll i = 0; i < N; i++) cin >> a[i];
        for(ll i = 0; i < N; i++) cin >> b[i];
        lim[0] = n; lim[1] = m;
        vector<ll> tp(N - 1, 0);
        ll bad = -1, badType = -1, ans = 0;
        for(ll i = 0; i < N - 1; i++){
            ll cur = a[i] > b[i] ? 0 : 1;
            if(cnt[cur] == lim[cur]){
                cur = 1 - cur;
                if(bad == -1){
                    bad = i;
                    badType = 1 - cur;
                }
            }
            tp[i] = cur;
            if(cur == 0) ans += a[i];
            else ans += b[i];
            cnt[cur]++;
        }
        for(ll i = 0; i < N - 1; i++){
            ll val = ans;
            if(tp[i] == 0) val -= a[i];
            else val -= b[i];
            if(bad != -1 && i < bad && tp[i] == badType){
                if(badType == 0) val += a[bad] - b[bad] + b[N - 1];
                else val += b[bad] - a[bad] + a[N - 1];
            }else{
                if(tp[i] == 0) val += a[N - 1];
                else val += b[N - 1];
            }
            cout << val << " ";
        }
        cout << ans << endl;
    }
    return 0;
}
