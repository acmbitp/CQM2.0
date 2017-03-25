#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
while(t--){
   string s;
   cin>>s;
   if(s[0]=='8') cout<<"UNLUCKY"<<endl;
   else{
      int n=s.size();
      int flag=0;
      for(int i=0;i<=n-3;i++){
        if(s[i]=='8' && s[i+1]=='8' && s[i+2]=='8') {
            flag=1;
            break;
        }
      }
      for(int i=0;i<n;i++){
        if(s[i]!='4' || s[i]!='8') {
            flag=1;
        }
      }
      if(!flag) cout<<"LUCKY"<<endl;
      else cout<<"UNLUCKY"<<endl;
   }
}

return 0;
}

