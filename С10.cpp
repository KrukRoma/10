#include <iostream>
using namespace std;

int main() {
    //1
    /*int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M]; 

    cout << "Enter the elements of array A:" << endl;
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Enter the elements of array B:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int sizeC = 0; 
    for (int i = 0; i < M; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            C[sizeC++] = A[i];
        }
    }

    cout << "Elements of array C:" << endl;
    for (int i = 0; i < sizeC; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;*/

    //2
    int M, N;
    cout << "Enter the size of array A: ";
    cin >> M;
    cout << "Enter the size of array B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M + N]; 

    cout << "Enter the elements of array A:" << endl;
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Enter the elements of array B:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int sizeC = 0;
    for (int i = 0; i < M; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            C[sizeC++] = A[i];
        }
    }

    for (int i = 0; i < N; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < M; ++j) {
            if (B[i] == A[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            C[sizeC++] = B[i];
        }
    }

    cout << "Elements of array C:" << endl;
    for (int i = 0; i < sizeC; ++i) {
        cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;
}
