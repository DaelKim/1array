#include <iostream>
using namespace std;

int main() {
    int size = 3; // �迭�� ũ�� (��� ����)
    float A[] = { 1.0, 2.0, 3.0 };
    float B[] = { 4.0, 5.0, 6.0 };

    float result[] = { 0 }; // ���� ����� ������ �迭

    // �迭 A�� B�� ���� ��� �� ����� result �迭�� ����
    for (int i = 0; i < size; i++) {
        result[i] = A[i] * B[i];
    }

    // ��� ���
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

