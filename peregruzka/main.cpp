#include <iostream>

using namespace std;

class Vektor
{
public:
	int Arr[3];
	
	Vektor(int A, int B, int C)
	{
		Arr[0] = A;
		Arr[1] = B;
		Arr[2] = C;
	}

	friend Vektor operator +(Vektor& V1, Vektor& V2)
	{
		return Vektor(V1.Arr[0] + V2.Arr[0], V1.Arr[1] + V2.Arr[1], V1.Arr[2] + V2.Arr[2]);
	}

	int operator()(int index)
	{
		return Arr[index];
	}

	friend int operator == (Vektor& V1, Vektor& V2)
	{		return ((V1.Arr[0] == V2.Arr[0])&& (V1.Arr[1] == V2.Arr[1])&& (V1.Arr[2] == V2.Arr[2]));	}	friend int operator > (Vektor& V1, Vektor& V2)
	{		return ((V1.Arr[0] > V2.Arr[0]) && (V1.Arr[1] > V2.Arr[1]) && (V1.Arr[2] > V2.Arr[2]));	}


	~Vektor() {};
	void Vektor::print()
	{
		cout << "Arr[0] = " << Arr[0] << endl;
		cout << "Arr[1] = " << Arr[1] << endl;
		cout << "Arr[2] = " << Arr[2] << endl;
	}
};

void main()
{
	setlocale(LC_CTYPE, "Russian");
	Vektor V1(1, 2, 3);
	Vektor V2(4, 5, 6);
	Vektor V3(0,0,0);
	Vektor V4(5, 7, 9);
	V3 = V1 + V2;
	V3.print();
	cout << V2(1) << endl;
	
	if (V3 == V4)
	{
		cout << "Вектора равны" << endl;
	}

	if (V2 > V1)
	{
		cout << "Вектор V2>V1" << endl;
	}
}
