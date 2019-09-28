template <typename InputIterator, typename OutputIterator, typename T>
OutputIterator replace_copy(InputIterator first, InputIterator last,
                            OutputIterator d_first,
                            const T& old_value, const T& new_value)
{
    for(; first != last; ++first)
    {
        if(*first == old_value)
        {
            *d_first++ = *first == old_value ? new_value : *first;
        }
    }
    return d_first
}
