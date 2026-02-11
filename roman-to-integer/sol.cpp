//First solution- slow
// class Solution { 
// public:
//     int romanToInt(string s) {
//         unordered_map<char, int> romanToIntMap;
//         //Map the 7 numerals to numbers
//         romanToIntMap['I']=1;
//         romanToIntMap['V']=5;
//         romanToIntMap['X']=10;
//         romanToIntMap['L']=50;
//         romanToIntMap['C']=100;
//         romanToIntMap['D']=500;
//         romanToIntMap['M']=1000;
       
//        int total = 0;
//        int second = 0;
//        int first = 0;
//         //Iterate through string
//         for(int i=0; i<s.size(); i++){
            
//             first = romanToIntMap.at(s[i]);
//             if (i < s.size()-1) {
//                 second = romanToIntMap.at(s[i+1]);
//             } else {
//                 second=0;
//             }
            
//             //If char is less than char after then 2nd char-first char
//             //Add sum or single value to total
//             //Start at next index
//             if (first < second) {
//                 total += second -first;
//                 i++;
//             } else {
//                 total += first;
//             };
//         }
//         return total;
//         //return total
//     }
// };
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int second = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            int first;

            switch (s[i]) {
                case 'I': first = 1; break;
                case 'V': first = 5; break;
                case 'X': first = 10; break;
                case 'L': first = 50; break;
                case 'C': first = 100; break;
                case 'D': first = 500; break;
                case 'M': first = 1000; break;
            }

            if (first < second) {
                total -= first;
            } else {
                total += first;
            }

            second = first;
        }

        return total;
    }
};
