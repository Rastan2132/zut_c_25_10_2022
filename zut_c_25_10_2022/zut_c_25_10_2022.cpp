#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	char cmd;
	bool work = true;
	int a,w,e;
	double b;

	cout << "1-11 = q,w,e,r,t...a,s; ESC-exit"<<endl;
	do
	{
		cmd = _getch();
		switch (cmd)
		{
		case (113):
			system("cls");
			cout << "hello Word!\n";
			break;
		case (119):
			system("cls");
			cout << "bardzo" << endl<< "długi" << endl<< "napis"<<endl;
			break;
		case (101):
			system("cls");
			cout << R"(// \ & %)" << endl;
			break;
		case (114):
			system("cls");
			cout << "Enter count" << endl;
			cin >> a;
			cout << "Your count " << a << endl;
			break;
		case (116):
			system("cls");
			cout << "Enter count" << endl;
			cin >> b;
			cout << "Your count " << b << endl;
			break;
		case (121):
			system("cls");
			cout << "Enter 3 counts" << endl;
			cin >> a>> w >> e;
			cout << "Your counts " << a<< endl << w << endl << e  << endl;
			break;
		case (117):
			system("cls");
			cout << "Enter count" << endl;
			cin >> a;
			a++;
			cout << "Your count " << a << endl;
			break;
		case (105):
			system("cls");
			cout << "Enter 3 counts" << endl;
			cin >> a >> w >> e;
			cout << (a+w+e)/3<< endl;
			break;
		case (111):
			system("cls");
			for (int i = -1; i <= 0; )
			{
				cout << "Enter count(x>0)" << endl;
				cin >> a;
				if (a > 0)
				{
					cout << sqrt(a) << endl;
					i = 1;
				}
				else
				{
					cout << "error!!!" << endl;
					i = -1;
				}
			}

			break;
		case (112):
			system("cls");
			cout << "Enter count" << endl;
			cin >> a;
			cout << "Your |count| " << abs(a) << endl;
			break;
		case (97):
			system("cls");
			cout << "Enter count" << endl;
			cin >> b;
			cout << "Your count "<< round(b * 100) / 100 << endl;
			
			break;
		case (115):
			system("cls");
			cout << "Enter count" << endl;
			cin >> b;
			cout << "Your count " << endl;

			break;
		case (27):
			work = 0;
			break;
		}
	} while (work);
	return work;
}