#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    if( b== 0)return a ;
    gcd(b,a%b);
}

bool isPythagorean(int a, int b, int c){
    return a*a ==  b*b + c* c || b * b ==a*a + c*c || c*c == a*a + b*b ;
}
int main(){
    //uri 1582
    cout << gcd(gcd(8,6),10) << endl;
    if(isPythagorean(6,8,11)){
        cout << "Pyth" << endl;
    }
    else{
        cout << "Not pyth" << endl;
    }


    return 0;
}