// ========================
//       Information
// ========================

// Direct Link: https://www.hackerrank.com/challenges/js10-data-types/problem
// Difficulty: Easy
// Max Score: 10
// Language: JavaScript (Node.js)

// ========================
//         Solution
// ========================

function performOperation(secondInteger, secondDecimal, secondString) {
    
    const firstInteger = 4;
    const firstDecimal = 4.0;
    const firstString = 'HackerRank ';
    console.log(firstInteger + Number(secondInteger));
    console.log(firstDecimal + Number(secondDecimal));
    console.log(firstString.concat(secondString));
}
