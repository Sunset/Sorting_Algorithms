#include "Algorithms.h"
#include <iostream>
#include <vector>
using namespace std;

vector <int> Insertion(vector<int>temp,int size)
{
	int tmp,j;
	for(int i=1;i<size;i++)
	{
		j=i;
		while(j>0 && temp.at(j-1)>temp.at(j))
		{
			tmp=temp.at(j);
			temp.at(j)=temp.at(j-1);
			temp.at(j-1)=tmp;
			j--;
		}
	}
	return temp;
}