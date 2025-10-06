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
        string s; cin >> s;
        if(n == k){
            cout << string(n, '-') << endl; continue;
        }
        ll t0 = 0, t1 = 0, t2 = 0;
        for(char c : s){
            if(c == '0'){
                t0++;
            }else if(c == '1'){
                t1++;
            }else{
                t2++;
            }
        }
        ll l_low = t0 + 1;
        ll r_low = n - (t1 + t2);
        ll l_high = t0 + t2 + 1;
        ll r_high = n - t1;
        string result(n, ' ');
        for(ll i = 1; i <= n; ++i){
            if(i >= l_high && i <= r_low){
                result[i - 1] = '+';
            }else if(i < l_low || i > r_high){
                result[i - 1] = '-';
            }else{
                result[i - 1] = '?';
            }
        }
        cout << result << endl;
    }
    return 0;
}
