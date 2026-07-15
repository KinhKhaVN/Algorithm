#include "Matrix.h"
#include <iostream>
#include <vector>

const int mod = 111539786;

bool Matrix::canManipulate(Matrix &other)
{
        return (row == other.row) && (col == other.col);
}

bool Matrix::canMul(Matrix & other)
{
        return this->col == other.row;
}

bool Matrix::canPow()
{
        return this->row == this->col;
}

void Matrix::Resize(int n, int m)
{
        this->row = n;
        this->col = m;
}

void Matrix::Print()
{
        for (auto row : data) 
        {
                for (auto col : row)
                {
                        std::cout << col << " ";
                }
                std::cout << '\n';
        }
}

std::vector<int> & Matrix::operator[](int i)
{
        return data[i];
}

const std::vector<int> & Matrix::operator[](int i) const
{
        return data[i];
}

Matrix Matrix::operator+(Matrix &other)
{
        Matrix C(row, col);
        if (!canManipulate(other))
        {
                return C;
        }

        for (int i = 0; i < C.row; i++) {
                for (int j = 0; j < C.col; j++) {
                        C[i][j] = this->data[i][j] + other[i][j];
                }
        }
        return C;
}

Matrix Matrix::operator+(const Matrix &other) const
{
        Matrix C(row, col);
        for (int i = 0; i < C.row; i++) {
                for (int j = 0; j < C.col; j++) {
                        C[i][j] = this->data[i][j] + other[i][j];
                }
        }
        return C;
}

Matrix Matrix::operator-(Matrix &other)
{
        Matrix C(row, col);
        if (!canManipulate(other))
        {
                return C;
        }

        for (int i = 0; i < C.row; i++) {
                for (int j = 0; j < C.col; j++) {
                        C[i][j] = this->data[i][j] - other[i][j];
                }
        }
        return C;
}

Matrix Matrix::operator-(const Matrix &other) const
{
        Matrix C(row, col);
        for (int i = 0; i < C.row; i++) {
                for (int j = 0; j < C.col; j++) {
                        C[i][j] = this->data[i][j] - other[i][j];
                }
        }
        return C;
}

Matrix Matrix::operator*(Matrix & other)
{
        Matrix C(this->row, other.col);

        if (!canMul(other)) return C;


        for (int i = 0; i < this->row; i++)
                for (int j = 0; j < other.col; j++)
                        for (int k = 0; k < other.col; k++){
                                C[i][j] += 1ll * this->data[i][k] % mod * (other[k][j] % mod) % mod;
                                C[i][j] %= mod;
                        }

        return C;
}

Matrix Matrix::Identity(int n)
{
        Matrix A(n ,n);

        while (n--) {
                A[n][n] = 1;
        }

        return A;
}

Matrix Matrix::Pow(int time)
{
        Matrix base = *this, ans = Identity(row);

        for(; time > 0; time >>=1, base = base * base)
                if (time & 1) ans = ans * base;

        return ans;
}


