#include<iostream>
#include<list>
#include <iterator>
using namespace std;

int main() {
	list<int> ls = {30, 40, 20, 15, 60, 80, 75, 4, 20};
	list<int>::iterator it;
	list<int>::iterator temp;
	int swap;

	//Output elements before being sorted
	cout << "Unsorted linked-list: ";
	for (it = ls.begin(); it != ls.end(); it++)
		cout << *it << " ";
	
	//Sort linked-list using Insertion Sort
	it = ls.begin();
	it++;
	for (; it != ls.end(); it++) {
		for (temp = it; temp != ls.begin(); temp--) {
			if (*temp < *prev(temp, 1)) {
				swap = *temp;
				*temp = *prev(temp, 1);
				*prev(temp, 1) = swap;
			}
		}
	}
	
	//Output elements after being sorted
	cout << endl << "Sorted linked-list: ";
	for (it = ls.begin(); it != ls.end(); it++)
		cout << *it << " ";
	cout << endl;
	system("pause");
	return 0;
}