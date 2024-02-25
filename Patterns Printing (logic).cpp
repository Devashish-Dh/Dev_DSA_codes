#include <iostream>

using namespace std;

int main()
{








}


 /*
 Revisit later: https://takeuforward.org/pattern/pattern-22-the-number-pattern/









    // pattern 1

    for (int i=0; i<5;i++)
    {
        for(int j =0; j<5;j++)
            {
                cout<<"*";
            }
        cout<<"\n";
    }




    // pattern 2
    for(int i =1; i<6;i++)
    {
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }



    //pattern 3
    for(int i =1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {cout<<j;}

    cout<<"\n";
    }
    return 0;



    //pattern 4
    for(int i =1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {cout<<i;}

    cout<<"\n";
    }
    return 0;





     // pattern 5

    for (int i=5; i>0;i--)
    {
        for(int j =5; j>=i;j--)
            {
                cout<<"*";
            }
        cout<<"\n";
    }




    //pattern 6
    for(int i =5;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {cout<<j;}

    cout<<"\n";
    }
    return 0;






    //pattern 8
    int n =5;

    for(int i=1; i<=n; i ++)
    {
        int s = 2*i -1;
        int sp = ( 2*n - 1 - s)/2;

        for(int z=0;z<sp;z++)
            {cout<<" ";}

        for(int k =1;k<=s;k++)
        {
            cout<<"*";
        }

        for(int j=0;j<sp;j++)
            {cout<<" ";}

        cout<<"\n";




        //pattern 9
    int n = 5;

    for(int i =1; i<=n;i++)
    {
        int spaces = 2*i - 2;

        int stars = 2*n - 1 - spaces;

        for(int j=0; j< spaces/2;j++)
        {
            cout<<" ";
        }
        for(int k = 0;k< stars;k++){
            cout<<"*";
        }
        for(int l=0; l< spaces/2;l++)
        {
            cout<<" ";
        }
        cout<<"\n";

    }



















    //pattern 10 Diamond


    int n =5;

    for(int i=1; i<=n; i ++)
    {
        int s = 2*i -1;
        int sp = ( 2*n - 1 - s)/2;

        for(int z=0;z<sp;z++)
            {cout<<" ";}

        for(int k =1;k<=s;k++)
        {
            cout<<"*";
        }

        for(int j=0;j<sp;j++)
            {cout<<" ";}

        cout<<"\n";
    }


    for(int p =1; p<=n;p++)
    {
        int spaces = 2*p - 2;

        int stars = 2*n - 1 - spaces;

        for(int q=0; q< spaces/2;q++)
        {
            cout<<" ";
        }
        for(int k = 0;k< stars;k++){
            cout<<"*";
        }
        for(int l=0; l< spaces/2;l++)
        {
            cout<<" ";
        }
        cout<<"\n";

    }

























     //pattern 10 Diamond


    int n =5;

    for(int i=1; i<=n; i ++)
    {
        int s = 2*i -1;
        int sp = ( 2*n - 1 - s)/2;

        for(int z=0;z<sp;z++)
            {cout<<"+";}

        for(int k =1;k<=s;k++)
        {
            cout<<" ";
        }

        for(int j=0;j<sp;j++)
            {cout<<"+";}

        cout<<"\n";
    }


    for(int p =1; p<=n;p++)
    {
        int spaces = 2*p - 2;

        int stars = 2*n - 1 - spaces;

        for(int q=0; q< spaces/2;q++)
        {
            cout<<"+";
        }
        for(int k = 0;k< stars;k++){
            cout<<" ";
        }
        for(int l=0; l< spaces/2;l++)
        {
            cout<<"+";
        }
        cout<<"\n";

    }










    /pattern 11
    int n=5;

    for(int i=0; i<n; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int p=1; p<n; p++)
    {
        for(int k=1;k<= n-p;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }












// pattern 12
    int n =5;
    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<=i;j++)
        {
            if(j%2 != 0) cout<<"1";
            else{cout<<"0";}
        }
        cout<<"\n";
    }




//pattern 13
int n =5;
bool ch;
    for(int i=1;i<=n;i++)
    {
        if(i%2 !=0)
            {ch =1;}
            else
            {ch=0;}

        for(int j =0;j<i;j++)
        {

            cout<<ch;
            ch =!ch;
        }
        cout<<"\n";
    }









    //pattern 14
    int n =5;
    int ch =1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }







        //pattern 15
         int n = 5;
    char c ='A';
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<"\n";
    }








    //pattern 16
    int n = 5;
    char ch= 'A';
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<ch;
            ch++;
        }
        ch = 'A';
        cout<<"\n";
    }







    // pattern 17
    int n = 5;
    char ch= 'A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ch;

        }
        ch++;
        cout<<"\n";
    }










    //pattern 16
    int n =5;
    char ch = 'A';
    for(int i=1; i<=n; i ++)
    {
        int s = 2*i -1;
        int sp = ( 2*n - 1 - s)/2;

        for(int z=0;z<sp;z++)
            {cout<<" ";}

        for(int k =0;k<s/2;k++)
        {
            cout<<ch;
            ch++;
        }

        for(int t =0;t<=s/2;t++)
        {
            cout<<ch;
            ch--;
        }

        for(int j=0;j<sp;j++)
            {cout<<" ";}

        cout<<"\n";
        ch ='A';












        //PATTERN 17
    int n = 5;

    char ch = 'A';

    for(int i=0;i<n;i++)
    {
        ch = ch+n-1;
        for(int j=i;j>=0;j--)
        {
            cout<<char(ch-j)<<" ";
        }
        cout<<"\n";
        ch = 'A';
    }








    //pattern 17
    int n=5;

    for(int i=1;i<=n;i++)
    {
        int stars = 2*i;
        int spaces = 2*n - stars;

        for(int j=0;j<stars/2;j++)
        {
            cout<<"*";
        }
        for(int u=0;u<spaces;u++)
        {
            cout<<" ";
        }
        for(int t = 0; t<stars/2; t++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=n;i>=0;i--)
    {
        int stars = 2*i;
        int spaces = 2*n - stars;

        for(int j=0;j<stars/2;j++)
        {
            cout<<"*";
        }
        for(int u=0;u<spaces;u++)
        {
            cout<<" ";
        }
        for(int t = 0; t<stars/2; t++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }










    //pattern 18
    int n=5;

    for(int j=0;j<n;j++)
        {
            cout<<"*";
        }

    for(int i=0;i<n;i++)
    {   cout<<"\n";
        cout<<"*";
        for(int k=0;k<n-2;k++){cout<<" ";}
        cout<<"*";

    }
    cout<<"\n";
    for(int j=0;j<n;j++)
        {
            cout<<"*";
        }

















*/







/*
 cout << "Hello Dev!" << "\n";
    cout<<"hi world"<<"\n"<<"LOL \n";
    cout<<" enter some user input";
    int x;
    cin>>x;
    cout<<"x val "<<x<<"\n";
    cout<<"enter any three values \n";
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"vals a b c "<<a<<b<<c<<"\n";
    cout<<sizeof(a);
    cout<<sizeof(char);


*/


/* IMP / Worth solving yourself:

//pattern 7
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < 10; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<10-i-1; j++)
        {
            cout <<" ";
        }

        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){

            cout<<"*";
        }

        // For printing the spaces after the stars in each row
         for (int j =0; j<10-i-1; j++)
        {
            cout <<" ";
        }

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;


        */


        //nice
