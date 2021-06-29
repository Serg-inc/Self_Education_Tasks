#include <iostream>

using namespace std;

int FibonacciNum(int index)
{
	if (index == 0) return 0;
	else if (index == 1) return 1;
	else return FibonacciNum(index - 1) + FibonacciNum(index - 2);
};

int SumFibonacciNum(int count)
{
	if (count == 0 || count == 1) return 0;
	else return SumFibonacciNum(count-1) + FibonacciNum(count-1);
};

int  main()
{
    int indx = 0;    
    cout << "Enter index of Fibonacci Num: " ;
    cin >> indx;
    cout << "Fibonacci number: " << FibonacciNum(indx) << "\n";
////=====================================================================
    int n = 0;
    cout << "Calc sum of first n element of Fibonacci number" << "\n";
    cout << "Enter n: ";
    cin >> n;
    cout << "Sum: " << SumFibonacciNum(n) << endl;
    
    cin.get(); // click enter for exit
    return 0;
}


