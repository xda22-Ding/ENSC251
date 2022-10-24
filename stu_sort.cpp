//stu_sort.cpp to implement your sorting functions
#include "stu_sort.hpp"
#include "student.hpp"
#include <string>
#include <iostream>
using namespace std;

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



//merge function
template<class T, class D>
void merge_upwards (T *A, const int& startIndex, const int& middleIndex, const int& lastIndex, D *B)
{
    int size = lastIndex - startIndex + 1;
    T * temp1 = new T [size];
    D * temp2 = new D [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (B[i] < B[j])
        {
            temp1[k++] = A[i++];
            temp2[k++] = B[i++];
        }
        else
        {
            temp1[k++] = A[i++];
            temp2[k++] = B[i++];
        }
            
    }
    while (i <= middleIndex)
    {
        temp1[k++] = A[i++];
        temp2[k++] = B[i++];
    }
    while (j <= lastIndex)
    {
        temp1[k++] = A[i++];
        temp2[k++] = B[i++];
    }
    for (int k = 0; k < size; k++)
    {
        A[startIndex+k] = temp1[k];
        B[startIndex+k] = temp2[k];
    }
    delete []temp1;
    delete []temp2;
}

template<class T, class D>
void mergeSort_upwards (T *A, const int& startIndex, const int& lastIndex, D *B)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_upwards(A, startIndex, middleIndex, B);
        mergeSort_upwards(A, middleIndex + 1, lastIndex, B);
        merge_upwards(A, startIndex, middleIndex, lastIndex, B);
    }
}

template<class T, class D>
void merge_downwards (T *A, const int& startIndex, const int& middleIndex, const int& lastIndex, D *B)
{
    int size = lastIndex - startIndex + 1;
    T * temp1 = new T [size];
    D * temp2 = new D [size];
    
    int i = startIndex;
    int j = middleIndex + 1;
    int k = 0;
    
    while (i <= middleIndex && j <= lastIndex)
    {
        if (B[i] > B[j])
        {
            temp1[k++] = A[i++];
            temp2[k++] = B[i++];
        }
        else
        {
            temp1[k++] = A[i++];
            temp2[k++] = B[i++];
        }
            
    }
    while (i <= middleIndex)
    {
        temp1[k++] = A[i++];
        temp2[k++] = B[i++];
    }
    while (j <= lastIndex)
    {
        temp1[k++] = A[i++];
        temp2[k++] = B[i++];
    }
    for (int k = 0; k < size; k++)
    {
        A[startIndex+k] = temp1[k];
        B[startIndex+k] = temp2[k];
    }
    delete []temp1;
    delete []temp2;
}
template<class T, class D>
void mergeSort_downwards (T *A, const int& startIndex, const int& lastIndex, D *B)
{
    if (startIndex >= lastIndex)
        return;
    else
    {
        int middleIndex = (startIndex + lastIndex) / 2;
        mergeSort_downwards(A, startIndex, middleIndex, B);
        mergeSort_downwards(A, middleIndex + 1, lastIndex, B);
        merge_downwards(A, startIndex, middleIndex, lastIndex, B);
    }
}

template<class T>
T * field_sort (const T * s, const int size, const char choice)
{
    int startIndex = 0;
    int lastIndex = size - 1;
    T *temp1 = new T [size];
    for (int i = 0; i < size; i++)
        temp1[i] = s[i];
    
    //CGPA sort
    if (choice == 'A')
    {
        float *temp2 = new float [size];
        for (int i = 0; i < size; i++)
            temp2[i] = s[i].getCGPA();
        mergeSort_downwards(temp1, startIndex, lastIndex, temp2);
        return temp1;
    }
    //Research Score sort
    else if (choice == 'B')
    {
        int *temp2 = new int [size];
        for (int i = 0; i < size; i++)
            temp2[i] = s[i].getResearchScore();
        mergeSort_downwards(temp1, startIndex, lastIndex, temp2);
        return temp1;
    }
    //First Name Sort
    else if (choice == 'C')
    {
        string *temp2 = new string [size];
        for (int i = 0; i < size; i++)
            temp2[i] = s[i].getFirstName();
        mergeSort_upwards(temp1, startIndex, lastIndex, temp2);
        return temp1;
    }
    //Last name
    else if (choice == 'D')
    {
        string *temp2 = new string [size];
        for (int i = 0; i < size; i++)
            temp2[i] = s[i].getLastName();
        mergeSort_upwards(temp1, startIndex, lastIndex, temp2);
        return temp1;
    }
    else
    {
        cout << "Invalid Input." << endl;
        return 0;
    }
    
}

