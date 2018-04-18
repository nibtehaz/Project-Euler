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

struct edge
{
    int u;
    int v;
    int w;
};



vector<edge> E;
int p[3005];
int rankk[3005];
int components;

void initialize(int n);
bool check(int x , int y);
int findRoot(int x);
bool isFirstSmaller(edge E1, edge E2);

bool isFirstSmaller(edge E1, edge E2)
{
    return (E1.w<E2.w);
}

void initialize(int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        p[i]=i;
        rankk[i]=0;
    }

    components=n;
}

bool check(int x , int y)
{
    return findRoot(x)==findRoot(y);
}

int findRoot(int x)
{
    if(p[x]==x)
        return x;
    else
    {
        p[x]=findRoot(p[x]);
        return p[x];
    }
}

void connect(int x,int y)
{
    int p1=findRoot(x);
    int p2=findRoot(y);

    if(rankk[p1]>rankk[p2])
    {
        p[p2]=p1;
    }

    else if(rankk[p1]==rankk[p2])
    {
        p[p2]=p1;
        rankk[p1]++;
    }

    else
    {
        p[p1]=p2;
    }

    components--;

}


int main()
{
    //Bismillahir Rahimanir Rahim
    //Rabbi Zidni Ilma

    int N,M;
    int x,y,r,S;
    int i;
    edge temp;
    long long int ans=0,sum=0;

    OUTPUT

    N=40;
    M=40*40;

    initialize(N);

    for(i=0;i<M;i++)
    {
        getInt(r)

        if(r==-1)
            continue;

        temp.u=i/40;
        temp.v=i%40;
        temp.w=r;
        sum+=r;

        E.pb(temp);

        DEBUG(r)
    }


    sort(E.begin(),E.end(),isFirstSmaller);

    DEBUG("Y")

    for(i=0;i<E.size();i++)
    {
        printf("%d %d %d\n",E[i].u,E[i].v,E[i].w);
        if(check(E[i].u,E[i].v))
            continue;
        else
        {
            connect(E[i].u,E[i].v);
            ans+=E[i].w;

        }

        if(components==0)
            break;
    }

    sum/=2;

    DEBUG(sum)
    DEBUG(ans)
    printf("%lld\n",sum-ans);


    return 0;
}

