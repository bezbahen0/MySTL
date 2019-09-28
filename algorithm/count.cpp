template <typename InputIterator , typename T>
unsigned long count(InputIterator first, InputIterator last, const T& value)
{
    unsigned long count = 0;

    for(; first != last; ++first)
    {
        if(*first == value)
        {
            ++count;
        }
    }
    return count;
}
