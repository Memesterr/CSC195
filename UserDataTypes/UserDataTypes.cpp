// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Sandwich
{
public:
	Sandwich()
	{
		cout << "Constructor\n";
	}

	Sandwich(string name, float price) : name(name), price(price), isHot(false)
	{
		cout << "Constructor\n";
		/*this->name = name;
		this->price = price;*/
	}

	~Sandwich()
	{
		cout << "Destructor\n";
	}

	void Read()
	{
		cout << "Enter Name: ";
		cin >> name;
	}

	void Write();

private:
	string name;
	float price;
	bool isHot;
};

void Sandwich::Write()
{
	cout << "Name: " << name << endl;
}

// Structure
struct Point 
{
	int x;
	int y;
};

int main()
{
	int mx;
	int my;

	Point point;
	point.x = 300;
	point.y = 200;

	{
		// Scope
		int j = 5;
	}

	Sandwich sandwich("ham", 4.50);

	//sandwich.Read();
	sandwich.Write();

	cout << "End of Program.\n";

	enum class Difficulty
	{
		Easy,
		Medium,
		Hard
	};

	enum class Eggs
	{
		Easy,
		Scrambled,

	};

	Difficulty d = Difficulty::Easy;
	if (d == Difficulty::Easy) cout << "Easy\n";

	union Data
	{
		int i;
		float f;
		bool b;

	};

	Data data;
	data.i = 10;
	//data.f = 23.5f;
	data.b = true;

	cout << &data.i << endl;
	cout << &data.f << endl;

	cout << data.i << endl;
}

void f()
{
	int h = 5;
	h++;
}