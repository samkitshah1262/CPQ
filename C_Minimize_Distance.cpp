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
	long long int i,n,x,y,k,a,b,c=0,sam=0;
    cin>>n>>k;
    deque<ll> vp;
	deque<ll> vn;
    forn(i,n){
        cin>>a;
        //v.pb(abs(a));
		if(a<0){
			vn.pb(abs(a));
		}
		else{
			vp.pb(a);
		}
    }
    sort(all(vp));
	sort(all(vn));
	if(vp[vp.size()-1]>vn[vn.size()-1]){
		forn(i,vn.size()){
			if((i+1)%k==0){
				c=c+vn[i];
				c=2*c;
			}
			else{
				c=c+vn[i];
			}
		}
		c=2*c;
		forn(i,vp.size()){
			if(vp.size()-(i+1)==k){
				c=c+vp[i];
				a=i;
				break;
			}
			if((i+1)%k==0){
				c=c+vp[i];
				c=2*c;
			}
			else{
				c=c+vp[i];
			}
		}
		c=c*2;
		for(i=a+1;i<vp.size();i++){
			c=c+vp[i];
		}
	}
	else{
		deque<ll> vcopy;
		vcopy=vp;
		vp=vn;
		vn=vcopy;
		forn(i,vn.size()){
			if((i+1)%k==0){
				c=c+vn[i];
				c=2*c;
			}
			else{
				c=c+vn[i];
			}
		}
		c=2*c;
		forn(i,vp.size()){
			if(vp.size()-(i+1)==k){
				c=c+vp[i];
				a=i;
				break;
			}
			if((i+1)%k==0){
				c=c+vp[i];
				c=2*c;
			}
			else{
				c=c+vp[i];
			}
		}
		c=c*2;
		for(i=a+1;i<vp.size();i++){
			c=c+vp[i];
		}
	}
	cout<<c<<endl;
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