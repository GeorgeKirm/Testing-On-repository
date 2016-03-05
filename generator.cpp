#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {

    /*
           Check if the given arguments are more than 1. 
    */
    if(argc<2){
        cout<<"Need more arguments. Exiting program"<<endl;
        return 0;
    }
    
    int coordinate_index = stoi(argv[2]);
    int utime;
    long int ltime;
    int i;
    //float cords[coordinate_index][3];
    ltime = time(NULL);
    utime = (unsigned int) ltime/2;
    ofstream out(argv[1]);

    srand(utime);
    for(i=0;i<coordinate_index;i++){
        out<<(float)34*rand()/(RAND_MAX-1)<<" "<<(float)34*rand()/(RAND_MAX-1)<<" "<<(float)34*rand()/(RAND_MAX-1)<<endl;
    }
    
    return 0;
}
