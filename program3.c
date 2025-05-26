// Question 3: Consider the recursive algorithm below,
// where the random(int n) spends one unit of time to return a random integer
// where the probability of each integer coming as random is evenly distributed within the range [0,n].
// If the average processing time is T(n), what is the value of T(6)?

#include <stdio.h>
#include <stdlib.h>

int random(int a)
{
    int i;
    int num = (rand() % (a + 1));
    return num;
}

int function(int n)
{
    int i = 0;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1); // does not matter for random number it will give 6 only
        printf("this\n");
        return function(i) + function(n - 1 - i);
    }
}
                                            // Time complexity is 6
int main()                                  // T6     1
{                                           //*  *
    function(6);                            //T0 T5     1 
    return 0;                               //  *  *
}                                           //  T0  T4    1
                                            //     *   *
                                            //    T0    T3   1
                                            //         *   *   
                                            //         T0  T2   1
                                            //           *   *
                                            //          T0    T1   1
                                            //               *   *
                                            //              T0    T0   1