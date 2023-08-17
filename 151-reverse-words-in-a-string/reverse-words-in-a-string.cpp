class Solution {
public:
    string reverse(string temp){
        int i=0;
        int j=temp.length()-1;
        while(i<j){
            swap(temp[i],temp[j]);
            i++;
            j--;
        }
        return temp;
    }
    string reverseWords(string s) {
        string temp = "";
         string temp1 = "";
        int n= s.length();
        
         for(int i=n-1;i>=0;i--)
         {
              
             if(s[i] != ' ')
             { temp+=s[i];
             }
             if(i==0 && s[i]!= ' '){
                 string c= reverse(temp);
                temp1 = temp1+c;
                temp="";
             }
            else if(s[i]==' '){
                string c= reverse(temp);
               temp1 = temp1+c+" ";
               temp="";
               while(i>0 && s[i-1]==' '){
                   i--;
               }
               
            }
            


         }
         int i=0;
         while(temp1[i]==' '){
             i++;
         }
         int j=temp1.length()-1;
         while(temp1[j]==' '){
             j--;
         }
         
         int a = temp1.length()-1-j;
         temp1.erase(j+1, a);
         temp1.erase(0,i);
         
           return temp1;





      

        
    }
};