#include <cstddef>
#include <algorithm>
#include <iostream>
#include <initializer_list>

template <typename T>
struct Vector
{
    using value_type = T;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using reference = T&;
    using pointer = T*;
    using iterator = T*;
    
    pointer arr;
    size_type size = 0;
    size_type capacity = 0;
    
    Vector()
    {             
        capacity = 1;
        arr = new value_type[capacity];
    }

    //Vector(std::initializer_list<value_type> l) : arr(l);
  

    void push_back(value_type value)
    {
        if(size == capacity)
        {
            capacity *= 2;
            pointer temp = new value_type[capacity];
            std::copy(arr, arr + size, temp);
            delete arr;
            arr = temp;
        }
        arr[size++] = value;
    }

    void pop_back()
    {
        --size;    
    }

    void clear()
    {
        capacity = 1;
        size = 0;
        delete arr;
        arr = new value_type[capacity];
    }
    
    iterator begin()
    {
        return arr;
    }
    
    iterator end()
    {
        return arr + size;
    }

    size_type capasity()
    {
        return capacity;
    }

    reference operator[] (size_type index)
    {
        return arr[index];
    }

};

int main()
{
    return 0;
}
