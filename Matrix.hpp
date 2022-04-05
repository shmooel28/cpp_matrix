#pragma once

#include<string>
#include<iostream>
#include<vector>

using namespace std;

namespace zich
{
    class Matrix
    { 
    public:
        int row;
        int col;
        vector<double> data;
        Matrix(vector<double>,int,int);
        Matrix(const int row, const int col);
        ~Matrix();
        //compare function
        bool operator==(Matrix &mat);
        bool operator!=(Matrix &mat);
        bool operator<=(Matrix &mat);
        bool operator<(Matrix &mat);
        bool operator>(Matrix &mat);
        bool operator>=(Matrix &mat);

        //plus, minus function
        Matrix &operator+=(const Matrix &n);
        Matrix &operator-=(const Matrix &n);

        Matrix &operator++();         // prefix  - ++a
        Matrix operator++(int); // postfix - a++

        Matrix &operator--();         // prefix  - --a
        Matrix operator--(int); // postfix - a--

            //plus, minus function
        Matrix operator+(Matrix const &mat);
        Matrix operator-(const Matrix &mat);
            //unary function
        friend Matrix operator+(Matrix &mat);
        friend Matrix operator-(Matrix &mat);

            //mul with double num function
        Matrix operator*(const Matrix &mat);
        Matrix& operator*=(const Matrix &mat);
        friend Matrix operator*(const double scalar, Matrix &mat);

        Matrix operator*(const double scalar);
        Matrix& operator*=(const double scalar);
        double multiplication(const Matrix &mat, const int tempRow, const int tempCol);
        double sumMatrix();
            //input, output
        friend std::ostream &operator<<(std::ostream &os, const Matrix &mat);
        friend std::istream &operator>>(std::istream &is, Matrix &mat);
    };
    
}