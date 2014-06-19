
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

		
		cout << endl;
		cout  << "The sum total with the sum function call: ";
		total = coding.sum(fixing);
		total.show();
		cout << endl;

		cout << endl;
		cout << "This is addition with the '+' operator: ";
		total = coding + fixing;
		total.show();
		cout << endl;
	
		cout << endl;
		cout  << "The sum total with the operator+ function call: ";
		total = coding.operator+(fixing);
		total.show();
		cout << endl;

		cout << endl;
		cout << "Coding * 2: " ;
		total = coding*2;
		total.show();
		cout<< endl;

		cout<<endl;
		total = 2 * fixing;
		cout << "The total 2 * fixing: ";
		total.show();
		cout << endl;
	
		cout << "New << op function ";
		cout << "Total: "<< total ;
		cout << endl;
		
		system("pause");
		return 0;
	}
