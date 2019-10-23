// 5.25 (Removing break and continue) A criticism of the break and continue
// statements is that each is unstructured. These statements can always be
// replaced by structured statements. Describe in general how you'd remove any
// break statement from a loop in a program and replace it with some structured
// equivalent. [Hint: The break statement leaves a loop from within the body of
// the loop. Another way to leave is by failing the loop-continuation test.
// Consider using in the loop-continuation test a second test that indicates
// "early exit because of a 'break' condition."] Use the technique you developed
// here to remove the break statement from the program of Fig. 5.13.
//
// Fig. 5.13: fig05_13.cpp
// break statement exiting a for statement.
// #include <iostream>
// using namespace std;
//
// int main()
// {
//   int count;
//
//   for ( count = 1; count <= 10; ++count ) // loop 10 times
//   {
//     if ( count == 5 )
//       break; // break loop only if count is 5
//
//     cout << count << " ";
//   } // end for
//
//   cout << "\nBroke out of loop at count = " << count << endl;
// } //end main

//******************************************************************************
// Resolved by: Hieu Vu
//******************************************************************************

// A loop can be written without a break by placing in the loop-continuation
// test a second test that indicates "early exit because of a 'break'
// condition." In the body of the loop, the break statement can be replaced
// with a statement setting a bool variable to true to indicate that a 'break'
// should occur. Any code appearing after the original break in the body of the
// loop can be placed in a control statement that causes the program to skip
// this code when the 'break' condition is true. Doing so causes the 'break' to
// be the final statement executed in the body of the loop. After the 'break'
// condition has been met, the new "early exit because of a 'break' condition"
// test in the loop-continuation test will be false, causing the loop to
// terminate. Alternatively, the break can be replaced by a statement that makes
// the original loop-continuation test immediately false, so that the loop
// terminates. Again, any code following the original break must be placed in a
// control statement that prevents it from executing when the 'break' condition
// is true. 

#include <iostream>

int main() {
  int count;

  for (count = 1; (count <= 10) && (count != 5); ++count) {
    std::cout << count << " ";
  }

  std::cout << "\nBroke out of loop at count = " << count << std::endl;
}
