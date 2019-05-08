/*
Given an array of integers, find the first missing positive integer in linear time and constant space. In other words, find the lowest positive integer that does not exist in the array. The array can contain duplicates and negative numbers as well.

For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.

You can modify the input array in-place.

max in array <= total array element 

*/

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


void swap(int *a, int *b) 
{ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 

// divide the array into two half negetive nums and non - negetive nums
int createPart(int arr[],int n){
    int start = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            swap(&arr[i] , &arr[start]);
            start++;
        }
    }
    return start;
}

int findMissingNum(int arr[],int n){
    for(int i=0;i<n;i++){
        int idx = abs(arr[i]) - 1;
        if(arr[idx] > 0) arr[idx] *= -1;
    }

    for(int i=0;i<n;i++){
        if(arr[i] > 0) return i+1;
    }

    return n+1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    FastRead;
    int n;
    cin>>n;
    int arr[n];
    fo(i,n) cin>>arr[i];

    // now mark the value at index value as negetive
    int shift = createPart(arr,n);
    cout<<findMissingNum(arr+shift,n-shift)<<endl;

    return 0;
}