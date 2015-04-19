#include<bits/stdc++.h>

#define s1(n) scanf("%d",&n)
#define s2(n , m) scanf("%d %d",&n,&m)
#define s3(n , m , o) scanf("%d %d %d",&n,&m,&o)

/// others type -> ld , lld , f , llf , s , c .....

#define p1(n) printf("%d\n",n);
#define p2(n,m) printf("%d %d\n",n,m)
#define p3(n,m,o) printf("%d %d %d\n",n,m,o);


/*
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair<int ,int> ii;
*/

#define vi vector<int>
#define vvi vector<vi>
#define ii pair<int , int>



///size, push
#define sz(a) int((a).size())
#define pb push_back

///traverse all container
#define all(c) c.begin(),c.end()


///loop through all container
#define tr(c,it)\
            for(typeof(c.begin()) it=(c).begin();it!=(c).end();it++)


///finding anything among container
#define present(container,element) (container.find(element)!=container.end())
#define cpresent(container,element) (find(all(container,element)!=container.end()))



using namespace std;



int main()
{
    //freopen("in.txt","r",stdin);
    int a;
    s1(a);
    int x5 = a/100;

   printf("%d nota(s) de R$ 100,00\n",x5);
   a = a - x5*100;
   x5  = a/50;
   printf("%d nota(s) de R$ 50,00\n",x5);
   a = a - x5*50;
   x5 = a/20;

    //x5 = x50%50;
   //int x20 = x50/20;
   printf("%d nota(s) de R$ 20,00\n",x5);
//    x5 = x20%10;
   a = a-x5*20;
   x5 = a/10;
  //  int x10 = x5/10;

   printf("%d nota(s) de R$ 10,00\n",x5);
   a = a - x5*10;
   x5 = a/5;
   //x5 = x10%5;
   //int xx5 = x5/5;

   printf("%d nota(s) de R$ 5,00\n",x5);
   printf("%d nota(s) de R$ 2,00\n",x5);
   printf("%d nota(s) de R$ 1,00\n",x5);

    return 0;
}


