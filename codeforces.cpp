#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb  push_back
ll lcm(ll a, ll b){return (a/__gcd(a,b)*b);}

 // for reverse vector 
//  std::vector<ll>::reverse_iterator it = vector_name.rbegin();
// while (it != b.rend())    { std::cout<<*it; it++;}
// vector<vector<int>> v(mx,vector<int>()); **when column is variable in vector of vector
const int N=1e5+10;
const int M=1e9+7;
const int Q=1073741824;
int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
void solve_kar(){
int t;
cin>>t;
while(t--){
  ll n;
  cin>>n;
  if(n%2 == 0)
  cout<<n/2<<" "<<n/2<<'\n';
  else{
   vector<ll>v;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
        v.pb(i);
        v.pb(n/i);
    }
  }
  ll mn = INT_MAX,a,b;
  for(int i=0;i<v.size();i++){
    if(v[i]==n)
    continue;
    else{
    ll temp = lcm(v[i],n-v[i]);
    if(mn>temp){
      a = v[i];
      b = n-v[i];
      mn = temp;
    }
    }
  }
  cout<<a<<" "<<b<<'\n';
  }
}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
solve_kar();
}