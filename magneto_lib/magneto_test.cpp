#include "magneto.h"

#include <gtest/gtest.h>

namespace cr {
namespace chess {

TEST(MagnetoTest, Square) {
    Square sq1(1, 1);
    EXPECT_EQ(sq1.get_file(), 1);
    EXPECT_EQ(sq1.get_rank(), 1);
    EXPECT_EQ(std::string(sq1), "a1");

    Square sq2(2, 5);
    EXPECT_EQ(sq2.get_file(), 2);
    EXPECT_EQ(sq2.get_rank(), 5);
    EXPECT_EQ(std::string(sq2), "b5");

    Square sq3(8, 8);
    EXPECT_EQ(sq3.get_file(), 8);
    EXPECT_EQ(sq3.get_rank(), 8);
    EXPECT_EQ(std::string(sq3), "h8");
}

}  // namespace chess
}  // namespace cr
