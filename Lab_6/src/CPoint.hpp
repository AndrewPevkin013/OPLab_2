#ifndef LAB_6_CPOINT_HPP
#define LAB_6_CPOINT_HPP

#include <iostream>
#include <vector>

class CPoint {
private:
    int x;
    int y;

public:
    CPoint(int _x, int _y) : x(_x), y(_y) { }
    bool operator<(int val)
    {
        return y < val;
    }
};
template<typename T>
class pred_negative_number
{
public:
    bool operator()(T a)
    {
        return a < 0;
    }
};

template< typename T, typename Predicate>
bool any_of(T beg, T end, Predicate pred) {
    while (beg != end) {
        if (pred(*beg)) {
            return true;
        }
        beg++;
    }
    return false;
}

template< typename T, typename Predicate>
bool one_of(T beg, T end, Predicate pred) {
    int n = 0;
    while (beg != end)
    {
        if (pred(*beg)) ++n;
        beg++;
    }
    if (n == 1) return true;
    else
        return false;
}
template<typename T, typename Predicate>
bool is_palindrome(T beg, T end, Predicate pred)
{
    end--;
    while (beg != end)
    {
        if (pred(*beg) != pred(*end))
        {
            return false;
        }
        end--;
        if (beg == end) break;
        beg++;
    }
    return true;
}


#endif //LAB_6_CPOINT_HPP
