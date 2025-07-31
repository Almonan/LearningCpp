#include<iostream>

void foo(int)
{

}
// this file contains the 'main' function. Program execution starts here.
int main() 
{
	unsigned int x{ 5 };
	foo(x);
	std::cout << "Here is some text";
	return 0;
}