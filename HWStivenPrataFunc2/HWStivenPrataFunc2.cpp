#include <iostream>
using namespace std;

template<typename T>
void max5(T arr[5], T& val) {
	val = arr[0];
	for (int i = 0; i < 5; i++) {
		if (val < arr[i]) 
		{ 
			val = arr[i]; 		
		}
	}
}

void show_text(char* str, int n = 0);

struct CandyBar {
	string name;
	double weight; 
	int colories;
};

void set_candy(CandyBar& str, const char* nm = "Millenium Munch", double wght = 2.85, int clrs=350);
void show_candy(const CandyBar& str);

int main()
{
	/*
	char mystr[] = "My text\n";
	show_text(mystr);
	show_text(mystr);
	show_text(mystr);
	show_text(mystr,1);
	show_text(mystr, 1);
	show_text(mystr, 1);
	show_text(mystr);
	*/


	/*
	CandyBar first;
	set_candy(first);
	show_candy(first);
	CandyBar second;
	set_candy(second, "My candy", 1.45, 250);
	show_candy(second);
	CandyBar CandyArr[3];
	CandyArr[0] = first;
	CandyArr[1] = second;
	set_candy(CandyArr[2], "Sashas candy", 500.0, 1000);
	show_candy(CandyArr[2]);
	*/

	int myarr[5]{ 10, 20,500,30, 123 };
	double myarr2[5]{ 10.45, 20,500.12,30.4, 123.4 };
	double max = 0;
	int max_int = 0;
	max5(myarr2, max);
	max5(myarr, max_int);
	cout <<max  << endl;
	cout << max_int << endl;
	
}

void show_text(char* str, int n)
{
	static int count;
	if (n == 0) {
		cout << str << endl;
	}
	else if(n!=0) {
		cout << "n is not zero!!!" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << i+1 << " " << str << endl;
		}

	}
	count++;
}

void set_candy(CandyBar& str, const char* nm, double wght, int clrs)
{
	str.name = nm;
	str.weight = wght;
	str.colories = clrs;
}

void show_candy(const CandyBar& str)
{
	cout << str.name << endl;
	cout << str.weight << endl;
	cout << str.colories << endl;
}
