class Solution {
public:
    int maxProfit(vector<int>& prices) {
       // int prevMin[prices.size()];
       //  int maxProf=INT_MIN;
       //  prevMin[0]=prices[0];
       //  for(int i=1;i<prices.size();i++){
       //      if(prevMin[i-1]<prices[i]){
       //          prevMin[i]=prevMin[i-1];
       //      }
       //      else{
       //          prevMin[i]=prices[i];
       //      }
       //      maxProf=max((prices[i]-prevMin[i]),maxProf);
       //  }
       //  if(maxProf<0){
       //      return 0;
       //  }
       //  else{
       //      return maxProf;
       //  }
       int minSoFar=prices[0];
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            minSoFar=min(minSoFar,prices[i]);
            int profit=prices[i]-minSoFar;
            maxProfit=max(maxProfit,profit);
        }
        return maxProfit;
    }
};