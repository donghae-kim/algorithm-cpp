#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num=0;
    cin >> num;
    int arr[10001]={0, };
    
    for(int i=1; i<=num; i++){
        int count=0;    
        cin >> count;
        arr[count]++;
    }


    for(int i=1; i<=10000; i++){
        for(int j= 0; j<arr[i]; j++){
            cout <<i<<"\n";
        }
    }
}