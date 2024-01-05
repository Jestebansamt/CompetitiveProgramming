// const readline = require('readline');

// let q = readline.createInterface({
//     input: process.stdin,
//     output: process.stdout
// });

// q.question('', function (a) {
//     let n = parseInt(a);
//     q.question('', function (b) {


//         q.close();
//     })

// })

b = "603 324 573 493 659 521 654 70 718 257";
var p = b.split(" ").map(Number).sort((a, b) => b - a);
let s = 0;
for (let x of p) s += parseInt(x);

s = s / 2;

let s1 = p[0];
let s2 = 0;
let c1 = [p[0]];
let c2 = [];

for (let i = 1; i < p.length; i++) {
    console.log(p[i]);
    if (s1 + p[i] <= s) {
        c1.push(p[i]);
        s1 += p[i]
    } else {
        c2.push(p[i]);
        s2 += p[i]
    }

}
console.log(c1,s1,c2,s2);
console.log(Math.abs(s1 - s2));

// Backtraking encontrar los conjuntos que tengan la suma mas cercana a la mitad de la sumatoia con todos los numeros