#include <iostream>
#include <string.h>
using namespace std;

int main() {
    bool primeNum[1001];
    memset(primeNum, true, sizeof(primeNum));
    int N, sum = 0, num;
    cin >> N;

    primeNum[1] = false;
    for(int i = 2; i <= 32; i++){
        for(int j = i*i; j <= 1000; j += i){
            primeNum[j] = false;
        }
    }

    for(int i = 0; i < N; i++) {
        cin >> num;
        if(primeNum[num])
            sum++;
    }
    cout << sum;
    return 0;
}