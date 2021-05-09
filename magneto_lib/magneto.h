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
        int file;
        int rank;
public:
	Square(int, int);
        operator std::string() const;
        int get_file();
	int get_rank();
    };

    struct Piece{
        TypeOfPiece piece;
        Color color;
    };


}  // namespace magneto
}  // namespace cr

#endif // MAGNETO_LIB_MAGNETO_H
