// Question 2: Find the time complexity of the func function
// in the program from program2.c as follows:

void func(int n)
{
    int sum = 0;     // k1
    int product = 1;

    for (int i = 0; i < n; i++)  // -> 0 to n
    {
        for (int j = 0; j < n; j++)  // -> 0 to n
        {
            printf("%d , %d\n", i, j);  // k2
        }
    }
}

//Tn = k1 + (n+n+n+..........+(n-1)n)k2
//   = k1 + nk2(1 + 1 + ....)
//   = nk2(n)
//   = k2(n*n)

int main()
{
    func(4);
    return 0;
}