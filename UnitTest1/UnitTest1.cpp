#include "pch.h"   
#include "CppUnitTest.h"
#include "../lab7.2.0/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int SumMinInEvenColumns(int** a, const int k, const int n);  


TEST_CLASS(UnitTest1)
{
public:

    
    TEST_METHOD(TestSumMinInEvenColumns)
    {
        
        int k = 3;  
        int n = 4; 
        int** matrix = new int* [k];
        matrix[0] = new int[n] { 1, 2, 3, 2 };
        matrix[1] = new int[n] { 5, 6, 7, 8 };
        matrix[2] = new int[n] { 9, 10, 11, 12 };

        
        int result = SumMinInEvenColumns(matrix, k, n);

       
        Assert::AreEqual(4, result); 

       
        for (int i = 0; i < k; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
};

