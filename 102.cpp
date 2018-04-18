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

long long int Area(int x1,int y1, int x2 , int y2 , int x3 , int y3);

long long int Area(int x1,int y1, int x2 , int y2 , int x3 , int y3)
{
    return abs(x1*y2 + x2*y3 + x3*y1 - x2*y1 - x3*y2 - x1*y3) ;
}

int main()
{
    //Bismillahir Rahmanir Rahim
    //Rabbi Zidni Ilma

    int cnt=0;
    int x1,y1,x2,y2,x3,y3;
    long long int A1,A2,A3,A;
    int n=1000;

    while(n--)
    {
        scanf("%d,%d,%d,%d,%d,%d",&x1,&y1,&x2,&y2,&x3,&y3);
        A=Area(x1,y1,x2,y2,x3,y3);
        A1=Area(0,0,x2,y2,x3,y3);
        A2=Area(0,0,x3,y3,x1,y1);
        A3=Area(0,0,x1,y1,x2,y2);

        //DEBUG(A)
        //DEBUG(A1)
        //DEBUG(A2)
        //DEBUG(A3)

        if(A==A1+A2+A3)
            cnt++;
    }

    DEBUG(cnt)




    return 0;
}

