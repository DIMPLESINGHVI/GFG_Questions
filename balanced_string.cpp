class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> st; int j=x.length()-1;
        for(int i=0;i<x.length();i++)
        {
            if(x[i]=='('|| x[i]=='{'|| x[i]=='[')
            {
                st.push(x[i]);
            }
            else if((x[j]==')'&& x[i]=='(')||(x[j]=='}'&&x[i]=='{')||(x[j]==']'&&x[i]=='['))
            {
                st.pop();
                j--;
            }
        }
        if(!st.empty())
        {
            return 0;
        }
        else
         return 1;
    }

};
