<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>CALCULADORA</title>
<style>
@import url('https://fonts.googleapis.com/css?family=Poppins:400,500,600,700,800,900');
*{
	padding: 0 20px;
	text-align:center;
}
body{
            font-family: 'Poppins', sans-serif;
            font-weight: 500;
            font-size: 15px;
            line-height: 1.7;
            color: #c4c3ca;
            background-color: #1f2029;
            overflow-x: hidden;
}
a {
            cursor: pointer;
            transition: all 200ms linear;
}
.op{
            cursor: pointer;
			font-family:cursive; 
			display:block;
            text-decoration:none;
            
            background:rgba(gray-light,.25);
            color: gray-light;
            font-size:10px;
            float:left;
            width: 50%;
            text-align:center;
            cursor:pointer;
            transition:.5s ease;
            transition: all 200ms linear;
}
h1{
	    text-align:center;
	    padding: 0 10px;  
		font-size: 50px;
        color: rgb(255, 255, 255); 
		font-family:cursive; 
}
.option{  
            border-radius: 4px;
            height: 40px;
            font-size: 13px;
            font-weight: 600;
            text-transform: uppercase;
            -webkit-transition : all 200ms linear;
            transition: all 200ms linear;
            padding: 0 30px;
            letter-spacing: 1px;
            display: -webkit-inline-flex;
            display: -ms-inline-flexbox;
            display: inline-flex;
            -webkit-align-items: center;
            -moz-align-items: center;
            -ms-align-items: center;
            align-items: center;
            -webkit-justify-content: center;
            -moz-justify-content: center;
            -ms-justify-content: center;
            justify-content: center;
            -ms-flex-pack: center;
            text-align: center;
            border: none;
            background-color: #ffffff;
            color: #003cff;
            box-shadow: 0 8px 24px 0 rgba(255, 255, 255, 0.2);
        }
.option:hover{
            background-color: #102770;
            color: #ffffff;
            box-shadow: 0 8px 24px 0 rgba(16,39,112,.2);
        }
		
.btn:active,
.opcion:focus{  
            background-color: #102770;
            color: #ffffff;
            box-shadow: 0 8px 24px 0 rgba(16,39,112,.2);
        }
.num{
	        height: 40px;
			width: 180px;
	        background-color: #102770;
            color: #ffffff;
            box-shadow: 0 8px 24px 0 rgba(16,39,112,.2);
}
.texto{
         text-align:center;
	     padding: 0 10px;  
		 font-size: 20px;
         color: rgb(255, 255, 255); 
		 font-family:cursive;   	
}
.rojo{
         text-align:center;
	     padding: 0 10px;  
		 font-size: 20px;
         color:#F00;
		 font-family:cursive;	
}
</style>
</head>

<body>
<p>&nbsp;  </p>
<h1>CALCULADORA </h1>
<p>DIGITE 4 NUMEROS: </p>
<p>
<form name:"form1" method="post" action="">
<label for="num1"></label>
<input class="num" type="text" name="num1" id="num1" placeholder="PRIMER NÚMERO" autocomplete="off"/>
<br><br>
<label for="num2"></label>
<input class="num" type="text" name="num2" id="num2" placeholder="SEGUNDO NÚMERO" autocomplete="off"/>
<br><br>
<label for="num3"></label>
<input class="num" type="text" name="num3" id="num3" placeholder="TERCER NÚMERO" autocomplete="off"/>
<br><br>
<label for="num4"></label>
<input class="num" type="text" name="num4" id="num4" placeholder="CUARTO NÚMERO" autocomplete="off"/>
<br><br>
<label  for="operaciones"></label>
<select name="operaciones" id="operaciones">
<option class="op">SUMA</option>
<option class="op">RESTA</option>
<option class="op">MULTIPLICACION</option>
<option class="op">DIVISION</option>
<option class="op">MODULO</option>
</select>
</p>
<p>&nbsp;  </p>
<p>
<input class="option" type="submit" name="button" id="button" value="CALCULAR" onclick="prueba" />
</p>
<?php
if (isset($_POST["button"])){
	$numero1=$_POST["num1"];
	$numero2=$_POST["num2"];
	$numero3=$_POST["num3"];
	$numero4=$_POST["num4"];
	$operacion=$_POST["operaciones"];
	
	if (!strcmp("SUMA",$operacion)){
		echo "<p class='texto'> El resultado de la suma de los numeros digitados es: </p>" . "<p class='rojo'>" .($numero1+$numero2+$numero3+$numero4);
	}
	if (!strcmp("RESTA",$operacion)){
		echo "<p class='texto'> El resultado de la resta de los numeros digitados es: </p>" . "<p class='rojo'>" .($numero1-$numero2-$numero3-$numero4);
	}
	if (!strcmp("MULTIPLICACION",$operacion)){
		echo "<p class='texto'> El resultado de la multiplicacion de los numeros digitados es: </p>" . "<p class='rojo'>" .($numero1*$numero2*$numero3*$numero4);
	}
if (!strcmp("DIVISION",$operacion)){
		echo "<p class='texto'> El resultado de la division de los numeros digitados es: </p>" . "<p class='rojo'>" .($numero1/$numero2/$numero3/$numero4);
	}
	if (!strcmp("MODULO",$operacion)){
		echo "<p class='texto'> El resultado es: </p>" . "<p class='rojo'>" .($numero1%$numero2%$numero3%$numero4);
	}	
}
?>

</body>
</html>