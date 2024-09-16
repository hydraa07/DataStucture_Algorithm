// // #include<iostream>
// // using namespace std;
// // int factorial(int n){
// //     if(n==0){
// //         return 1;
// //     }
// //     int ans;
// //      cout<<n<<"*"<<n-1;
// //      cout<<endl;
// //     ans = n*factorial(n-1);

// //     return ans;
// // }
// // int main(){
// //     int n;
// //     cout<<"enter the factorial element "<<endl;
// //     cin>>n;
// //     cout<<"Factorial is = "<<factorial(n);
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int h1, m1, s1;
// //     int h2, m2, s2;
// //     int diff;
// //     cout << "enter the h1" << endl;
// //     cin >> h1 >> m1 >> s1;
// //     cout << "enter h2" << endl;
// //     cin >> h2 >> m2 >> s2;

// //     int h3, m3, s3;

// //     h3 = h2 - h1;
// //     m3 = m2 - m1;
// //     s3 = s2 - s1;

// //     if (s3 < 0)
// //     {
// //         --s3;
// //         s3 += 60;
// //     }
// //     if (m3 < 0)
// //     {
// //         --m3;
// //         m3 += 60;
// //     }
// //     if (h3 < 0)
// //     {
// //         h3 = 24 + h3;
// //     }
// //     cout << h3 << ":" << m3 << ":" << s3 << endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// struct TIME
// {
//   int seconds;
//   int minutes;
//   int hours;
// };

// void computeTimeDifference(struct TIME, struct TIME, struct TIME *);

// int main()
// {
//     struct TIME t1, t2, difference;

//     cout << "Enter start time." << endl;
//     cout << "Enter hours, minutes and seconds respectively: ";
//     cin >> t1.hours >> t1.minutes >> t1.seconds;

//     cout << "Enter stop time." << endl;
//     cout << "Enter hours, minutes and seconds respectively: ";
//     cin >> t2.hours >> t2.minutes >> t2.seconds;

//     computeTimeDifference(t1, t2, &difference);

//     cout << endl << "TIME DIFFERENCE: " << t1.hours << ":" << t1.minutes << ":" << t1.seconds;
//     cout << " - " << t2.hours << ":" << t2.minutes << ":" << t2.seconds;
//     cout << " = " << difference.hours << ":" << difference.minutes << ":" << difference.seconds;
//     return 0;
// }
// void computeTimeDifference(struct TIME t1, struct TIME t2, struct TIME *difference){

//     if(t2.seconds > t1.seconds)
//     {
//         --t1.minutes;
//         t1.seconds += 60;
//     }

//     difference->seconds = t1.seconds - t2.seconds;
//     if(t2.minutes > t1.minutes)
//     {
//         --t1.hours;
//         t1.minutes += 60;
//     }
//     difference->minutes = t1.minutes-t2.minutes;
//     difference->hours = t1.hours-t2.hours;
// }

#include <iostream>
using namespace std;

void summ(int a, int b)
{
    if (b == 0)
    {
        return;
    }

    int c = a * b;
    cout << c << endl;
    summ(a, b - 1);
    cout << c << endl;
}
int main()
{

    summ(2, 10);
}