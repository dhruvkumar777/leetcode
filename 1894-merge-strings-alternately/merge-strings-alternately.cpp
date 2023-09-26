class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         int  i=0;
        int j=0;
        int n1=word1.size() ;
        int n2=word2.size();
        string ans ="";
        bool f=true;
        while(i<n1&&j<n2) {
            
          if(f==true){
           ans += word1[i++];
           f=false;
           
          }
          else{
            ans+=word2[j++];
            f=true;
            
          }
       }

    while(i<n1)
   ans += word1[i++];     
        
       while(j<n2) ans += word2[j++];
        
        return ans;    
    }
};