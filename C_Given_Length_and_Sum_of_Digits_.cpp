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

// int dp(int n){
//     int d_p[n+1][10];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<10;j++){

//         }
//     }
// }

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    int s,n,i,j,x,y,a,b,c;
    cin>>n>>s;
	vi v;
	if(s==0){
		cout<<-1<<" "<<-1;
		return 0;
	}
    while(true){
		if(n==0){
			break;
		}
		if(s<9){
			break;
		}
		v.pb(9);
		n--;
		s=s-9;
	}
	if(n==0 && s>0){
		cout<<-1<<" "<<-1;
		return 0;
	}
	else if(n>0 && s>0){
		x=s-9*v.size();
		v.pb(x);
		n--;
		while(n--){
			v.pb(0);
		}
	}
	for(i=0;i<v.size();i++){
		cout<<v[v.size()-1-i];
	}
	cout<<" ";
		for(i=0;i<v.size();i++){
		cout<<v[i];
	}

	return 0;
}