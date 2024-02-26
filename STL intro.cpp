#include <iostream>
#include <vector>
#include <list>
using namespace std;


//vectors:
//they have some func that are common to all DS

// lists
// it gives us front operations as well (uses a doubly linked list in c++)

// dequeue like normal vector/list etc.


// queue normal queue front, rear FIFO

//Priority queue : uses heap, the largest element stays at TOP, automatically sorts the elements

//stack LIFO

//set : sorted order and everything unique 0 to n-1, it maintains a heap also? log n : complexity

// multi set : sorts but is not unique elements, it erases all instances of the element in that case
// unordered set: hold in random order but has to be unique, O(1),

// map is a python_dictionary/ hash map with key:value pairs, the keys are unique, values can be duplicated, key can be any datatype


int main()
{











    return 0;
}




















//STL Library all
// the libraries are imported using .h  they are header files that are used  by the linker to link those libs to this code file.
// the using namespace std means Standard namespace is being used,
/*


whats with this using namespace std?:
Basically, a namespace is a way to group together related functions, classes, variables, and other symbols. Most of the symbols of the standard library are defined inside a namespace called std. This means that if you are outside this namespace (which is always the case unless you are developing or extending the standard library itself), you need to prepend std:: to be able to access these symbols, for example, std::cout.

As a convenience, the using keyword allows you to import some or all of these symbols and later not have to specify their namespace. For example, if you write using std::cout, then you can later simply write cout instead of std::cout. If you write using namespace std, it imports all the symbols inside std, which is considered bad practice especially in header files, because it imports so many symbols that it increases the risks of collisions with your own symbols, or with the symbols of any compilation unit that includes the header.

One correction - cout is not a function, it's an object. endl is a function though.

From that description, it makes it seem like using namespace std; is a great thing with no downsides.

The problem with using namespace std; is that it doesn't just "pull in" cout. It pulls in EVERYTHING in the std:: namespace. Things you've probably never heard of and may never use in your career are now available by a short name.

So as you're writing your own code you might be intending to call a function that you wrote, but actually end up calling some function in the std:: namespace without knowing it, just because they have the same name. Or you might see warnings or errors having to do with picking a name that's already taken.

That's why it's recommended to either not do using namespace std; at all (and just put std:: in front of everything that needs it) OR go with the lesser-known-but-in-my-opinion-much-better option, using std::cout;.

If you go with using std::cout; that will let you just use cout directly like you want, but it won't pull everything from std:: into the namespace. You can very specifically and individually include just the things you want to pull in (cin, cout, string, etc) with none of the downsides.

*/




/*

//basic how functions work
void lol1()
{
    cout<<"Lol"<<"\n";
}

int adder(int a, int b)
{
    return a+b;
}



*/


/*

1: pairs


pair<int ,char> p1;
p1.first = 123;
p1.second = 'B';

cout<<p1.first<<" "<<p1.second<<"\n";

// we can nest pairs


pair<int,pair<char,char>> p2;
p2.first = 1;
p2.second.first = 'A';
p2.second.second ='B';
cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<"\n";


//more nesting but its a pain to address
pair<int,pair<string,pair<char,char>>> p3 = {1234,{"Doom",{'A','B'}}};
cout <<p3.first<<" "<<p3.second.first<<" "<<p3.second.second.first<<" "<<p3.second.second.second<<"\n";

//array of pairs

pair<int,int> arr[5]= {{1,2},{3,4},{5,6},{7,8},{9,10}};
for(int i=0;i<5;i++)
{
    cout<<arr[i].first<<" "<<arr[i].second<<"\n";
}




*/



/*


vector <int> vec;
vec.push_back(1);
vec.push_back(2); // it enters an element at the rear of the vector
vec.emplace_back(3); // it is the above but faster


// pre filled vector:
vector <int> v(5,123);
cout<<v[1]<<"\n";

vector <int> v1(v); // copy a vector to another diff vector.

// accessing elements? : use indices! 0 to n-1

// other way is to use an iterator:

vector <int> arr = {20,15,23,43,45};
for(vector<int> ::iterator i = arr.begin(); i != arr.end();i++)
{
    cout<< *i<<" ";
}

// vector.end() gives the address of the cell AFTER the last element of the vector

cout<<"\n";
for(int i=0; i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}

cout<<"\n";

// we can use auto to not write the above thing

for(auto lol:arr){cout<<lol<<" ";} // this runs through the whole container directly/ datatype

cout<<"\n";

// now deletion in a vector


arr.erase(arr.begin() +1);
for(auto lol:arr){cout<<lol<<" ";} // this runs through the whole container directly/ datatype

cout<<"\n";


// how to erase multiple things? give staring address and the end is address_to_delete_at_end +1
arr.erase(arr.begin()+1, arr.begin()+3);
for(auto lol:arr){cout<<lol<<" ";} // this runs through the whole container directly/ datatype

cout<<"\n";

// now inserting elements;
arr.insert(arr.begin()+2,345);
arr.insert(arr.begin()+3,543);
arr.insert(arr.begin(),4,34);
for(auto lol:arr){cout<<lol<<" ";} // this runs through the whole container directly/ datatype

cout<<"\n";

// how to insert a vector in another vector
vector<int> a ={1,0,3,4,56,78};
vector<int> b= {12,23,45,77,67};
a.insert(a.begin(),b.begin(),b.end()); // copies the vector portion to another vector
for(auto lol:a){cout<<lol<<" ";} // this runs through the whole container directly/ datatype

cout<<"\n";

// .size() gives the current length of the vector



*/


/*

list<int> l1 = {1,2,3,4,5};
l1.push_back(100);
for(auto elem:l1){cout<<elem<<" ";}
cout<<"\n";
l1.push_front(205);
//l1.insert(l1.begin()+2,600);
for(auto elem:l1){cout<<elem<<" ";}

*/
