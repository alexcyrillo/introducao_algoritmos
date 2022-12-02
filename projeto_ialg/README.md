# Projeto IAlg

## Descrição
Projeto final da disciplina de 1º período de Introdução a Algoritmos. O trabalho consiste no desenvolvimento de um sistema, utilizando C++, para realizar o controle do estoque de uma loja virtual, de acordo com os requisitos descritos. 

## Enunciado
O objetivo do projeto prático é a elaboração de um sistema de controle de estoque de uma loja online onde um funcionário pode realizar algumas operações sobre produtos, sendo que deverão ser implementadas as funcionalidades de cadastro, alteração de dados, listagem de produtos disponíveis (por ordem alfabética A,B,C…Z), visualização de nome de produto, realizar  a venda de um produto e exportação de produtos cadastrados com suas respectivas informações para um arquivo binário.

O programa deverá apresentar um menu contendo as opções: 

	  1. cadastrar produto
	  2. consultar produto
  	  3. listar produtos cadastrados disponíveis ordenados pelo código do produto
	  4. excluir um produto
	  5. efetuar uma venda
	  6. listar dados de produtos ativos em estoque
	  7. exportar dados de produtos ativos para arquivo binário
	  8. sair

Todas as funções deverão ser implementadas em subprogramas, e o código deve ser organizado, com indentação e comentários.

## Requisitos

  1. As informações para cadastro de produtos são: descrição do produto, marca, código de identificação, quantidade disponível, preço unitário, fornecedor e situação do produto (ativo, inativo). Considere que um mesmo produto pode ter mais de um fornecedor, mas seus dados devem ser armazenados apenas uma vez. Cada fornecedor possui nome, e-mail, telefone. Poderá ser cadastrado mais de um e-mail.

	Exemplo:

	  Cadeira com rodízio XYZ CR123 25 346,80
	  MovEsc Ltda. bel@beltrano.com bSilva@eletri.com.br  +55(35)38219997

	  Mesa em L MesaBoa M123L 13 480,50
	  Sentala Inc cicrano@ci.com cOliv@estv.cit +55(35)31988876

  2. Os arranjos utilizados para o armazenamento dos dados deverão ser alocados dinamicamente. O tamanho inicial de cada um dos arranjos é 3, devendo ser redimensionado quando necessário. A cada redimensionamento, o arranjo deve aumentar seu tamanho em 3 posições.

  3. Sempre que um novo cadastro for realizado, o sistema deve verificar se o código de identificação do produto informado já não foi cadastrado. Caso já tenha sido cadastrado, o sistema deve informar o erro e não realizar o cadastro.
  
  4. A identificação do produto para o qual será realizada a operação de consulta do produto e quantidade em estoque é pelo código do produto (busca pelo código).
  
  5. Não deve ser possível efetuar a venda de um produto caso não tenha disponível em estoque. Nesse caso, o sistema deverá informar o problema ocorrido e não realizar a venda.
 
  6. A consulta à situação do produto (vendas realizadas, produtos em estoque, fornecedor, etc.) deve ser pelo código do produto e os dados devem ser buscados utilizando o método de busca binária.

  7. A opção de listar produtos cadastrados disponíveis ordenados pelo código do produto deve mostrar os dados de todos os produtos que foram cadastrados no sistema, estejam eles ativos ou inativos. Dados marcados logicamente pela operação de exclusão são considerados inativos. Nessa listagem, a situação do produto deve ser exibida.

  8. A opção de listar dados de produtos ativos em estoque deverá exibir apenas os produtos que apresentam a situação ativa, ordenados pelo código do produto.

  9. A ordenação dos dados para listagem deve ser realizada utilizando o método Merge Sort ou o método Quick Sort.

  10. A exclusão dos dados de um produto deve ser lógica, ou seja, os dados a serem excluídos deverão ser marcados com um sentinela que indica que o produto está indisponível.

  11. O sistema deve armazenar os dados cadastrados em arquivo binário, obrigatoriamente.
  
## Exemplo das operações solicitadas

### Cadastrar produto (1):

	Descrição do produto: cadeira com rodízio XYZ
	Código de identificação: CR123
	Quantidade disponível: 25
	Preço unitário: 346,80 
	Fornecedor:
	Nome: MovEsc Ltda.
	E-mail: bel@beltrano.com bSilva@eletri.com.br
	Telefone:+55 (35)38219997
	Situação: ativo
	Cadastro efetuado com sucesso!

	Descrição do produto: mesa em L MesaBoa
	Código de identificação: M123L
	Quantidade disponível: 13
	Preço unitário: 480,50
	Fornecedor:
	Nome: Sentala Inc
	E-mail: cicrano@ci.com cOliv@estv.cit
	Telefone: +55(35)3198-8876
	Situação: ativo
	Cadastro efetuado com sucesso!

### Consultar produto (2):

	Código do produto: CR123
	Quantidade disponível: 20
	Quantidade vendida: 5
	Situação: ativo

	Código do produto: CR2344
	Quantidade disponível: 0
	Quantidade vendida: 50
	Situação: inativo

	Código do produto: MR2344
	Situação: produto não cadastrado

### Listar dados de produtos cadastrados em estoque (3):
 Imprimir apenas descrição, código, fornecedor,  e-mail, situação.

	Cadeira com rodízio XYZ  CR123 MovEsc Ltda.  bel@beltrano.com bSilva@eletri.com.br ativo
	Cadeira simplex Augura  CR2344 MovEsc Ltda.  bel@beltrano.com bSilva@eletri.com.br inativo
	Mesa em L MesaBoa M123L 13 480,50 Sentala Inc cicrano@ci.com cOliv@estv.cit ativo 

### Excluir um produto (4):

	Código do produto: CR123
	Descrição do produto: cadeira com rodízio XYZ
	Confirma exclusão? 1-sim 2 -não
	1
	Situação: inativo

### Efetuar uma venda (5):

	Código do produto: M123L
	Descrição do produto: mesa em L MesaBoa
	Quantidade vendida: 3
	Quantidade em estoque: 10
	Venda realizada com sucesso!

### Listar dados de produtos ativos em estoque (6):
 Imprimir apenas descrição, código, fornecedor,  e-mail, situação.

	Cadeira alta Augura  CR3344 MovEsc Ltda.  bel@beltrano.com bSilva@eletri.com.br 

### Exportar dados para arquivo (7):

	Dados exportados (lidos a partir do arquivo):
	Cadeira com rodas giratórias CR256 25 486,80
	MovEsc Ltda. bel@beltrano.com bSilva@eletri.com.br  +55(35)38219997  Ativo

	Escrivaninha com gaveta E457 10 150,50
	Sentala Inc cicrano@ci.com cOliv@estv.cit  +55(35)31988876  ativo


### Sair (8):

	Encerrando sistema…


#### Desenvolvido por Alex Cyrillo, Gabriel Teixeira e Mardem Arantes.
