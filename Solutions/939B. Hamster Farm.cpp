#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll N, K; cin >> N >> K;
    ll bestType = 1, bestRem = -1, boxes = 0;
    for(ll i = 1; i <= K; i++){
        ll a; cin >> a;
        ll rem = N % a;
        if(bestRem == -1 || rem < bestRem){
            bestRem = rem;
            bestType = i;
            boxes = N / a;
        }
    }
    cout << bestType << " " << boxes << endl;
    return 0;
}
