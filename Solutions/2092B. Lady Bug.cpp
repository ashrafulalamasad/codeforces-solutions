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
        ll cnt1 = 0, cnt2 = 0;
        for(ll i = 0; i < n; i++){
            if(i % 2 == 0){
                if(a[i] == '0') cnt1 = cnt1 + 1;
                if(b[i] == '0') cnt2 = cnt2 + 1;
            }else{
                if(a[i] == '0') cnt2 = cnt2 + 1;
                if(b[i] == '0') cnt1 = cnt1 + 1;
            }
        }
        if(cnt1 >= (n + 1) / 2 && cnt2 >= n / 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
