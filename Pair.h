#pragma once
#include <cstring>
#include <iostream>

using std::string;

template <class T, class U>
class Pair {

private:
	T first;
	U second;

public:
	Pair();
	Pair(T fst, U sec);

	T getFirst() const;
	U getSecond() const;
};

template <class U >
class StringValuePair : public Pair <string, U> 
{

public:

	StringValuePair();

	StringValuePair(const string& abcd, U sec) : Pair <string, U>(abcd, sec) 
	{

	}

};

template<class U>
inline StringValuePair<U>::StringValuePair()
{
}





