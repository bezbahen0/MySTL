template <typename OutputIterator, typename Size, typename Generator>
OutputIterator generate_n(OutputIterator first, Size count, Generator g)
{
    for(Size i = 0; i < count; ++i)
    {
        *first++ = g();
    }
    return first;
}
