#include "magneto.h"

namespace cr {
namespace chess {

Square::Square(int file, int rank) : file_(file), rank_(rank) {}

int Square::get_file() const { return file_; }

int Square::get_rank() const { return rank_; }

Square::operator std::string() const {
    char letter = 'a';
    letter += file_ - 1;
    char number = '1';
    number += rank_ - 1;
    std::string str = {letter, number};
    return str;
}

}  // namespace chess
}  // namespace cr
