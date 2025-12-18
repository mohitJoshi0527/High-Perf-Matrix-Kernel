#include <iostream>
#include <vector>
#include <chrono>
#include <random>
using namespace std;
// Size of the Matrix (1024 x 1024)
const int N = 1024;

// Helper to fill matrix with random numbers
void fillMatrix(vector<vector<double>>& mat) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0.0, 1.0);
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            mat[i][j] = dis(gen);
}
void multiplyNaive(const vector<vector<double>>& A,
                   const vector<vector<double>>& B,
                   vector<vector<double>>& C) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    vector<vector<double>> A(N, vector<double>(N));
    vector<vector<double>> B(N, vector<double>(N));
    vector<vector<double>> C(N, vector<double>(N, 0.0));

    fillMatrix(A);
    fillMatrix(B);

    std::cout << "Starting Naive Multiplication (" << N << "x" << N << ")..." <<endl;

    auto start = chrono::high_resolution_clock::now();
    multiplyNaive(A, B, C);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = end - start;
    cout << "Naive Time: " << elapsed.count() << " seconds" <<endl;

    return 0;
}