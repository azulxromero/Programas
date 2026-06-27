<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Documento sin título</title>
<style>
h1{
	text-align:center;
}
table{
	background-color:#69F;
	padding:5px;
	border: #666 5px solid;
}
.no_valido{
	font-size:18px;
	text-align:center;
	color:#C00;
	font-weight:bold;
}
.validado{
	font-size:18px;
	text-align:center;
	font-weight:bold;
}
</style>
</head>

<body>
<h1>USANDO CONDICIONALES</h1>
<form action="" method="post" name="datos_usuario" id="datos_usuario">
<table width="15%" height="" align="center">
<tr>
<td>Nombre: </td>
<td><label for="nombre_usuario"></label>
<input type"text" name="nombre_usuario" id="nombre_usuario"  />
</td>
</tr>
<tr>
<td>Edad: </td>
<td><label for="edad_usuario"></label>
<input type"text" name="edad_usuario" id="edad_usuario"  />
</td>
</tr>
<tr>
<td>&nbsp;</td>
<td>&nbsp;</td>
</tr>
<tr>
<td colspan="2" align="center"><input type="submit" value="Enviar" name="enviando" id="enviando" /> </td>
</tr>
</table>
</form>
<?php
if(isset($_POST["enviando"]))
{
	$edad=$_POST["edad_usuario"];
	$nombre=$_POST["nombre_usuario"];
	if($edad>120 || $edad<=0)
	{
		echo "<p class='validado'>Hola ".$nombre."<br><p class='validado'>No Existes</p>";
	}
	else
	if($edad<=18)
	{
		echo "<p class='validado'>Hola ".$nombre."<br><p class='validado'>Eres menor de edad</p>";
	}
	else
	if($edad<=40)
	{
		echo "<p class='validado'>Hola ".$nombre."<br><p class='validado'>Eres Joven</p>";
	}
	else
	if($edad<=65)
	{
		echo "<p class='validado'>Hola ".$nombre."<br><p class='validado'>Eres Maduro</p>";
	}
	else
	if($edad>65)
	{
		echo "<p class='validado'>Hola ".$nombre."<br><p class='validado'>Eres De La Tercera Edad</p>";
	}
}
?>
</body>
</html>
