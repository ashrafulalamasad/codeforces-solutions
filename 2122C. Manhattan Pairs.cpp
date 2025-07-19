#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<array<ll,3>>p(n);
        for(ll i = 0; i < n; i++){
            cin >> p[i][0] >> p[i][1];
            p[i][2] = i + 1;
        }
        sort(p.begin(), p.end(), [&](auto &A, auto &B){
            if(A[0] != B[0]) return A[0] < B[0];
            return A[1] < B[1];
        });
        vector<array<ll,3>>L, R;
        for(ll i = 0; i < n / 2; i++) L.push_back(p[i]);
        for(ll i = n / 2; i < n; i++) R.push_back(p[i]);
        sort(L.begin(), L.end(), [&](auto &A, auto &B){
            if(A[1] != B[1]) return A[1] < B[1];
            return A[0] < B[0];
        });
        sort(R.begin(), R.end(), [&](auto &A, auto &B){
            if(A[1] != B[1]) return A[1] > B[1];
            return A[0] < B[0];
        });
        for(ll i = 0; i < n / 2; i++) cout << L[i][2] << ' ' << R[i][2] << endl;
    }
    return 0;
}
