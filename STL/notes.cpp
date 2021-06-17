#include<vector> -----> vector header file

vector<int> v  -------> this is a simple declaration of vector without any arguments

vector<int> v1(v) -----> this will copy the content of vector v into v1 and when we
declare or give name to a vector it just means that we are declaring an object for
the vector class.


vector<int> v2(2,3) -----> this means a vector named v2 will be created whose size
is 2 and all its elements will be initialised by 3, which means v2[0]=v2[1]=3.


vector<int> v2(2)  ------> If you don't specify the initialised value then, only a
vector of size 2 will be created and will be initialised by a garbage value. In some
compilers like sublime it gets initialised by 0. So when we do push_back operation 
it adds elements after n elements which means if we declare vector<int> v2(3) then an 
array of size 3 with all values initialised to 0 will be created and if we do push_back
operation like push_back(3) then the  new array will look like 0|0|0|3. so when you 
define size of array use cin directly otherwise use push_back.



#to bedone
1. GCD recursion code