#include "Algorithms.h"
#include <iostream>
#include <vector>
using namespace std;

vector <int> Insertion(vector<int>InsertionTemp)
{
	int temp,j;
	for(int i=1;i<InsertionTemp.size();i++)
	{
		j=i;
		while(j>0 && InsertionTemp.at(j-1)>InsertionTemp.at(j))
		{
			temp=InsertionTemp.at(j);
			InsertionTemp.at(j)=InsertionTemp.at(j-1);
			InsertionTemp.at(j-1)=temp;
			j--;
		}
	}
	return InsertionTemp;
}