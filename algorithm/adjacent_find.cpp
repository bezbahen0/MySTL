template <typename ForwadIterator>
ForwadIterator adjacent_find(ForwadIterator first, ForwadIterator last)
{
    if(first == last)
    {
        return last;
    }
    ForwadIterator next = first;
    ++next;
    for(; next != last; ++next, ++first)
    {
        if(*first == *next)
        {
            return first;
        }
    }
    return last;
}

template <typename ForwadIterator, typename BinaryPredicate>
ForwadIterator adjacent_find(ForwadIterator first, ForwadIterator last, BinaryPredicate bp)
{
    if(first == last)
    {
        return last;
    }
    ForwadIterator next = first;
    ++next;
    for(; next != last; ++next, ++first)
    {
        if(bp(*first, *next))
        {
            return first;
        }
    }
    return last;
}

