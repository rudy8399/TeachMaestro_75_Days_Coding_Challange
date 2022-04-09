class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        // int n1=aliceSizes.size();
        // int n2=bobSizes.size();
        
//         int asum=0,bsum=0;
//         for(auto &x:a){
//             asum+=x;
//         }
//         for(auto &x:b){
//             bsum+=x;
//         }
//       for(auto &x:a){
//           int sum1=asum;
//           int sum2=bsum;
//           sum1-=x;
//           sum2+=x;
//           for(auto &y:b){
//               sum2-=y;
//               sum1+=y;
//               if(sum1==sum2){
//                   return {x,y};
//               }
//             sum1=asum;
//             sum2=bsum;
//             sum1-=x;
//             sum2+=x;
              
//           }  
//       }
//      return {0,0};   
        int asum=0,bsum=0;
        for(int &x:A){
            asum+=x;
        }
         for(int &y:B){
            bsum+=y;
        }
        int delta=(asum-bsum)/2;
        
        set<int>searchA;
        for(auto &x:A){
            searchA.insert(x);
        }
        for(auto &y:B){
            if(searchA.count(delta+y)>0){
                return {delta+y,y};
            }
        }
        return {};
        
    }
};