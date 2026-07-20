#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; cin >> n;
    if(n < 4){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    if(n == 4){
        cout << "1 * 2 = 2" << endl;
        cout << "2 * 3 = 6" << endl;
        cout << "6 * 4 = 24" << endl;
        return 0;
    }
    if(n == 5){
        cout << "5 * 4 = 20" << endl;
        cout << "3 - 1 = 2" << endl;
        cout << "2 + 2 = 4" << endl;
        cout << "20 + 4 = 24" << endl;
        return 0;
    }
    if(n % 2 == 0){
        cout << "1 * 2 = 2" << endl;
        cout << "2 * 3 = 6" << endl;
        cout << "6 * 4 = 24" << endl;
        for(ll i = 5; i <= n; i += 2){
            cout << i+1 << " - " << i << " = " << 1 << endl;
            cout << "24 * 1 = 24" << endl;
        }
    }else{
        cout << "5 * 4 = 20" << endl;
        cout << "3 - 1 = 2" << endl;
        cout << "2 + 2 = 4" << endl;
        cout << "20 + 4 = 24" << endl;
        for(ll i = 6; i <= n; i += 2){
            cout << i+1 << " - " << i << " = " << 1 << endl;
            cout << "24 * 1 = 24" << endl;
        }
    }
    return 0;
}
