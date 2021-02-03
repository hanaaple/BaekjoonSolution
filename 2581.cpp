#include <iostream>
#include <string.h>
using namespace std;

int main() {
    bool primeNum[10001];
    memset(primeNum, true, sizeof(primeNum));
    int N, M, sum = 0, minPrime;
    cin >> M >> N;

    primeNum[1] = false;
    for(int i = 2; i <= 100; i++){
        for(int j = i*i; j <= 10000; j += i){
            primeNum[j] = false;
        }
    }

    for(int i = N; i >= M; i--) {
        if(primeNum[i]) {
            sum += i;
            minPrime = i;
        }
    }

    if(sum == 0)
        cout << -1;
    else
        cout << sum << '\n' << minPrime;
    return 0;
}