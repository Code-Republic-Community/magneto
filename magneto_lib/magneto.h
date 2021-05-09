#ifndef MAGNETO_LIB_MAGNETO_H
#define MAGNETO_LIB_MAGNETO_H

#include <string>

namespace cr {
namespace chess {

enum class TypeOfPiece {
    kKing,
    kQueen,
    kRook,
    kPawn,
    kBishop,
    kKnight,

};

enum class Color {
    kWhite,
    kBlack,
};

struct Square {
   private:
    const int file_;
    const int rank_;

   public:
    Square(int file, int rank);
    operator std::string() const;
    int get_file() const;
    int get_rank() const;
};

struct Piece {
    TypeOfPiece piece;
    Color color;
};

}  // namespace chess
}  // namespace cr

#endif  // MAGNETO_LIB_MAGNETO_H
