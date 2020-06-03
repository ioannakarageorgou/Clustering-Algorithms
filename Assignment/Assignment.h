#ifndef EMIRIS2_ASSIGNMENT_H
#define EMIRIS2_ASSIGNMENT_H

#include <vector>

class Cluster;

class DataVector;

class ClusterCurve;

class Curve;

double lloydAssignment(std::vector<Cluster> &clusters, std::vector<DataVector> &dataset);

double rangeSearchAssignment(std::vector<Cluster> &clusters, std::vector<DataVector> &dataset);

double lloydAssignmentCurve(std::vector<ClusterCurve> &clusters, std::vector<Curve> &dataset, int i);

double rangeSearchAssignCurves(std::vector<ClusterCurve> &clusters, std::vector<Curve> &dataset, int maxCurvePoints);

#endif //EMIRIS2_ASSIGNMENT_H
