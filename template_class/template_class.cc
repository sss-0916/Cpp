#include "template_class.h"

template <class T>
void SequenceList<T>::PushBack(const T& data){

	++_size;
	checkCapacity();
	_seq_list[_size - 1] = data;

}

template <class T>
void SequenceList<T>::PopBack(){

	--_size;

}

void slTest(){

	SequenceList<int> si;

	si.PushBack(1);
	si.PushBack(2);
	si.PushBack(3);
	si.PushBack(4);
	si.PushBack(5);

	si.Display();

	SequenceList<double> sd;
	sd.PushBack(1.11);
	sd.PushBack(2.22);
	sd.PushBack(3.33);
	sd.PushBack(4.44);
	sd.PushBack(5.55);

	sd.Display();

}

int main(){

	slTest();

	return 0;
}
