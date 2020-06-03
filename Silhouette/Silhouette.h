#ifndef EMIRIS2_SILHOUETTE_H
#define EMIRIS2_SILHOUETTE_H

#include <vector>

class Cluster;

class DataVector;

class ClusterCurve;

std::string Silhouette(std::vector<Cluster> &clusters);

std::string SilhouetteCurve(std::vector<ClusterCurve> &clusters);


#endif //EMIRIS2_SILHOUETTE_H
