
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
    int n;
    s1(n);
    if(n==61)cout << "Brasilia" << endl;
    else if( n==71) cout << "Salvador" << endl;
    else if( n== 11) cout << "Sao Paulo" << endl;
    else if( n== 21) cout << "Rio de Janeiro" << endl;
    else if( n== 32) cout << "Juiz de Fora" << endl;
    else if( n== 19) cout << "Campinas" << endl;
    else if( n== 27) cout << "Vitoria" << endl;
    else if(n==31) cout << "Belo Horizonte" << endl;
    else cout << "DDD nao cadastrado" << endl;



    return 0;
}


