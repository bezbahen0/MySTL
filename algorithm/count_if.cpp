template <typename InputIterator, typename UnaryPredicate>
unsigned long count_if(InputIterator first, InputIterator last, UnaryPredicate p)
{
    unsigned long count = 0;

    for(; first != last; ++first)
    {
        if(p(*first))
        {
            ++count;
        }
    }
    return count;
}
