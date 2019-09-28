template <typename InputIterator, typename UnaryPredicate>
InputIterator find_if_not(InputIterator first, InputIterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(!p(*first))
        {
            return first;
        }
    }
    return last;
}
