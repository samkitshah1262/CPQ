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
	int i,n,x,y,a,b,c,sam=0,flag=0,k=1;
    cin>>n;
    vi v;
    forn(i,n){
        cin>>a;
        v.pb(a);
    }
	// i=0;
    // while(i!=n-1){
	// 	if(v[i]!=i+1){
	// 		forn(j,n){
	// 			if(v[j]==i+1){
	// 				x=j;
	// 				y=j;
	// 				break;
	// 			}
	// 		}
	// 		while(x>=i){
	// 			cout<<v[x]<<" ";
	// 			x--;
	// 		}
	// 		// while(y!=n-1){
	// 		// 	cout<<v[y]<<" ";
	// 		// 	y++;
	// 		// }
	// 		cout<<endl;
	// 		return;
	// 	}
	// 	else{
	// 		cout<<v[i]<<" ";
	// 	}
	// 	i++;
	// }
	// forn(i,n){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;

	forn(i,n){
		if(v[i]==i+1){
			cout<<i+1<<" ";
		}
		else{
			x=i;
			k=0;
			break;	
		}
	}
	if(k==1){
		return;
	}
	for(i=n-1;i>=x;i--){
		if(v[i]==x+1 && flag==0){
			sam=1;
			y=i;
			flag=1;
		}
		if(sam==1){
			cout<<v[i]<<" ";
		}
	}
	for(i=y;i<n;i++){
		cout<<v[i]<<" ";
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