
#include "Time.h"

using std::cout;
using std::endl;

int main()
{
	Time planning;
	Time coding(2,40);
	Time fixing(5,55);
	Time total;

	cout << "Planning time = ";
	planning.show();
	cout << endl;

	cout << "Coding time = ";
	coding.show();
	cout << endl;

	cout << "Fixing time = ";
	fixing.show();
	cout << endl;

	total = coding.sum(fixing);
	total.show();
	cout << endl;

	cout << endl;
	cout << "This is addition with the '+' operator: " << endl;
	total = coding + fixing;
	total.show();
	cout << endl;
	
	cout << endl;
	cout << "Coding * 2: " << endl;
	total = coding*2;
	total.show();


	system("pause");
	return 0;
}
