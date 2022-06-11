
#include <iostream>
#include <string>
#include "Pair1.h"
#include "Pair.h"

int main()
{
    Pair1<int> p1(6, 9);
    std::cout << "Pair: " << p1.getFirst() << ' ' << p1.getSecond() << '\n';

  const Pair1<double> p2(3.4, 7.8);
    std::cout << "Pair: " << p2.getFirst() << ' ' << p2.getSecond() << '\n';

    Pair<int,double> p11(6, 7.8);
    std::cout << "Pair: " << p11.getFirst() << ' ' << p11.getSecond() << '\n';

    const Pair<double, int> p22(3.4, 9);
    std::cout << "Pair: " << p22.getFirst() << ' ' << p22.getSecond() << '\n';

    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.getFirst() << ' ' << svp.getSecond() << '\n';

    return 0;
}