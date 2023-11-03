#include <iostream> 
#include <vector>
using namespace std;


int getSum(vector<int>& numbers){
    int sum = 0;
    for(int itr = 0 ; i < numbers.size() ; i++){
        sum += numbers[itr];
    }
    return sum;
}

int getMin(vector<int>& numbers){
    int min = numbers[0];
    for(int itr = 0 ; i < numbers.size() ; i++){
        if(numbers[itr] < min){
            min = numbers[itr];
        }
    }
    return min;
}


int main(){

    vector<int>& numbers = {1,2,3,4,5,6,7,8,9,10};
    int sum = getSum(numbers);
    cout << "Sum of numbers is: " << sum << endl;
    cout << "Min of numbers is: " << getMin(numbers) << endl;
}