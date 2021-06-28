#include <iostream>
#include "stack_template.h"

using namespace std;

int  main()
{

    cout <<  "Stack project run \n";
    
    int stack_size = 4;
    sstack<int> Stack(stack_size);
    cout << "Push data to Stack: \n";

    while (Stack.capacity() < stack_size) 
    {
        int num;
        cin >> num;
        Stack.push(num);
    }

    cout << "\n";

    cout << "Pop data from Stack: \n";

    for(int i = 0; i< Stack.size(); i++)
    {
        cout << Stack.pop() << " ";
    }

    
    cin.get(); // click enter for exit
    return 0;
}