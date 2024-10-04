#include <iostream>
using namespace std;

// ���丮�� ���� ����
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

// ���� ��� ���� ����
int binomial_coefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}   

int main() {
    int n, k;
    cin >> n >> k;
    cout << binomial_coefficient(n, k) << endl;
}