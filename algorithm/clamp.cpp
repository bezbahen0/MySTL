/*in C++17*/
template <typename T>
const T& clamp(const T& value, const T& min, const T& max)
{
    if(value < min)
    {
        return min;
    }
    else if(max < value)
    {
        return max;
    }
    else
    {
        return value;
    }
}

template <typename T, typename Compare>
const T& clamp(const T& value, const T& min, const T& max, Compare Compare)
{
    if(comp(value, min))
    {
        return min;
    }
    else if(comp(max, value))
    {
        return max;
    }
    else
    {
        return value;
    }
}

