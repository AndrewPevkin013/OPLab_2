#include "Rev.h"

void Rev(float& a)
{
  a = a * (-1);
}

void Rev(float* a)
{
  (*a) = (*a) * (-1);
}
