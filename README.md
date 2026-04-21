# Fase 2 – Irrigação Inteligente

## Descrição

Este projeto simula um sistema de irrigação automática utilizando ESP32, com sensores simulados na plataforma Wokwi.  
O objetivo é monitorar a umidade do solo e acionar a irrigação de forma automática.

## Objetivo

Automatizar o processo de irrigação com base nos dados coletados pelos sensores, evitando desperdício de água e melhorando a eficiência.

## Sensores utilizados

- DHT22 (sensor de umidade)
- LDR (simulação de pH)
- Botões (controle manual – NPK)

## Funcionamento

O sistema realiza a leitura da umidade do solo e toma decisões automaticamente:

- Quando a umidade está **abaixo de 40%**, a irrigação é ativada (LED ligado)
- Quando a umidade está **acima de 40%**, a irrigação é desligada

## Tecnologias utilizadas

- ESP32
- Linguagem C++
- Plataforma Wokwi (simulação)

## Estrutura do projeto

- `sketch.ino` → código principal do sistema
- `relatorio-fase2-irrigacao.pdf` → documentação do projeto
## 🎥 Vídeo do Projeto

👉 [Clique aqui para assistir ao vídeo](https://youtu.be/V_RsebS23Uk)

## Autora

Dani Zullo  
RM: 571880
