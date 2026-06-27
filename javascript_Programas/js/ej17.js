function asigna(){
    var x = 10;
    x += 5;
    document.getElementById("demo1").innerHTML =
    "var x = 10"+"<br> x += 5 <br> x = " + x;
}
function mas(){
    let text1 = "Nancy Michelle";
    let text2 = "Reyes Gutiérrez";
    let text3 = text1 + " " + text2;
    document.getElementById("demo2").innerHTML = text3;
}
function comparar(){
    var x = 5;
    document.getElementById("demo3").innerHTML = (x == 8);
}
function mayor(){
    var x = 5;
    document.getElementById("demo4").innerHTML = (x >= 8);
}
function op_and(){
    var p = 6;
    var q = 3;
    document.getElementById("demo5").innerHTML =
    "(p < 10 && q > 1) "+
    (p < 10 && q > 1) + "<br>" + "(p < 10 && q < 1) "+
    (p < 10 && q < 1);
}
function op_or(){
    let x = 6;
    let y = 3;
    document.getElementById("demo6").innerHTML =
    "(x == 5 || y == 5) = "+
    (x == 5 || y == 5) + "<br>" +
    "(x == 6 || y == 0) = " +
    (x == 6 || y == 0) + "<br>" +
    "(x == 0 || y == 3) = "+
    (x == 0 || y == 3) + "<br>" + 
    "(x == 0 || y == 3) = "+
    (x == 0 || y == 3);
}