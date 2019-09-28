template <typename InputIterator, UnaryFunction>
UnaryFunction for_each(InputIterator first, InputIterator last, UnaryFunction f)
{
    for(; first != last; ++first)
    {
        f(*first);
    }
    return f;
}
