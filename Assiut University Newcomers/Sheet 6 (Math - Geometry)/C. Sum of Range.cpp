#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll sumRange(ll a, ll b){
    if(a > b) swap(a, b);
    return (a + b) * (b - a + 1) / 2;
}

int main()
{
    fast;
    ll a, b; cin >> a >> b;
    if(a > b) swap(a, b);
    ll total = (a + b) * (b - a + 1) / 2;
    ll firstEven = (a % 2 == 0) ? a : a + 1;
    ll lastEven = (b % 2 == 0) ? b : b - 1;
    ll evenSum = 0;
    if(firstEven <= lastEven){
        ll count = (lastEven - firstEven) / 2 + 1;
        evenSum = count * (firstEven + lastEven) / 2;
    }
    cout << total << endl;
    cout << evenSum << endl;
    cout << total - evenSum << endl;
    return 0;
}
