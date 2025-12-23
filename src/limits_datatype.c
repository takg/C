#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    /* Character types */
    printf("CHAR_BIT   : %d\n\n", CHAR_BIT);

    printf("signed char  : min = %d, max = %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char: min = 0, max = %u\n\n", UCHAR_MAX);

    /* Integer types */
    printf("short int   : min = %d, max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int: min = 0, max = %u\n\n", USHRT_MAX);

    printf("int         : min = %d, max = %d\n", INT_MIN, INT_MAX);
    printf("unsigned int: min = 0, max = %u\n\n", UINT_MAX);

    printf("long int    : min = %ld, max = %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int: min = 0, max = %lu\n\n", ULONG_MAX);

    printf("long long int    : min = %lld, max = %lld\n",
           LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int: min = 0, max = %llu\n\n",
           ULLONG_MAX);

    /* Floating point types */
    printf("float       : min = %e, max = %e\n",
           FLT_MIN, FLT_MAX);
    printf("double      : min = %e, max = %e\n",
           DBL_MIN, DBL_MAX);
    printf("long double : min = %Le, max = %Le\n",
           LDBL_MIN, LDBL_MAX);

    return 0;
}
