//
//  main.cpp
//  cplusplus
//
//  Created by Shehab Tareque on 17/8/21.
//

#include <iostream>

func findPrimeNumbers() {
    int num;
    cout<< "Enter an integer number"<<endl;
    cin >> num;
    bool isPrime = true;
    for(int i = 2; i< num && isPrime; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
    break; }
    }
    if(isPrime)
        cout << num << " is a prime number";
    else
        cout << num << " is not a prime number";
}

func testContinue() {
    int i = 1;
    for ( ;i <= 10; i++)
    {
        if(i % 3 == 0)
            continue;
        cout << i << " ";
    }
}

func testBasic() {
    int i;
    for (i = 3;i <= 5;i++);
    cout << i << " ";
    
    
    for (int i = 3;i <= 5;);
    {
        cout << i << " ";
        i++;
        
    }
    
    for(inti=10; i<=9; i++)
        cout << i << " ";
    
    for(inti=1;;i++)
        cout << i << " ";
    
    for(;;)
        cout << "Hello" << endl;
    
    for(inti=10; i>5; i--)
        cout << i << " ";
    
}

func testFibanachiNumbers() {
    int previous1;
    int previous2;
    int current;
    int counter;
    
    int nthFibonacci;
    cout << "Enter the first two Fibonacci numbers: "<<endl;
    cin >> previous1 >> previous2;
    cout << "Enter the position of the desired Fibonacci number: ";
    cin >> nthFibonacci;
    if (nthFibonacci == 1)
        current = previous1;
    else if (nthFibonacci == 2)
        current = previous2;
    else
    {
        for( counter = 3; counter <= nthFibonacci; counter++)
        {
            current = previous2 + previous1;
            previous1 = previous2;
            previous2 = current;
        }
        
    }
    cout << "The Fibonacci number at position "
        << nthFibonacci << " is " << current;
}


int main() {
    testBasic();
    findPrimeNumbers();
    testContinue();
    testFibanachiNumbers();
    
    return 0;
    
}



