#include <iostream>

using namespace std;

int FibonacciNum(int index)
{
	if (index == 0) return 0;
	else if (index == 1) return 1;
	else return FibonacciNum(index - 1) + FibonacciNum(index - 2);
};


int  main()
{
    int indx = 0;    
    cout << "Enter index of Fibonacci Num:" << "\n";
    cin >> indx;
    cout << "Fibonacci number: " << FibonacciNum(indx) << "\n";

    cout << "Calc sum of first n element of Fibonacci number" << "\n";
    cout << "Enter n: ";


    cin.get(); // click enter for exit
    return 0;
}


