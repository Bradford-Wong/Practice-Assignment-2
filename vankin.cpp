#include<iostream>
#include<stdio.h>
#include<fstream>



using namespace std;

int max_sum = -9999;

// Get max Function
//Input: Max up, max left, Current Value
//Output: Max value

int max(int up, int left, int current){
   int temp;
   temp = up;
   if (temp < left){
      temp = left;
   }
   if (temp < current){
      temp = current;
   }
   return temp;
}

// Recursion Function
//Input: Array
//Description: Recursive runs through each index in the array for the max


int main(){
// File Input
   int dimension;
   fstream file;
   file.open("test/1/input.txt");
   file>> dimension;
   int array[dimension][dimension];
   for (int i =0; i<dimension; i++){
      for (int j =0; j<dimension; j++){
         if (file.peek() == ','){
            file.ignore();
         }
         file>>array[i][j];

      }
   }
   for (int i =0; i<dimension; i++){
      for (int j =0; j<dimension; j++){
         cout<<array[i][j]<<" ";

      }
      cout<<endl;
   }

   file.close();


// File Output
   ofstream output_file;
   output_file.open("test/1/output.txt");
   output_file << max_sum;





}