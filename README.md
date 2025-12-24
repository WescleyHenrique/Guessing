# Guessing
# 🎮 Jogo de Adivinhação em C  Um jogo de console (CLI) simples e interativo desenvolvido em C.
<img width="1112" height="582" alt="Guessing" src="https://github.com/user-attachments/assets/becfb88e-fb08-43b0-8ea1-fce8ec4794d2" />

Um jogo interativo desenvolvido em C que combina interface de terminal com janelas nativas do Windows. O jogador deve tentar adivinhar um número aleatório gerado pelo computador.

## 🚀 Sobre o Projeto
Este projeto foi desenvolvido durante meus estudos na linguagem C. O objetivo foi aplicar conceitos de lógica de programação, laços de repetição (`do-while`), manipulação de cores no terminal e integração básica com a API do Windows.

## 🛠️ Funcionalidades

- **Geração Aleatória:** O número secreto muda a cada nova rodada.
- **Feedback Visual Inteligente:**
  - 🟡 **Amarelo:** Indica que o jogador errou o palpite.
  - 🔴 **Vermelho:** Alerta de erro de validação (ex: digitar letras ou números fora de 0-10).
- **Integração com Windows:** Ao acertar o número, o jogo exibe uma **Janela Pop-up (MessageBox)** parabenizando o jogador.
- **Validação de Entrada:** O sistema protege contra caracteres inválidos e limpa o buffer do teclado.
- **Sistema de Loop:** Opção de "Jogar Novamente" sem fechar o programa.

## 💻 Tecnologias Utilizadas
- Linguagem C
- Bibliotecas Padrão: `stdio.h`, `stdlib.h`, `time.h`
- API do Windows: `windows.h` (para a criação da janela de vitória)

## ⚙️ Como Rodar (Windows)
1. Certifique-se de ter um compilador C (como GCC/MinGW) instalado.
2. Compile o arquivo:
   ```bash
   gcc guessing.c -o jogo
clone : https://github.com/WescleyHenrique/Guessing.git
