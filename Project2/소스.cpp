#include <iostream>
using namespace std;

int main() {
    int size = 3; // 배열의 크기 (요소 개수)
    float A[] = { 1.0, 2.0, 3.0 };
    float B[] = { 4.0, 5.0, 6.0 };

    float result[] = { 0 }; // 내적 결과를 저장할 배열

    // 배열 A와 B의 내적 계산 및 결과를 result 배열에 저장
    for (int i = 0; i < size; i++) {
        result[i] = A[i] * B[i];
    }

    // 결과 출력
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

