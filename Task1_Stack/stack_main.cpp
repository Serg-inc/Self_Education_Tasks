#include <iostream>
#include "stack_template.h"

using namespace std;

int  main()
{

    cout <<  "Stack project run \n";
    
    int stack_size = 4;
    
    stackOnArray<int> Stack(stack_size);

    cout << "Stack size: " << Stack.size() << "\n";
    
    cout << "Stack capacity: " << Stack.capacity() << "\n";

    cout << "Push data to stack, write and press enter  \n";

    while (Stack.capacity() < stack_size) 
    {
        int num;
        cin >> num;
        Stack.push(num);
    }

    cout << "\n" << "Stack capacity: " << Stack.capacity() << "\n";

    cout << "\n" << "Pop data from Stack: \n";

    for(int i = 0; i< Stack.size(); i++)
    {
        cout << Stack.pop() << " ";
    }

    cout << "\n" << "Stack capacity: " << Stack.capacity() << "\n";

    cin.get(); // click enter for exit
    return 0;
}