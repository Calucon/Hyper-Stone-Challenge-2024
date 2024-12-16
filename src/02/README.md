# Solution

## Task A

1. Create bitMask of `verySignificant`, `moderatelySignificant` and `slightlySignificant`
2. Then right shift the bit mask by the enum value of `val`
3. Perform an `and` operation with `0b00...1` (`= 1`) to check if the last bit is a 1

This function performs similar to the function in task b.
However it only returns `{0,1}` which can be interpreted as a boolean.  

- If it returns `1` -> `val` matches one of the three enum values named above in 1.
- If it returns `0` -> `val` does _not_ match ...

## Task B

The given function checks if the parameter `val` is in either:

- SpecialValues::verySignificant
- SpecialValues::moderatelySignificant
- SpecialValues::slightlySignificant

Return values:

- If it does not match, it returns 0.  
- If it matches, it returns the bit mask of the given enum value.

The old function did not work as enums are a value types (uint) and thus auto-increment from 0 to n. We must create a bit mask from them

```cpp
static inline unsigned int anotherFancyFunction(SpecialValues val)
{
    return (val & ((1 << verySignificant) | (1 << moderatelySignificant) | (1 << slightlySignificant)));
}
```
