#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    double a, b, c; cin >> a >> b >> c;
    if((a + b > c) && (a + c > b) && (b + c > a)){
        cout << "Valid" << endl;
        double halfSum = (a + b + c) / 2.0;
        double area = sqrt(halfSum * (halfSum - a) * (halfSum - b) * (halfSum - c));
        cout << fixed << setprecision(6) << area << endl;
    }else{
        cout << "Invalid" << endl;
    }
    return 0;
}
