template <typename ForwardIterator, typename UnaryPredicate>
ForwardIterator remove(ForwardIterator first, ForwardIterator last, UnaryPredicate p)
{
    ForwardIterator resutl = first;

    for(; first != last; ++first)
    {
        if(!p(*first))
        {
            *result++ = *first; 
        }
    }
    return result;
}
