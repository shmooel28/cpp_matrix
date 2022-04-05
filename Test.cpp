#include"Matrix.hpp"
#include "doctest.h"
#include <iostream>
#include <sstream>
#include <fstream>

using namespace zich;
using namespace std;

bool t = true;
TEST_CASE("check diffrent mat multi")
{
    std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    std::vector<double> arr = {3, 0, 0, 0,};
    Matrix a(identity, 3, 3);
    Matrix b{arr, 2, 2};
    for (size_t i = 0; i < 20; i++)
    {
        CHECK_THROWS(cout<<a*b<<endl);
    }
    
}