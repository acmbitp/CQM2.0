#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    while(n>0){
        n -= __gcd(a, n);
        if (!n) cout<<"Delena"<<endl;
        n -= __gcd(b, n);
        if(!n) cout<<"Stelena"<<endl;
    }
}

return 0;
}

