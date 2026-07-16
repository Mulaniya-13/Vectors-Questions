#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int> height){
    int left =0;
    int right=height.size()-1;
    int maxArea=0;
    while(left<right){
        int currArea=min(height[left],height[right])*(right-left);
        maxArea=max(maxArea,currArea);
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxArea;
}

int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<maxWater(height)<<endl;
    return 0;
}