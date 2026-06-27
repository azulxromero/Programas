<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Documento sin título</title>
<style>
body {
	font-family: cursive;
	text-align: center;
	background-color: #F69;
	color: #CCC;
}
section{
	width:100%;
	height:60px;
}
table {
	width: 20%;
	background-color: #F69;
	padding: 5px;
	border-radius:10px;
	border: #FFF 5px solid;
}

h1 {
	color: #FFF;
}

a {
	width: 90%; 
	text-align: center;
	color: #F69; 
	text-decoration: none; 
	padding: 10px; 
	margin-bottom: 10px; 
	border-radius: 5px;
	font-weight: bold;
	background-color:#FFF;
}

    a:hover {
	  background-color:#FFF;
      color: #999;
    }
</style>
</head>
<body>

<?php
echo "<h1>LLAMADO DE LA TABLA DEL " . $_GET['tabla'] . "</h1>";
echo "<section></section>";

echo "<table align='center'>";

for ($i = 1; $i <= 10; $i++) {
    $valor = $_GET['tabla'] * $i;
    echo "<tr>
              <td>" . $_GET['tabla'] . " * " . $i . " = </td>
              <td>" . $valor . "</td>
          </tr>";
}

echo "</table>";
echo "<section></section>";
?>
<a href="tabla.html">RETORNAR</a>
</body>
</html>
