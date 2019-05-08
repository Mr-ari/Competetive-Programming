//Author : Arijit Ghosh
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
#define      Fo(i,a,n)         for(int i =(a);a<n?i<n:i>n;a<n?i++:i--)
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
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    FastRead;
    int n;
    cin>>n;
    st arr;
    fo(i,n) {int x;cin>>x;arr.insert(x);}
    int size = sz(arr);
    vi v;
    for(auto x : arr){
        v.pb(x);
     //   cout<<x<<" ";
    }
   // cout<<endl;
    if(size == 1){
        cout<<"0\n";
    }
    else if(size == 2){
        if((v[0] + v[1])%2 == 0) cout<< ((v[1]-v[0])/2)<<endl; 
        else cout<<v[1] - v[0]<<endl;
    }
    else if(size == 3){
        if(v[1]-v[0] == v[2]-v[1]) cout<<v[2]-v[1]<<endl;
        else cout<<"-1\n";
    }
    else {
        cout<<"-1\n";
    }
    return 0;
}