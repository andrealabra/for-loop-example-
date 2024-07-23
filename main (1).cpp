#include <iostream>

using namespace std; 

int main() {

  for (int i = 1; i <= 20; i++){
    if (i%2 == 0){
      cout << i;
    } 
  }

  for (int j = 1; j <=5; j++){
    cout << "Helloooo" << endl; 
  }

  // print even numbers from 2 to 20 

  for(int k =2; k <= 20; k+=2){
    cout << k << endl; 
  }

  //Calculate numbers from 1 - 100
  int sum = 0;
  for (int l = 1; l <= 100; l++){
    sum += 1; 
  }
  cout << sum << endl;


  
return 0; 
  
}

//1. Print number from 10-1000 every 10 ex (10, 20, 30 --- 1000)

//2. Display your name, however many years old you are

//3. Print backwards 10 - 1

//4. Print the multiplication table of 5 up to 10 