#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld\n",x)
#define sc(x) scanf("%s",x)
#define pc(x) printf("%s",x)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second
#define M 1000000007
#define N 200002
#define inf 1e10
#define PQG priority_queue< int,std::vector<int>,std::greater<int> >
#define PQL priority_queue< int,std::vector<int>,std::less<int> >
#define PQPL priority_queue<pii ,vector< pii >, less< pii > >
#define PQPG priority_queue<pii ,vector< pii >, greater< pii > >

using namespace std;

int main(){
int n,m;
cin>>n>>m;
ll a[n+1];
ll b[n+2];
memset(b,0,sizeof(b));
for(int i=1;i<=n;i++){
    cin>>a[i];
}
while(m--){
    int l,r;
    ll val;
    cin>>l>>r>>val;
    b[l]+=val;
    b[r+1]-=val;
}
b[0]=0;
for(int i=1;i<=n;i++) b[i]+=b[i-1];

for(int i=1;i<=n;i++) a[i]+=b[i];

int x,y;
cin>>x>>y;
ll sum=0;
for(int i=x;i<=y;i++){
    sum+=a[i];
}

cout<<sum<<endl;

return 0;
}

