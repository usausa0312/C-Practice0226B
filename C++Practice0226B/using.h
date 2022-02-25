#pragma once
#include<iostream>
struct Test {
    using Integer = int;
};

template <typename T>
void func(typename T::Integer t) {
    std::cout << "A" << std::endl;
}

template <typename T>
void func(T t) {
    std::cout << "B" << std::endl;
}
