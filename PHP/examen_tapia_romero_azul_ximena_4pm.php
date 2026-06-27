<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Documento sin título</title>
<style>
body{
	background:#666;
	color:#000;
}
.verde{
	color:#399;
	text-align:center;
}
.rojo{
	color:#F00;
	text-align:center;
}
.azul{
	color:#09F;
	text-align:center;
}
table{
	background-color:#999;
	padding:5px;
	border:pink 5px solid;
	
}
.texto{
	text-align:center;
}
h1{
	text-align:center;
}
</style>
</head>

<body>
<h1>EXAMEN</h1>
<form action="" method="post" name="form">
<table width="30%" align="center">
<tr>
<td><h4>Tipo de cliente:</h4></td>
</tr>
<tr>
<td><input type="radio" name="radio1" value="turista" align="left"/> Cliente Turista </td>
</tr>
<tr>
<td><input type="radio" name="radio1" value="ejecutivo" /> Cliente Ejecutivo </td>
</tr>
<tr>
<td><input type="radio" name="radio1" value="bussines" /> Cliente Bussines </td>
</tr>
<tr>
<td><input type="radio" name="radio1" value="vip" /> Cliente Vip </td>
</tr>
<tr>
<td>
    <label for="name_usuario"></label>
    <input type="text" name="name_usuario" id="name_usuario" placeholder="Digita tu nombre" />
</td>
</tr>
<tr>
<td>
    <label for="correo_usuario"></label>
    <input type="text" name="correo_usuario" id="correo_usuario" placeholder="Digita tu correo" />
</td>
</tr>
<tr>
<td>
    <label for="km_viajar"></label>
    <input type="text" name="km_viajar" id="km_viajar" placeholder="Digita los kilometros a viajar" />
</td>
</tr>
<tr>
<td>
    <label for="km_precio"></label>
    <input type="text" name="km_precio" id="km_precio" placeholder="Digita el precio por kilometro" />
</td>
</tr>
<tr>
<td>
    <input type="submit" name="enviar" id="enviar" value="enviar"/>
