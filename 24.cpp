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

int countt=0,done=0;
vector<int> current;

void processSolution();
void makeCandy(int candy[] , int &nCandy , int index);
void backtrack(int index);

void processSolution()
{
    countt++;

    if(countt==1000000)
    {
        int i;

        for(i=0;i<=9;i++)
            printf("%d",current[i]);
        printf("\n");

        done=1;
    }
}

void makeCandy(int candy[] , int &nCandy , int index)
{
    int i;
    bool used[15]={0,};
    for(i=0;i<index;i++)
    {
        used[current[i]]=1;
    }

    nCandy=0;

    for(i=0;i<10;i++)
    {
        if(used[i]==0)
            candy[nCandy++]=i;
    }
}

void backtrack(int index)
{
    if(done==1)
        return;

    int candy[15];
    int nCandy;

    if(index==10)
        processSolution();
    else
    {
        makeCandy(candy,nCandy,index);

        int i;

        for(i=0;i<nCandy;i++)
        {
            current.pb(candy[i]);
            backtrack(index+1);
            current.pop_back();
        }
    }


}

int main()
{
    backtrack(0);

    return 0;
}
