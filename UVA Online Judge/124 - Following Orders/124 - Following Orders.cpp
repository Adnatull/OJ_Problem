
/*
    * ADNATULL AL MASUM
    * EASTERN UNIVERSITY OF BANGLADESH
    * Mail: adnaan.masum@yahoo.com
 * */
 

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <map>
#include <climits>
#include <string>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <sstream>
#include <stack>
#include <list>
#include <deque>
#include <cmath>
#include <numeric>
#include <iterator>
#include <utility>


using namespace std;

#define sci(a) scanf ("%d",&a)
#define scii(a,b) scanf ("%d %d",&a,&b)
#define sc scanf
#define pr printf 
#define pb push_back
#define mp make_pair
#define sz(a) (int)a.size()
#define LL long long 
#define L long 
#define FOR(i,a,b) for (int i=(a); i<=(b); i++)
#define RFOR(i,a,b) for (int i=(a); i>=(b); i--)
#define rep(i,n) for (int i=(0); i<(n); i++)
#define rrep(i,n) for (int i=(n-1); i>=(0); i--)
#define INF (int)1e9+1
#define EPS (int)1e-9
#define PI 3.1415926535897932384626433832795
#define MOD (int)1000000007
#define nn printf ("\n")
#define fill(a, v) memset(a, v, sizeof a)
#define clr(a) memset(a, 0, sizeof a)
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
#define skip cin.ignore()
#define Global (int)12345678
#define Local (int)1234567
#define test_case(n) FOR(cases,1,n)
#define print_case printf("Case %d: ",cases)

const double pi=acos(-1.0);
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

string a,b;    
vector < char > lst;
map < char , vector < char > > graph;
map < char, bool > visit;

bool valid (char x) {

    rep(i,sz(graph[x])) {
        char y = graph[x][i];
        if(!visit[y]) return false;
    }
    return true;
}

void khelteThako(string s) {

    if(sz(s)==sz(lst)) {
        cout << s << endl;
        return;
    }
    
    rep(i,sz(lst)) {
        char x = lst[i];
        if(!visit[x]) {
            visit[x] = true;
            
            if(valid(x))
                khelteThako(s+x);
            visit[x] = false;
        }
    
    }

}

int main() { 
    
  // freopen ("input.txt", "r", stdin);
  //  ios_base::sync_with_stdio(0);
    int cases  =0;
    istringstream ss;
    while (getline(cin,a)) {

       ss.str(a);
       if(cases>0) cout << endl;
       
       char x;
       while (ss>>x) lst.pb(x);
       sort(all(lst));
       ss.clear();
       getline(cin,b);
       char y;
       ss.str(b);
       
       while (ss >> x >> y) graph[y].pb(x);
       ss.clear();
       
       khelteThako("");

        visit.clear();
        lst.clear();
        graph.clear();
        cases++;
    }
    
    


    return 0;
}
