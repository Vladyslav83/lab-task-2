#include <iostream>
using namespace std;

int main() {
    const int N = 10;
    int A[N] = { 5, 2, 7, 3, 9, 2, 8, 1, 4, 6 };
    int T1 = 4;
    int T2 = 2;

    int minIndex = -1;  // зберігати індекс останнього мінімального елемента
    for (int i = 0; i < N; i++) {
        if (A[i] < T1 && A[i] >= T2) {
            if (minIndex == -1 || A[i] <= A[minIndex]) {
                minIndex = i;
            }
        }
    }

    if (minIndex != -1) {
        cout << "Last min element: " << A[minIndex] << endl;
        cout << "Index last min element : " << minIndex << endl;
    }
    else {
        cout << "Min element not found" << endl;
    }

    return 0;
}

