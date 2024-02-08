unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    } else
    {
        unsigned long long int a = 0;
        unsigned long long int b = 1;
        unsigned long long int res = 0;
        unsigned long long int larg = 0;
        for (unsigned int i = 2; i <= n; i++)
        {
            res = a + b;
            a = b;
            b = res;
            larg = res;
        }
 
        return res;
    }
}