#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void toBinary(ll num){
    if(num == 0) return;
    toBinary(num / 2);
    cout << num % 2;
}

int main()
{
    fast;
    tc{
        ll num; cin >> num;
        toBinary(num);
        cout << endl;
    }
    return 0;
}
