template <typename ForwardIterator, typename UnaryPredicate>
void replace(ForwardIterator first, ForwardIterator last,
             UnaryPredicate p, const T& new_value)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            *first = new_value;
        }
    }
}
