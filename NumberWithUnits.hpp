#ifndef NUMBER_WITH_UNITS 
#define NUMBER_WITH_UNITS
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
namespace ariel {
	class NumberWithUnits {	

		
		private:

			string unit;


			double number;	

		public:	


			static void read_units(ifstream& stream);
			NumberWithUnits(double, string const&);
			friend ostream& operator<<(ostream& os, const NumberWithUnits& numer);
			friend istream& operator>>(istream& stream, NumberWithUnits& v);
			NumberWithUnits& operator-();
			friend NumberWithUnits operator+(const NumberWithUnits& a, const NumberWithUnits& b);
			NumberWithUnits& operator+();
			friend NumberWithUnits operator +=(NumberWithUnits& lhs,NumberWithUnits const& rhs);
			friend NumberWithUnits operator-(const NumberWithUnits& a, const NumberWithUnits& b);
			NumberWithUnits& operator++(int);
			NumberWithUnits& operator--(int);
			NumberWithUnits& operator--();
			NumberWithUnits& operator -=(NumberWithUnits const& rhs);
			NumberWithUnits& operator++();
			friend NumberWithUnits operator*(const double lhs,const NumberWithUnits rhs);
			friend NumberWithUnits operator*(const NumberWithUnits rhs,const double lhs);
			friend NumberWithUnits operator*=(NumberWithUnits rhs,const double lhs);
			bool operator <(NumberWithUnits const& rhs) const;
			bool operator ==(NumberWithUnits const& rhs) const;
			bool operator !=(NumberWithUnits const& rhs) const;
			bool operator <=(NumberWithUnits const& rhs) const;
			bool operator >=(NumberWithUnits const& rhs) const;
			bool operator>(const NumberWithUnits& b) const;

			double getNumber();
			string getUnit();};}
#endif