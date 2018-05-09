#include <cstdlib> // for abs(long long int)
#include <algorithm> // for min()

#include "../headers/gcd.h"

namespace ExactArithmetic
{

long long int gcd(long long int i, long long int j)
/*
 *  Note:
 *  This is a very inefficent algorithm for computing the greatest common divisor.
 *  Euclid's Algorithm would be much more efficient.

 */
{

	if (i == 0)
		return j;
	return gcd(j%i, i);

}

//long long int gcd(long long int i, long long int j)
//{
//	long long int potentialFactor = std::min(std::abs(i), std::abs(j));
//    if (potentialFactor == 0) return 1; // To avoid returning 0 when one argument is 0.
//
//    for (; potentialFactor > 1; --potentialFactor)
//    {
//        if (i % potentialFactor == 0 && j % potentialFactor == 0) break; // Found a common divisor.
//    }
//
//    return potentialFactor;
//
//}

} // End of namespace ExactArithmetic

//
//int BOOST_CHECK_EQUAL()
//
//
//
//BOOST_AUTO_TEST_CASE( gcd0 )
//{
//	BOOST_CHECK_EQUAL(gcd(13, 13) == 13); //check i == j
//
//	BOOST_CHECK_EQUAL(gcd(37, 600) == 1); //first is prime so much be 1
//	 
//	BOOST_CHECK_EQUAL(gcd(20, 100) == 20); //multiple of other 
//
//	BOOST_CHECK_EQUAL(gcd(624129, 2061517) == 18913); // normal case		
//}
//
//BOOST_AUTO_TEST_CASE( gcd0 )
//	{
//		BOOST_CHECK_EQUAL(gcd(0, 0), 0);
//	}