#include <iostream>//header
using namespace std;//standad

void fib(int num)//function begins after calling,
{
    int n1 = 0, n2 = 1;//we have given that the 1st and 2nd term of fibonacchi series
    int nextTerm;//declaring a next tern variable
    for (int i = 1; i <= num; i++)//for loop begins from 1 to n
    {
        cout << n1 << endl;//printing the 1st term
        nextTerm = n1 + n2;//pinting the next term
        n1 = n2;//updating the values of n1 and n2 with n2 and nextTerm respectivley
        n2 = nextTerm;
    }
}

int main()//execution begins from here
{
    int n;//declaring a variable
    cout << "enter the number of terms of fibonacci series :" ;
    cin >> n;//taking input from user as number of terns

    fib(n);//calling the function nam fib
    return 0;
}
