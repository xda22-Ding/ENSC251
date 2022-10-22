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
