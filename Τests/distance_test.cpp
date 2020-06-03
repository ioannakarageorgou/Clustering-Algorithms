#include "../Utils/DTW.h"
#include "../Utils/Euclidean.h"
#include "../Point/Point.h"
#include "../Utils/Position.h"
#include <gtest/gtest.h>
#include <iostream>


TEST(DistanceTest,DTW){
    std::vector<Point> vec1;
    std::vector<Point> vec2;

    vec1.push_back(Point(2,2));
    vec1.push_back(Point(2,2));

    vec2.push_back(Point(4,6));
    vec2.push_back(Point(8,7));


    ASSERT_EQ(0,DTW(vec1,vec1));
    ASSERT_DOUBLE_EQ(20.092635306812888,DTW(vec1,vec2));
}

TEST(DistanceTest,dtwFindPath){
    std::vector<Point> vec1;
    std::vector<Point> vec2;

    vec1.push_back(Point(0,0));
    vec1.push_back(Point(1,1));
    vec1.push_back(Point(2,2));

    vec2.push_back(Point(0,1));
    vec2.push_back(Point(1,2));
    vec2.push_back(Point(2,3));
    vec2.push_back(Point(3,4));

    std::vector<Position>* path = DTW.findPath(vec1,vec2);

    ASSERT_EQ(0,path->at(0).x);
    ASSERT_EQ(0,path->at(0).y);

    ASSERT_EQ(0,path->at(1).x);
    ASSERT_EQ(1,path->at(1).y);

    ASSERT_EQ(1,path->at(2).x);
    ASSERT_EQ(2,path->at(2).y);

    ASSERT_EQ(2,path->at(3).x);
    ASSERT_EQ(3,path->at(3).y);
}

TEST(DistanceTest,Euclidean){

    ASSERT_EQ(0,Euclidean(Point(2,4), Point(2,4)));
    ASSERT_EQ(sqrt(50), Euclidean(Point(-3,5),Point(-2,-2)));
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}