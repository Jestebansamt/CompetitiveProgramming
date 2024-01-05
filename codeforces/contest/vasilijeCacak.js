
function vasilije(p) {
    let a = p.split(" ");
    let n = parseInt(a[0])
    let k = parseInt(a[1])
    let x = parseInt(a[2])

    if (n == x && k == 1) {
        return "YES"
    }
    return ((k * n) - (((k - 1) * k) / 2) >= x && (k * (k + 1)) / 2 <= x) ? "YES" : "NO"



}



const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


rl.question('', (e) => {
    function hacerPregunta(x) {
        if (x < e) {
            rl.question('', (a) => {
                console.log(vasilije(a));
                hacerPregunta(x + 1);
            });
        } else {
            rl.close();
        }
    }
    hacerPregunta(0);
});

