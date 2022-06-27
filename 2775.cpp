#include<iostream>

using namespace std;
int result=0;
void func(int a, int b);

int main(){
    int num, k, n;
    
    cin >> num;

    for(int i=0; i<num; i++){
        cin >> k>> n;
        func(k,n);
        cout << result<<"\n";
        result =0;
    }
    return 0;
}

void func(int a, int b){
    if(a==0){
        result+=b;
        return ;
    }
    for(int i=1; i<=b; i++){
        func(a-1,i);
    }
}