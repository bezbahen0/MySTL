template <typename InputIterator, typename OutputIterator, typename T>
OutputIterator remove_copy(InputIterator first, InputIterator last,
                           OutputIterator d_first, const T& value)
{
    for(; first != last; ++first)
    {
        if(!(*first == value))
        {
            *d_first++ = *first;
        }
    }
    return d_first;
}
