
const readline = require('readline')


let q = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

q.question('', function (a) {
    let n = parseInt(a)
    let s = 0
    let d = n
    while (d / 5 >= 1) {
        s += Math.floor(d / 5)
        d = Math.floor(d / 5)
    }
    console.log(s)
    q.close();
})
