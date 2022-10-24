//stu_sort.cpp to implement your sorting functions
#include "stu_sort.hpp"
#include "student.hpp"
#include <string>
#include <iostream>
using namespace std;

/* Part 6*/
void SortingDomesticStudent(const DomesticStudent &DStudent)
{
    class DomesticStudent Order = DStudent;
    int size = sizeof(Order)/size(Order[0]);
    class DomesticStudent Temp;
    int index;
    int result;
    int result2;
    int result3;
    for(int i = 1; i < size - 1;i++ )
    {    
         index = i - 1;
         Temp =Order[i-1];
         for (int j=i+1;j < size j++)
         {
            result = compareResarchScore(Temp, Order[j]);
            if(result == 1)
            {
               Temp = Order[j];
               index =j;
            } 
            else if (result == 3)
            {
                  results2 = compareCGPA(Temp,Order[j]);
                  if(result2 == 1)
                    {
                        Temp = Order[j];
                        index = j;
                    }
                  else if(result2 == 3)
                  {
                        results3 = compareProvence(Temp,Order[j]);
                        if(result3 == 1 )
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
     cout << Order << endl;    
}

void SortingInternationalStudent(const InternationalStudent &IStudent)
{
    class InternationalStudent InternationalOrder = IStudent;
    int size = sizeof(InternationalOrder)/size(InternationalOrder[0]);
    class InternationalStudent Temp;
    int index;
    int SortNumber = size;
    int GradeReading;
    int GradeListening;
    int GradeWriting;
    int GradeSpeaking;
    int GradeTotal;
    int result;
    int result2;
    int result3;
    for(int k = 0; k < size; k++)
    {
        GradeListening = InternationalOrder[k].getToeflScore().getListening();
        GradeSpeaking = InternationalOrder[k].getToeflScore().getSpeaking();
        GradeReading = InternationalOrder[k].getToeflScore().getReading();
        GradeWriting = InternationalOrder[k].getToeflScore().getWriting();
        GradeTotal = GradeListening + GradeSpeaking + GradeReading + GradeWriting;
        if(GradeTotal < 93 )
        {
           Temp = InternationalOrder[k];
           InternationalOrder[k] = InternationalOrder[SortNumber - 1];
           InternationalOrder[SortNumber - 1] = Temp;
           SortNumber = SortNumber - 1;
           break;
        }
        else if(GradeListening < 20)
        {
           Temp = InternationalOrder[k];
           InternationalOrder[k] = InternationalOrder[SortNumber - 1];
           InternationalOrder[SortNumber - 1] = Temp;
           SortNumber = SortNumber - 1;
           break; 
        }
        else if(GradeSpeaking < 20)
        {
           Temp = InternationalOrder[k];
           InternationalOrder[k] = InternationalOrder[SortNumber - 1];
           InternationalOrder[SortNumber - 1] = Temp;
           SortNumber = SortNumber - 1;
           break; 
        }
        else if(GradeReading < 20)
        {
           Temp = InternationalOrder[k];
           InternationalOrder[k] = InternationalOrder[SortNumber - 1];
           InternationalOrder[SortNumber - 1] = Temp;
           SortNumber = SortNumber - 1;
           break; 
        }
        else if(GradeWriting < 20)
        {
           Temp = InternationalOrder[k];
           InternationalOrder[k] = InternationalOrder[SortNumber - 1];
           InternationalOrder[SortNumber - 1] = Temp;
           SortNumber = SortNumber - 1;
           break; 
        }
    }
    for(int i = 1; i < SortNumber - 1;i++ )
    {    
         index = i - 1;
         Temp =InternationalOrder[i-1];
         for (int j=i+1;j < SortNumber j++)
         {
            result = compareResarchScore(Temp, InternationalOrder[j]);
            if(result == 1)
            {
               Temp = InternationalOrder[j];
               index =j;
            } 
            else if (result == 3)
            {
                  results2 = compareCGPA(Temp,InternationalOrder[j]);
                  if(result2 == 1)
                    {
                        Temp = InternationalOrder[j];
                        index = j;
                    }
                  else if(result2 == 3)
                  {
                        results3 = compareCountry(Temp,InternationalOrder[j]);
                        if(result3 == 1 )
                        {
                            Temp = InternationalOrder[j];
                            index = j;
                        }
                  }             
            }
              if(index != i - 1)
              {
                InternationalOrder[index] = Order[i-1];
                InternationalOrder[i-1] =Temp;
              }
          }

    }
    class InternationalStudent PrintArray[SortNumber];
    for(int M = 0; M < SortNumber; M++)
    {
        PrintArray[M] = InternationalOrder[M];
    }
    cout << PrintArray << endl;
    
}


//--------field sort



/*                    CGPA sort for international student              */
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

/*                Research Score sort for international student              */
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

/*                First name sort for international student              */
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

/*                Last name sort for international student              */
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

/*                    CGPA sort for Domestic Student                    */
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

/*                 Research Score sort for Domestic Student              */
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

/*                  First name sort for Domestic student                */
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

/*                  Last name sort for Domestic student                */
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

