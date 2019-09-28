/*useful operator ==*/
template <typename InputIterator, typename ForwardIterator>
InputIterator find_first_of(InputIterator first, InputIterator last,
                            ForwardIterator s_first, ForwardIterator s_last)
{
    for(; first != last; ++first)
    {
        for(ForwardIterator it = s_first; it != s_last; ++it)
        {
            if(*first == *it)
            {
                return first;
            }
        }
    }
    return last;
}

/*useful BinaryPredicate*/
template <typename InputIterator, typename ForwardIterator, typename BinaryPredicate>
InputIterator find_first_of(InputIterator first, InputIterator last,
                            ForwardIterator s_first, ForwardIterator s_last,
                            BinaryPredicate bp)
{
    for(; first != last; ++first)
    {
        for(ForwardIterator it = s_first; it != s_last; ++it)
        {
            if(bp(*first, *it))
            {
                return first;
            }
        }
    }
    return last;
}
