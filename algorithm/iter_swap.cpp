template <typename ForwardIterator1, typename ForwardIterator2>
void iter_swap(ForwardIterator1 a, ForwardIterator2 b)
{
    std::swap(*a, *b);
}
