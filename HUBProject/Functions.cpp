//#include "Functions.h"
//
//Functions::Functions()
//{
//
//}
//
//int Functions::Addition(int a, int b)
//{
//	return a + b;
//}
//
//int Functions::Subtraction(int a, int b)
//{
//	return a - b;
//}
//
//void Functions::Output()
//{
//	char op;
//	int a, b;
//
//	std::cout << "First number: ";
//	std::cin >> a;
//
//	std::cout << "Second number: ";
//	std::cin >> b;
//
//	std::cout << "Add (+) or subtract (-)? ";
//	std::cin >> op;
//
//	OperationPointer operation = getOperation(op);
//
//	if (operationPointer != nullptr)
//	{
//		std::cout << "Result: " << operation(a, b) << std::endl;
//	}
//	else
//	{
//		std::cout << "OperationPointer is null." << std::endl;
//	}
//}
//
//void Functions::CountDownFrom(int number)
//{
//	// Base case or guard clause, how we ensure the recursive function will end.
//	if (number <= 0)
//	{
//		return;
//	}
//
//	std::cout << number << std::endl;
//
//	// Call ourselves again with a different parameter.
//	CountDownFrom(number - 1);
//}
//
//Functions::~Functions()
//{
//
//}
