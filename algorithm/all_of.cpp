template <typename InputIterator, typename UnaryPredicate>
bool all_of(InputIterator first, InputIterator last, UnaryPredicate p)
{
    for(; first != last; ++first)
    {
        if(!p(*first))
        {
            return false;
        }
    }
    return true;
}
