//Desenvolvido por: 
//Alex Cyrillo de Sousa Borges
//Gabriel Furtado Teixeira
//Mardem Arantes de Castro
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//Dados de um produto, incluindo o fornecedor
struct dadosProduto{
    char descProd[100];
    char codProd[20];
    unsigned qtDispProd;
    unsigned qtVendas = 0;
    float precoProd;
    char prodFornec[100];
    char emailFornec[150];
    char telFornec[20];
    bool sitProd;
};
// Uma função utilizada para trocar os dois registros no vetor
void troca(dadosProduto* a, dadosProduto* b){ 
    dadosProduto t = *a; 
    *a = *b; 
    *b = t; 
}   
/* Esta função pega o último elemento como pivô, coloca
o elemento pivô em sua posição correta no vetor, e coloca tudo menor que o pivô
à esquerda do pivô e todos os elementos maiores à direita
de pivô*/ 
int partition(dadosProduto produto[], int baixo, int alto){ 
    char pivo = *produto[alto].codProd; 
    int i = (baixo - 1); 
  
    for (int j = baixo; j <= (alto - 1); j++) 
    { 
        if (*produto[j].codProd < pivo) 
        { 
            i++; 
            troca(&produto[i], &produto[j]); 
        }
    } 
    troca(&produto[i + 1], &produto[alto]); 
    return (i + 1); 
} 
//A função principal que implementa o QuickSort
void quickSort(dadosProduto produto[], int baixo, int alto) 
{ 
    if (baixo < alto) 
    { 
        int pi = partition(produto, baixo, alto); 
        quickSort(produto, baixo, pi - 1); 
        quickSort(produto, pi + 1, alto); 
    } 
}

//Função que converte string em bool, para salvar estado Ativo ou Inativo do produto
bool escreverEstado(string estado){
    if(estado == "ativo" || estado == "Ativo")
        return 1;
    else if(estado == "Inativo" || estado == "inativo")
        return 0;
}

//Função para realocação quando capacidade de 3 é excedida
dadosProduto* realoca(dadosProduto* &ptr, int tam){
    dadosProduto *novoVtr = new dadosProduto[tam + 3];
    for(int i = 0; i < tam; i++)
        novoVtr[i] = ptr[i];
    delete[] ptr;
    return novoVtr;
}

//Imprime o menu de opções
void menuPrincipal(){
    cout << "\n\n--------------\nMENU PRINCIPAL\n--------------\n[1] Cadastrar Produto\n[2] Consultar Produto\n[3] Listar Produtos Cadastrados Disponíveis\n[4] Excluir Produto\n[5] Efetuar Venda\n[6] Listar Produtos Ativos em Estoque\n[7] Exportar Dados de Produtos Ativos p/ Arquivo Binário\n[8] Sair\nESCOLHA O NÚMERO DA OPERAÇÃO: ";
}

//Função para realizar o cadastro de novos produtos
void cadastro(int &cap, dadosProduto* &produto){
    //Título do menu
    cout << "\n-------------------\nCADASTRO DE USUÁRIO\n-------------------\n";
    string estado;
    int i = 0;
    bool encontrado = false;
    cout << "Descrição: ";
    cin.ignore();
    cin.getline(produto[cap].descProd, sizeof(produto[cap].descProd));
    cout << "Código: ";
    cin.getline(produto[cap].codProd, sizeof(produto[cap].codProd));
    cout << "Quantidade Disponível: ";
    cin >> produto[cap].qtDispProd;
    cout << "Preço: ";
    cin >> produto[cap].precoProd;
    cout << "\nDADOS DO FORNECEDOR\n";
    cin.ignore();
    cout << "Nome: ";
    cin.getline(produto[cap].prodFornec, sizeof(produto[cap].prodFornec));
    cout << "E-mail: ";
    cin.getline(produto[cap].emailFornec, sizeof(produto[cap].emailFornec));
    cout << "Telefone: ";
    cin.getline(produto[cap].telFornec, sizeof(produto[cap].telFornec));
    cout << "\nSituação: ";
    cin >> estado;
    produto[cap].sitProd = escreverEstado(estado);
    while(!encontrado && i <= cap - 1){
        if(strcmp(produto[cap].codProd, produto[i].codProd) == 0)
            encontrado = true;
        i++;
    }
    if(encontrado){
        cout << "PRODUTO CADASTRADO ANTERIORMENTE" << endl;
    }
    else{
        cout << "PRODUTO CADASTRADO COM SUCESSO" << endl;
        cap++;
    }
    //QuickSort nesta posição para ser salvo no vetor já ordenado e não ser necessário chamar a função sempre que outras funções que necessitam estar ordenadas
    quickSort(produto, 0, cap-1);
}

