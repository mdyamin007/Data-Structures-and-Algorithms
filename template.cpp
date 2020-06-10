/**
 *              "Bismillahir Rahmanir Rahim"
 *                 _                       _            __
 *   _ __ ___   __| |_   _  __ _ _ __ ___ (_)_ __      / /
 *  | '_ ` _ \ / _` | | | |/ _` | '_ ` _ \| | '_ \    / /
 *  | | | | | | (_| | |_| | (_| | | | | | | | | | |  / /
 *  |_| |_| |_|\__,_|\__, |\__,_|_| |_| |_|_|_| |_| /_/
 *                   |___/
 *                 _                       _        ___   ___ _____
 *   _ __ ___   __| |_   _  __ _ _ __ ___ (_)_ __  / _ \ / _ \___  |
 *  | '_ ` _ \ / _` | | | |/ _` | '_ ` _ \| | '_ \| | | | | | | / /
 *  | | | | | | (_| | |_| | (_| | | | | | | | | | | |_| | |_| |/ /
 *  |_| |_| |_|\__,_|\__, |\__,_|_| |_| |_|_|_| |_|\___/ \___//_/
 *                   |___/
 *
 *   created:    06.06.2020
 * 
**/

#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair
#define PI acos(-1)
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define sf1(a) sf("%d", &a)
#define sf2(a,b) sf("%d %d", &a, &b)
#define sf3(a,b,c) sf("%d %d %d", &a, &b, &c)
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define INF 1e9
#define MEM(a, b) memset(a, (b), sizeof(a))
#define read(type) readInt<type>()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;


/****** Template of Fast I/O Methods *********/
template <typename T> inline void write(T x)
{
	int i = 20;
	char buf[21];
	// buf[10] = 0;
	buf[20] = '\n';

	do
	{
		buf[--i] = x % 10 + '0';
		x/= 10;
	}while(x);
	do
	{
		putchar(buf[i]);
	} while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
	T n=0,s=1;
	char p=getchar();
	if(p=='-')
		s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-')
		p=getchar();
	if(p=='-')
		s=-1,p=getchar();
	while(p>='0'&&p<='9') {
		n = (n<< 3) + (n<< 1) + (p - '0');
		p=getchar();
	}

	return n*s;
}
/************************************/

int fx[] = {-1, 1, 0, 0};
int fy[] = {0, 0, -1, 1};




int main() {
    //FAST_IO
    #ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	#endif

    
    /* int tc;
	tc = read(int);

	while(tc--){

		//write(tc);
	} */

    return 0;
}
