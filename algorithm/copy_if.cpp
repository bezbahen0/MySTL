template <typename InputIterator, typename OutputIterator, UnaryPredicate>
OutputIterator copy_if(InputIterator first, InputIterator last, OutputIterator d_first, UnaryPredicate p)
{
    while(first != last)
    {
        if(p(*first))
        {
            *d_first++ = *first;
        }
        first++;
    }
    return d_first;
}
