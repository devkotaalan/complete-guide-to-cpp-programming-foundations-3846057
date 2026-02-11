// Complete Guide to C++ Programming Foundations
// Challenge 05_09
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    
    // Write your code here
    for(auto x: resources){
        switch(x.type) {
            case 'B':
            result += 1.05 * x.baseCost;
            break;
            case 'L':
            result += 1.15 * x.baseCost;
            break;
            case 'E':
            result += 1.00 * x.baseCost;
            break;
            default:
            result += 1.00 * x.baseCost;
            break;
        }
    }
    // for(auto x: resources){
    //     if(x.type == 'B')
    //     result += 1.05 * x.baseCost;
    //     else if(x.type == 'L')
    //     result += 1.15 * x.baseCost;
    //     else
    //     result += 1.00 * x.baseCost;
    // }
    
    return result;
}

int main(){
    
    // Example 1 resources
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
