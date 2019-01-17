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

ll minmam(ll a,ll b){return (a<b)?a:b;}

int main(){
	FastRead;
	string s;int n;
    cin>>n;
    cin>>s;
    int num = s.length()/3;
   // cout<<num<<endl;
    int score0=0,score1=0,score2=0;
    for(char x:s){
        if(x=='0') score0++;
        else if(x == '1') score1++;
        else score2++;
    }
    score0-=num;
    score1-=num;
    score2-=num;
   // cout<<score0<<score1<<score2<<endl;
    //filling 0
    for(int i=0;i<s.length();i++){
        if(score0 == 0) break;

        else if(score0>0)break;
        else{
            if(s[i] == '1' && score1>0){
                score0++;
                score1--;
                s[i] = '0';
            }
            if(s[i] == '2' && score2>0){
                score0++;
                score2--;
                s[i] = '0';
            }
        }
    }

    for(int i=s.length()-1;i>=0;i--){
        if(score2 == 0) break;
        else if(score2>0)break;
        else{
            if(s[i] == '1' && score1>0){
                score2++;
                score1--;
                s[i] = '2';
            }
            if(s[i] == '0' && score0>0){
                score2++;
                score0--;
                s[i] = '2';
            }
        }
    }


    for(int i=s.length()-1;i>=0;i--){
        if(score1 == 0) break;
        else if(score0==0)break;
        else{
            if(s[i] == '0' && score0>0){
                score1++;
                score0--;
                s[i] = '1';
            }
        }
    }

    for(int i=0;i<s.length();i++){
        if(score1 == 0) break;
        else if(score2==0)break;
        else{
            if(s[i] == '2' && score2>0){
                score1++;
                score2--;
                s[i] = '1';
            }
        }
    }


    cout<<s<<endl;
}
