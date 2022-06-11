#pragma once


template <class T>
class Pair1 {

private: 
	T first;
	T second;

public:

	Pair1(T fst, T sec);
    Pair1();

	T getFirst() const;
	T getSecond() const;


};


template<class T>
Pair1<T>::Pair1(T fst, T sec) : first(fst), second(sec)
{
}

template<class T>
Pair1<T>::Pair1()
{
}


template<class T>
T Pair1<T>::getFirst()const
{
	return first;
}

template<class T>
T Pair1<T>::getSecond() const
{
	return second;
}


