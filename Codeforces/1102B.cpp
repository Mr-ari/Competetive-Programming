/*

Author : Arijit Ghosh

*/

#include <bits/stdc++.h>
using namespace std;

#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      mp                std::map<int,int>
#define      st                std::set<int>
#define      sz(v)             (int)(v.size())
#define      m_p(a,b)          make_pair(a,b)
#define      pb(a)             push_back(a)
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      fo(i,n)           for(int i =(0); i < (n); ++i)
#define      Fo(i,a,n)         for(int i =(a); i < (n); ++i)
#define      all(v)            v.begin(), v.end()
#define      X                 first
#define      Y                 second
#define      FastRead          ios_base::sync_with_stdio(0);cin.tie(0)

typedef double db;
typedef long long ll;
typedef long double lf;
typedef unsigned int uint;
typedef unsigned long long ull;

const ll mo = 1000000007;

const int inf=~0u>>1;
template<typename T>inline void admo(int&a,const T&b){a=(a+b>=mo?a+b-mo:a+b);}
template<typename T>inline void sumo(int&a,const T&b){a=(a-b<0?a-b+mo:a-b);}
template<typename T,typename S>inline bool upmx(T&a,const S&b){return a<b?a=b,1:0;}
template<typename T,typename S>inline bool upmn(T&a,const S&b){return a>b?a=b,1:0;}
template<typename T>inline T gcd(T a,T b){while(b)a%=b,swap(a,b);return a;}
inline int Pow(int a,int b,int p=mo){int r=1;for(;b;b>>=1,a=1ll*a*a%p)if(b&1)r=1ll*r*a%p;return r;}

int main(){
	FastRead;
	int n,k;
	cin>>n>>k;
    int arr[n];
    bool flag1=true;
    st a[5001];
	fo(i,n) {
        cin>>arr[i];
    }
    if(n<k) cout<<"NO"<<endl;
    else if(n == k) {cout<<"YES"<<endl; fo(i,n) cout<<i+1<<" ";}
    else{
        Fo(i,0,k){
            a[arr[i]].insert(i+1);
            arr[i] = i+1; 
        }
        for(int j=k;j<n&&flag1;j++){
            flag1 = false;
            for(int i=1;i<=k && !flag1;i++) {
                if(a[arr[j]].find(i) == a[arr[j]].end()) {a[arr[j]].insert(i);arr[j]=i;flag1=true;}
            } 
        }
        if(flag1) {cout<<"YES"<<endl; fo(i,n) cout<<arr[i]<<" ";cout<<endl;}
        else cout<<"NO\n";
    }
    
	return 0; 
}
