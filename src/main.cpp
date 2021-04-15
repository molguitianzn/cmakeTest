# include<iostream>
# include"testFunc.h"
int main()
{
    int num1 = 100;
    testFunc test(num1);
    test.printTest();
    int num2 = test.getTest();
    std::cout << "num2 = " << num2 << std::endl;
    return 0;
}