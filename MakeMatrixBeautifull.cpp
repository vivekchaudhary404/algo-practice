// Make Matrix Beautifull GFG
// https://practice.geeksforgeeks.org/problems/make-matrix-beautiful-1587115620/1

int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
    int maxrow=0,maxcol=0,sum=0,res=0,maxi=0;
   for(int i=0;i<n;i++)
   {
       int row_sum=0,col_sum=0,j=0;
       for(j=0;j<n;j++)
       {
           row_sum+=matrix[i][j];
           col_sum+=matrix[j][i];
           sum+=matrix[i][j];
       }
       if(row_sum>maxrow)
       {
           maxrow=row_sum;
       }
       if(col_sum>maxcol)
       {
           maxcol=col_sum;
       }
   }
   maxi=max(maxcol,maxrow);
   res=((maxi*n)-sum);
   return res;
        
        // code here 
    } 