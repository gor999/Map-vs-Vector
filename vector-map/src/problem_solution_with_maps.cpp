#include<iostream>
#include<map>

std::map<int, int> twoSum(std::map<int, int> m, int target){
std::map<int, int> result;

if(target >= -109 && target <= 109){
    if(m.size() >= 2 && m.size() <= 104){
	    for (auto itr = m.begin(); itr != m.end(); ++itr) {    
            if(itr->second >= -109 && itr->second <= 109){
                for (auto jtr = m.begin(); jtr != m.end(); ++jtr) {
                    if(itr->second + jtr->second == target){
                        result.insert({itr->first, itr->second});
                        result.insert({jtr->first, jtr->second});
                        return result;
                    }
                }
            }else{
                std::cout<<"the array numbers are not valid: they must be in range -109 <=> 109"<<std::endl;
                return result;
            }
        }
    }
    else{
        std::cout<<"the array length are not valid: they must be in range -109 <=> 109"<<std::endl;
        return result;
    }
}else{
    std::cout<<"target was not number in range -109 <=> 109"<<std::endl;
    return result;
}
    return result;
}



int main(){

    std::map<int, int> my_map{{1, 21,}, {2, 32}, {3, 32}, {4, 21,}, {5, 89}, {6, 52}, {7, 66}};
    std::map<int, int> my_mapafter = twoSum(my_map, 98);
    int i = 0; 
    
    std::cout<<"[";
    for (auto itr = my_mapafter.begin(); itr != my_mapafter.end(); ++itr){
        if(i == 0){
            std::cout<<itr->first<<",";
            ++i;
            continue;    
        }
        std::cout<<itr->first;
    }
    std::cout<<"]";
    
    return 0;
}