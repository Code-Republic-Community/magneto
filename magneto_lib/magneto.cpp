#include "magneto.h"
#include <string>
#include <map>

 cr::chess::Square::Square(){
        std::map <int, std::map<int,std::string>> map;
        int number = 8;
        for(int i = 0;i < 8; ++i ){
            std::string letter = "a";
            for (int j = 0; j < 8 ; ++j)
            {
                map[i][j] = letter + std::to_string(number);
                char tmp=letter[0];
                tmp++;
                letter = std::string(1,tmp);
            }
            --number;
        }
    }

 cr::chess::Square::operator std::string()const{

        return  this->map.find(this->row)->second.find(this->column)->second;

 }

