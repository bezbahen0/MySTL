template <typename InputIterator, typename OutputIterator, typename UnaryPredicate>
OutputIterator remove_copy(InputIterator first, InputIterator last,
                           OutputIterator d_first, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(!(!p(*first)))
        {
            *d_first++ = *first;
        }
    }
    return d_first;
}
