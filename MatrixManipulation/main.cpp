#include <iostream>
#include <chrono>

#include "Matrix.h"
#include "Matrix.cpp"


int main (){

        Matrix A(2, 2, 1);

        A[1][1] = 0;


        A.Print();

        int t;
        std::cin >> t;

        auto start = std::chrono::high_resolution_clock::now();
        while (t--)
        {
                Matrix tmp = A.Pow(t - 1);
                std::cout << "Fib(" << t + 1 << "): " << (tmp[0][0] + tmp[0][1]) << '\n';
        }
        auto stop = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

        std::cout << "Time taken by insertion sort: " << duration.count() << " milliseconds";

        return 0;
}
