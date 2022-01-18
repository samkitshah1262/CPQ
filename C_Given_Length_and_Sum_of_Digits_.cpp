/*
 * =====================================================================================
 *
 *       Filename:  a.cc
 *        Version:  1.0
 *        Created:  2014年11月17日 23时53分26秒
 *       Revision:  none
 *       Compiler:  GNU C++
 *
 *                     I  don't  want  to  be  alone.
 *
 * =====================================================================================
 */
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

#define PB              push_back
#define SIZE(x)         (int)x.size()
#define clr(x,y)        memset(x,y,sizeof(x))
#define MP(x,y)         make_pair(x,y)
#define RS(n)           scanf ("%s", n)
#define ALL(t)          (t).begin(),(t).end()
#define FOR(i,n,m)      for (int i = n; i <= m; i ++)
#define ROF(i,n,m)      for (int i = n; i >= m; i --)
#define IT              iterator
#define FF              first
#define SS              second

typedef long long               ll;
typedef unsigned int            uint;
typedef unsigned long long      ull;
typedef vector<int>             vint;
typedef vector<string>          vstring;
typedef pair<int, int>          PII;

void RI (int& x){
	x = 0;
	char c = getchar ();
	while (!(c>='0' && c<='9' || c=='-'))     c = getchar ();
	bool flag = 1;
	if (c == '-'){
		flag = 0;
		c = getchar ();
	}
	while (c >= '0' && c <= '9'){
		x = x * 10 + c - '0';
		c = getchar ();
	}
	if (!flag)      x = -x;
}
void RII (int& x, int& y){RI (x), RI (y);}
void RIII (int& x, int& y, int& z){RI (x), RI (y), RI (z);}
void RC (char& c){
	c = getchar ();
	while (c == ' '||c == '\n')     c = getchar ();
}
char RC (){
	char c = getchar ();
	while (c == ' '||c == '\n')     c = getchar ();
	return c;
}

/**************************************END define***************************************/

const ll mod = 1e9+7;
const ll LINF = 1e18;
const int INF = 1e9;
const double EPS = 1e-8;

int a[105], b[105];

int main (){
	int m, s;
	cin >> m >> s;
	if (s == 0 && m > 1 || m*9 < s){
		puts ("-1 -1");
		return 0;
	}
	int t = s;
	FOR (i, 1, m){
		if (t >= 9){
			a[i] = 9;
			t -= 9;
		}else{
			a[i] = t;
			break;
		}
	}
	s --;
	b[1] = 1;
	ROF (i, m, 1){
		if (s >= 9){
			s -= 9;
			b[i] = 9;
		}else{
			b[i] += s;
			break;
		}
	}
	FOR (i, 1, m){
		cout << b[i];
	}
	cout << " ";
	FOR (i, 1, m){
		cout << a[i];
	}
	cout << endl;
}


