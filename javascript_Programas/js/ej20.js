function validarFormularioUno(){
    let nombre = document.getElementById('nom').value.trim();
    let apellidos = document.getElementById('ape').value.trim();
    if(nombre === '' || apellidos === ''){
        alert('Por favor completa los campos');
    } else{
        //puedes poner más código
        alert('Formulario enviado correctamente');
    }
}

function validarFormularioDos(){
    var op = document.querySelector('input[type = radio][name = "favorito"]:checked');
    if (op){
        alert('Tu lenguaje favorito es ' + op.value);
    } else{
        alert('Debes seleccionar por lo menos una de las opciones');
    }
}

function validarFormularioTres(){
    let c1 = document.getElementById('v1').checked;
    let c2 = document.getElementById('v2').checked;
    let c3 = document.getElementById('v3').checked;
    let seleccionados = '';

    if(c1 || c2 || c3){
        if (c1) {
            seleccionados += 'Opción 1\n';
        }
        if (c2) {
            seleccionados += 'Opción 2\n';
        }
        if (c3) {
            seleccionados += 'Opción 3\n';
        }
        alert('Tú seleccionaste:\n' + seleccionados);
    } else {
        alert('Debes seleccionar por lo menos una de las opciones');
    }
}