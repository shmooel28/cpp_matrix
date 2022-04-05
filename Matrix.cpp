#include<string>
#include<iostream>
#include<vector>
#include"Matrix.hpp"

using namespace std;

namespace zich
{
    Matrix::Matrix(const int row, const int col)
    {
        vector<double> data;
        this->row = row;
        this->col = col;
    }

    Matrix::Matrix(const vector<double> data, const int row, const int col)
    {
        this->data = data;
        this->row = row;
        this->col = col;
    }
    Matrix::~Matrix(){
        return;
    }

    Matrix Matrix::operator+(Matrix const &mat)
    {
        return *this;
    }
    Matrix &Matrix::operator++()
    {
        return *this;
    }
    Matrix Matrix::operator++(const int num)
    {
        return *this;
    }
    Matrix &Matrix::operator+=(const Matrix &mat)
    {
        return *this;
    }
    Matrix Matrix::operator-(const Matrix &mat)
    {
        return *this;
    }
    Matrix &Matrix::operator--()
    {
        return *this;
    }
    Matrix Matrix::operator--(const int num)
    {
        
        return *this;
    }
    Matrix &Matrix::operator-=(const Matrix &mat)
    {
        return *this;
    }
    double Matrix::multiplication(const Matrix &mat, const int tempRow, const int tempCol)
    {
        return 0;
    }
    Matrix Matrix::operator*(const Matrix &mat)
    {
        return *this;
    }
    Matrix &Matrix::operator*=(const Matrix &mat)
    {
        return *this;
    }

    Matrix Matrix::operator*(const double scalar)
    {
        return *this;
    }
    Matrix &Matrix::operator*=(const double scalar)
    {
       return *this;
    }
    double Matrix::sumMatrix()
    {
        return 0;
    }
    bool Matrix::operator>(Matrix &mat)
    {
        return true;
    }
    bool Matrix::operator>=(Matrix &mat)
    {
        return true;
    }
    bool Matrix::operator<(Matrix &mat)
    {
        return true;
    }
    bool Matrix::operator<=(Matrix &mat)
    {
        return true;
    }
    bool Matrix::operator==(Matrix &mat)
    {
        return true;
    }
    bool Matrix::operator!=(Matrix &mat)
    {
        return false;
    }
    ostream & operator << (ostream &out, const Matrix &mat){
        out << '[';
        return out;
    }
    Matrix operator-(Matrix &mat){
        return mat;
    }
    Matrix operator*(const double scalar, Matrix &mat){
        return mat;
    }
}