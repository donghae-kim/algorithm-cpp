#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    int result_x,result_y;
    cin>>a>>b>>c>>d;

    if(c-a>a){
        result_x = a;
    }
    else
        result_x = c-a;
    
    if(d-b>b){
        result_y = b;
    }
    else
        result_y = d-b;
    
    if(result_x>result_y){
        cout << result_y;
    }
    else{
        cout << result_x;
    }
}