#include <string>

#include "format.h"

using std::string;

// // Converts long int of seconds into string of format hh:mm:ss
// string Format::ElapsedTime(long seconds) {
//   long int mins = seconds / 60;
//   long int hrs = mins / 60;

//   string hours, minutes, secs;

//   if (hrs < 10) {
//     hours = "0" + std::to_string(hrs);
//   } else {
//     hours = std::to_string(hrs);
//   }
//   if ((mins % 60) < 10) {
//     minutes = "0" + std::to_string(mins % 60);
//   } else {
//     minutes = std::to_string(mins % 60);
//   }
//   if ((seconds % 60) < 10) {
//     secs = "0" + std::to_string(seconds % 60);
//   } else {
//     secs = std::to_string(seconds % 60);
//   }

//   return hours + ":" + minutes + ":" + secs;
// }

inline std::string Pretify(int num){
  if ( num < 10 )
    return "0" + std::to_string(num);
  return std::to_string(num);
}

// Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
std::string Format::ElapsedTime(long seconds ) {

  int secs = seconds % 60;
  int hrs = seconds / 3600;
  int mins =(seconds - hrs * 3600 - secs) / 60;


  return ( Pretify(hrs) + ":" + Pretify(mins) + ":" + Pretify(secs) );
}
