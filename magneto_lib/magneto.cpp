#include "magneto.h"
#include <string>
using namespace cr::magneto;

    Square::Square(int f, int r){
        this->file = f;
	this->rank = r;
       
    }

    int Square::get_file(){
        return this->file;
    }

    int Square::get_rank(){
        return this->rank;
    }


    Square::operator std::string() const{
        
        char letter = 'a';
        for (int j = 1; j < this->file; ++j)
        {
            ++letter;
        
        }

        char number = '1';  
        for(int i = 1; i <this->rank; ++i){
           
            ++number;
 
        }
       
        std::string str;
        str = letter;
        str+=number;
        return  str;
           
    }

