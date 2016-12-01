#include<bits/stdc++.h>
using namespace std;

int main(){
    //uri 2049
    freopen("/home/forhadmethun/Documents/OJ/URI/in.txt","r",stdin);
    string str1,str2;
    int tc = 1;
    //cout <<"test" <<endl;
    while(getline(cin,str1)){

        if(str1 == "0")break;
        getline(cin,str2);
        printf("Instancia %d\n",tc++);
        cout << "------------------> " << str2.find(str1) << endl;
        if(str2.find(str1) != string::npos){
            cout << "verdadeira" << endl;
        }
        else{
            cout << "falsa" << endl;
        }
        cout << endl;


    }
    return 0;
}