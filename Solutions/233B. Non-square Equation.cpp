#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll digitSum(ll value){
    ll sum = 0;
    while(value > 0){
        sum += value % 10;
        value /= 10;
    }
    return sum;
}

int main()
{
    fast;
    ll n, ans = -1; cin >> n;
    for(ll sum = 0; sum <= 90; sum++){
        ll discriminant = sum * sum + 4 * n;
        ll root = sqrtl((long double)discriminant);
        while((ll)root * root < discriminant) root++;
        while((ll)root * root > discriminant) root--;
        if((ll)root * root != discriminant || (root - sum) % 2 != 0) continue;
        ll x = (root - sum) / 2;
        if(x > 0 && x * x + digitSum(x) * x == n){
            ans = x;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
