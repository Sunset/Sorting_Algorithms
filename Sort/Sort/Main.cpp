#include "Algorithms.h"
#include "Menu.h"
#include <iostream>
#include <vector>
#include <array>
#include <time.h>
using namespace std;

//THIS IS ONLY FOR REFERENCES. I WANT TO KEEP AND DOCUMENT MOST ALGORITHMS FOR EASY CONVIENENCE
//SOME WILL BE CODED BY ME, SOME WILL BE FROM SITES AND MODIFIED
int main()
{
	int max, number;
	char SortSelect=' ';
	vector<int> UnsortedList,SortedList;
	cout<<"Amount of numbers? ";
	cin>>max;
	cout<<endl;
	while(max>0)
	{
		cin>>number;
		UnsortedList.push_back(number);
		max--;
	}
	printMenu();
	while(SortSelect!='Q')
	{
		cin>>SortSelect;
		if(SortSelect=='A')
		{
			clock_t timer = clock();
			SortedList = Insertion(UnsortedList);
			float duration = ((float)(clock() - timer)/CLOCKS_PER_SEC);
			cout<<"Your result of Insertion Sort is: "<<endl;
			cout<<"Time it took is "<<duration<<endl;
			printResult(SortedList);
		}
		else if(SortSelect=='B')
		{
			clock_t timer = clock();
			SortedList = Selection(UnsortedList);
			float duration = ((float)(clock() - timer)/CLOCKS_PER_SEC);
			cout<<"Your result of Selection Sort is: "<<endl;
			cout<<"Time it took is "<<duration<<endl;
			printResult(SortedList);
		}
		printMenu();
	}


	system("pause");
}