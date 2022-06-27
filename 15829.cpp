#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int n;
    cin >> n;

    string hash;
    cin >> hash;
    unsigned long long r=1;
    
    unsigned long long result=0;
    for(int i=0; i<n; i++){
        result += (hash[i]-96)*r;
        result %= 1234567891;
        r*=31;
        r %= 1234567891;
    }
    
    cout << result;
}