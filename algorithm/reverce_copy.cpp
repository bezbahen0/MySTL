template <typename InputIterator, typename OutputIterator>
OutputIterator reverce_copy(InputIterator first, InputIterator last, OutputIterator d_first)
{
    while(first != last)
    {
        *d_first++ = *last--;
    }
    return d_first;
}
