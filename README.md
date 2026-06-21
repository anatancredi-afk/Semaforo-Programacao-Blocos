# Semaforo-Programacao-Blocos
Projeto de simulação de semáforo com Arduino e programação em blocos no Tinkercad, com controle de estados por tempo e botão de pedestres.

# Descrição do projeto 
Este projeto consiste na modelagem e implementação de um sistema de semáforo utilizando lógica de programação e Arduino no ambiente Tinkercad. 
A proposta do trabalho foi simular o funcionamento de um semáforo real, incluindo o controle de veículos e pedestres, com base em uma lógica de temporização e interação por botão. 
Inicialmente, o sistema foi desenvolvido em programação em blocos (Scratch-like), permitindo a visualização do fluxo lógico do algoritmo. Em seguida, a mesma lógica foi convertida automaticamente pelo Tinkercad para linguagem C++ para Arduino.

# Modelagem algorítmica e implementação
A modelagem do programa é baseada em tempo, onde cada faixa de tempo representa um estado do semáforo. 
Uma variável de controle (tempo) é responsável por determinar a transição entre os estados do sistema.
Além disso, o projeto foi desenvolvido em duas etapas: 
- Programação em blocos no Tinkercad, facilitando a visualização do algoritmo e do fluxo lógico 
- Conversão para linguagem C++ Arduino, com estrutura baseada em: setup(), loop(), variáveis de controle e lógica de temporização.

# Funcionamento do sistema
A lógica do sistema é baseada em uma variável de tempo que funciona como contador do ciclo do semáforo. 
O sistema alterna entre estados de: Verde (liberação de veículos), Amarelo (transição) e Vermelho (parada de veículos e liberação de pedestres).
O botão de pedestres é monitorado continuamente. Quando acionado, o sistema pode antecipar a mudança de estado para permitir a travessia segura.

# Análise de funcionamento e limitações
Durante o desenvolvimento, foram identificadas algumas limitações. Dentre elas, estavam a leitura do botão podendo apresentar atraso devido ao uso de delay de aproximadamente 1 segundo, o botão que só é verificado em intervalos, podendo gerar leve atraso na resposta, e, a variável de tempo precisa ser reiniciada corretamente ao final do ciclo para evitar erros de estado. Portanto, como melhoria futura, recomenda-se o uso de técnicas de temporização não bloqueante para melhorar a resposta do sistema.

# Conclusão
O desenvolvimento do projeto permitiu compreender melhor a lógica de sistemas embarcados e controle de estados com Arduino. 
Durante o processo, foi possível desenvolver habilidades relacionadas a: lógica de programação, manipulação de variáveis de controle, leitura de entradas digitais (botão) e organização de fluxo de execução.

# LINK DO PROJETO TINKERCAD
https://www.tinkercad.com/things/202ljA7AB2A-ti1p1turma-1analuizavidal?sharecode=VEs0ORL4SR4vyIseGDVsnYpBTqNQ3xwd1x0cMDeUfNU
