#include <iostream>
#include <cstlib>
#include <ctime>

using namespace std;

int main()
{
	int Num1, Num2, Num3;

	srand (time(NULL));

	Num1 = rand() % 1000 + 1;
	Num2 = rand() % 1000 + 1;

	cout << "        Math Tutor Menu           \n";
	cout << "--------------------------------- \n";
	cout << "1. Addition problem               \n";
	cout << "2. Subtraction problem            \n";
	cout << "3. Multiplication problem         \n";
	cout << "4. Division problem               \n";
	cout << "5. Quit this program              \n";		
	cout << "--------------------------------- \n";
	cout << "Enter your choice (1-5): ";
