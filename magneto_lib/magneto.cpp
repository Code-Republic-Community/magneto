#include "magneto.h"
#include <string>
using namespace cr::magneto;

    Square::Square(int f, int r)
        :file(f)
	,rank(r) {}       	
    

    int Square::get_file() const{
        return this->file;
    }

    int Square::get_rank() const{
        return this->rank;
    }


    Square::operator std::string() const{
        
        char letter = 'a';
        letter+= file-1;
        char number = '1';  
        number+= rank-1;

        std::string str = {letter, number};
        return  str;
           
    }

