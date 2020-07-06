// Cristian Lopez

#include<iostream>
#include<fstream>
#include<vector>
#include "Lab07Utility.h"

using namespace std;

int main()
{
	vector<string> products;
	vector<double> prices;
	string product;
	double price;
	ifstream fin;
	fin.open("Lab7_input.txt");
	if (fin.fail())
	{
		cout << "Input file failed to open" << endl;
	}

	while (!fin.eof())
	{
		fin >> product;
		products.push_back(product);
		fin >> price;
		prices.push_back(price);
	}

	return 0;
}