template <typename ForwardIterator, typename T>
ForwardIterator remove(ForwardIterator first, ForwardIterator last, const T& value)
{
    ForwardIterator resutl = first;

    for(; first != last; ++first)
    {
        if(!(*first == value))
        {
            *result++ = *first; 
        }
    }
    return result;
}
