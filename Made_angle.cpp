#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
  int n; 
  cin>>n;
  int First_Star = n;
  int Second_Star = 2*n - 1;
  int Third_star = 1;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
      for(int row =1; row <= n; row++ ){

          // pattern step 1
          for(int cst = 1; cst<= star; cst++){
            cout<<"*";
          }
           cout<<" ";
            
            for( cst_2 = 1; cst_2 <= Second_Star; cst_2 ++) {
               cout<<"*";
            }
            cout<<" ";
             for(int cst3 =1; cst3<=Third_star; cst3++ ){
                 cout<<"*";
             }
              cout<<" ";
              for( cst_2 = 1; cst_2 <= Second_Star; cst_2 ++) {
               cout<<"*";
            }
            cout<<" ";
            for(int cst = 1; cst<= star; cst++){
            cout<<"*";
          }


          }

          // one tab sapce 

          // pattern

          // one tab sapce 
            // pattern

           



      }
     
    return 0;
}