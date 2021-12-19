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
	int i,n,x,y,a,b,c0=0,c1=0,sam=1;
    cin>>n;
    vi v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
    forn(i,n){
        if(v[i]==1){
            c1++;
            c0=0;
        }
        else if(v[i]==0){
            c0++;
            c1=0;
        }
        if(c0==2){
            cout<<-1<<endl;
            return;   
        }
        if(c1>=2){
            sam=sam+5;
        }
        else if(c1==1){
            sam++;
        }


        // if(i==0 && v[i]==1){
        //     sam++;
        // }
        // if(v[i]==0 && v[i+1]==0){
        //     cout<<-1<<endl;
        //     return;
        // }
        // if(v[i]==1 && v[i+1]==1){
        //     sam=sam+5;
        // }
        // else if(v[i]==0 && v[i+1]==1){
        //     sam++;
        // }
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