class Solution 
{
  public:
    string addBinary(string a, string b) 
    {
        long long as=a.size();
        long long bs=b.size();
        long long diff=abs(as-bs),i;
        // cout<<diff<<" "<<bs<<endl;

        for(i=0;i<diff;i++)
        {
            if(as>bs)
            {
                b.insert(b.begin(),'0');
            }
            else if(bs>as)
            {
                a.insert(a.begin(),'0');
            }
        } 
      
        if(b[0]=='1' && a[0]=='1')
        {
              b.insert(b.begin(),'0');
              a.insert(a.begin(),'0');
        }
        // cout<<b[0]<<" "<<a[0]; 
        // cout<<a<<endl;
        // cout<<b<<endl;

        long long len=b.size();
        string s;
        int carry=0;
        for(i=len-1;i>=0;i--)
        {
            int x=a[i] - '0';
            int y=b[i] - '0';
            // cout<<x<<endl;
            // cout<<y<<endl;
            if(x+y==0)
            {
                if(carry==0)
                {
                   s.insert(s.begin(),'0');
                   carry=0;
                }
                else
                {
                    s.insert(s.begin(),'1');
                    carry=0;
                //    cout<<carry<<" ";
  
                }
            }
            else if(x+y==1)
            {
                if(carry==0)
                {
                    s.insert(s.begin(),'1');
                    carry=0;
                }
                else
                {
                    s.insert(s.begin(),'0');
                    carry=1;
                }
            }
            else
            {
                if(carry==0)
                {
                   s.insert(s.begin(),'0');
                   carry=1;
                }
                else
                {
                    s.insert(s.begin(),'1');
                    carry=1;
                }
            }
        }
        if(carry==1)
        {
            s.insert(s.begin(),'1');
            return s;
        }
        else if(carry==0)
        {
            return s;
        }
        // cout<<s;
        // if(s[0]==0)
        // {
        //     s.erase(s.begin());
        //     return s;
        // }
        // else if(s[0]==1)
        // {
        //     return s;
        // }
        return s;
    }
};