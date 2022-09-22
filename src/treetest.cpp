#include <set>
#include <iostream>
#include "s21_multiset.h"
void o(s21::set<int> t) {
    for (auto &i : t)
        std::cout << i;
    std::cout << std::endl;
}

int main(void) {
    s21::multiset<int> my_multiset;
    std::cout << my_multiset.size() << std::endl;
    return 0;
}
