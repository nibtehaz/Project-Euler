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
#include <map>
#include <list>
#include <stack>
#include <set>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("A-large (2).in","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back
#define ppb pop_back

#define INF 1000000000

int N;
int memo[105][105];

int dp(int index , int value)
{
    if(index==N)
    {
        if(value==N)
            return 1;
        else
            return 0;
    }

    if(memo[index][value]!=-1)
        return memo[index][value];

    int take=0,notTake=0;

    if(index+value<=N)
        take=dp(index,index+value);
    notTake=dp(index+1,value);

    return memo[index][value]=take+notTake;
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    getInt(N)

    memset(memo,-1,sizeof(memo));


    printf("%d\n",dp(1,0));

    return 0;
}

