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

vector <pi> pt;
void bresenham(int x1, int y1, int x2, int y2)
{
   int m_new = 2 * (y2 - y1);
   int slope_error_new = m_new - (x2 - x1);
   for (int x = x1, y = y1; x <= x2; x++)
   {
	  cout <<"(" << x << "," << y << ")\n";
	  pt.PB(MP(x,y));
	  slope_error_new += m_new;

	  if (slope_error_new >= 0)
	  {
		 y++;
		 slope_error_new  -= 2 * (x2 - x1);
	  }
   }
}

void	show_result(int x, int y)
{
	string res;
	if (x == 0)
	{
		if (y == 1)
			res = "N\n";
		else if (y == -1)
			res = "S\n";
	}
	else if (x == 1)
	{
		if (y == 0)
			res = "E\n";
		else if (y == 1)
			res = "NE\n";
		else if (y == -1)
			res = "SE\n";
	}
	else if (x == -1)
	{
		if (y == 0)
			res = "W\n";
		else if (y == 1)
			res = "NW\n";
		else if (y == -1)
			res = "SW\n";
	}
	cout <<res;
}

int main()
{
	int lightX; // the X position of the light of power
	int lightY; // the Y position of the light of power
	int x; // Thor's starting X position
	int y; // Thor's starting Y position
	cin >> lightX >> lightY >> x >> y;
	int dx, dy;
	while(1)
	{
		int r; cin >>r;
		dx = lightX - x;
		dy = lightY - y;
		if ( dy < 0 )
		{
			cout <<'N';
			y--;
		}
		else if ( dy > 0 )
		{
			cout <<"S";
			y++;
		}
		if ( dx < 0 )
		{
			cout <<"W";
			x--;
		}
		else if ( dx > 0 )
		{
			cout <<"E";
			x++;
		}
		cout <<'\n';
	}
	return (0);
}
	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;
	// Thor position = (0,0). Light position = (36,17). Energy = 36
