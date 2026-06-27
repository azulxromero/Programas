<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Documento sin título</title>
<style>
body{
 	font-family: cursive;
    font-weight: 500;
    font-size: 15px;
	color:#999;
    line-height: 2;
    background-color: #1f2029;
    overflow-x: hidden;
}
table{
	background-color:#000;
	box-shadow: 0 0 10px rgba(0, 0, 0, 0.4);
    padding: 20px;

}
</style>
</head>

<body>
<center>
<h1>PRÁCTICA DE LABORATORIO 14</h1>
</center>
<?php
// Crear un vector multidimensional
$alimentos = array(
    "Cine: " => array(
        "Terror" => array("La bruja"),
        "Accién" => array("Accién: 007"),
        "Drama" => array("Guasén")
    ),
    "Serie: " => array(
        "Documental" => array("Pandemia"),
        "Comedia" => array("Two and Half Men"),
		"Politico" => array("House of Cards")
    ),
    "Música: " => array(
        "Rock" => array("Yesterday"),
        "Balada" => array("My Way"),
		"Mexicana" => array("Cielito Lindo")
    )
);
// Mostrar el vector bidimensional en una tabla
echo "<table align=center width=40%>";
echo "<tr>
        <th style=\"background:#00C;text-align:center;\">Vector bidimensional</th>
        </tr>";

// Recorrer las categorías y subcategorías del vector
foreach ($alimentos as $categoria => $subcategorias) {
    echo "<tr>";
    echo "<td style=\"color:#F00;\">" . $categoria . "</td>"; // Imprimir el nombre de la categoría en una fila de la tabla
    echo "</tr>";

    // Recorrer las subcategorías y alimentos de cada categoría
    foreach ($subcategorias as $subcategoria => $alimentos) {
        echo "<tr>";
        echo "<td style=\"padding-left: 30px;color:#999;\">" . $subcategoria . ": " . implode(", ", $alimentos) . "</td>";
        // Imprimir el nombre de la subcategoría y los alimentos en una fila de la tabla
		// "implode ()" se utiliza para concatenar los elementos de un array en una cadena de texto.
        echo "</tr>";
    }
}

echo "</table>";
?>

</body>
</html>