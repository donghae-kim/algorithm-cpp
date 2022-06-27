    #include<iostream>

    using namespace std;

    int main(){
        int N,K;
        cin >> N>>K;

        int N_result=1;
        int K_result =1;
        for(int i=0; i<K; i++){
            N_result *= (N-i);
            K_result *= i+1;
        }
        int result = N_result / K_result;
        cout << result;
    }