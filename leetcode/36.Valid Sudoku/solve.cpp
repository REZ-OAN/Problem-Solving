
/***
     Bismillahir Rahmanir Rahim
     Author : Rezoan Ahmed Abir.
     From Bangladesh.
     Currently Studing CSE at CUET.

***/

/***
     Verdict : Accepted

     Short description  :
         Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

         Each row must contain the digits 1-9 without repetition.
         Each column must contain the digits 1-9 without repetition.
         Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

***/
/***
 
     logic :
      check for every row 
      check for every column
      check for every 3*3 matrix

      
***/
#include<bits/stdc++.h>
using namespace std;
 bool isValidSudoku(vector<vector<char>>& a) {
         map<char,bool>m1,m2;
        m1.clear();
        m2.clear();
       
        for(int i=0;i<9;i++)
        {
            m1.clear();
            m2.clear();
            for(int j=0;j<9;j++)
            {
               if(a[i][j]!='.')
               {
                   if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
               }
               if(a[j][i]!='.')
               {
                   if(m2[a[j][i]])
                   {
                       return false;
                   }
                   else m2[a[j][i]]=1;
               }
            }
         }
        m1.clear();
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
        m1.clear();
           for(int i=0;i<3;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
        m1.clear();
            for(int i=0;i<3;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
             m1.clear();
        for(int i=3;i<6;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
        m1.clear();
           for(int i=3;i<6;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
        m1.clear();
            for(int i=3;i<6;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
             m1.clear();
        for(int i=6;i<9;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
        m1.clear();
           for(int i=6;i<9;i++)
        {
            for(int j=3;j<6;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
        m1.clear();
            for(int i=6;i<9;i++)
        {
            for(int j=6;j<9;j++)
            {
                if(a[i][j]!='.')
                {
                     if(m1[a[i][j]])
                   {
                       return false;
                   }
                   else m1[a[i][j]]=1;
                }
            }
        }
        return true;    
    }
      
int main()
{
   vector<vector<char>>v(9);
   for(int i=0;i<9;i++)
   {
    for(int j=0;j<9;j++)
    {
        char c;
        cin>>c;
        v[i].push_back(c);
    }
   }

  cout<<isValidSudoku(v);

}

    
    
     
     