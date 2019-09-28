template <typename ForwardIterator>
ForwardIterator max_element(ForwardIterator first, ForwardIterator last)
{
    ForwardIterator max_el;

    for(; first != last; ++first)
    {
        if(*first > *max_el)
        {
            max_el = first;
        }
    }
    return max_el;
}

template <typename ForwardIterator, typename Compare>
ForwardIterator max_element(ForwardIterator first, ForwardIterator last, Compare comp){
    ForwardIterator max_el;

    for(; first != last; ++first)
    {
        if(comp(*first, *max_el))
        {
            max_el = first;
        }
    }
    return max_el;
}
