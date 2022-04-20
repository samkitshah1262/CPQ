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


void solve(){
	long long int i,n,x,y,a,b,c,sam=0;
    vector<pair<ll,ll>> v;
	vl vans;
    cin>>n;
    forn(i,n){
        cin>>a;
        pl p;
        p.F=a;
        p.S=i+1;
        v.pb(p);
    }
    sort(all(v));
	if(n==1){
		cout<<1<<endl;
		cout<<1<<endl;
		return;
	}
    forn(i,n-1){
		if(v[i].F>=v[i+1].F){
			v[i+1].F=v[i+1].F + v[i].F;
			vans.pb(v[i].S);
			vans.pb(v[i+1].S);
		}
		else{
			v[i+1].F=v[i+1].F + v[i].F;
			vans.clear();
			vans.pb(v[i+1].S);
		}	
	}
	// forn(i,v.size()){
	// 	cout<<v[i].F<<endl;
	// }
	set<int> s;
	forn(i,vans.size()){
		s.insert(vans[i]);
	}
	//sort(all(vans));
	cout<<s.size()<<endl;
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
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