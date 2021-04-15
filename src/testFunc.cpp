# include "testFunc.h"
testFunc::testFunc(int inputInt)
{
    priInt = inputInt;
}
void testFunc::printTest()
{
    std::cout << "the testFunc class interger is: " << priInt << std::endl;
}
int testFunc::getTest()
{
    return priInt;
}
testFunc::~testFunc()
{
}