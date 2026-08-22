#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x, y; cin >> n >> x >> y;
    ll g = std::gcd(x, y);
    ll X = x / g;
    ll Y = y / g;
    ll L = X + Y;
    vector<char> who(L + 1, 0);
    ll i = 1, j = 1;
    for(ll pos = 1; pos <= L - 2; pos++){
        if(i >= X){
            who[pos] = 1;
            j++;
        }else if(j >= Y){
            who[pos] = 0;
            i++;
        }else if(i * Y < j * X){
            who[pos] = 0;
            i++;
        }else{
            who[pos] = 1;
            j++;
        }
    }
    who[L - 1] = 2;
    who[L] = 2;
    for(ll q = 0; q < n; q++){
        ll a; cin >> a;
        ll r = a % L;
        if(r == 0){
            r = L;
        }
        if(who[r] == 0){
            cout << "Vanya" << endl;
        }else if(who[r] == 1){
            cout << "Vova" << endl;
        }else{
            cout << "Both" << endl;
        }
    }
    return 0;
}
