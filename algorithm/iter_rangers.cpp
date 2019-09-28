template <typename ForwardIterator1, typename ForwardIterator2>
ForwardIterator2 swap_rangers(ForwardIterator1 first1, ForwardIterator1 last1, ForwardIterator2 first2)
{
    whil(first1 != last1)
    {
        std::iter_swap(first1++, first2++);
    }
    return first2;
}
