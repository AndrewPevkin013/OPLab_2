#ifndef UNTITLED1_ARRAY_HPP
#define UNTITLED1_ARRAY_HPP

#include <initializer_list>
#include <exception>

template <typename T, int N>
class Array
{
private:
    T* m;

public:
    Array() {
        m = new T[N]();
    }
    Array(std::initializer_list<int> list) : Array() {
        int count = 0;
        for (auto& el : list) {
            m[count++] = el;
        }
    }
    int size() {
        return N;
    }
    T& operator[](int i)
    {
        if (i > N - 1) {
            throw std::exception("Error");
        }
        else {
            return m[i];
        }
    }
};


#endif //UNTITLED1_ARRAY_HPP
