class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
       int steps=0,current=capacity;
       for(int i=0;i<plants.size();i++){
            
            if(current>=plants[i])
            {
                steps++;
                current-=plants[i];
            }
            else{
                steps+=2*i+1;
                current=capacity-plants[i];
            
            }

       }
       return steps; 
    }
};