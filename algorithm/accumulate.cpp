template <typename InputIterator, typename T>
T accumulate(InputIterator first, InputIterator last, T value)
{    
    for(; first != last; ++first)
    {
        value += *first;
    }
    return value;
}

template <typename InputIterator, typename BinaryOperation,typename T>
T accumulate(InputIterator first, InputIterator last, BinaryOperation bp, T value)
{    
    for(; first != last; ++first)
    {
        value = bp(value, *first);
    }
    return value;
}


