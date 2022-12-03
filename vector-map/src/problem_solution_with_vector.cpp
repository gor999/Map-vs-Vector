#include<iostream>
#include<vector>


std::vector<int> twoSum(std::vector<int>& nums, int target){
    std::vector<int> result;
    int count = 0;
    if(target >= -109 && target <= 109){
        if(nums.size() >= 2 && nums.size() <= 104){
            for(int i = 0; i < nums.size(); ++i){
                if(nums[i] >= -109 && nums[i] <= 109){
                    for(int j = 0; j < nums.size(); j++){
                        if(nums[i] + nums[j] == target){
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                        }
                    }
                }else{
                    std::cout<<"the array numbers are not valid: they must be in range -109 <=> 109"<<std::endl;
                    return result;
                }
            }
        }else{
            std::cout<<"the numbers length are not valid: they must be in range -109 <=> 109 elements "<<std::endl;
            return result;
        }
    }else{
        std::cout<<"target was not number in range -109 <=> 109"<<std::endl;
        return result;
    }
    return result;
}


int main(){
    std::vector<int> my_nums{0, 5, 6, 7, 8, 9};
    std::vector<int> my_vector = twoSum(my_nums, 12);
    std::cout<<"[";    
    for(int i = 0; i < my_vector.size(); ++i){
        if(i == 1){
        std::cout<<my_vector[i];
        break;
        }
    std::cout<<my_vector[i]<<",";    
    }
    std::cout<<"]";


    return 0;
}