#include "NumberWithUnits.hpp"

namespace ariel {


	void NumberWithUnits::read_units(ifstream& stream)
	{

	}
	NumberWithUnits& NumberWithUnits::operator+(){return *this;}

	NumberWithUnits& NumberWithUnits::operator -=(NumberWithUnits const& rhs){return *this;}

	NumberWithUnits& NumberWithUnits::operator++(){return *this;}
			
	NumberWithUnits& NumberWithUnits::operator++(int){return *this;}

	NumberWithUnits& NumberWithUnits::operator--(){return *this;}
			
	NumberWithUnits& NumberWithUnits::operator--(int){return *this;}
	
	NumberWithUnits::NumberWithUnits(double number, string const& type) {}

	NumberWithUnits&  NumberWithUnits::operator-(){return *this;}

	ostream& operator<<(std::ostream& output, const NumberWithUnits& H)
	{

		return output;}
	istream& operator >> (istream& stream, NumberWithUnits& v)
	{

		return stream;
	}


	NumberWithUnits operator*(const double lhs,const NumberWithUnits rhs) {
		NumberWithUnits dummy{ 0,"s" };
		return dummy;
	}

	NumberWithUnits operator*(const NumberWithUnits rhs,const double lhs) {
		NumberWithUnits dummy{ 0,"s" };
		return dummy;
	}
	NumberWithUnits operator*=(NumberWithUnits rhs,const double lhs) {
		NumberWithUnits dummy{ 0,"s" };
		return dummy;
	}


	NumberWithUnits operator+(const NumberWithUnits& a, const NumberWithUnits& b) {
		NumberWithUnits dummy{ 0,"s" };
		return dummy;
	}

	NumberWithUnits operator-(const NumberWithUnits& a, const NumberWithUnits& b) {
		NumberWithUnits dummy{ 0,"s" };
		return dummy;
	}

	bool NumberWithUnits::operator>(const NumberWithUnits& b) const {return false;}

	bool NumberWithUnits::operator<(NumberWithUnits const& rhs) const{return false;}


	bool  NumberWithUnits::operator <=(NumberWithUnits const& rhs) const {return false;}
	bool  NumberWithUnits::operator >=(NumberWithUnits const& rhs) const {return false;}
	bool NumberWithUnits:: operator ==(NumberWithUnits const& rhs) const {return false;}
	bool NumberWithUnits:: operator !=(NumberWithUnits const& rhs) const {return false;}

	
	NumberWithUnits operator +=(NumberWithUnits& lhs,NumberWithUnits const& rhs) {
		NumberWithUnits dummy{ 0,"s" };
		return dummy;
	}

	string NumberWithUnits::getUnit(){
		return this->unit;
	}

	double NumberWithUnits::getNumber(){
		return this->number;
	}


	

}