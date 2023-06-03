#include "Menu.h"
#include "CPoint.hpp"

int Menu::start() {

    std::vector<CPoint> v = { CPoint(1,1), CPoint(1,-1), CPoint(1,-1), CPoint(1,1) };
    std::cout << any_of(v.begin(), v.end(), pred_negative_number<CPoint>()) << std::endl;
    std::cout << one_of(v.begin(), v.end(), pred_negative_number<CPoint>()) << std::endl;
    std::cout << is_palindrome(v.begin(), v.end(), pred_negative_number<CPoint>()) << std::endl;

    return 0;
}