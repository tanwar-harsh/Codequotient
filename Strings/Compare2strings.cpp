#include<bits/stdc++.h>
using namespace std;

void compareStrings(string a, string b){

    if(a > b){
        cout<<"Large"<<endl;
    }
    else if(a == b){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Small"<<endl;
    }

}

int main(){

    string a, b;
    cin>>a>>b;

    compareStrings(a,b);

    return 0;
}