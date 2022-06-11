#include "Pair.h"

template<class T, class U>
inline Pair<T, U>::Pair()
{
}

template<class T, class U>
Pair<T, U>::Pair(T fst, U sec): first(fst), second(sec)
{
}

template<class T, class U>
T Pair<T, U>::getFirst() const
{
	return first;
}

template<class T, class U>
U Pair<T, U>::getSecond() const
{
	return second;
}

template class Pair<int, double>;
template class Pair<double, int>;
template class Pair <string, int>;