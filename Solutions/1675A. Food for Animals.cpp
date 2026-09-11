#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        ll needDogs = x - a;
        if(needDogs < 0){
            needDogs = 0;
        }
        ll needCats = y - b;
        if(needCats < 0){
            needCats = 0;
        }
        if(needDogs + needCats <= c){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
