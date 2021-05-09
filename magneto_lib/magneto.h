#ifndef MAGNETO_LIB_MAGNETO_H
#define MAGNETO_LIB_MAGNETO_H

namespace cr {
namespace magneto {

    enum class TypeOfPiece {
       kKing,          
       kQueen,
       kRook,
       kPawn,       
       kBishop,    
       kKnight,
         
    };

    enum class Color{
        kWhite,
        kBlack,
    };

    struct Square{
private:
        const int file;
        const int rank;
public:
	Square(int f, int r);
        operator std::string() const;
        int get_file() const;
	int get_rank() const;
    };

    struct Piece{
        TypeOfPiece piece;
        Color color;
    };


}  // namespace magneto
}  // namespace cr

#endif // MAGNETO_LIB_MAGNETO_H
