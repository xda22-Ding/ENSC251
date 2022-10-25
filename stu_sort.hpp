//header file stu_sort.hpp to declare your sorting functions
#ifndef stu_sort_hpp
#define stu_sort_hpp

#include <string> //you will have to use string in C++
#include <stdio.h>
#include "student.hpp"
#include <iostream>
using namespace std;

void SortingDomesticStudent( DomesticStudent DStudent[]);


/*                    CGPA sort for international student              */
void merge_CGPA_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_CGPA_In (InternationalStudent *A, const int& startIndex, const int& lastIndex);
/*                Research Score sort for international student              */
void merge_RScore_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_RScore_In (InternationalStudent *A, const int& startIndex, const int& lastIndex);
/*                First name sort for international student              */
void merge_FN_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_FN_In (InternationalStudent *A, const int& startIndex, const int& lastIndex);
/*                Last name sort for international student              */
void merge_LN_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_LN_In (InternationalStudent *A, const int& startIndex, const int& lastIndex);
/*                    CGPA sort for Domestic Student                    */
void merge_CGPA_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_CGPA_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex);
/*                 Research Score sort for Domestic Student              */
void merge_RScore_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_RScore_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex);
/*                  First name sort for Domestic student                */
void merge_FN_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_FN_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex);
/*                  Last name sort for Domestic student                */
void merge_LN_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex);
void mergeSort_LN_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex);


#endif /* stu_sort_hpp */
