template <typename InputIterator, typename Size, typename OutputIterator>
OutputIterator copy_n(InputIterator first, Size count, OutputIterator result)
{
    if(count > 0)
    {
        *result++ = *first++;
        for(Size i = 1; i < count; ++i)
        {
            *result++ = *first++; 
        }
    }
    return result;
}
