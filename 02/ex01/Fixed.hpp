
#ifndef FIXED_HPP
    #define FIXED_HPP

    #include <iostream>
    #include <cmath>

    class Fixed
    {
        private:
            int _value;
            static const int _fractionnal_bits = 16;
        public:
            Fixed(const int value);
            Fixed(const float value);
            Fixed(const Fixed &obj);
            Fixed();
            ~Fixed();
            void operator=(Fixed const &obj);
            // std::ostream& operator<<(std::ostream& out, const Fixed &obj);

            float   toFloat(void) const;
            int     toInt(void) const;

            int getRawBits(void) const;
            void setRawBits(int const raw);
    };
    
#endif