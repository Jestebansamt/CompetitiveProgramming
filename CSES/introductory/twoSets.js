

const readline = require('readline')


let q = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

let l1 = [];
let s1 = 0;
let l2 = [];


q.question('', function (a) {
    let n = parseInt(a)
    let nm = ((n*(n+1))/2)
    if( nm % 2 == 0){
        for(let i = n; i >= 1; i--){

            if(((nm/2) - (s1 + i) ) >= 0 ){
                s1 += i;
                l1.push(i); 
            } else{
                l2.push(i);
            }
        }
        console.log("YES")

        console.log(l1.length);
        for(let k of l1 ){
            console.log(k);
        }
        console.log(l2.length);
        for(let k of l2 ){
            console.log(k);
        }
    } else{
        console.log("NO")
    }

    q.close();
})
