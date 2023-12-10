#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*int main()
{
	unsigned char octet = 2;

	printf("%d\n", swap_bits(octet));

}*/

//int main()
//{
//    unsigned char octet = 65;
//    printf("%u", swap_bits(octet));
//}