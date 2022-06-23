
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
    Given a pattern and a string s, find if s follows the same pattern.
    Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.
    Constraints:
     1 <= pattern.length <= 300 pattern contains only lower-case English letters.
     1 <= S.length <= 3000
     S contains only lowercase English letters and spaces ' '.
     S does not contain any leading or trailing spaces.
     All the words in S are separated by a single space.

***/
/***
 
     logic :
      number of words in string S  and number of charaters in string Pattern must be same
      other wise  return 0;
      then you have to map   character to word 
      and word to character 
      then check if any of the character is not able to grab any word
      if check is true then return 0
      other wise return 1;

      
***/
#include<bits/stdc++.h>
using namespace std;
bool wordPattern(string p, string s) {
       vector<string>v;
       string k="";
       int i=0;
       for(;i<s.size();)
       {
           k="";
           while(s[i]!=' '&&i<s.size())
           {
               k.push_back(s[i]);
               i++;
           }
           if(s[i]==' '){i++;v.push_back(k);}
           if(i==s.size()){v.push_back(k);break;}
       }
     bool a=1;
    if(v.size()!=p.size())a=0;
    map<char,string>m1;
    map<string,char>m2;
    m1.clear();
    m2.clear();

      for(int i=0;i<p.size()&& a!=0;i++)
      {
          if(m1[p[i]]==""||m1[p[i]]==v[i])
          {
             if(m2[v[i]]==p[i]||m2[v[i]]==0)
             {
                 m2[v[i]]=p[i];
                 m1[p[i]]=v[i];
             }
          }

      }
      for(int i=0;i<p.size();i++)
      {
          if(m1[p[i]]!=v[i]){
              a=0;break;
          }
      }
    return a;
    }
int main()
{
   string p,s;
   cin>>p;
   cin.ignore();
   getline(cin,s);
   if(wordPattern(p,s))
    cout<<"true"<<endl;
   else cout<<"false"<<endl;



}

    
    
     
     