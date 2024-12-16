#include "main.h"

int main(int argc, char **argv)
{
    unsigned int bitMaske = (1 << 23) | (1 << 10) | (1 << 13);

    for (size_t i = getMostSignificantBit(bitMaske);; i--)
    {
        if (bitMaske & (1 << i))
        {
            cout << "Index " << i << " set" << endl;
        }

        // otherwise i would be size_t max value
        if (i == 0)
            break;
    }
}

static unsigned int getMostSignificantBit(unsigned int mask)
{
    return ((sizeof(unsigned int) * 8) - 1) - __builtin_clz(mask);
}
