#include "main.h"

static random_device rd;
static mt19937 gen(rd());
static uniform_real_distribution<double> distPercent(0.0, 100.0);
static uniform_int_distribution<int> distIntVal(0.0, 10.0);

int main(int argc, char *argv[])
{
    if (argc < 1)
    {
        cout << "Usage:" << endl;
        cout << "  ./HSC_03 {maximum}" << endl;
        cout << "      maximum         -> max to use for the getRandomBoundedInteger function" << endl;
        return EXIT_FAILURE;
    }

    const unsigned int MAXIMUM = max(1, stoi(string(argv[1])));
    cout << "Your random value is: " << getRandomBoundedInteger(MAXIMUM) << endl;
}

unsigned int getRandomBoundedInteger(unsigned int maximum)
{
    auto pct = distPercent(gen);
    unsigned int value = 42;

    // we can write the calculations here for readability as the compiler will optimize them for us
    if (pct > (100 - 35))
    {
        value = distIntVal(gen);
    }
    else if (pct > (100 - 35 - 11))
    {
        value = 37;
    }
    else if (pct > (100 - 35 - 11 - 22))
    {
        value = 37;
    }

    return min(maximum, value);
}