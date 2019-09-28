template <typename BiderectionalIterator>
void reverce(BiderectionalIterator first, BiderectionalIterator last)
{
    while((*first != *last) && (*first != *last--))
    {
        std::swap(*first++, *last);
    }
}
