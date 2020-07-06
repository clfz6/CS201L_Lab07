// Cristian Lopez

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include "Lab07Utility.h"

using namespace std;

int main()
{
	vector<double> DVD_prices, TV_prices, MUSIC_prices;
	string product;
	double price;
	ifstream fin;
	ofstream fout;
	fin.open("Lab7_input.txt");
	fout.open("output.txt");
	if (fin.fail())
	{
		cout << "Input file failed to open" << endl;
	}
	if (fout.fail())
	{
		cout << "Output file failed to open" << endl;
	}

	while (!fin.eof())
	{
		fin >> product;
		fin >> price;
		
		if (product == "DVD")
		{
			DVD_prices.push_back(price);
		}
		else if (product == "TV")
		{
			TV_prices.push_back(price);
		}
		else if (product == "MUSIC")
		{
			MUSIC_prices.push_back(price);
		}
	}

	fout << "		Total	Median	Mean" << endl;
	fout << "DVD	" << GetTotal(DVD_prices) << "	" << GetMedian(DVD_prices) << "	" << GetMean(DVD_prices) << endl;
	fout << "TV	" << GetTotal(TV_prices) << "	" << GetMedian(TV_prices) << "	" << GetMean(TV_prices) << endl;
	fout << "MUSIC	" << GetTotal(MUSIC_prices) << "	" << GetMedian(MUSIC_prices) << "	" << GetMean(MUSIC_prices) << endl;

	return 0;
}