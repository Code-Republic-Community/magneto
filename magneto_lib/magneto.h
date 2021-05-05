#ifndef MAGNETO_LIB_MAGNETO_H
#define MAGNETO_LIB_MAGNETO_H
#include <map>
namespace cr {
namespace chess {

    enum  TypeOfPiece {
        king,          
        queen,
        rook,
        pawn,       
        bishop,    
        knight,
         
    };

    enum Color{
        white,
        black,
    };

    struct Square{
        int row;
        int column;
        std::map <int, std::map<int,std::string>> map;
        operator std::string() const;
        Square();
    };

    struct Piece{
        TypeOfPiece piece;
        Color color;
        Piece();
    };	


}  // namespace chess
}  // namespace cr

#endif // MAGNETO_LIB_MAGNETO_H
