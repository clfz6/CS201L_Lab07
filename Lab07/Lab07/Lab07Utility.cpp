#include "Lab07Utility.h"


double GetTotal(vector<double> prices)
{
	double total = 0;
	int size;
	size = prices.size();
	for (int i = 0; i < size; i++)
	{
		total += prices[i];
	}
	return total;
}
double GetMean(vector<double> prices)
{
	double mean, total = 0;
	int size;
	size = prices.size();
	for (int i = 0; i < size; i++)
	{
		total += prices[i];
	}
	mean = total / size;
	return mean;
}
double GetMedian(vector<double> prices)
{
	double median;

	return median;
}