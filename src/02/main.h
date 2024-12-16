typedef enum
{
    verySpecial,
    verySignificant,
    moderatelySignificant,
    slightlySignificant,
    slightlyUnspecial,
} SpecialValues;

/**
 * @see README.md
 */
static inline unsigned int fancyFunction(SpecialValues val);

/**
 * This function checks if `val` is in either:
 * - SpecialValues::verySignificant
 * - SpecialValues::moderatelySignificant
 * - SpecialValues::slightlySignificant
 *
 * @returns bitMask of `val` if it matches any of the enum values above, else 0
 *
 * @note The old function did not work as enums are a value type and thus auto-increment from 0 to n. We must create a bit mask from them
 */
static inline unsigned int anotherFancyFunction(SpecialValues val);