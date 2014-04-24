#define UNASSIGNED -1
#define ASSIGNMENT_INF 9999999

void assignmentoptimal(int *assignment, int *cost, int *distMatrix, int nOfRows, int nOfColumns);
void buildassignmentvector(int *assignment, bool *starMatrix, int nOfRows, int nOfColumns);
void computeassignmentcost(int *assignment, int *cost, int *distMatrix, int nOfRows);
void step2a(int *assignment, int *distMatrix, bool *starMatrix, bool *newStarMatrix, bool *primeMatrix, bool *coveredColumns, bool *coveredRows, int nOfRows, int nOfColumns, int minDim);
void step2b(int *assignment, int *distMatrix, bool *starMatrix, bool *newStarMatrix, bool *primeMatrix, bool *coveredColumns, bool *coveredRows, int nOfRows, int nOfColumns, int minDim);
void step3 (int *assignment, int *distMatrix, bool *starMatrix, bool *newStarMatrix, bool *primeMatrix, bool *coveredColumns, bool *coveredRows, int nOfRows, int nOfColumns, int minDim);
void step4 (int *assignment, int *distMatrix, bool *starMatrix, bool *newStarMatrix, bool *primeMatrix, bool *coveredColumns, bool *coveredRows, int nOfRows, int nOfColumns, int minDim, int row, int col);
void step5 (int *assignment, int *distMatrix, bool *starMatrix, bool *newStarMatrix, bool *primeMatrix, bool *coveredColumns, bool *coveredRows, int nOfRows, int nOfColumns, int minDim);