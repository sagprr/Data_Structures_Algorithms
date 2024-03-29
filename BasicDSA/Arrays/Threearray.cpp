public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            int i=0, j=0,k=0;
            vector<int> ans;
            
            int p1;
            int p2;
            int p3;
            p1 = p2 = p3 = INT_MIN;
            
            
            //handling duplicatess 
            while(i<n1 && j<n2 && k<n3)
            {
                while(A[i]==p1 && i<n1)
                i++;
                
                while(B[i]==p2 && j<n2)
                j++;
                
                while(C[i]==p3 && k<n3)
                k++;
                
                
                if(A[i] == B[i] == C[i])
                {
                    ans.push_back(A[i]);
                    p1 = A[i];
                    p2 = B[j];
                    p3 = C[k];
                    
                    i++;
                    j++;
                    k++;
                }
            
                else if (A[i] < B[j])
                {
                    p1 = A[i];
                    i++;
                }
            
                else if (B[i] < C[j])
                {
                    p2 = B[i];
                    j++;
                }
            
                else
                {
                    p3 = C[k];
                    k++;
                }
            
            }
            
            return ans;
            
        }
        
        