template <typename InputIterator, typename UnaryPredicate>
bool any_of(InputIterator first, InputIterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return true;
        }
    }
    return false;
}
