
// Question1: Fine the time complexity of the func1 function in the program 
// shown in the snippet below:


#include<stdio.h>

void func1(int array[], int length)
{
    int sum=0;           //  f1 = k1
    int product =1;      //  

                                                        
    for (int i = 0; i <length; i++)
    {                                                           
        sum+=array[i];     // f2 = nk2                              
    }
 
    for (int i = 0; i < length; i++)
    {
        product*=array[i];  // f3 = nk3  length = n
    }
}
// Time complexity 
// Tn = f1 + f2 + f3           
//    = k1 + nk2 + nk3
//    = (k2 + k3)n
//    = k4n -> O(n)
//    O(length)

int main()
{
    int arr[] = {3,4,66};  
    func1(arr,3);
    return 0;
}
