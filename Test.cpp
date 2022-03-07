#include "doctest.h"
#include "mat.hpp"
#include<string>
using namespace ariel;
using namespace std;


<<<<<<< HEAD


TEST_CASE("Bad mat code"){
    CHECK_THROWS(mat(4,3,'@','-'));
    CHECK_THROWS(mat(7,2,'@','-'));
=======
TEST_CASE("Bad mat code"){
    CHECK_THROWS(mat(4,3,'@','-'));
    CHECK_THROWS(mat(7,2,'@','-'));
    //CHECK_THROWS(mat(5,3,1,'-'));
    //CHECK_THROWS(mat(4.5,3,'@',1));
    //CHECK_THROWS(mat('@',3,'@','-'));
    //CHECK_THROWS(mat(5,'-','@','-'));
>>>>>>> c57797928e12bd1f5c36c8b55ad9057df404a35a
    CHECK_THROWS(mat(0,0,'@','-'));
    CHECK_THROWS(mat(0,3,'@','-'));
    CHECK_THROWS(mat(5,0,'@','-'));
    CHECK_THROWS(mat(-5,-3,'@','-'));
    CHECK_THROWS(mat(-5,3,'@','-'));
    CHECK_THROWS(mat(5,-3,'@','-'));
    CHECK_THROWS(mat(2,8,'@','-'));
    CHECK_THROWS(mat(4,3,'@','-'));
    CHECK_THROWS(mat(5,2,'@','-'));
<<<<<<< HEAD
   /* CHECK_THROWS(mat(5,0,'@','-'));
    CHECK_THROWS(mat(-7,2,'@','-'));
    CHECK_THROWS(mat(0,12,'@','-'));
    CHECK_THROWS(mat(0,-3,'@','-'));
    CHECK_THROWS(mat(2,8,'@','-'));
    CHECK_THROWS(mat(4,3,'@','-'));
    CHECK_THROWS(mat(5,2,'@','-'));
    CHECK_THROWS(mat(7,-3,'@','-'));
    CHECK_THROWS(mat(10,8,'@','-'));
    CHECK_THROWS(mat(6,3,'@','-'));
    CHECK_THROWS(mat(5,4,'@','-'));
    */
=======
    
>>>>>>> c57797928e12bd1f5c36c8b55ad9057df404a35a


}

TEST_CASE("Good mat code"){
    CHECK(mat(5,5,'@','-') == string("@@@@@\n @---@\n @-@-@\n @---@\n @@@@@"));
    
    CHECK(mat(3,1,'^','!') == string("^^^"));
    
    CHECK(mat(1,3,'+',')') == string("+\n +\n +"));
    
    CHECK(mat(3,5,'@','-') == string("@@@\n @-@\n @-@\n @-@\n @@@")); 
    
    CHECK(mat(5,3,'@','-') == string("@@@@@\n @---@\n @@@@@"));

    CHECK(mat(5,3,'-','@') == string("-----\n -@@@-\n  -----"));   

    CHECK(mat(11,7,'@','-') == string("@@@@@@@@@@@\n  @---------@\n @-@@@@@@@-@\n @-@-----@-@\n @-@@@@@@@-@\n @---------@\n @@@@@@@@@@@"));                               
    
    CHECK(mat(1,1,'$','#') == string("$"));
<<<<<<< HEAD
    
    
    CHECK(mat(3,5,'@','@') == string("@@@\n @@@\n @@@\n @@@\n @@@")); 
    
    CHECK(mat(5,3,'@','@') == string("@@@@@\n @@@@@\n @@@@@"));

    /*CHECK(mat(5,3,'-','@') == string("-----\n -@@@-\n  -----")); 
    CHECK(mat(3,1,'^','!') == string("^^^"));
    
    CHECK(mat(1,3,'+',')') == string("+\n +\n +"));
    
    CHECK(mat(3,5,'@','-') == string("@@@\n @-@\n @-@\n @-@\n @@@")); 
    
    CHECK(mat(5,3,'@','-') == string("@@@@@\n @---@\n @@@@@"));

    CHECK(mat(5,3,'-','@') == string("-----\n -@@@-\n  -----")); 
*/
=======

>>>>>>> c57797928e12bd1f5c36c8b55ad9057df404a35a


}