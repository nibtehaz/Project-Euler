/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 220005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

long long int dp[30][30];
int r=20,c=20;

long long int calc(int x, int y)
{
    if(x==r && y==c)
    {
        return 1;
    }

    if(dp[x][y]!=-1)
        return dp[x][y];

    long long int p1=0,p2=0;

    if(x+1 <= r)
        p1=calc(x+1,y);
    if(y+1 <= c)
        p2=calc(x,y+1);

    dp[x][y]=p1+p2;

    return dp[x][y];

}

int main()
{
    memset(dp,-1,sizeof(dp));

    printf("%lld\n",calc(0,0));

    return 0;
}
