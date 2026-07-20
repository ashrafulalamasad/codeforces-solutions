#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<vector<double>> dp;
double cal(ll w, ll b){
    if(w<=0) return 0;
    if(b<=0) return 1;
    if(dp[w][b]!=-1) return dp[w][b];
    double res = (double)w/(w+b);
    double cp = (double)b/(w+b);
    b--;
    cp *= (double)b/(w+b);
    b--;
    if(cp>1e-10){
        double b_mice = cal(w,b-1)*(double)b/(w+b);
        double w_mice = cal(w-1,b)*(double)w/(w+b);
        res += cp*(b_mice+w_mice);
    }
    return dp[w][b+2] = res;
}

int main()
{
    fast;
    ll w, b; cin >> w >> b;
    dp.assign(w+1, vector<double>(b+1,-1));
    cout<<fixed<<setprecision(9)<<cal(w,b);
    return 0;
}
