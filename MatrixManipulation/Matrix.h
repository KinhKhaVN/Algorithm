#ifndef MATRIX_H
#define MATRIX_H


#include <vector>
class Matrix
{
        public:
                int row;
                int col;
                std::vector<std::vector<int>> data;
        public:
                Matrix(int n = 1, int m = 1, int value = 0): row(n), col(m) {
                        data.resize(n, std::vector<int>(m, value));
                }

                void Init(int value);

                bool canManipulate(Matrix &other);
                bool canMul(Matrix & other);
                bool canPow();
                void Resize(int n, int m);
                void Print() ;
                // Overload
                Matrix operator+ (Matrix & other);
                Matrix operator+ (const Matrix & other) const;
                Matrix operator- (Matrix & other);
                Matrix operator- (const Matrix & other) const;
                Matrix operator* (Matrix & other);

                static Matrix Identity(int n);
                Matrix Pow(int time);

                std::vector<int> & operator[](int i);
                const std::vector<int> & operator[](int ) const;
};

#endif 
