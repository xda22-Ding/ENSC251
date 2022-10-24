//stu_sort.cpp to implement your sorting functions
#include "stu_sort.hpp"

class DomesticStudent Order = DStudent; /**/
 void SortingDomesticStudent()
{
    int size = sizeof(Order)/size(Order[0]);
    class DomesticStudent Temp;
    int index;
    for(int i = 1; i < size - 1;i++ )
    {    
         index = i - 1;
         Temp =Order[i-1];
         for (int j=i+1;j < sie j++)
         {
            result = compareResarchScore(Temp, Order[j]);
            if(Temp > Order[j])
            {
               Temp = Order[j];
               index =j;
            } 
            if (Temp = Order[j])
            {
                  results2 = compareCGPA(Temp,Order[j]);
                  if(Temp > Order[j])
                    {
                        Temp = Order[j];
                        index = j;
                    }
                  if(Temp = Order[j])
                  {
                        results3 = compareProvence(Temp,Order[j]);
                        if(Temp > Order[j] )
                        {
                            Temp = Order[j];
                            index = j;
                        }

                  }

             
            }
              if(index != i - 1)
              {
                Order[index] = Order[i-1];
                Order[i-1] =Temp;
              }
          }

    }
    
}



//--------field sort

#include "stu_sort.hpp"
#include "student.hpp"
#include <string>
#include <iostream>
using namespace std;
/*-----------------------Implemt merge sort for CGPA-------------------------*/
void merge_CGPA_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    InternationalStudent * temp = new InternationalStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getCGPA() > A[j].getCGPA())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_CGPA_In (InternationalStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_CGPA_In(A, startIndex, middleIndex);
        mergeSort_CGPA_In(A, middleIndex + 1, lastIndex);
        merge_CGPA_In(A,startIndex,middleIndex,lastIndex);
    }
}
/*------------------Implemt merge sort for Resaerch Score--------------------*/
void merge_RScore_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    InternationalStudent * temp = new InternationalStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getResearchScore() > A[j].getResearchScore())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_RScore_In (InternationalStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_RScore_In(A, startIndex, middleIndex);
        mergeSort_RScore_In(A, middleIndex + 1, lastIndex);
        merge_RScore_In(A,startIndex,middleIndex,lastIndex);
    }
}
/*--------------------Implemt merge sort for First name----------------------*/
void merge_FN_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    InternationalStudent * temp = new InternationalStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getFirstName() < A[j].getFirstName())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_FN_In (InternationalStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_FN_In(A, startIndex, middleIndex);
        mergeSort_FN_In(A, middleIndex + 1, lastIndex);
        merge_FN_In(A,startIndex,middleIndex,lastIndex);
    }
}
/*--------------------Implemt merge sort for Last name----------------------*/
void merge_LN_In(InternationalStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    InternationalStudent * temp = new InternationalStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getLastName() < A[j].getLastName())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_LN_In (InternationalStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_LN_In(A, startIndex, middleIndex);
        mergeSort_LN_In(A, middleIndex + 1, lastIndex);
        merge_LN_In(A,startIndex,middleIndex,lastIndex);
    }
}

/*The function will take an InternationalStudent array, size, and char as input, 'A' for CGPA, 'B' for research score, 'C' for first name, 'D' for last name */
InternationalStudent * field_sort (const InternationalStudent * s, const int size, const char choice)
{
    //Prepare for the parameter and array
    int startIndex = 0;
    int lastIndex = size - 1;
    InternationalStudent *temp = new InternationalStudent [size];
    for (int i = 0; i < size; i++)
        temp[i] = s[i];
    
    //Classify Situation //Sort CGPA
    if (choice == 'A')
    {
        mergeSort_CGPA_In(temp, startIndex, lastIndex);
        return temp;
    }
    else if (choice == 'B')//Sort Resaerch Score
    {
        mergeSort_RScore_In(temp, startIndex, lastIndex);
        return temp;
    }
    else if (choice == 'C')
    {
        mergeSort_FN_In(temp, startIndex, lastIndex);
        return temp;
    }
    else if (choice == 'D')
    {
        mergeSort_LN_In(temp, startIndex, lastIndex);
        return temp;
    }
    else
    {
        cout << "Invalid Input." << endl;
        return 0;
    }
}
/*------------------field sort for international student is done.-----------*/



