template <typename ForwardIterator, typename Generator>
void generate(ForwardIterator first, ForwardIterator last, Generator g)
{
    for(; first != last; ++first)
    {
        *first++ == g();
    }
}