</td>
</tr>
</table>
</form>
<?php
   if(isset($_POST["enviar"]))
   {
	   $cliente = ($_REQUEST['radio1']); 
	   $nombre =  $_POST['name_usuario'];
	   $correo =  $_POST['correo_usuario'];
	   $viajarkm =  $_POST['km_viajar'];
	   $preciokm =  $_POST['km_precio'];
	   $nombre = strtoupper($nombre);
	   $correo = strtolower($correo);
	   if(($viajarkm<100) || ($viajarkm>2000))
	   { 
		   echo "<p class=rojo> POR FAVOR DIGITE UNA CANTIDAD DE KILOMETROS EN EL RANGO DE 100 Y 2000</p>";
		  
	   }
	   else
	   {
	   switch($cliente)
	   {
		   case "turista":
		    echo "<p class= texto>ESTIMADO CLIENTE <p class= verde>". $nombre ."</p><p class= texto> HACEMOS LLEGAR A SU CORREO <p class=verde>". $correo ."</p> <p class= texto>LA COTIZACION ";
		   $subtotal= $viajarkm * $preciokm;
		         echo "<p class=azul> EL SUBTOTAL ES: </p>";
				 echo "<p class=rojo>" . $subtotal;
		   $descuento= ($subtotal-($subtotal*0.05));
		         echo "<p class=azul> MENOS EL DESCUENTO DEL 5% : </p>";
				 echo "<p class=rojo>" . $descuento;
		   $iva= ($descuento*0.16);
		         echo "<p class=azul> I.V.A : </p>";
				 echo "<p class=rojo>" . $iva;
		   $total= ($descuento+$iva);
		         echo "<p class=azul> TOTAL A PAGAR : </p>";
				 echo "<p class=rojo>" . $total;
		   echo "<table align=center width=40%>";
		   echo "<tr>
		         <th style=\"background:pink; text-align:center;\"> KM </th>
				 <th style=\"background:pink; text-align:center;\"> PRECIO </th>
				 </tr>";
		   for ($i=0; $i<=$viajarkm; $i=$i+100)
		   {
			   if ($i==0)
			   {
				   continue;
			   }
			   $precio= (($total/$viajarkm)*$i);
			   echo "<tr>
		         <td style=\" text-align:center;\"> $i </td>
				 <td style=\" text-align:center;\"> $precio </td>
				 </tr>";
		   }
		   break;   
		   case "ejecutivo":
		   echo "<p class= texto>ESTIMADO CLIENTE <p class= verde>". $nombre ."</p><p class= texto> HACEMOS LLEGAR A SU CORREO <p class=verde>". $correo ."</p> <p class= texto>LA COTIZACION ";
		   $subtotal= $viajarkm * $preciokm;
		         echo "<p class=azul> EL SUBTOTAL ES: </p>";
				 echo "<p class=rojo>" . $subtotal;
		   $descuento= ($subtotal-($subtotal*0.10));
		         echo "<p class=azul> MENOS EL DESCUENTO DEL 10% : </p>";
				 echo "<p class=rojo>" . $descuento;
		   $iva= ($descuento*0.16);
		         echo "<p class=azul> I.V.A : </p>";
				 echo "<p class=rojo>" . $iva;
		   $total= ($descuento+$iva);
		         echo "<p class=azul> TOTAL A PAGAR : </p>";
				 echo "<p class=rojo>" . $total;
		   echo "<table align=center width=40%>";
		   echo "<tr>
		         <th style=\"background:pink; text-align:center;\"> KM </th>
				 <th style=\"background:pink; text-align:center;\"> PRECIO </th>
				 </tr>";
		   for ($i=0; $i<=$viajarkm; $i=$i+100)
		   {
			   if ($i==0)
			   {
				   continue;
			   }
			   $precio= (($total/$viajarkm)*$i);
			   echo "<tr>
		         <td style=\" text-align:center;\"> $i </td>
				 <td style=\" text-align:center;\"> $precio </td>
				 </tr>";
		   }
		   break;
		   case "bussines":
		    echo "<p class= texto>ESTIMADO CLIENTE <p class= verde>". $nombre ."</p><p class= texto> HACEMOS LLEGAR A SU CORREO <p class=verde>". $correo ."</p> <p class= texto>LA COTIZACION ";
		   $subtotal= $viajarkm * $preciokm;
		         echo "<p class=azul> EL SUBTOTAL ES: </p>";
				 echo "<p class=rojo>" . $subtotal;
		   $descuento= ($subtotal-($subtotal*0.15));
		         echo "<p class=azul> MENOS EL DESCUENTO DEL 15% : </p>";
				 echo "<p class=rojo>" . $descuento;
		   $iva= ($descuento*0.16);
		         echo "<p class=azul> I.V.A : </p>";
				 echo "<p class=rojo>" . $iva;
		   $total= ($descuento+$iva);
		         echo "<p class=azul> TOTAL A PAGAR : </p>";
				 echo "<p class=rojo>" . $total;
		   echo "<table align=center width=40%>";
		   echo "<tr>
		         <th style=\"background:pink; text-align:center;\"> KM </th>
				 <th style=\"background:pink; text-align:center;\"> PRECIO </th>
				 </tr>";
		   for ($i=0; $i<=$viajarkm; $i=$i+100)
		   {
			   if ($i==0)
			   {
				   continue;
			   }
			   $precio= (($total/$viajarkm)*$i);
			   echo "<tr>
		         <td style=\" text-align:center;\"> $i </td>
				 <td style=\" text-align:center;\"> $precio </td>
				 </tr>";
		   }
		   break;
		   case "vip":
		   echo "<p class= texto>ESTIMADO CLIENTE <p class= verde>". $nombre ."</p><p class= texto> HACEMOS LLEGAR A SU CORREO <p class=verde>". $correo ."</p> <p class= texto>LA COTIZACION ";
		   $subtotal= $viajarkm * $preciokm;
		         echo "<p class=azul> EL SUBTOTAL ES: </p>";
				 echo "<p class=rojo>" . $subtotal;
		   $descuento= ($subtotal-($subtotal*0.20));
		         echo "<p class=azul> MENOS EL DESCUENTO DEL 20% : </p>";
				 echo "<p class=rojo>" . $descuento;
		   $iva= ($descuento*0.16);
		         echo "<p class=azul> I.V.A : </p>";
				 echo "<p class=rojo>" . $iva;
		   $total= ($descuento+$iva);
		         echo "<p class=azul> TOTAL A PAGAR : </p>";
				 echo "<p class=rojo>" . $total;
		   echo "<table align=center width=40%>";
		   echo "<tr>
		         <th style=\"background:pink; text-align:center;\"> KM </th>
				 <th style=\"background:pink; text-align:center;\"> PRECIO </th>
				 </tr>";
		   for ($i=0; $i<=$viajarkm; $i=$i+100)
		   {
			   if ($i==0)
			   {
				   continue;
			   }
			   $precio= (($total/$viajarkm)*$i);
			   echo "<tr>
		         <td style=\" text-align:center;\"> $i </td>
				 <td style=\" text-align:center;\"> $precio </td>
				 </tr>";
		   }
		   break;
		   default:
		       echo "<p class=rojo> SELECCIONA UNA OPCION </p>";
		   
	   }
   }}
?>
</body>
</html>