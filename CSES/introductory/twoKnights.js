
const readline = require('readline')

let n;
let q = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

q.question('', function (n) {
    function r(n) {
        let e = 4 * ((n ** 2) - 3);
        let em = 8 * ((n ** 2) - 4); // 8 o 4 depende de la dimension, es 4 para n=4, 8 para todos los demas
        let emm = 8 * ((n ** 2) - 5) // 8 o 4 depende de la dimension, es 4 para n=5, 8 para todos los demas
        let emmm = ((n - 6) * 4) * ((n ** 2) - 5); // para n >= 6

        let me = 4 * ((n ** 2) - 5);
        let mem = 8 * ((n ** 2) - 7); // 8 o 4 depende de la dimension, es 4 para n=5, 8 para todos los demas
        let memm = ((n - 6) * 4) * ((n ** 2) - 7);

        let td = ((n - 4) ** 2) * ((n ** 2) - 9)
        return (e + em + emm + emmm + me + mem + memm + td) / 2
    }


    let list = [0, 6, 28, 96, 252, 550, 1056]
    for (let x = 1; x <= n; x++) {
        if (x <= list.length) {
            console.log(list[x - 1]);
        } else {
            console.log(r(x))
        }
    }
    q.close();

});