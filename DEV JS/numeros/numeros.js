const numero = Number(prompt('Digite um Numero:'));
const numerotitulo = window.document.getElementById('numero-titulo');
const texto = window.document.getElementById('texto');

numerotitulo.innerHTML = numero;
texto.innerHTML += `<p> Raiz Quadrada ${Math.sqrt(numero)}.</p>`;
texto.innerHTML += `<p> ${numero} é inteiro:${numero}</p>`;
texto.innerHTML += `<p> É NaN:${isNaN(numero)}</p>`;
texto.innerHTML += `<p>Arredondado para Baixo:${Math.floor(numero)}</p>`;
texto.innerHTML += `<p>Arredondado para Cima:${Math.ceil(numero)}</p>`;
texto.innerHTML += `<p>Com duas casa Decimais:${numero.toFixed(2)}</p>`;












