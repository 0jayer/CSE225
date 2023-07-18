//Ahnaf Ojayer 2121949642
//Stack linked list  assignment

#include<iostream>
#include<string>

#include "stacktype.cpp"
using namespace std;
int prec(char c)
{
    if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return 0;
}
int main()
{
    string s,res;
    getline(cin,s);
    StackType<char> st;
    int si=s.length();
    for(int i=0; i<si; i++)
    {
        if(s[i]==' ')
            continue;

        while(!st.IsEmpty() && st.Top()!= '(' && prec(st.Top())>=s[i])
        {
            res=res+" "+st.Top();          //push the remaining operators in the string according to precedence
            st.Pop();
        }
        if(isdigit(s[i]))
            res+=s[i];


        else
        {
            if(s[i]=='(')                   //opening bracket->push in stack
            {
                st.Push(s[i]);
                continue;
            }

            else if(s[i]==')')              //closing bracket->pop stack until opening bracket encountered
            {
                while(!st.IsEmpty() && st.Top()!='(')
                {
                    res=res+" "+st.Top();
                    st.Pop();
                }
                if(st.IsEmpty())
                {
                    cout<<"Invalid expression\n";
                    return 0;
                }
                st.Pop();           //pop the opening bracket
                continue;
            }
            res+=" ";
            st.Push(s[i]);          //if not digit or opening or closing bracket then operator so push it in stack
        }
    }
    while(!st.IsEmpty())
    {
        char c = st.Top();              //pop the rest of the stack into the string
        res=res+" "+c;
        st.Pop();
    }
    //cout<<res<<endl;
    //Evaluationg the result
    StackType<double>st2;
    string post;
    int len=0;
    int s2=res.length();
    for(int i=0; i<s2; i++)
    {
        if(!isdigit(res[i]) && res[i]!=' ')
        {
            double result;
            double res2=st2.Top();
            st2.Pop();
            if (st2.IsEmpty())
            {
                cout << "Invalid Expression" << endl;
                return 0;
            }
            double res1=st2.Top();
            st2.Pop();
            if(res[i]=='+')
            {
                st2.Push(res1+res2);
            }
            else if(res[i]=='-')
            {
                st2.Push(res1-res2);
            }
            else if(res[i]=='*')
            {
                st2.Push(res1*res2);
            }
            else if(res[i]=='/')
            {
                if(res2==0)
                {
                    cout<<"Invalid expression\n";
                    return 0;
                }
                st2.Push(res1/res2);
            }
            i++;
        }
        else if(isdigit(res[i]))
            post+=res[i];
        else if(res[i]==' ')
        {
            int r = 0;
            if(!post.empty())
                r = stoi(post);
            post="";
            st2.Push(r);
        }
    }
        cout<<st2.Top()<<endl;
    return 0;

}
