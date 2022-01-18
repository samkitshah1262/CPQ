#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using pi = pair<int, int>;
using pl = pair<ll, ll>;


#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'
#define forn(i, n) for(ll i = 0; i < n; i++)
#define fora(i, a, n) for(ll i = a; i < n; i++)
#define inp(e) int e; cin >> e
#define inpl(e) ll e; cin >> e
#define inps(e) string e; cin >> e
#define T int tt; cin >> tt; while(tt--)


template<typename U>
void print(U arr) {
	for(auto element: arr) {
		cout << element << " ";
	}
	cout << endl;
}

// read and write into files, rather than standard i/o
void setup(string s) {
	freopen((s+".in").c_str(), "r", stdin);
	freopen((s+".out").c_str(), "w", stdout);
}

const int M = 1e9+7;

ll gsum(ll x){
    return (x*(x+1))/2;
}

void solve(){
	long long int i,n,x,y,a,b,c,sam=0;
    cin>>n;
    vector<pair<ll,ll>> vp;
    vl v1;
    vl v2;
    forn(i,n){
        cin>>a;
        v1.pb(a);
    }
    forn(i,n){
        cin>>a;
        v2.pb(a);
    }
    forn(i,n){
        pair<ll,ll>p;
        p.F=v1[i];
        p.S=v2[i];
        vp.pb(p);
    }
    sam=sam+((vp[0].S)*(vp[0].S+1))/2;
    //cout<<sam<<"sam"<<endl;
    x=vp[0].S;
    for(i=0;i<n-1;i++){
        if(vp[i+1].F-vp[i].F<vp[i+1].S){
            //cout<<1<<endl;
            sam=sam+gsum(vp[i+1].F-vp[i].F)+x*(vp[i+1].F-vp[i].F);
            x=x+vp[i+1].F-vp[i].F;
        }
        else{
            //cout<<2<<endl;
            sam=sam+gsum(vp[i+1].S);
            x=gsum(vp[i+1].S);
        }
    }
    cout<<sam<<endl;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll tt;
	cin>>tt;
	while(tt--){
		solve();
	}



	return 0;
}   