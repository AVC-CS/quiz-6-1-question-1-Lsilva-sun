#include <iostream> 
using namespace std; 

//********************
// Declare Function Prototypes
//********************


void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);


// ******************************
// Implement all your functions here
// ******************************

void getTwoValues(int &begin, int &end) {

   do {
    cout << "Enter two values: "; 
    cin >> begin >> end; 

    if (begin >= end) {
        cout << "Invalid input" << endl; 
    }
    }while (begin >= end);

}

bool isPrime(int num) {
    if (num <=1)
    return 0; 
    
    for (int i =2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}


int getNextPrime(int begin) {
    int num = begin + 1;
    while (true) {
        if (isPrime(num)) {
            return num; 
        }
        num++; 
    }
}

int getPrevPrime (int end) {

    int num = end -1; 
    while (num > 1) {
        if (isPrime(num)) {
            return num; 
        }
        num--; 
    }
    return -1; 
}






