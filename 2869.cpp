#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,v;
    cin >> a>> b>> v;
    int result=0;
    double head = v-a;
    double tail = a-b;
    result = ceil(head/tail)+1;
    cout << result;
}