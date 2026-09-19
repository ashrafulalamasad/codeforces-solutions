#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        ll need = n / 2, placed = 0, bal = 0;
        vector<char> res(n);
        for(ll i = 0; i < n; i++){
            if(i % 2 == 1){
                res[i] = s[i];
                if(s[i] == '(') placed++;
                if(s[i] == '(') bal++;
                else bal--;
            }else{
                ll rem = n - i;
                if(placed == need) res[i] = ')';
                else if(placed + rem == need) res[i] = '(';
                else if(bal == 0) res[i] = '(';
                else if(i + 1 < n && s[i + 1] == ')' && bal == 1) res[i] = '(';
                else res[i] = ')';
                if(res[i] == '(') placed++;
                if(res[i] == '(') bal++;
                else bal--;
            }
        }
        vector<ll> st;
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            if(res[i] == '(') st.push_back(i);
            else{
                ans = ans + i - st.back();
                st.pop_back();
            }
        }
        cout << ans << endl;
    }
    return 0;
}
