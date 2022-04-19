//Check out my youtube channel: https://www.youtube.com/c/QuarantineEngineers
//Join me on discord to discuss: https://discord.com/invite/6kcmVQx8Fx
#include<bits/stdc++.h>
using namespace std;

//common file for PBDS
// #include<ext/pb_ds/assoc_container.hpp>
// //including tree_order_statistics_node_update
// #include<ext/pb_ds/tree_policy.hpp>
//namespace
// using namespace __gnu_pbds;
#define int long long

//macro definition
#define ordered_set tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update>

#define ld long double
#define endl "\n"
const int mod=998244353;
const int MAX=100005;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());

const int bit=31;
//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h

void solve(){
  int n,m;
  cin>>n>>m;
  vector<string>v;
  int countO[m][26];
  memset(countO,0,sizeof(countO));
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
    for(int j=0;j<m;j++){
      countO[j][s[j]-'a']++;
    }
  }
  int countP[m][26];
  memset(countP,0,sizeof(countP));
  for(int i=0;i<n-1;i++){
    string s;
    cin>>s;
    for(int j=0;j<m;j++){
      countP[j][s[j]-'a']++;
    }
  }
  string res;
  for(auto &x:v){
    for(int i=0;i<m;i++){
      countO[i][x[i]-'a']--;
    }
    bool ans=true;
    for(int j=0;j<m;j++){
      for(int i=0;i<26;i++){
        if(countO[j][i]!=countP[j][i]){
          ans=false;
          break;
        }
      }
      if(!ans)break;
    }
    if(ans){
      res=x;
      break;
    }
    for(int i=0;i<m;i++){
      countO[i][x[i]-'a']++;
    }
  }
  cout<<res<<"\n";
  cout.flush();
  // cout<<endl;
}
int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      int t;
      // cout<<fixed<<setprecision(20);
      t=1;
      cin>>t;
      // int tt=1;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}