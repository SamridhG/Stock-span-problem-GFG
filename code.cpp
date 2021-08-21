class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>>A;
       vector<int>res;
       for(int i=0;i<n;i++)
       {
         
               while(!A.empty() && A.top().first<=price[i])
               {
                   A.pop();
               }
               if(A.empty())
               {
                   
                   res.push_back(i+1);
               }
               else
               {
                   res.push_back(i-A.top().second);
               }
           
           A.push({price[i],i});
       }
       return res;
    }
};
