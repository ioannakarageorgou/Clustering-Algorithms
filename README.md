## Clustering Algorithms for vectors and curves

Run:
1. make
2. make vector-clustering (for vectors) OR make curve-clustering (for curves)

#### Results for Vectors
- *Kmeans++ / Lloyd Assignment / Pam Lloyd Update*

  Silhouette: [0.905787, 0.906761, 0.899915, 0.910948, 0.900092, 0.908531, 0.913194,
0.908786, 0.907421, 0.910016, **0.907145*** ]
- *Kmeans++ / Lloyd Assignment / Mean Vector Update*

Silhouette: [0.91041, 0.899912, 0.906761, 0.904764, 0.900088, 0.909955, 0.90893,
0.910096, 0.90968, 0.907087, **0.906768** ]
- *Kmeans++ / Range Search Assignment / Mean Vector Update*

Silhouette: [0.905834, 0.901382, 0.910255, 0.904764, 0.899912, 0.906761, 0.90009,
0.903875, 0.903711, 0.905787, **0.904237** ]
- *Random Initialization / Lloyd Assignment / Pam Lloyd Update*

Silhouette: [0.901193, 0.903875, 0.914957, 0.778501, 0.906945, 0.834293, 0.0265761, -
0.268489, 0.91, 0.760906, **0.666876** ]
- *Kmeans++ / Range Search Assignment / Pam Lloyd Update*

Silhouette: [0.900121, 0.901382, 0.910862, -0.474466, 0.903711, 0.905822, 0.957256,
0.483061, -0.246766, 0.899912, **0.61409** ]
- *Random Initialization / Range Search Assignment / Mean Vector Update*

Silhouette: [0.235659, -0.22199, 0.960043, 0.957819, 0.960863, 0.953386, 0.961938, -
0.505324, 0.726977, 0.87598, **0.590535** ]
- *Random Initialization / Range Search Assignment / Pam Lloyd Update*

Silhouette: [0.380163, -0.287761, 0.741815, -0.0670388, 0.404014, 0.295398, 0.298095,
0.943012, 0.230122, 0.0785573, **0.401637** ]
- *Random Initialization / Lloyd Assignment / Mean Vector Update*

Silhouette: [0.926718, 0.880554, 0.0363948, -0.468453, -0.361255, 0.826013, 0.691429, -
0.511597, -0.714035, 0.985814, **0.229158** ]


#### Results for Curves
- *Random Initialization / Lloyd Assignment / DBA Update*

Silhouette: [0.870921, 0.759627, -0.0437032, 0.818888, 0.821158, 0.625152, **0.642007** ]
- *Kmeans++ / Lloyd Assignment / Pam Lloyd Update*

Silhouette: [0.731686, 0.999825, -0.0728215, 0.660765, 0.727831, 0.320187, **0.561246** ]
- *Random Initialization / Lloyd Assignment / Pam Lloyd Update*

Silhouette: [0.551693, 0.819041, 0.645477, -0.224296, 0.624376, 0.725616, **0.523651** ]
- *Kmeans++ / Lloyd Assignment / DBA Update*

Silhouette: [0.643728, 0.851403, -0.114386, 0.502453, 0.344316, 0.544243, **0.46196** ]
- *Random Initialization / Range Search Assignment / DBA Update*

Silhouette: [0.550367, 0.87797, 0.422645, -0.290678, 0.227507, 0.691554, **0.413227** ]
- *Random Initialization / Range Search Assignment / Pam Lloyd Update*

Silhouette: [0.449774, 0.729425, 0.0706629, 0.594968, 0.865744, -0.459432, **0.37519** ]
- *Kmeans++ / Range Search Assignment / DBA Update*

Silhouette: [0.817289, 0.356393, 0.067119, 0.0983959, 0.61903, 0.288269, **0.374416** ]
- *Kmeans++ / Range Search Assignment / Pam Lloyd Update*

Silhouette: [0, -0.823648, 0.984983, 0.812665, 0.620994, 0.497269, **0.348711** ]
