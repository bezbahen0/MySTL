template <typename OutputIterator, typename Size, typename T>
void fill_n(OutputIterator first, Size count, const T& value)
{
    for(Size i = 0; i < count; ++i)
    {
        *first++ = value;
    }
}

template <typename OutputIterator, typename Size, typename T>
OutputIterator fill_n(OutputIterator first, Size count, const T& value)
{
    for(Size i = 0; i < count; ++i)
    {
        *first++ = value;
    }
    return first;
}

