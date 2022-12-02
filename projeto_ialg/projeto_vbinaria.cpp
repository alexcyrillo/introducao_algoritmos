#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//Dados de um produto, incluindo o fornecedor
struct dadosProduto
{
    char descProd[20];
    char codProd[20];
    unsigned qtDispProd;
    float precoProd;
    char prodFornec[20];
    char emailFornec[150];
    char telFornec[16];
    bool sitProd;
};
struct vendasProduto
{
    char codProdVenda[20];
};
//Imprime o menu de opções
void menuPrincipal()
{
    cout << "--------------\nMENU PRINCIPAL\n--------------\n[1] Cadastrar Produto\n[2] Consultar Produto\n[3] Listar Produtos Cadastrados Disponíveis\n[4] Excluir Produto\n[5] Efetuar Venda\n[6] Listar Produtos Ativos em Estoque\n[7] Exportar Dados de Produtos Ativos p/ Arquivo Binário\n[8] Sair\nEscolha o número referente à operação: ";
}
//Escreve inativo ou ativo de acordo com a situação bool cadastrado no arquivo
bool escreverEstado(string estado)
{
    if(estado == "ativo" ||estado == "Ativo")
        return 1;
    else if(estado == "Inativo" ||estado == "inativo")
        return 0;
}
//Função para realizar o cadastro de novos produtos
void cadastro()
{
    //Título do menu
    cout << "\n-------------------\nCADASTRO DE USUÁRIO\n-------------------\n";
    bool produtoCadatrado = false;
    dadosProduto produto = {0}, produtoCod = {0};
    string estado;
    ofstream cadastroProduto("bancoProdutos", ios::app | ios::ate);
    ifstream leituraCodigo("bancoProdutos");
    //realiza a leitura de quantos produtos foram cadastrados
    long int tam_byte = cadastroProduto.tellp();
    int i = 0, tamanho = (tam_byte / sizeof(dadosProduto));
    cout << "Descrição: ";
    cin.ignore();
    cin.getline(produto.descProd, sizeof(produto.descProd));
    cout << "Código: ";
    cin.getline(produto.codProd, sizeof(produto.codProd));
    cout << "Quantidade Disponível: ";
    cin >> produto.qtDispProd;
    cout << "Preço: ";
    cin >> produto.precoProd;
    cout << "\nDADOS DO FORNECEDOR\n";
    cin.ignore();
    cout << "Nome: ";
    cin.getline(produto.prodFornec, sizeof(produto.prodFornec));
    cout << "E-mail: ";
    cin.getline(produto.emailFornec, sizeof(produto.emailFornec));
    cout << "Telefone: ";
    cin.getline(produto.telFornec, sizeof(produto.telFornec));
    cout << "\nSituação: ";
    cin >> estado;
    produto.sitProd = escreverEstado(estado);
    leituraCodigo.seekg(0, ios::beg);
    while((produtoCadatrado == false) && (i < tamanho))
    {
        leituraCodigo.seekg(sizeof(produto) * i);
        leituraCodigo.read((char*) &produtoCod, sizeof(dadosProduto));
        if(strcmp(produto.codProd, produtoCod.codProd) == 0)
        {
            produtoCadatrado = true;
        }
        i++;
    }
    cout <<produtoCod.codProd << '/' << produto.codProd;
    if(produtoCadatrado)
    {
        cout << "PRODUTO CADASTRADO ANTERIORMENTE\n";
    }
    else
    {
        cadastroProduto.write((const char *)&produto, sizeof(dadosProduto));
        cout << "CADASTRO EFETUADO COM SUCESSO\n";
    }
    cadastroProduto.close();
    leituraCodigo.close();
}
//Função para a consulta de produtos cadastrados
void consulta()
{
    //Título do menu
    cout << "\n-------------------\nCONSULTA DE PRODUTO\n-------------------" << endl;
    ifstream leituraCodigo("bancoProdutos", ios::ate);
    fstream leituraCodigo2 ("Vendas",ios::in|ios::ate|ios::app);
    long int tamanho_bytes2 = leituraCodigo2.tellg(), tam_byte = leituraCodigo.tellg();
    int cont = 0, cont2 = 0, qtvendas = 0, tamanho2 = int(tamanho_bytes2/sizeof(vendasProduto)), tamanho = int(tam_byte / sizeof(dadosProduto));
    bool posicao = true;
    dadosProduto produto = {0}, codigo = {0};
    vendasProduto venda = {0};
    cout << "Código do produto: ";
    cin >> codigo.codProd;
    leituraCodigo2.seekg(0, ios::beg);
    leituraCodigo.seekg(0, ios::beg);
    while((cont < tamanho) and (posicao == true))
    {
        leituraCodigo.seekg(cont * sizeof(dadosProduto));
        leituraCodigo.read((char*) &produto, sizeof(dadosProduto));
        if(strcmp(produto.codProd, codigo.codProd) == 0)
        {
            posicao = false;
        }
        cont++;
    }
    while(cont2 < tamanho2){
        leituraCodigo2.seekg(cont * sizeof(vendasProduto));
        leituraCodigo2.read((char*) &venda, sizeof(vendasProduto));
        if(strcmp(codigo.codProd, venda.codProdVenda)==0){
            qtvendas++;
        }
        cont2++;
    }

    if(posicao == false){
        cout << "Quantidade disponível: " << produto.qtDispProd - qtvendas << endl << "Quantidade vendida: " << qtvendas << endl;
        if(produto.sitProd)
            cout << "Situação: Ativo" << endl;
        else
            cout << "Situação: Inativo" << endl;
    }
    else{
        cout << "Produto não encontrado" << endl;
    }
    cout << endl;
    leituraCodigo.close();
    leituraCodigo2.close();
}
//Função para listar produtos cadastrados disponíveis ordenados pelo código do produto
void listarCadastrados()
{
    //Título do menu
    cout << "\n--------------------\nPRODUTOS CADASTRADOS\n--------------------" << endl;
}
//Função para excluiur um produto
void excluir()
{
    //Título do menu
    cout << "\n-------------------\nEXCLUSÃO DE PRODUTO\n-------------------" << endl;
    fstream cadastroProduto("bancoProdutos", ios::in | ios::out | ios::ate);
    int cont = 0, conf;
    bool posicao = false;
    dadosProduto produto;
    char codigo[sizeof(produto.codProd)];
    long int tam_byte = cadastroProduto.tellp();
    int tamanho = (tam_byte / sizeof(dadosProduto));
    cout << "\nCódigo do produto: ";
    cin.ignore();
    cin.getline(codigo, sizeof(produto.codProd));
    cadastroProduto.seekg(0, ios::beg);
    while((cont < tamanho) and (posicao == false))
    {
        cadastroProduto.seekg(cont * sizeof(dadosProduto));
        cadastroProduto.read((char*) &produto, sizeof(dadosProduto));
        if(strcmp(codigo, produto.codProd) == 0)
        {
            posicao = true;
            cout << "Descrição do produto: " << produto.descProd;
            cout << "\nProduto encontrado. Confirmar exclusão?\n(1) Sim | (2) Não: ";
            cin >> conf;
            
            if(conf==1)
            {
                produto.sitProd = 0;
                cout << produto.sitProd;
                cadastroProduto.seekp((cont * sizeof(produto)));
                cadastroProduto.write((const char*)&produto, sizeof(produto));
                cout << "\nProduto inativo!\n";
            }
        }
        cont++;
    }
    if(!posicao)
    {
        cout << "\nProduto não encontrado." << endl;
    }
    cadastroProduto.close();
}
//Função para efetuar uma venda
//Não esquecer que quando uma venda é realizada o produto sai do estoque
void venda()
{
    //Título do menu
    cout << "\n-----------------\nCADASTRO DE VENDA\n-----------------" << endl;
    ofstream cadastrovendas("Vendas", ios::app|ios::ate|ios::app);
    fstream leitura ("Vendas", ios::in|ios::ate), leitura2 ("bancoProdutos",ios::in|ios::ate);
    long int tamanho_bytes = leitura.tellg(), tamanho_bytes2 = leitura2.tellg();
    int tamanho = int(tamanho_bytes/sizeof(vendasProduto)), tamanho2 = int(tamanho_bytes2/sizeof(dadosProduto)), cont = 0, cont2 = 0;
    bool posicao = true, posicao2 = true;
    unsigned qtvendas = 1;
    vendasProduto venda, vendas;
    dadosProduto produto;
    cout << "Código do produto: ";
    cin >> venda.codProdVenda;
    cadastrovendas.write((const char *)&venda, sizeof(vendasProduto));
    leitura.seekg(0, ios::beg);
    while((cont < tamanho)){
        leitura.seekp(cont*sizeof(vendasProduto));
        leitura.read((char*) &vendas, sizeof(vendasProduto));
        if(strcmp(venda.codProdVenda, vendas.codProdVenda)==0){
            qtvendas++;
            posicao = false;
        }
        cont++;
    }
    while((cont2 < tamanho2)and(posicao2 == true)){
        leitura2.seekp(cont2*sizeof(dadosProduto));
        leitura2.read((char*) &produto, sizeof(dadosProduto));
        if(strcmp(venda.codProdVenda, produto.codProd)==0){
            posicao2 = false;
        }
        cont2++;
    }
    if((posicao2 == false)){
        cout << "Descrição do produto: " << produto.descProd << endl << "Quantidade vendida: " << qtvendas 
        << endl <<  "Quantidade em estoque: " << produto.qtDispProd - qtvendas << endl;
        cout << "Venda realizada com sucesso!" << endl; 
    }
    else{
        cout << "Produto não encontrado para venda" << endl;
    }
    leitura.close();
    leitura2.close();
    cadastrovendas.close();
}
//Função para listar dados de produtos ativos em estoque
void listarDados()
{
    //Título do menu
    cout << "\n--------------------------\nPRODUTOS ATIVOS EM ESTOQUE\n--------------------------" << endl;
    ifstream leitura("bancoProdutos", ios::ate);
    dadosProduto produto;
    long int tam_byte = leitura.tellg();
    int tamanho = (tam_byte / sizeof(dadosProduto));
    leitura.seekg(0, ios::beg);
    for(int i = 0; i < tamanho; i++)
    {
        leitura.read((char *)&produto, sizeof(dadosProduto));
        if(produto.sitProd)
            cout << "Descrição: " << produto.descProd << endl << "Código :" << produto.codProd << endl << "Quantidade Disponível: " << produto.qtDispProd << endl << "Preço: " << produto.precoProd << endl << endl;
    }

}
//Função para exportar dados de produtos ativos para arquivo binário
//Perguntar o nome do arquivo que será criado ao exportar
void exportar()
{
    //Título do menu
    cout << "\n---------------------\nEXPORTANDO EM BINÁRIO\n---------------------" << endl;
    fstream leitura1("bancoProdutos", ios::in|ios::ate);
    fstream leitura2("Vendas", ios::in|ios::ate);
    long int tamanho_bytes1 = leitura1.tellg(), tamanho_bytes2 = leitura2.tellg();
    int tamanho1 = int (tamanho_bytes1/sizeof(dadosProduto)), tamanho2 = int (tamanho_bytes2/sizeof(vendasProduto)), cont1 = 0, cont2 = 0, qtVendas = 0;
    dadosProduto produto;
    vendasProduto venda;
    leitura1.seekg(0, ios::beg);
    leitura2.seekg(0, ios::beg);
    while(cont1 < tamanho1){
        leitura1.seekg(cont1 * sizeof(dadosProduto));
        leitura1.read((char*) &produto, sizeof(dadosProduto));
        while(cont2 < tamanho2){
            leitura2.seekg(cont2 * sizeof(vendasProduto));
            leitura2.read((char*) &venda, sizeof(vendasProduto));
            if(strcmp(produto.codProd, venda.codProdVenda) == 0){
                qtVendas++;
            }
            cont2++;
        }
        cout << produto.descProd << " " << produto.codProd << " " << produto.qtDispProd - qtVendas << " " << produto.precoProd << endl;
        cout << produto.prodFornec << " " << produto.emailFornec << " " << produto.telFornec << " ";
        if(produto.sitProd)
            cout << "Situação: Ativo" << endl;
        else
            cout << "Situação: Inativo" << endl;
        cout << endl;
        cont1++;
    }
    leitura1.close();
    leitura2.close();
}
//Função para fechar o programa
char sair()
{
    //Título do menu
    cout << "\n----------------\nFECHAR PROGRAMA?\n----------------" << endl;
    //Confirmação para saber se o usuário realmente quer deixar o programa
    char confirmacao;
    cout << "(S) Sair | (N) Voltar ao Menu Inicial: ";
    cin >> confirmacao;
    if(confirmacao == 'S' || confirmacao == 's')
    {

        cout << "\nEncerrando Sistema...";
        return '8';
    }
    else if(confirmacao == 'N' || confirmacao == 'n')
        return '0';
    else
    {
        //Caso o usuário escolha uma opção != s || n o sistema volta para o menu inicial
        cout << "Opção Inválida. Retornando para menu";
        return '0';
    }
}

int main()
{
    char opcao;
    do
    {
        menuPrincipal();
        cin >> opcao;
        cout << endl;
        switch(opcao)
        {
            case '1':
                cadastro();
            break;
            case '2':
                consulta();
            break;
            case '3':
                listarCadastrados();
            break;
            case '4':
                excluir();
            break;
            case '5':
                venda();
            break;
            case '6':
                listarDados();
            break;
            case '7':
                exportar();
            break;
            case '8':
                opcao = sair();
            break;
            default:
                cout << "-----OPÇÃO INVÁLIDA-----\n\n";
        }
    }while(opcao != '8');
    
    return 0;
}