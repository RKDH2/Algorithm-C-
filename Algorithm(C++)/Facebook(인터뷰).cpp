#include <iostream>
#include <string>
#include <algorithm>
// �Ǵ� #include <bits/stdc++.h> ����ϸ� �����Ѱ� �� ����ִ�.
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str; cin >> str;

    long long result = str[0] - '0';

    for (int i = 1; i < str.size(); ++i) {
        int num = str[i] - '0';
        if (num <= 1 || result <= 1) {
            result += num;
        }
        else {
            result *= num;
        }
    }

    cout << result << '\n';
}

// #include <bits/stdc++.h>

// using namespace std;

// string str;

// int main(void) {
//     cin >> str;

//     // ù ��° ���ڸ� ���ڷ� ������ ���� ����
//     long long result = str[0] - '0';

//     for (int i = 1; i < str.size(); i++) {
//         // �� �� �߿��� �ϳ��� '0' Ȥ�� '1'�� ���, ���ϱ⺸�ٴ� ���ϱ� ����
//         int num = str[i] - '0';
//         if (num <= 1 || result <= 1) {
//             result += num;
//         }
//         else {
//             result *= num;
//         }
//     }

//     cout << result << '\n';
// }