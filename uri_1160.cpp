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
    freopen("in.txt","r",stdin);
    int n;
    s1(n);
    while(n--){
        double a, b,c,d,i ,sum1=0,sum2=0;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        sum1 = a;
        sum2 = b;
        double temp1 = 0;
        double temp2 = 0;

        double in1 = (c*a)/100;
        double in2 = (d*b)/100;
        cout << in1 << "   " << in2<<endl;
        for(i=1;i<=100;i++){

            temp1+=in1;
            temp2+=in2;
            /*
            if(sum1+temp1>sum2+temp2)break;
            */
            //double p1 = a*pow((1+ (c/100)),i);
            //double p2 = b*pow ((1+ (d/100)) ,i ) ;
            cout << "temp1 " << temp1 <<" temp2: " << temp2 << endl;

            if(sum1+temp1>sum2+temp2)break;

        }
        if(i>100)cout << "Mais de 1 seculo."<<endl;
        else printf("%.0lf anos.\n",i);


    }


    return 0;
}


