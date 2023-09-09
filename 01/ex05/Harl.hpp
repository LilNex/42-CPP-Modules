
#ifndef HARL_HPP
    #define HARL_HPP

    #include "main.hpp"
    
    typedef void(*fct_ptr) (void);

    class Harl
    {
        public: 
            Harl();
            void complain( std::string name );

        private:
            void debug(void);
            void info(void);
            void warning(void);
            void error(void);
            
    };
    
#endif