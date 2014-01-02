#include "Algorithms.h"
using namespace std;
//from http://en.wikipedia.org/wiki/Selection_sort
// CREDITS GOES TO THAT WIKIPEDIA PAGE
//THIS IS ONLY FOR REFERENCES. I WANT TO KEEP AND DOCUMENT MOST ALGORITHMS FOR EASY CONVIENENCE
vector<int> Selection(vector<int>SelectionTemp){
	/* a[0] to a[n-1] is the array to sort */
	int i,j;
	int iMin;
 
	/* advance the position through the entire array */
	/*   (could do j < n-1 because single element is also min element) */
	for (j = 0; j < SelectionTemp.size()-1; j++) {
		/* find the min element in the unsorted a[j .. n-1] */
 
		/* assume the min is the first element */
		iMin = j;
		/* test against elements after j to find the smallest */
		for ( i = j+1; i < SelectionTemp.size(); i++) {
			/* if this element is less, then it is the new minimum */  
			if (SelectionTemp.at(i) < SelectionTemp.at(iMin)) {
				/* found new minimum; remember its index */
				iMin = i;
			}
		}
 
		/* iMin is the index of the minimum element. Swap it with the current position */
		if ( iMin != j ) {
			swap(SelectionTemp[j],SelectionTemp[iMin]);
		}
	}
	return SelectionTemp;
}