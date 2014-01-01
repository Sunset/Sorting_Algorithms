#include "Algorithms.h"
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	int max, number;
	vector<int> numbersList;
	cout<<"Amount of numbers? ";
	cin>>max;
	cout<<endl;
	while(max>0)
	{
		cin>>number;
		numbersList.push_back(number);
		max--;
	}

	vector<int> newList(Insertion(numbersList,numbersList.size()));
	cout<<"Sorted"<<endl;
	for(int i=0;i<newList.size();i++)
	{
		cout<<newList.at(i)<<endl;
	}
	system("pause");
}