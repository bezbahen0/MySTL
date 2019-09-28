template <typename InputIterator, typename OutputIterator, typename UnaryPredicate>
OutputIterator replace_copy_if(InputIterator first, InputIterator last,
                            OutputIterator d_first,
                            UnaryPredicate, const T& new_value)
{
    for(; first != last; ++first)
    {
        if(*first == old_value)
        {
            *d_first++ = p(*first) ? new_value : *first;
        }
    }
    return d_first
}
