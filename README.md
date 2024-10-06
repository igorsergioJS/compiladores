# Tradutor de Expressões Aritméticas (Prefixada para Pós-fixada)

Tradutor de expressões aritméticas em notação prefixada (onde os operadores vêm antes dos operandos) para notação pós-fixada (onde os operadores vêm depois dos operandos). O código utiliza C++ e CMake para a construção e execução.

## Requisitos

- **CMake** (versão 3.0 ou superior)
- **Compilador C++** (com suporte ao padrão C++17)
- Sistema Linux ou Windows com suporte a ambiente de desenvolvimento C++

## Instruções de Build

Siga os passos abaixo para compilar e executar o projeto:

1. **Clone o projeto para o seu ambiente local** (se estiver em um repositório Git) ou baixe os arquivos `.cpp` e `.h`.

2. **Navegue até o diretório do projeto**:

    ```bash
    cd /caminho/para/seu/projeto
    ```

3. **Crie uma pasta `build`** para a compilação:

    ```bash
    mkdir build
    cd build
    ```

4. **Execute o CMake** para configurar o projeto:

    ```bash
    cmake ..
    ```

5. **Compile o projeto**:

    ```bash
    make
    ```

6. Após a compilação bem-sucedida, o executável será gerado no diretório `build`. 

## Executando o Tradutor

1. Para executar o tradutor, rode o comando abaixo dentro da pasta `build`:

    ```bash
    ./Tradutor
    ```

2. **Forneça uma expressão aritmética em notação prefixada como entrada**. O programa converterá a expressão para notação pós-fixada.

### Exemplo de Entrada e Saída

#### Exemplo 1:

**Entrada (prefixada):**

```bash
+9*34
```

**Saída (pós-fixada):**

```bash
934*+
```

#### Exemplo 2:

**Entrada (prefixada):**

```bash
-+923
```

**Saída (pós-fixada):**

```bash
92+3-
```

## Tratamento de Erros

Caso a expressão fornecida tenha um erro de sintaxe, o programa exibirá a seguinte mensagem de erro:

```bash
^
Erro de Sintaxe
```

## Organização do Projeto

Os arquivos do projeto incluem:

- **main.cpp**: Arquivo principal que executa o tradutor.
- **parser.h**: Definição da classe `Parser` e do erro `SyntaxError`.
- **parser.cpp**: Implementação da lógica de parsing e conversão das expressões.

## Observações

- Certifique-se de que a expressão fornecida não contém espaços e segue a notação prefixada correta.
- O programa reconhece apenas os operadores `+` e `-`, e números de `0` a `9`.
