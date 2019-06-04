#include "string.h"

void String::reserve(size_t capacity){
	if(capacity > _capacity || capacity == 0){
		if(capacity % 8 == 0){
			capacity += 8;
		}
		else{
			capacity = (capacity / 8 + 1) * 8;
		}

		char* temp = new char[capacity];

		if(_str){
			strcpy(temp, _str);
		}

		delete[] _str;

		_str = temp;
		_capacity = capacity - 1;
	}
}

void String::resize(size_t size, char ch){
	if(size <= _size){
		_size = size;
	}
	else{
		reserve(size);

		memset(_str + _size, ch, size - _size);

		_size = size;
	}

	_str[_size] = '\0';
}

String& String::insert(size_t pos, char ch){
	assert(pos <= _size);

	++_size;
	if(_size > _capacity){
		reserve(_capacity * 2);
	}

	for(int i = _size; i > (int)pos; --i){
		_str[i] = _str[i - 1];
	}

	_str[pos] = ch;

	return *this;
}

String& String::insert(size_t pos, const char* str){
	assert(pos <= _size);

	int len = strlen(str);

	_size += len;

	if(_size > _capacity){
		reserve(_size);
	}

	for(int i = _size; i >= (int)pos + len; --i){
		_str[i] = _str[i - len];
	}

	strncpy(_str + pos, str, len);

	return *this;
}

String& String::push_back(char ch){
	insert(_size, ch);

	return *this;
}

String& String::append(const char* str){
	insert(_size, str);

	return *this;
}

String& String::erase(size_t pos, size_t len){
	assert(pos < _size);

	if(len >= _size - pos - 1){
		_size = pos;
		_str[_size] = '\0';
	}
	else{
		for(int i = pos; i < (int)_size; ++i){
			_str[i] = _str[i + len];
		}
	}

	return *this;
}

size_t String::find(char ch, size_t pos) const{
	for(int i = pos; i < (int)_size; ++i){
		if(_str[i] == ch){
			return i;
		}
	}

	return -1;
}

size_t String::find(const char* str, size_t pos) const{
	char* temp = strstr(_str + pos, str);

	if(!temp){
		return -1;
	}

	return temp - _str;
}

String& String::operator+=(char ch){
	insert(_size, ch);

	return *this;
}

String& String::operator+=(const char* str){
	insert(_size, str);

	return *this;
}

String String::operator+(char ch) const{
	String temp(*this);

	temp += ch;

	return temp;
}

String String::operator+(const char* str) const{
	String temp(*this);

	temp += str;

	return temp;
}

char& String::operator[](size_t pos){
	return *(_str + pos);
}

const char& String::operator[](size_t pos) const{
	return *(_str + pos);
}

bool String::operator>(const String& s) const{
	int ret = strcmp(_str, s._str);

	if(ret > 0){
		return true;
	}

	return false;
}

bool String::operator==(const String& s) const{
	int ret = strcmp(_str, s._str);

	if(!ret){
		return true;
	}

	return false;
}

bool String::operator>=(const String& s) const{
	return *this > s || *this == s;
}

bool String::operator<(const String& s) const{
	return !(*this >= s);
}

bool String::operator<=(const String& s) const{
	return !(*this > s);
}

bool String::operator!=(const String& s) const{
	return !(*this == s);
}

std::ostream& operator<<(std::ostream& _cout, const String& s){
	for(size_t i = 0; i < s.size(); ++i){
		_cout << s[i];
	}

	_cout << std::endl;

	return _cout;
}

std::istream& operator>>(std::istream& _cin, String& s){
	if(s._str){
		delete[] s._str;
		s._str = nullptr;
		s._size = 0;
		s._capacity = 0;
	}

	char* temp = new char[2048];

	_cin >> temp;

	int len = strlen(temp);

	s.reserve(len);

	strcpy(s._str, temp);

	s._size = len;

	return _cin;
}