/*-----------------------Implemt merge sort for CGPA-------------------------*/
void merge_CGPA_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    DomesticStudent * temp = new DomesticStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getCGPA() > A[j].getCGPA())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_CGPA_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_CGPA_Do(A, startIndex, middleIndex);
        mergeSort_CGPA_Do(A, middleIndex + 1, lastIndex);
        merge_CGPA_Do(A,startIndex,middleIndex,lastIndex);
    }
}
/*------------------Implemt merge sort for Resaerch Score--------------------*/
void merge_RScore_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    DomesticStudent * temp = new DomesticStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getResearchScore() > A[j].getResearchScore())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_RScore_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_RScore_Do(A, startIndex, middleIndex);
        mergeSort_RScore_Do(A, middleIndex + 1, lastIndex);
        merge_RScore_Do(A,startIndex,middleIndex,lastIndex);
    }
}
/*--------------------Implemt merge sort for First name----------------------*/
void merge_FN_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    DomesticStudent * temp = new DomesticStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getFirstName() < A[j].getFirstName())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_FN_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_FN_Do(A, startIndex, middleIndex);
        mergeSort_FN_Do(A, middleIndex + 1, lastIndex);
        merge_FN_Do(A,startIndex,middleIndex,lastIndex);
    }
}
/*--------------------Implemt merge sort for Last name----------------------*/
void merge_LN_Do(DomesticStudent * A, const int& startIndex, const int& middleIndex, const int& lastIndex)
{
    int size = lastIndex - startIndex + 1;
    DomesticStudent * temp = new DomesticStudent [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (A[i].getLastName() < A[j].getLastName())
            temp[k++] = A[i++];
        else
            temp[k++] = A[i++];
    }
    while (i <= middleIndex)
        temp[k++] = A[i++];
    while (j <= lastIndex)
        temp[k++] = A[j++];
    for (int k = 0; k < size; k++)
        A[startIndex+k] = temp [k];
    delete [] temp;
}
void mergeSort_LN_Do (DomesticStudent *A, const int& startIndex, const int& lastIndex)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_LN_Do(A, startIndex, middleIndex);
        mergeSort_LN_Do(A, middleIndex + 1, lastIndex);
        merge_LN_Do(A,startIndex,middleIndex,lastIndex);
    }
}

/*The function will take an InternationalStudent array, size, and char as input, 'A' for CGPA, 'B' for research score, 'C' for first name, 'D' for last name */
DomesticStudent * field_sort (const DomesticStudent * s, const int size, const char choice)
{
    //Prepare for the parameter and array
    int startIndex = 0;
    int lastIndex = size - 1;
    DomesticStudent *temp = new DomesticStudent [size];
    for (int i = 0; i < size; i++)
        temp[i] = s[i];
    
    //Classify Situation //Sort CGPA
    if (choice == 'A')
    {
        mergeSort_CGPA_Do(temp, startIndex, lastIndex);
        return temp;
    }
    else if (choice == 'B')//Sort Resaerch Score
    {
        mergeSort_RScore_Do(temp, startIndex, lastIndex);
        return temp;
    }
    else if (choice == 'C')
    {
        mergeSort_FN_Do(temp, startIndex, lastIndex);
        return temp;
    }
    else if (choice == 'D')
    {
        mergeSort_LN_Do(temp, startIndex, lastIndex);
        return temp;
    }
    else
    {
        cout << "Invalid Input." << endl;
        return 0;
    }
}
/*------------------field sort for international student is done.-----------*/

