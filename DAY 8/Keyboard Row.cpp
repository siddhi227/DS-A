class Solution {
public:
    vector<string> findWords(vector<string>& words)
    {
            
        unordered_map<char,int> rowID;
        string temp="qwertyuiopQWERTYUIOP";
        for(char &i:temp)
            rowID[i]=1;
        temp="asdfghjklASDFGHJKL";
        for(char &i:temp)
            rowID[i]=2;
        temp="zxcvbnmZXCVBNM";
         for(char &i:temp)
            rowID[i]=3;
     bool same;
     vector<string> result;
     for(string &w: words)
     {
         same=true;
         for(int i=1;i<w.size();i++)
         {
             if(rowID[w[i]]!=rowID[w[0]])
             {
                 same = false;
                 break;
             }
         }
         if(same)
            result.push_back(w);
     }
     return result;
}
};

