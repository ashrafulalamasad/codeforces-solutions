#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int n; cin >> n;
    int sum = 0, min_odd = 101;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        sum += x;
        if(x % 2 == 1) min_odd = min(min_odd, x);
    }
    if(sum % 2 == 1){
        cout << sum << endl;
    }else{
        if(min_odd == 101) cout << 0 << endl;
        else cout << sum - min_odd << endl;
    }
    return 0;
}
