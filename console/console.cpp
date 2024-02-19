#include <iostream>
#include <aisd_set/aisd_set.h>

using namespace std;
using namespace set_realization;

int main() {
	Set<int> a;
	a.insert(5);
	a.insert(2);
	a.insert(1);
	a.insert(3);
	a.insert(5);
	a.insert(4);
	a.insert(8);
	a.print();
	cout << a.contains(5) << " " << a.contains(4) << " " << a.contains(12) << endl;
	return 0;
}