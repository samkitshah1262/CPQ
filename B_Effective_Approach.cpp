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

const int M = 1e5+7;


void solve(){
	long long int m,i,n,x,y,a,b,c,sam=0,ans=0;
    cin>>n;
    vl v(M,0);
    forn(i,n){
        cin>>a;
        v[a]=i+1;
    }
    vl q;
    cin>>m;
    forn(i,m){
        cin>>b;
        sam=sam+v[b];
        ans=ans+n-v[b]+1;
        
    }
    cout<<sam<<" "<<ans;
    //sort(all(q));

    
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	// ll tt;
	// cin>>tt;
	// while(tt--){
		
	// }
    solve();


	return 0;
}