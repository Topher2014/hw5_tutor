#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int Num1, Num2, Num3, choice, answer;

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
    cin >> choice;

    if (choice == 1)
        {
        Num3=Num1+Num2;
        cout << "  " << setw(3) << Num1 << endl;
        cout << "+ " << setw(3) << Num2 << endl;
        cout << " ---- \n";
        }
    else if (choice == 2)
        {
        Num3=Num1-Num2;
        cout << "  " << setw(3) << Num1 << endl;
        cout << "- " << setw(3) << Num2 << endl;
        cout << " ---- \n";
        }
    else if (choice == 3)
        {
        Num3=Num1*Num2;
        cout << "  " << setw(3) << Num1 << endl;
        cout << "* " << setw(3) << Num2 << endl;
        cout << " ---- \n";
        }
    else if (choice == 4)
        {
        Num3=Num1/Num2;
        cout << Num1 << " / " << Num2 << " = ";
        }
    else if (choice == 5)
        exit(0);

    cin >> answer;

    if (answer == Num3)
        cout << "Congratulations! That is correct! \n";
    else
        cout << "Sorry, the correct answer is " << Num3 << endl;
        
}
