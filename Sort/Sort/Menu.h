#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printMenu()
{
	cout<<"Wwat kind of sorting do you want to do?"<<endl<<endl;
	cout<<"A: Insertion Sort"<<endl;
	cout<<"B: Selection Sort"<<endl;
	cout<<"C: Quick Sort"<<endl;
	cout<<"D: Merge Sort"<<endl;
}

void printResult(vector <int> result)
{
	for(int i=0;i<result.size();i++)
	{
		cout << result.at(i)<< " ";
	}
	cout<<endl;
}