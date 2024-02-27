#include <iostream>

using namespace std;

// recursion sheet

int mrp(int n)
{
    if(n == 0) return 0;

    cout<<n<<"\n";
    n--;
    mrp(n);
}

int one_to_n(int ch ,int n)
{
    if(n == 0 ){return 0;}

    cout<<ch<<" ";
    one_to_n(ch+1,n-1);
}

int sum_of_nnn(int sum,int n)
{
    if(n==0){return sum;}
    sum = sum+n;
    n--;
    sum_of_nnn(sum,n);
}


int f(int fact,int n)
{
    if(n==1){return fact;}

    fact = fact*n;
    n=n-1;
    f(fact,n);
}



int * rarr(int arr[], int low, int high)
{
    if(low >= high){return arr;}

    int temp = arr[low]; arr[low] = arr[high]; arr[high] = temp;

    cout<<low<<" "<<high<<"\n";

    low++;high--;
    rarr(arr,low,high);
}


void fib(int a,int b, int n)
{
    if(n < 0){return;}

    cout<<a<<" ";

    int temp = a;

    a = b;
    b = b+temp;

    n--;

    fib(a,b,n);
}


int main()
{

//int a[10] = {1,2,3,4,5,6,7,8,9,10};
//int * y = rarr(a,0,9);

//for(int i=0;i<10;i++)
//{
//    cout<<y[i]<<"\n";
//}

//fib(0,1,5);



}
