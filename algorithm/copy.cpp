template <typename InputIterator, typename OutputIterator>
OutputIterator copy(InputIterator first, InputIterator last, OutputIterator d_first)
{
    while(first != last)
    {
        *d_first++ = *first++;
    }
    return d_first;
}