//Função para a consulta de produtos cadastrados
void consulta(int &cap, dadosProduto* &produto)
{
    //Título do menu
    cout << "\n-------------------\nCONSULTA DE PRODUTO\n-------------------" << endl;
    int i = 0;
    bool achou = 0;
    char codigo[20];
    cout << "Digite o código para consulta: ";
    cin >> codigo;
    while((i < cap)and(achou == 0)){
        if(strcmp(codigo, produto[i].codProd)==0){
            cout << "Quantidade disponível: " << produto[i].qtDispProd << endl << "Quantidade vendida: " << produto[i].qtVendas << endl;
            achou = 1;
            if(produto[i].sitProd)
                cout << "Situação: Ativo\n" << endl;
            else
                cout << "Situação: Inativo\n" << endl;  
        }
        i++;      
    }
    if(achou == 0){
        cout << "Produto não cadastrado" << endl;
    }
}

//Função para listar produtos cadastrados disponíveis ordenados pelo código do produto
void listarCadastrados(int &cap, dadosProduto* &produto)
{
    //Título do menu
    cout << "\n--------------------\nPRODUTOS CADASTRADOS\n--------------------" << endl;
    if(cap == 0){
        cout << "NÃO HÁ PRODUTOS CADASTRADOS" << endl;
    }
    for(int i = 0; i < cap; i++){
        if(produto[i].qtDispProd > 0){
            cout << "Descrição: " << produto[i].descProd << endl << "Código: " << produto[i].codProd << endl << "Fornecedor: " << produto[i].prodFornec << endl << "E-mail: " << produto[i].emailFornec << endl;
            if(produto[i].sitProd)
                cout << "Situação: Ativo\n" << endl;
            else
                cout << "Situação: Inativo\n" << endl;
        }
    }
}

//Função para excluiur um produto
void excluir(int& cap, dadosProduto* &produto)
{
    //Título do menu
    cout << "\n-------------------\nEXCLUSÃO DE PRODUTO\n-------------------" << endl;
    if(cap == 0){
        cout << "NÃO HÁ PRODUTOS CADASTRADOS" << endl;
    }
    else{
        cout << "Insira o código do produto: ";
        char codigo[sizeof(produto[cap].codProd)];
        cin.ignore();
        cin.getline(codigo, sizeof(produto[cap].codProd));
        bool confere = true;
        int cont = 0, confirma;
        while((cont < cap) && (confere == true)){
            if(strcmp(codigo, produto[cont].codProd) == 0){
                confere = false;
                cout << "Descrição do produto: " << produto[cont].descProd << endl;
                cout << "PRODUTO ENCONTRADO. CONFIRMAR EXCLUSÃO?\n(1) Sim | (2) Não: ";
                cin >> confirma;
                if(confirma == 1){
                    produto[cont].sitProd = 0;
                    cout << "\nPRODUTO EXCLUÍDO COM SUCESSO" << endl;
                }
            }
            cont++;
        }
        if(confere){
            cout << "\nPRODUTO NÃO ENCONTRADO" << endl;
        }
    }
}

//Função para efetuar uma venda
void venda(int &cap, dadosProduto* &produto){
    //Título do menu
    cout << "\n-----------------\nCADASTRO DE VENDA\n-----------------" << endl;
    if(cap == 0){
        cout << "NÃO HÁ PRODUTOS CADASTRADOS" << endl;
    }
    else{
        cout << "Código do produto: ";
        int i = -1, h=0;
        bool achou = 0;
        char codigo[sizeof(produto[i].codProd)];
        cin >> codigo;
        while((i < cap) && (achou == 0)){
            i++;
            if(strcmp(codigo, produto[i].codProd) == 0){
                if(produto[i].qtDispProd==0){
                    cout<<"\nNÃO FOI POSSÍVEL EFETUAR A VENDA. ";
                    h = 1;
                }
                else{
                    produto[i].qtVendas++;
                    produto[i].qtDispProd--;
                    achou = 1;
                }
            }
        }
        if(achou == 1){
            if(produto[i].qtDispProd >= 0){
                cout << "Descrição do produto: " << produto[i].descProd << endl <<  "Quantidade vendida: " << produto[i].qtVendas << endl <<  "Quantidade em estoque: " << produto[i].qtDispProd << endl;
                cout << "VENDA REALIZADA COM SUCESSO" << endl;
            }
        }
        else if(achou==0 and h==0) 
            cout << "PRODUTO NÃO CADASTRADO" << endl;
        else
            cout << "ESTOQUE INSUFICENTE DO PRODUTO!" << endl; 
    }
}

