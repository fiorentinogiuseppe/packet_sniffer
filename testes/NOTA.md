# Alguns testes e estudos usando o pacap
O próprio tcpdump tem um [tutorial](https://www.tcpdump.org/pcap.html) para utilizar a ferramenta. 
Indo do básico até o sniffer final. A primeira coisa que é ensinado é o layout geral de um sniffer pcap.

:warning: Algumas coisas no tutorial estão `deprecated` tive que rodar em outros locais para encontrar.
Listarei o que foi buscado e o local achado na seção [Links](#links) 

## O formato de um aplicativo pcap
O fluxo de código é o seguinte:
1. Começamos determinando em qual interface queremos farejar. Existe 2 formas de fazer isso:
    * Definindo este dispositivo em uma string 
    * Pedindo ao pcap que nos forneça o nome de uma interface que fará o trabalho.
2. Inicialize o pcap e dizemos ao pcap em que dispositivo iremos farejar.
Para isso nomeamos nossa "sessão" de farejamento para que possamos diferenciá-lo de outras sessões.
3. [OPCIONAL](#opcional)
4. Nesta faze izemos ao pcap para inserir seu loop de execução principal, ou seja, nesse estado, o pcap aguarda até receber o 
número de pacotes que desejamos e toda vez que recebe um novo pacote, ele chama outra função que já definimos para que faça algo. 
5. Depois que nossas necessidades de cheirar são satisfeitas, encerramos a sessão e estamos completos.

### <a name="opcional"></a> OPCIONAL
Caso desejemos capturar tráfego específico devemos criar um conjunto de regras armazenando-o em uma string, em seguinda
convertido em um formato que o pcap pode ler, ou seja chamando uma função dentro do programa (também chamado de processo 
de "compilação") e aplicá-lo à sessão que desejarmos filtrar.

## Setting the device
## Opening the device for sniffing
## Filtering traffic
## The actual sniffing


## <a name="links"></a>Links
* ‘char* pcap_lookupdev(char*)’ esta `deprecated` e foi indicado pela lib usar o 
`pcap_findalldevs`. Além disso indica pecar o primeiro device, que pelo que entendi
é a placa de rede, no meu caso wifi.
Assim encontrei um exemplo usando no [embeddedguruji](https://embeddedguruji.blogspot.com/2014/01/pcapfindalldevs-example.html)
