#include <time.h>
#include <iostream>
using namespace std;

int main(){
    clock_t start, end;
    start = clock();

//perform calculations for which performance needs to be checked
    end = clock();
    cout << "Time required for execution: "<< (double)(end-start)/CLOCKS_PER_SEC<< " seconds." << "\n\n";
    return 0;
}