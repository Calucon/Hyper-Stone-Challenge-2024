#include "main.h"

int main(int argc, char **argv)
{
    // not used
}

static inline unsigned int fancyFunction(SpecialValues val)
{
    return (((1 << verySignificant) |
             (1 << moderatelySignificant) |
             (1 << slightlySignificant)) >>
            val) &
           1;
}

static inline unsigned int anotherFancyFunction(SpecialValues val)
{
    return (val & ((1 << verySignificant) | (1 << moderatelySignificant) | (1 << slightlySignificant)));
}
