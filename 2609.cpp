#include<iostream>
//유클리드 호제법 사용해보기
using namespace std;

int main(){
    int n,m;
    cin >> n >>m;
    int min=0;
    int max=0;
    if(n>min){
        if(m>n){
            min = n;
            max = m;
        }
        min = m;
        max = n;
    }

    int min_result=0;
    int max_result=0;
    
    int r = max % min;
    while(r!=0){
        max = min;
        min = r;
        r = max %min;
    }

    cout << min<<" ";
    cout << (m*n)/min;
}