template <typename BidirectionalIterator1, typename BidirectionalIterator2>
BidirectionalIterator2 copy_backward(BidirectionalIterator1 first,
                                     BidirectionalIterator1 last, 
                                     BidirectionalIterator2 d_last)
{
    while(first != last)
    {
        *(--d_last) = *(--last);
    }
    return d_last;
}
