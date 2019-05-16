#include <string>
using namespace std;



bool belong(int element, char set);
bool checkIfPresent(int element, int *set);
bool subSet(int subset[], int subsetLength, char set);
bool subSetCheck(int *subset, int subsetLength, int *set);
int * unionOfSets();
int * intersection();
int * relativeComplement(char c);
int * symmetricDifference();