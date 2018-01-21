#include <iostream>
using namespace std;

class Library
{
public:
	void run()
	{
		Step1();
		
		if (Step2())
		{
			Step3();
		}

		for (int i = 1; i < 5; i++)
			Step4(i);
		Step5();
	}
	~Library() {}
protected:
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
	virtual bool Step2() = 0;
	virtual void Step4(int) = 0;
};

class Application: public Library
{	
public:
	Application(){};
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

class AbstractClass
{
public:
	void TemplateMethod()
	{
		BaseMethod1();
		BaseMethod2();
		PrimitiveMethod1();
		PrimitiveMethod2();
	}
protected:
	virtual void PrimitiveMethod1() = 0;
	virtual void PrimitiveMethod2() = 0;

	void BaseMethod1()
	{
		cout << "AbstractClass:BaseMethod1()" << endl;
	}

	void BaseMethod2()
	{
		cout << "AbstractClass:BaseMethod2()" << endl;
	}

};

class ConcreteClass: public AbstractClass
{
public:
	virtual void PrimitiveMethod1()
	{
		cout << "ConcreteClass:PrimitiveMethod1()" << endl;
	}

	virtual void PrimitiveMethod2()
	{
		cout << "ConcreteClass:PrimitiveMethod2()" << endl;
	}


};

int main()
{
	Library* plib = new Application();
	plib->run();
	delete plib;

	AbstractClass *pb = new ConcreteClass();
	pb->TemplateMethod();

	return 0;
}

