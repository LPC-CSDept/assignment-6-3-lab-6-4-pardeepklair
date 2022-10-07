#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int getSum(int);
int main() {

    int N;
    int num, result;

    cout << "Enter your number of inputs: ";
    cin >> N;

   for (int i =0; i<N; i++) {
    cout << "Enter your number: ";
    cin >> num;
    result = getSum(num, i);

   }

   cout << "The summation of the result is " << result << endl;

}

int getSum(int value, int count) {

    static int sum = 0;
    static int min, max;
    if (count == 0 || (min > value))
        min = value;
    if (count == 0 || (max > value))
        max = value;
    sum += value;
    return sum;


}


