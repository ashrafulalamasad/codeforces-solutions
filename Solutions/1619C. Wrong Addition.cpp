#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, s; cin >> a >> s;
        string A = to_string(a);
        string S = to_string(s);
        vector<ll> b;
        ll i = (ll)A.size() - 1;
        ll j = (ll)S.size() - 1;
        bool ok = true;
        while(i >= 0 || j >= 0){
            if(j < 0){
                ok = false;
                break;
            }
            ll da = 0;
            if(i >= 0){
                da = A[i] - '0';
            }
            ll x = S[j] - '0';
            ll db = -1;
            if(x >= da){
                db = x - da;
                j--;
            }else{
                if(j >= 1 && S[j - 1] == '1'){
                    db = 10 + x - da;
                    if(db >= 0 && db <= 9){
                        j -= 2;
                    }else{
                        db = -1;
                    }
                }
            }
            if(db == -1){
                ok = false;
                break;
            }
            b.push_back(db);
            if(i >= 0){
                i--;
            }
        }
        if(ok){
            while(!b.empty() && b.back() == 0){
                b.pop_back();
            }
            if(b.empty()){
                ok = false;
            }
        }
        if(!ok){
            cout << -1 << endl;
        }else{
            for(ll idx = (ll)b.size() - 1; idx >= 0; idx--){
                cout << b[idx];
            }
            cout << endl;
        }
    }
    return 0;
}
