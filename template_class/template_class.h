#pragma once

#include <iostream>
#include <cstdlib>
#include <cassert>
using std::cout;
using std::endl;

template <class T>
class SequenceList{
	public:
		SequenceList(int capacity = 10){

			_capacity = capacity;
			_size = 0;
			_seq_list = (T*)malloc(sizeof(T) * _capacity);
			assert(_seq_list != NULL);

		}

		~SequenceList(){

			free(_seq_list);
			_seq_list = NULL;
			_size = 0;
			_capacity = 0;

		}

		void PushBack(const T& data);

		void PopBack();

		void Display() const{

			size_t i = 0;

			for(; i < _size; ++i){
				cout << _seq_list[i] << " ";
			}
			cout << endl;
		}

	private:
		void checkCapacity(){

			if(_size >= _capacity){
				_capacity *= 2;
				_seq_list = (T*)realloc(_seq_list, sizeof(T) * _capacity);
				assert(_seq_list != NULL);
			}

		}

	private:
		T* _seq_list;
		size_t _size;
		size_t _capacity;
};

void slTest();
