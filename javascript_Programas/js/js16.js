function Suma(){
    let x=5;
    let y=2;
    let z=x+y;
    document.getElementById("demoSuma").innerHTML = "x + y = "+z;
}

function Resta(){
    let a=5;
    let b=2;
    let c=a-b;
    document.getElementById("demoResta").innerHTML = "a - b = "+c;
}

function Multiplicación(){
    let d=5;
    let e=2;
    let f=d*e;
    document.getElementById("demoMulti").innerHTML = "d * e = "+f;
}

function División(){
    let g=5;
    let h=2;
    let i=g/h;
    document.getElementById("demoDivi").innerHTML = "g / h = "+i;
}

function Módulo(){
    let j=5;
    let k=2;
    let l=j+k;
    document.getElementById("demoMod").innerHTML = "j % k = "+l;
}

function Incremento(){
    let m=5;
    m++;
    let n=m;
    document.getElementById("demoIncre").innerHTML = "m++ es = "+n;
}

function Decremento(){
    let o=5;
    o--;
    let p=o;
    document.getElementById("demoDecre").innerHTML = "o-- es = "+p;
}

function Expo(){
    let q=5;
    document.getElementById("demoExpo").innerHTML = "q**2 es = "+q**2;
}