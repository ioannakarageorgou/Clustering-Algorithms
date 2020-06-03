cmake_minimum_required(VERSION 3.15)
project(emiris2)

set(CMAKE_CXX_STANDARD 14)

add_executable(emiris2 main.cpp Cluster/Cluster.cpp Cluster/Cluster.h DataVector/DataVector.h DataVector/DataVector.cpp
                Initialization/Initialization.cpp Initialization/Initialization.h Manhattan.h Assignment/Assignment.cpp
                Assignment/Assignment.h lshManhattan.h Update/Update.cpp Update/Update.h FileUtils/FileUtils.h
                FileUtils/FileUtils.cpp HashFunctions/hManhattan.cpp HashFunctions/hManhattan.h
                HashFunctions/hashFunctionManhattan.h HashFunctions/hashFunctionManhattan.cpp Utils/Utils.h
                ClusterCurve/ClusterCurve.cpp ClusterCurve/ClusterCurve.h Point/Point.h Curve/Curve.h Curve/Curve.cpp
                CurveGridInit/init.h CurveGridInit/init.cpp Utils/DTW.h Utils/Euclidean.h CurveEntry/CurveEntry.h
                CurveEntry/CurveEntry.cpp CurveToVector/CurveToVector.h CurveToVector/CurveToVector.cpp Grid/Grid.h
                Grid/Grid.cpp Silhouette/Silhouette.cpp Silhouette/Silhouette.h Utils/Position.h Config.h clustering.h)