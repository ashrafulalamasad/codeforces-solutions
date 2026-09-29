#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        auto query = [&](ll x, ll y){
            cout << "? " << x << " " << y << endl;
            ll distance; cin >> distance;
            return distance;
        };
        ll distance = query(1, 1);
        ll sum = distance + 2;
        ll leftRow = max(1LL, sum - m);
        ll leftDistance = query(leftRow, sum - leftRow);
        ll rightRow = max(1LL, sum - n);
        ll rightDistance = query(sum - rightRow, rightRow);
        ll candidateRow = leftRow + leftDistance / 2;
        ll candidateColumn = sum - candidateRow;
        if(query(candidateRow, candidateColumn) == 0){
            cout << "! " << candidateRow << " " << candidateColumn << endl;
        }else{
            candidateRow = sum - rightRow - rightDistance / 2;
            candidateColumn = rightRow + rightDistance / 2;
            cout << "! " << candidateRow << " " << candidateColumn << endl;
        }
    }
    return 0;
}
