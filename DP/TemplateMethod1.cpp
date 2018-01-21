#include <iostream>
using namespace std;

class Library
{
public:
	void Step1()
	{
		cout << "Library::Step1() --  ¿ªÊ¼" << endl;
	}

	void Step3()
	{
		cout << "Library::Step3()" << endl;
	}

	void Step5()
	{
		cout << "Library::Step5() --  ½áÊø" << endl;
	}
};

class Application
{
public:
	bool Step2()
	{
		cout << "Application::Step2()" << endl;
		return true;
	}

	void Step4(int i)
	{
		cout << "Application::Step4("<< i << ")" << endl;
	}

};

int main()
{
	Library lib;
	Application app;

	lib.Step1();

	if (app.Step2())
	{
		lib.Step3();
	}

	for (int i = 1; i < 5; i++)
	{
		app.Step4(i);
	}

	lib.Step5();

    return 0;
}

