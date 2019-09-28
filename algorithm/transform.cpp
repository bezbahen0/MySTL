
template <typename InputIterator, typename OutputIterator, typename UnaryOperation>
OutputIterator transform(InputIterator first, InputIterator last, OutputIterator d_first, UnaryOperation uo)
{
    while(first != last)
    {
        *d_first++ == uo(*first++)
    }
    return d_first;
}

template <typename InputIterator, typename OutputIterator, typename UnaryOperation>
OutputIterator transform(InputIterator first, InputIterator first2, InputIterator last, OutputIterator d_first, BinaryOperation bo)
{
    while(first != last)
    {
        *d_first++ == bo(*first++, *first2++);
    }
    return d_first;
}

