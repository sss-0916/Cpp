#include "iostream"
#include "vector"
#include "algorithm"
#include "iterator"
#include "functional"
using namespace std;

int main()
{
	vector<double> v1;
	double dim[] = { 1.2, 4.3, 5.6, 7.8, 8.2, 4.2, 8.1, 5.3 };
	int cnt = sizeof(dim) / sizeof(double);
	v1.assign(dim, dim + cnt);
	cout << "The original vector v1 is below: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<double>(cout, ", "));
	cout << endl;
	/*---make_heap---*/
	make_heap(v1.begin(), v1.end());
	cout << "The heap is below made by vector v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<double>(cout, ", "));
	cout << endl;
	/*---pop_heap---*/
	pop_heap(v1.begin(), v1.end());
	v1.pop_back();
	cout << "The heap is below that the first element has been erased: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<double>(cout, ", "));
	cout << endl;
	/*---push---*/
	v1.push_back(13.2);
	push_heap(v1.begin(), v1.end());
	cout << "The heap is below that the new element has been pushed: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<double>(cout, ", "));
	cout << endl;
	/*---sort_heap---*/
	sort_heap(v1.begin(), v1.end());
	cout << "After the sort by sort_heap() algorithm, the heap is not a heap." << endl;
	cout << "vector v1: " << endl;
	copy(v1.begin(), v1.end(), ostream_iterator<double>(cout, ", "));
	cout << endl;
	system("pause");
	return 0;
}