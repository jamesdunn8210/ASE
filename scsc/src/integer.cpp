#include <cstdlib> // for abs(long long int)
#include <algorithm> // for min()

#include "../headers/integer.h"

namespace ExactArithmetic
{
	Integer::Integer()
	{
		digits.push_back(0);
	}

	Integer::Integer(unsigned long long int d)
	{
		digits.push_back(d);
	}

	bool Integer::operator<(const Integer & rhs) const
	{
		
		if (this->digits.size() < rhs.digits.size()) //lhs smaller length
		{ 
			return true;
		}
		

		auto lhs_it = this->digits.begin();
		auto rhs_it = rhs.digits.begin();

		for (int i = 0; i <= this->digits.size(); i++) {

			if (*lhs_it < *rhs_it)
			{
				return true;
			}
			else if (*lhs_it > *rhs_it)
			{
				return false;
			}

		}

		return false;
	}

	bool Integer::operator==(const Integer & rhs) const
	{

		if (this->digits == rhs.digits) {
			return true;
		}
		return false;
		
	}
	bool Integer::operator!=(const Integer & rhs) const
	{
		if( !(this->operator==(rhs)) )
		{
			return true;
		}
		return false;
	}
}
