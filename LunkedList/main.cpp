#include "Vector.h"
#include "List.h"
#include <iostream>

using namespace std;

using namespace Lunk;

int main(){

	Vector<int> va =
		Vector<int>(10, 20, 30);
	Vector<int> vb =
		Vector<int>(30, 20, 10);


	Vector<int> vc = va + vb;
	Vector<int> vd = vc + 10;
	Vector<int> ve = 10 + vd;

	List<Vector<int>>* list = new List<Vector<int>>();

	list->addNode(va);
	cout << list->count() << endl;
	list->addNode(vb);
	cout << list->count() << endl;
	list->addNode(vd, 10);
	cout << list->count() << endl;
	list->addNode(vc, 2);
	cout << list->count() << endl;
	list->addNode(ve);
	cout << list->count() << endl;

	list->deleteNode(2);
	cout << list->count() << endl;
	list->deleteNode(10);
	cout << list->count() << endl;
	list->deleteNode(ve);
	cout << list->count() << endl;

	list->get(2);
	list->get(100);
	

	return 0;
}