#ifndef LAB_7_CIRCLEBUFFER_HPP
#define LAB_7_CIRCLEBUFFER_HPP

#include <iostream>
#include <algorithm>

template <class T>
class CircleBuffer {
private:
    size_t _size, _capacity;
    T* data = nullptr;
public:
    class Iterator : public std::iterator<std::input_iterator_tag, T>
    {
    private:
        T* iterator;
    public:
        using difference_type = typename std::iterator<std::input_iterator_tag,T>::difference_type;

        explicit Iterator(T* it) : iterator(it)
        {
        }
        Iterator(const Iterator& other) : iterator(other.iterator)
        {
        };

        T& operator*() const {
            return *iterator;
        }

        Iterator& operator++() {
            ++iterator;
            return *this;
        }

        Iterator& operator--() {
            --iterator;
            return *this;
        }

        Iterator operator+(difference_type it) const {
            return Iterator(iterator + it);
        }

        Iterator operator-(difference_type it) const {
            return Iterator(iterator - it);
        }

        difference_type operator-(const Iterator& it) const {
            return iterator - it.iterator;
        }

        bool operator==(const Iterator& other) const {
            return iterator == other.iterator;
        }

        bool operator!=(const Iterator& other) const {
            return iterator != other.iterator;
        }

        bool operator> (const Iterator& other) const {
            return iterator > other.iterator;
        }

        bool operator< (const Iterator& other) const {
            return iterator < other.iterator;
        }
    };

    CircleBuffer(size_t c): _capacity(c), data(new T[_capacity]) {}

    CircleBuffer(const CircleBuffer& other): _size(other._size), _capacity(other._capacity), data(other.data) {}
    ~CircleBuffer() {
        delete data;
    }

    Iterator begin() const {
        return Iterator(data);
    }

    Iterator end() const {
        return Iterator(data + _size);
    }

    size_t capacity() const {
        return this->_capacity;
    }

    size_t size() const {
        return this->_size;
    }

    void insert(size_t ind, T x) {
        data[ind % _capacity] = x;
    }

    void insert(Iterator ind, T x) {
        *(ind) = x;
    }

    void push_front(T x)
    {
        if (_size < _capacity) {
            for (size_t i = _size; i >= 1; --i) {
                data[i] = data[i - 1];
            }
            data[0] = x;
            _size++;
        }
        else {
            for (size_t i = _capacity - 1; i >= 1; --i) {
                data[i] = data[i - 1];
            }
            data[0] = x;
        }
    }

    void push_back(T x) {
        if (_size < _capacity) {
            data[_size] = x;
            _size++;
        }
        else {
            for (size_t i = 1; i < _capacity; ++i) {
                data[i - 1] = data[i];
            }
            data[_capacity - 1] = x;
        }
    }


    void pop_back() {
        if (_size > 0) {
            _size--;
        }
    }
    void pop_front() {
        for (size_t i = 0; i < _size - 1; ++i) {
            data[i] = data[i + 1];
        }
        _size--;
    }


    void remove(size_t ind) {
        for (size_t i = ind + 1; i < _size; i++) {
            data[(i - 1) % _capacity] = data[i % _capacity];
        }
        _size--;
    }

    void resize(size_t newCapacity) {
        T* new_data = new T[newCapacity];
        _size = std::min(_size, newCapacity);
        for (int i = 0; i < _size; i++) {
            new_data[i] = data[i];
        }
        delete data;
        data = new_data;
        _capacity = newCapacity;
    }

    void infoBuf() {
        std::cout << "size: " << size() << std::endl;
        std::cout << "capacity: " << capacity() << std::endl;
    }
};

void intermediateResult(CircleBuffer<int>& buffer) {
    buffer.infoBuf();
    for (int i : buffer) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}
#endif //LAB_7_CIRCLEBUFFER_HPP
