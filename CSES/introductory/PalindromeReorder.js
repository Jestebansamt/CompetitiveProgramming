const readline = require('readline')


let q = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})


q.question('', function (a) {
    let n = a.split('').sort();
    let l1 = ''
    let l2 = ''
    let van = true
    let mayor = ''
    let menor = ''

    for (let x in n) {
        x % 2 == 0 ? l1 += n[x] : l2 += n[x]
    }

    l1.length >= l2.length ? mayor = l1 : mayor = l2;
    l1.length < l2.length ? menor = l1 : menor = l2;

    let contador = 0
    let m = "";
    let s = "";
    let sr = "";

    if (n.length % 2 == 0) {
        for (let x = 0; x < l1.length; x++) {
            s += mayor[x]
            sr += menor[menor.length - 1 - x]
            if (mayor[x] != menor[x]) {
                van = false
                break
            }
        }
        van ? console.log(s + sr) : console.log("NO SOLUTION");
    }
    else {
        for (let x = 0; x < mayor.length; x++) {
            if (menor[x - contador] == mayor[x]) {
                s += mayor[x]
                sr += menor[menor.length - 1 - x + contador]
            } else {
                m += mayor[x]
                contador++;
            }
            if (contador > 1) {
                van = false
                break
            }
        }
        van ? console.log(s + m + sr) : console.log("NO SOLUTION");
    }
    q.close();
})

