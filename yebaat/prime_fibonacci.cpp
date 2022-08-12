#include <iostream>
using namespace std;

int main () {

    int N;
    cin>>N;

    int array[N];
    int n_primes = 0;
    if (N % 2 == 0) {
        n_primes = N/2;
    } else {
        n_primes = (N/2) + 1;
    }


    
    int temp = 0;
    int pos = 1;

    for (int i = 2; i<=N*N*N; i++) {
        int count = 0;
        for (int j = 2; j<i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 0 && temp != n_primes) {
            array[pos] = i;
            pos = pos + 2;
            temp++;
        }
    }


    int n_fibs = N/2;

    int a = 1;
    int b = 1;
    int temp_2 = 0;
    int temp_3 = 0;
    int pos_2 = 0;

    for (int i = 0; i<N*N*N; i++) {
        if (temp_3 != n_fibs) {
            array[pos_2] = a;
            temp_3++;
            pos_2 = pos_2 + 2;
            temp_2 = a + b;
            a = b;
            b = temp_2;
        }
    }

    cout<<array[N-1]<<endl;


    return 0;
}