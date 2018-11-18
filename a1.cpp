#include <iostream>
#include <ifstream>
int main(int argc, const char *argv[]){
    
    const char *fileName =  argv[1];

    int variableA = 0,
    int variableB = 0;

    double  average = 0.0,
    double  sum = 0.0;
    

     int loopCount = 0;
    std::ifstream myReadFile;

    myReadFile.open(fileName);
    
    while(myReadFile >> loopCount){
        n++;
    }  


    double *array = new double[n];

    std::ifstream myReadFile;

    myReadFile.open(fileName);

    if(myReadFile){    
        int counter = 0;
        while(myReadFile >> variableB){
            sum += variableB;
            array[counter] = variableB;
            counter++; 
        }

        myReadFile.close();
    
        average = sum / variableA;
 
        for(int i = 0; i < n; i++){
        if(array[i] > average)
            std::cout << array[i] << " ";
    }    

    
        delete [] array;


        array = 0;


        return 0;
    }
    else{
        myReadFile.close();

        std::cout << "There was an error while opening the file!";

        delete[] array;
        array = 0;

        exit;

    }
}