template <typename ForwardIterator>
ForwardIterator min_element(ForwardIterator first, ForwardIterator last)
{
    ForwardIterator min_el;

    for(; first != last; ++first)
    {
        if(*first < *min_el)
        {
            min_el = first;
        }
    }
    return min_el;
}

template <typename ForwardIterator, typename Compare>
ForwardIterator min_element(ForwardIterator first, ForwardIterator last, Compare comp){
    ForwardIterator min_el;

    for(; first != last; ++first)
    {
        if(comp(*first, *min_el))
        {
            min_el = first;
        }
    }
    return min_el;
}
