#include<iostream>
#include<string>
using namespace std;

int main(){
    
    while(1){
        string str;
        cin >> str;
        if(str=="0"){
            break;
        }
        for(int i=0 ; i<=str.length()-1; i++){
            if(str[i]==str[str.length()-1-i]){
                if(i == str.length()/2){
                    cout <<"yes\n";
                    break;
                }
            }
            else
            {
                cout << "no\n";
                break;
            }
        }
    }
}