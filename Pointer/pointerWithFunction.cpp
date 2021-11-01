#include <bits/stdc++.h>

using namespace std;

int Min(int *ptr, int len)
{
    // *ptr receive ar array's first element address
    // array take memory sequential, like address of 3 size array is [10x,14x,18x]
    // so if address of ar[0] = 10x and ar[1] = 14x then ar+1 = 14x and ar+2 = 18x
    int minval = *ptr;
    for(int i=1;i<len;i++)
    {
        minval = min(minval,*(ptr+i));
    }
    return minval;
}

int Max(int ar[], int len)
{
    // ar[] receive full array
    int maxval=ar[0];
    for(int i=1;i<len;i++)
    {
        maxval = max(maxval,ar[i]);
    }
    return maxval;
}

void MinMax(int *ptr, int len, int *minVal, int &maxVal)
{
    // *ptr receive address of ar[0]
    // *minVal is a pointer that point main class minVal
    // &maxVal is referance of main class maxVal
    // this int &maxVal don't create any variable or pointer this only refer main class maxVal  
    *minVal = *ptr;
    maxVal = *ptr;
    for(int i=1;i<len;i++)
    {
        *minVal = min(*minVal,*(ptr+i));
        maxVal = max(maxVal,*(ptr+i));
    }
}

int main()
{
    int ar[]={1,5,9,7,3};
    cout << "Minimu number of this array is " << Min(&ar[0],5) << endl;
    cout << "Maximum number of this array is " << Max(ar,5) << endl;
    int minval,maxVal;
    MinMax(&ar[0],5,&minval,maxVal);
    cout << "Minimum and Maximum number is " << minval << ", " << maxVal << endl;
    
    // dynamic array
    int *ptr = new int[3]; // create a 3 size array and *ptr point first index address, this allocate memory
    *ptr = 5;
    *(ptr+1) = 6;
    ptr[2] = 7;
    
    // when you allocate memory manualy you must be deallocate int manually after finising work
    delete[]ptr; // deallocate memory for new int[3]
    ptr = NULL; // now *ptr point nothig
    
    return 0;
}