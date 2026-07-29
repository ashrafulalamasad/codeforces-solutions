#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

double average(vector<double> arr){
    double sum = 0;
    for(double num : arr){
        sum += num;
    }
    return sum / arr.size();
}

int main()
{
    fast;
    ll n; cin >> n; vector<double> arr(n); 
    for(ll i = 0; i < n; i++) cin >> arr[i];
    cout << fixed << setprecision(6) << average(arr) << endl;
    return 0;
}
