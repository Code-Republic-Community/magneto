#include "magneto.h"
#include <string>
#include <map>


    cr::magneto::Square::Square(){
        std::map <int, std::map<int,std::string>> map;
        int number = 8;
        for(int i = 0; i < 8; ++i){
            char  letter = 'a';
            for (int j = 0; j < 8; ++j)
            {
                this->map[i][j]=letter + std::to_string(number);
                ++letter;
            }
            --number;
        }
    }

    cr::magneto::Square::operator std::string()const{

        return this->map.find(this->row)->second.find(this->column)->second;

    }

