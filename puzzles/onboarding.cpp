/**
 *  *    author: SpiderX
 *   **/

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>
#include <bitset>
#include <map>
#include <set>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define print(x) cout<<x<<'\n'
#define REP(i,a,b)	for(ll i = a;i < b ;i++)
#define EPS 1e-7
#define debug(var) cout << #var << ": " << var << endl;


using namespace std;

typedef    unsigned long long ull;
typedef unsigned int uint;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int,int> pi;

/*#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/

int main()
{
	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	while (1)
	{
		string enemy1; cin >> enemy1;
		int dist1; cin >> dist1;
		string enemy2; cin >> enemy2;
		int dist2; cin >> dist2;
		if (dist1 > dist2)
			print(enemy2);
		else
			print(enemy1);
	}
	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;
}
