#include<bits/stdc++.h>
using namespace std;

int main(){
    //uri 1519
    freopen("/home/forhadmethun/Documents/OJ/URI_BEGINNER/in.txt","r",stdin);
    string str;
    while(getline(cin,str)){
        if(str == ".")break;
        stringstream ss(str);
        string temp;
        vector<string> vs;
        map<string, string> mss;
        while(ss >> temp){
            vs.push_back(temp);

        }

        for(auto it=vs.begin();it!=vs.end();it++){
            if(it!=vs.begin()){
                cout << " ";
            }
            if((*it).length() <=3){
             cout << *it;
            }
            else{
                string temp  = "";temp +=(*it)[0];
                temp+=".";
                cout << temp;// << ".";
                mss[temp] = *it;

            }
        }
        cout <<endl  <<  mss.size() << endl;
        for(auto it=mss.begin();it!=mss.end();it++){
            cout << it->first  << " = " << it->second << endl;
        }


        cout << endl;


    }
    return 0;
}