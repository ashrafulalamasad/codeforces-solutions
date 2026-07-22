#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c; cin >> a >> b >> c;
    ll arr[] = {a, b, c};
    sort(arr, arr + 3);
    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl;
    cout << endl;
    cout << a << endl << b << endl << c << endl;
    return 0;
}
