//header file stu_sort.hpp to declare your sorting functions
#ifndef stu_sort_hpp
#define stu_sort_hpp

#include <string> //you will have to use string in C++
#include <stdio.h>
#include "student.hpp"
#include <iostream>
using namespace std;

template<class T, class D>
void merge_upwards (T *A, const int& startIndex, const int& middleIndex, const int& lastIndex, D *B);

template<class T, class D>
void mergeSort_upwards (T *A, const int& startIndex, const int& lastIndex, D *B);

template<class T, class D>
void merge_downwards (T *A, const int& startIndex, const int& middleIndex, const int& lastIndex, D *B);

template<class T, class D>
void mergeSort_downwards (T *A, const int& startIndex, const int& lastIndex, D *B);

template<class T>
T * field_sort (const T * s, const int size, const char choice);


#endif /* stu_sort_hpp */
