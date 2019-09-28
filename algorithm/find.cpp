template <typename InputIterator, typename T>
InputIterator find(InputIterator first, InputIterator last, const T& value)
{
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            return first;
        }
    }
    return last;
}
