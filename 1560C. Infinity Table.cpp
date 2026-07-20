#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll k; cin >> k;
        ll L = sqrt(k);
        if(L * L < k) ++L;
        ll start = (L - 1) * (L - 1);
        ll d = k - start;
        ll r, c;
        if(d <= L){
            r = d;
            c = L;
        }else{
            r = L;
            c = L - (d - L);
        }
        cout << r << " " << c << endl;
    }
    return 0;
}
