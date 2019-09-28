template <typename T>
const T& min(const T& a, const T& b)
{
    return a < b ? a : b;
}

template <typename T, typename Compare>
const T& min(const T& a, const T& b, Compare comp)
{
    return comp(a, b) ? b : a;
}

template <typename T>
T min(std::initializer_list<T> ilist)
{
    return *std::min_element(ilist.begin(), ilist.end());
}

template <typename T, typename Compare>
T min(std::intializer_list<T> ilist, Compare comp)
{
    return *std::min_element(ilist.begin(), ilist.end(), comp);
}
