#include<iostream>

using namespace std;

int main(){
    int a, b, c;

    while(1){
        cin >> a >> b >> c;
         if(a==0 && b==0 && c==0)
            break;
        if(((c*c)==(a*a)+(b*b)) || ((a*a)==(c*c)+(b*b)) || ((b*b)==(a*a)+(c*c)))
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    return 0;
}