#include <iostream>
using namespace std;

int main() {
    int sum[10], N, * xxx;

    for (int i = 0; i < 10; i++) {
        N = i + 1;
        sum[i] = N * (N + 1) / 2;
    }

    xxx = sum + 6;
    xxx[-1] = 1;

    for (int i = 0; i < 10; i++) {
        cout << "sum[" << i << "] 주소:  0x"  << sum + i << " 값(hex): " << hex << sum[i] << endl;
    }

    cout << "xxx 주소: " << xxx << " 값(hex): " << hex << *xxx << endl;

    return 0;
}
