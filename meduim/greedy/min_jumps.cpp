// The greedy approach is a problem-solving strategy where you always choose the option that looks best at the moment, hoping it leads to the global optimum.
// 🔸 Example:
// Say you're trying to reach the end of a path by hopping tiles:
// arr = [2, 3, 1, 1, 4]
// Each number tells you the maximum steps you can jump from that tile.
// From index 0 (value = 2), you can jump to index 1 or 2.
// The greedy strategy picks the jump that will get you farthest in the next move.


class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        int farthest = 0; // farthest point that we can go from one index
        int current_end = 0; //the current end point meaning from arr[i] to the max position it can jump
        int jumps = 0;
        
        for(int i=0;i<n-1;i++){
            
            farthest = max(farthest, i+arr[i]);   // we take the greedy approach, where we calculate the farthest point we can jump to from arr[i], acc to the question we can jump upto i+arr[i]
            
            if(i==current_end){    // we check if the value of i is same as the current end point, we increase the jumps as we have arrived at the farthest point as of now
                jumps++;
                current_end = farthest; // we then update our current end point with the farthest point 
            }
            
            if(current_end>=n-1)  // if the farthest point has reached beyond n-1 then we return our answer
            {
                return jumps;
                break;
            }
                
        }
        return -1;
    }
};


// if arr =  [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
// output =3
// n        i      farthest     i + arr[i]      max()     current_end   i==current_end   jumps    current_end  current_end>=n-1
// 11       0         0         0 + 1 = 1     (0,1) = 1        0              Y             1           1               F
//          1         1         1 + 3 = 4     (1,4) = 4        1              Y             2           4               F
//          2         4         2 + 5 = 7     (4,7) = 7        4              N             -           -               F
//          3         7         3 + 8 = 11    (11,7) = 11      4              N             -           -               F
//          4         11        4 + 9 = 13    (13,11) = 13     4              Y             3           13              Y    --- break return jumps 
