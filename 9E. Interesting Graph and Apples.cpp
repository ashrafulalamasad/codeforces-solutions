#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll n, m;
ll deg[55];
bool baseAdj[55][55];

bool feasible(const vector<pair<ll,ll>>& ans, ll curDeg[55], ll cu, ll cv)
{
    if(n==1){
        return curDeg[1]<=2;
    }
    for(ll i=1;i<=n;i++) if(curDeg[i]>2) return false;
    bool adj[55][55];
    for(ll i=1;i<=n;i++) for(ll j=1;j<=n;j++) adj[i][j]=baseAdj[i][j];
    for(auto &e:ans){
        ll a=e.first,b=e.second;
        if(a!=b){
            adj[a][b]=true;
            adj[b][a]=true;
        }
    }
    if(cu!=0 && cv!=0 && cu!=cv){
        adj[cu][cv]=true;
        adj[cv][cu]=true;
    }
    vector<ll> comp(n+1,0);
    ll compCnt=0;
    for(ll i=1;i<=n;i++) if(comp[i]==0){
        compCnt++;
        queue<ll> q;
        q.push(i);
        comp[i]=compCnt;
        while(!q.empty()){
            ll u=q.front(); q.pop();
            for(ll v=1;v<=n;v++) if(adj[u][v] && comp[v]==0){
                comp[v]=compCnt;
                q.push(v);
            }
        }
    }
    vector<ll> sum(compCnt+1,0);
    for(ll i=1;i<=n;i++) sum[comp[i]] += 2 - curDeg[i];
    if(compCnt>1){
        for(ll c=1;c<=compCnt;c++) if(sum[c]!=2) return false;
    }else{
        if(sum[1]!=0 && sum[1]!=2) return false;
    }
    return true;
}

int main()
{
    fast;
    cin >> n >> m;
    bool hasLoop=false;
    for(ll i=1;i<=n;i++){
        deg[i]=0;
        for(ll j=1;j<=n;j++) baseAdj[i][j]=false;
    }
    for(ll i=0;i<m;i++){
        ll u,v; cin >> u >> v;
        if(u==v){
            deg[u]+=2;
            hasLoop=true;
        }else{
            deg[u]++; deg[v]++;
            baseAdj[u][v]=true;
            baseAdj[v][u]=true;
        }
    }
    for(ll i=1;i<=n;i++) if(deg[i]>2){ cout<<"NO"<<endl; return 0; }
    if(n>1 && hasLoop){ cout<<"NO"<<endl; return 0; }
    if(n==1){
        if(deg[1]==0){
            cout<<"YES"<<endl;
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;
        }else if(deg[1]==2){
            cout<<"YES"<<endl;
            cout<<0<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        return 0;
    }
    vector<pair<ll,ll>> ans;
    ll tmpDeg[55];
    for(ll i=1;i<=n;i++) tmpDeg[i]=deg[i];
    if(!feasible(ans, tmpDeg, 0, 0)){ cout<<"NO"<<endl; return 0; }
    ll need=0;
    for(ll i=1;i<=n;i++) need += 2 - deg[i];
    need/=2;
    for(ll step=0;step<need;step++){
        bool found=false;
        for(ll u=1;u<=n && !found;u++){
            if(deg[u]==2) continue;
            for(ll v=u;v<=n;v++){
                if(u==v) continue;
                if(deg[v]==2) continue;
                for(ll i=1;i<=n;i++) tmpDeg[i]=deg[i];
                tmpDeg[u]++; tmpDeg[v]++;
                if(feasible(ans, tmpDeg, u, v)){
                    ans.push_back({u,v});
                    deg[u]++; deg[v]++;
                    found=true;
                    break;
                }
            }
        }
        if(!found){ cout<<"NO"<<endl; return 0; }
    }
    sort(ans.begin(), ans.end());
    cout<<"YES"<<endl;
    cout<<ans.size()<<endl;
    for(auto &e:ans) cout<<e.first<<" "<<e.second<<endl;
    return 0;
}