//Função para listar dados de produtos ativos em estoque
void listarDados(int &cap, dadosProduto* &produto){
    //Título do menu
    cout << "\n--------------------------\nPRODUTOS ATIVOS EM ESTOQUE\n--------------------------" << endl;
    if(cap == 0){
        cout << "NÃO HÁ PRODUTOS CADASTRADOS" << endl;
    }
    for(int i = 0; i < cap; i++){
        if(produto[i].sitProd){
            cout << "Descrição: " << produto[i].descProd << endl << "Código: " << produto[i].codProd << endl << "Fornecedor: " << produto[i].prodFornec << endl << "E-mail: " << produto[i].emailFornec << endl << endl;
        }
    }
}

//Função para exportar dados de produtos ativos para arquivo binário
void exportar(int &cap, dadosProduto* &produto){
    //Título do menu
    cout << "\n---------------------\nEXPORTANDO EM BINÁRIO\n---------------------" << endl;
    if(cap == 0){
        cout << "NÃO HÁ PRODUTOS CADASTRADOS" << endl;
    }
    else{
        ofstream exportarBinario("produtosAtivo.bin");
        for(int i = 0; i < cap; i++){
            if(produto[i].sitProd){
                cout << "Descrição: " << produto[i].descProd << endl << "Código: " << produto[i].codProd << endl << "Quantidade Disponível: " << produto[i].qtDispProd << endl << "Preço: " << produto[i].precoProd << endl << "\nDADOS DO FORNECEDOR\n" << "Fornecedor: " << produto[i].prodFornec << endl << "E-mail: " << produto[i].emailFornec << endl << "Telefone: " << produto[i].telFornec << endl;
                if(produto[i].sitProd)
                    cout << "Situação: Ativo\n" << endl;
                else
                    cout << "Situação: Inativo\n" << endl;
                exportarBinario.write((const char *)(&produto[i]), sizeof(dadosProduto));
            }
        }
        cout << "ARQUIVO EXPORTADO COM SUCESSO" << endl;
        exportarBinario.close();
    }
}

//Função para fechar o programa
char sair(){
    //Título do menu
    cout << "\n----------------\nFECHAR PROGRAMA?\n----------------" << endl;
    //Confirmação para saber se o usuário realmente quer deixar o programa
    char confirmacao;
    cout << "(S) Sair | (N) Voltar ao Menu Inicial: ";
    cin >> confirmacao;
    if(confirmacao == 'S' || confirmacao == 's'){
        cout << "\n\nENCERRANDO SISTEMA...\n\n";
        return '8';
    }
    else if(confirmacao == 'N' || confirmacao == 'n')
        return '0';
    else{
        //Caso o usuário escolha uma opção != s || n o sistema volta para o menu inicial
        cout << "OPÇÃO INVÁLIDA, RETORNANDO AO MENU" << endl;
        return '0';
    }
}

int main(){
    char opcao;
    dadosProduto* produto = new dadosProduto[3];
    int cap = 0;
    do{
        menuPrincipal();
        cin >> opcao;
        cout << endl;
        switch(opcao){
            case '1':
                cadastro(cap, produto);
                if(cap % 3 == 0)
                    produto = realoca(produto, cap);
            break;
            case '2':
                consulta(cap, produto);
            break;
            case '3':
                listarCadastrados(cap, produto);
            break;
            case '4':
                excluir(cap, produto);
            break;
            case '5':
                venda(cap, produto);
            break;
            case '6':
                listarDados(cap, produto);
            break;
            case '7':
                exportar(cap, produto);
            break;
            case '8':
                opcao = sair();
            break;
            default:
                cout << "OPÇÃO INVÁLIDA, RETORNANDO AO MENU\n\n";
        }
    }while(opcao != '8');
    return 0;
}