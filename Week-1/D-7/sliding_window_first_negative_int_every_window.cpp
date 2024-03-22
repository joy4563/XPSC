vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
                                                 
            vector<long long>ans;
            long long l=0,r=0;
            queue<long long>qu;
            
            while(r<N){
                if(A[r]<0) qu.push(A[r]);
                if(r-l+1==K){
                    if(!qu.empty()){
                        long long frnt=qu.front();
                        ans.push_back(frnt);
                        if(A[l]==frnt)
                        qu.pop();
                    }
                    else 
                        ans.push_back(0);
                        
                    l++;

                }
                r++;
            }
            return ans;
                                                 
 }
