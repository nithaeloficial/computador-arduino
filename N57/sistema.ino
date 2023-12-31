String comandolinguagemsistema[] = {
  "systemExit",
  "systemReiniciar",
  "systemSuspender",
  "systemDesligar",
  "systemOpenApp",
  "systemOpenGame",
  "systemOpenConfig",
  "systemOpenFolder",
  "systemOpenFile"
}; //9

String comandolinguagemestrutura[] = {
  "forever",
  "repet",
  "while",
  "dowhile",
  "function",
  "if",
  "else"
}; //7

String comandolinguagempinodigital[] = {
  "pinMode",
  "digitalWrite",
  "digitalRead"
}; //3

String comandolinguagempinoanalogico[] = {
  "analogReference",
  "analogRead",
  "analogWrite"
}; //3

String comandolinguagemtime[] = {
  "delay",
  "delayMicroseconds",
  "setSecond",
  "setMinute",
  "setHour",
  "setDay",
  "setMonth",
  "setYear",
  "getSecond",
  "getMinute",
  "getHour",
  "getDay",
  "getMonth",
  "getYear",
  "dayWeekNumber",
  "dayWeekWork",
  "nameMonth",
  "timeSecond",
  "millis",
  "micros"
}; //20

String comandolinguagemtela[] = {
  "getColor",
  "getBackColor",
  "getDisplayYsize",
  "getDisplayXsize",
  "getFont",
  "getFontXsize",
  "getFontYsize",
  "clrScr",
  "noStroke",
  "noFill",
  "fill",
  "stroke",
  "print1",
  "print2",
  "println",
  "fillScr",
  "setColor",
  "setBackColor",
  "setFont",
  "drawChar",
  "setCursor",
  "setTextColor",
  "setTextSize",
  "drawLine",
  "drawTriangle",
  "fillTriangle",
  "drawRect",
  "fillRect",
  "fillCircle",
  "drawCircle",
  "drawPixel",
  "drawRoundRect",
  "fillRoundRect",
  "drawBitmap1",
  "drawBitmap2",
  "drawBitmap3",
  "app_layout_print_caixa_texto",
  "app_layout_print_caixa_texto_simples",
  "app_layout_print_paragrafo1",
  "app_layout_print_paragrafo2",
  "app_layout_print_paragrafo_font",
  "app_layout_print_dialogo1",
  "app_layout_print_dialogo2",
  "app_layout_print_dialogo3",
  "app_layout_print_notificacao1",
  "app_layout_print_notificacao2",
  "app_layout_print_carregamento",
  "app_layout_print_carregamento_tempo",
  "app_layout_print_barra",
  "app_layout_print_actionbar_barra1",
  "app_layout_print_actionbar_barra2",
  "app_layout_print_actionbar_barra3",
  "app_layout_print_list",
  "app_layout_print_text_bar",
  "printHora",
  "printDataHora",
  "carregarCircle",
  "animationText",
  "game_layout_print_gameover",
  "game_layout_print_endgame",
  "game_layout_print_fasegame"
}; //61

String comandolinguagemsom[] = {
  "som1",
  "som2",
  "som3",
  "som4",
  "speech",
  "tocarsom"
}; //6

String comandolinguagemteclado[] = {
  "layout_teclado",
  "pause_teclado",
  "readtext1",
  "readtext2",
  "status",
  "quantidadedecinco"
}; //6

String comandolinguagemmouse[] = {
  "layout_mouse",
  "pause_mouse"
}; //2

String comandolinguagemstring[] = {
  "lenght",
  "AtChar"
}; //2

String comandolinguagemmatematica[] = {
  "round",
  "random1",
  "random2",
  "max",
  "pow",
  "min",
  "map",
  "nanis",
  "exp",
  "fnisi",
  "log",
  "10log",
  "tan",
  "cos",
  "sin",
  "rtan",
  "rcos",
  "rsin",
  "ratan",
  "racos",
  "rasin",
  "atan",
  "acos",
  "asin",
  "sqrt",
  "abs",
  "constrain"
}; //27

String comandolinguagemconverter[] = {
  "toChar",
  "toLong",
  "toInt",
  "toByte",
  "toFloat"
}; //5

String comandolinguagemserial[] = {
  "layout_serial",
  "pause_serial",
  "write_serial"
}; //3

int quantidadedegame = 2;
String nomegame[] = {
  "Ball",
  "Corrida"
};
int quantidadedeconfiguracao = 8;
String nomeconfiguracao[] = {
  "Som",
  "Tela",
  "Armazenamen.",
  "Bateria",
  "Seguraca",
  "Idioma",
  "Data e Hora",
  "Sobre"
};
int quantidadedeaplicativo = 18;
String nomeaplicativo[] = {
  "Bloco de Nota",
  "Calculadora",
  "Configuracao",
  "Cont. Regre.",
  "Cronometro",
  "Despertador",
  "Galeria",
  "Ger. Arquiv.",
  "Ger. I/O",
  "Ger. Sensor",
  "Ger. Proces.",
  "Ajuda",
  "IDE N5Script",
  "Jogos",
  "Atividades",
  "Musica",
  "Outros Apps",
  "Desenhar"
};
//#############################SISTEMA##################################
//---------------------------------------------------------------------
//---------------------------GAME--------------------------------------
void printgame(int item) {
  TFTscreen.clrScr();
  TFTscreen.fillScr(230, 230, 230);
  String uri = "SD::SD1/SYS.H/IMAGEM/GAME/M";
  uri += String(item);
  uri += ".bmp";
  printimagetransparente(uri, 211, 131);
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2(nomegame[item - 1].c_str(), 195, 207);
  delay(3000);
}
void printbackgame(int item) {
  app_layout_actionbar_barra_1("Jogos", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M14.BMP", 127, 127, 127);
  int scroll = 3;
  int reduzir = 12;
  if (((((item - 1) * 6) + 1) <= quantidadedegame)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/GAME/M";
    uri += String(((item - 1) * 6) + 1);
    uri += ".bmp";
    printimagetransparente(uri, 81, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomegame[((item - 1) * 6)].c_str(), 65, 169 - reduzir - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 150 - reduzir - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 143, 143 - reduzir - scroll);
  }
  if (((((item - 1) * 6) + 2) <= quantidadedegame)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/GAME/M";
    uri += String(((item - 1) * 6) + 2);
    uri += ".bmp";
    printimagetransparente(uri, 201, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomegame[((item - 1) * 6) + 1].c_str(), 185, 169 - reduzir - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 150 - reduzir - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 263, 143 - reduzir - scroll);
  }
  if (((((item - 1) * 6) + 3) <= quantidadedegame)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/GAME/M";
    uri += String(((item - 1) * 6) + 3);
    uri += ".bmp";
    printimagetransparente(uri, 331, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomegame[((item - 1) * 6) + 2].c_str(), 315, 169 - reduzir - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 150 - reduzir - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 393, 143 - reduzir - scroll);
  }
  if (((((item - 1) * 6) + 4) <= quantidadedegame)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/GAME/M";
    uri += String(((item - 1) * 6) + 4);
    uri += ".bmp";
    printimagetransparente(uri, 81, 193 - reduzir - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomegame[((item - 1) * 6) + 3].c_str(), 65, 269 - (2 * reduzir) -  scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 250 - (2 * reduzir) -  scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("4", 143, 243 - (2 * reduzir) -  scroll);
  }
  if (((((item - 1) * 6) + 5) <= quantidadedegame)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/GAME/M";
    uri += String(((item - 1) * 6) + 5);
    uri += ".bmp";
    printimagetransparente(uri, 201, 193 - reduzir - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomegame[((item - 1) * 6) + 4].c_str(), 185, 269 - (2 * reduzir) -  scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 250 - (2 * reduzir) -  scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("5", 263, 243 - (2 * reduzir) -  scroll);
  }
  if (((((item - 1) * 6) + 6) <= quantidadedegame)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/GAME/M";
    uri += String(((item - 1) * 6) + 6);
    uri += ".bmp";
    printimagetransparente(uri, 331, 193 - reduzir - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomegame[((item - 1) * 6) + 5].c_str(), 315, 269 - (2 * reduzir) -  scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 250 - (2 * reduzir) -  scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("6", 393, 243 - (2 * reduzir) -  scroll);
  }
}
void app_game() {
  int posicao = 1;
  boolean sairapp = false;
  printbackgame(posicao);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero = ((posicao - 1) * 6);
        if (c == '1') {
          appnumero += 1;
        }
        if (c == '2') {
          appnumero += 2;
        }
        if (c == '3') {
          appnumero += 3;
        }
        if (c == '4') {
          appnumero += 4;
        }
        if (c == '5') {
          appnumero += 5;
        }
        if (c == '6') {
          appnumero += 6;
        }
        if (appnumero <= quantidadedegame) {
          printgame(appnumero);
          delay(250);
          switch (appnumero) {
            case 1:
              jogo_app_ball();
              break;
            case 2:
              jogo_app_corrida();
              break;
            case 3:
              break;
            case 4:
              break;
            case 5:
              break;
            case 6:
              break;
            case 7:
              break;
            case 8:
              break;
          }
          if (desligarn5) {
            break;
          } else {
            printlayout = true;
          }
        }
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Jogos", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        int  quantidadelayout = int(quantidadedegame / 6);
        if ((quantidadedegame % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(quantidadedegame / 6);
        if ((quantidadedegame % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(quantidadedegame / 6);
        if ((quantidadedegame % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(quantidadedegame / 6);
        if ((quantidadedegame % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      printbackgame(posicao);
    }
  }
}
//---------------------------------------------------------------------
struct jogocorrida {
  PImage carro1;
  PImage carro2;
  PImage carro3;
  PImage plano;
  int ballSpeed2;
  int oldpontos;
  int fasegame;
  int ladodapista;
  int pontosusuario;
  boolean parajogo;
  boolean novapartida;
  boolean fecharjogo;
  //Paddle##################
  int paddleX;
  int paddleY;
  int oldPaddleX;
  int oldPaddleY;
  int velocidade;
  //------------------------
  //Ball####################
  int ballX;
  int ballY;
  int oldBallX;
  int oldBallY;
  int ballSpeed;
  int ballX2;
  int ballY2;
  int oldBallX2;
  int oldBallY2;
  //------------------------
  void incializar(int fase) {
    fecharjogo = false;
    fasegame = fase;
    parajogo = true;
    ballX = 490;
    ballY = 235;
    oldBallX = 490;
    oldBallY = 235;
    ballX2 = 550;
    ballY2 = 288;
    oldBallX2 = 550;
    oldBallY2 = 288;
    novapartida = false;
    ballSpeed = 8 - (fasegame * 2);
    ballSpeed2 = 10 - (fasegame * 2);
    velocidade = 20;
    paddleX = 30;
    paddleY = 288;
    oldPaddleX = 30;
    oldPaddleY = 288;
    pontosusuario = 0;
    carro1 = consultardiretoriopastaSD_pimage("SD::SD1/SYS.H/IMAGEM/GAME/c.bmp");
    carro2 = consultardiretoriopastaSD_pimage("SD::SD1/SYS.H/IMAGEM/GAME/d.bmp");
    carro3 = consultardiretoriopastaSD_pimage("SD::SD1/SYS.H/IMAGEM/GAME/e.bmp");
    plano = consultardiretoriopastaSD_pimage("SD::SD1/SYS.H/IMAGEM/GAME/b.bmp");
    TFTscreen.background(0, 0, 0);
    TFTscreen.imageoriginal(plano, 0, 0);
  }
  void lacoderepeticao() {
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.setBackColor(255, 0, 0);
    TFTscreen.setFont(BigFont);
    if (oldpontos != pontosusuario) {
      TFTscreen.print2(String(oldpontos), 242, 57);
    }
    boolean printlayout = false;
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_UPARROW) {
        paddleY = 235;
      } else if (c == PS2_DOWNARROW) {
        paddleY = 288;
      } else if (c == PS2_ESC) {
        printmenujogo();
        if (fecharjogo) {
        } else {
          if (novapartida) {
            novapartida = false;
          } else {
            printlayout = true;
          }
        }
      } else if (c == PS2_LEFTARROW) {
        velocidade -= 5;
        if (velocidade < -10) {
          velocidade = -10;
        }
        paddleX += velocidade;
        if (paddleX > 370) {
          paddleX = 370;
          velocidade -= 5;
        }
        if (paddleX < 0) {
          parajogo = false;
          fecharjogo = true;
          gameover();
          printmenujogo();
        }
      } else if (c == PS2_RIGHTARROW) {
        velocidade += 5;
        if (velocidade > 20) {
          velocidade = 20;
        }
        paddleX += velocidade;
        if (paddleX > 370) {
          paddleX = 370;
          velocidade -= 5;
        }
        if (paddleX < 0) {
          parajogo = false;
          fecharjogo = true;
          gameover();
          printmenujogo();
        }
      }
    } else {
      velocidade--;
      if (velocidade < -10) {
        velocidade = -10;
      }
      paddleX += velocidade;
      if (paddleX > 370) {
        paddleX = 370;
        velocidade -= 5;
      }
      if (paddleX < 0) {
        parajogo = false;
        fecharjogo = true;
        gameover();
        printmenujogo();
      }
    }
    if (printlayout)
    {
      TFTscreen.background(0, 0, 0);
      TFTscreen.imageoriginal(plano, 0, 0);
    }
    TFTscreen.setColor(156, 138, 156);
    if (oldPaddleX != paddleX || oldPaddleY != paddleY) {
      TFTscreen.fillRect(oldPaddleX, oldPaddleY, oldPaddleX + 30, oldPaddleY + 30);
    }
    TFTscreen.imagetransparente(carro1, paddleX, paddleY);
    delay(10);
    oldPaddleX = paddleX;
    oldPaddleY = paddleY;
    if (inPaddle(paddleX, paddleY, ballX, ballY, 30, 30)) {
      parajogo = false;
      fecharjogo = true;
      gameover();
      printmenujogo();
    }
    if (inPaddle(paddleX, paddleY, ballX2, ballY2, 30, 30)) {
      parajogo = false;
      fecharjogo = true;
      gameover();
      printmenujogo();
    }
    if (millis() % ballSpeed < 2) {
      movecar1();
    }
    if (millis() % ballSpeed2 < 2) {
      movecar2();
    }
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(255, 0, 0);
    TFTscreen.setFont(BigFont);
    TFTscreen.print2(String(pontosusuario), 242, 57);
    oldpontos = pontosusuario;
  }
  void movecar2() {
    ballX2 -= 2;
    if (ballX2 < 1) {
      pontosusuario += 100;
      if (pontosusuario > 500) {
        fasegame++;
        if (fasegame > 3) {
          parajogo = false;
          fecharjogo = true;
          fimdejogo();
          printmenujogo();
        } else {
          parajogo = false;
          printfasegame(fasegame);
          incializar(fasegame);
        }
      }
      if (ladodapista > 5) {
        ballY2 = 235;
      } else {
        ballY2 = 288;
      }
      ballX2 = 550;
    }
    TFTscreen.setColor(156, 138, 156);
    if (oldBallX2 != ballX2 || oldBallY2 != ballY2) {
      TFTscreen.fillRect(oldBallX2, oldBallY2, oldBallX2 + 30, oldBallY2 + 30 );
    }
    int x1 = ballX2;
    int x2 = ballX2 + 30;
    if (((x1 <= 1) && (x2 <= 1)) || ((x1 >= 479) && (x2 >= 479))) {  } else {
      TFTscreen.imagetransparente(carro2, ballX2, ballY2);
    }
    oldBallX2 = ballX2;
    oldBallY2 = ballY2;
  }
  void movecar1() {
    ballX -= 2;
    if (ballX < 1) {
      pontosusuario += 100;
      ladodapista = random(10);
      if (pontosusuario > 500) {
        fasegame++;
        if (fasegame > 3) {
          parajogo = false;
          fecharjogo = true;
          fimdejogo();
          printmenujogo();
        } else {
          parajogo = false;
          printfasegame(fasegame);
          incializar(fasegame);
        }
      }
      if (ladodapista > 5) {
        ballY = 235;
      } else {
        ballY = 288;
      }
      ballX = 550;
    }
    TFTscreen.setColor(156, 138, 156);
    if (oldBallX != ballX || oldBallY != ballY) {
      TFTscreen.fillRect(oldBallX, oldBallY, oldBallX + 30, oldBallY + 30 );
    }
    int x1 = ballX;
    int x2 = ballX + 30;
    if (((x1 <= 1) && (x2 <= 1)) || ((x1 >= 479) && (x2 >= 479))) {  } else {
      TFTscreen.imagetransparente(carro3, ballX, ballY);
    }
    oldBallX = ballX;
    oldBallY = ballY;
  }
  boolean incarros(int x, int rectX, int rectWidth) {
    boolean result = false;
    if ((x >= rectX && x <= (rectX + rectWidth))) {
      result = true;
    }
    return result;
  }
  boolean inPaddle(int x, int y, int rectX, int rectY, int rectWidth, int rectHeight) {
    boolean result = false;
    if ((x >= rectX && x <= (rectX + rectWidth)) &&
        (y >= rectY && y <= (rectY + rectHeight))) {
      result = true;
    }
    return result;
  }
  void printmenujogo() {
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.fillRoundRect(110, 65 + 30, 114 + 255, 69 + 30 + (8 * 16));
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(112, 67 + 30, 112 + 255, 67 + 30 + (8 * 16));
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.setBackColor(230, 230, 230);
    TFTscreen.setFont(BigFont);
    TFTscreen.print2("Jogo Corrida", 112 + 14, 67 + 30 + (1 * 16));
    TFTscreen.print2("1) Sair", 112 + 14, 67 + 30 + (3 * 16));
    TFTscreen.print2("2) Novo", 112 + 14, 67 + 30 + (4 * 16));
    TFTscreen.print2("3) Voltar", 112 + 14, 67 + 30 + (5 * 16));
    TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + 30 + (6 * 16));
    while (true) {
      delay(1);
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == '1') {
          fecharjogo = true;
          break;
        } else if (c == '2') {
          incializar(1);
          novapartida = true;
          break;
        } else if (c == '3') {
          break;
        } else if (c == '4') {
          TFTscreen.clrScr();
          TFTscreen.fillScr(0, 0, 0);
          desligar_n5();
          if (desligarn5) {
            fecharjogo = true;
          }
          break;
        }
      }
    }
  }
};
struct jogoball {
  int x1;
  int x2;
  int y1;
  int y2;
  int fasegame;
  String texto[3];
  int pontosusuario;
  int pontoscomputador;
  boolean parajogo;
  boolean novapartida;
  boolean fecharjogo;
  int hora;
  int minuto;
  //Paddle##################
  int paddleX;
  int paddleY;
  int oldPaddleX;
  int oldPaddleY;
  int scalepaddleX;
  int scalepaddleY;
  //------------------------
  //Ball####################
  int ballX;
  int ballY;
  int oldBallX;
  int oldBallY;
  int scaleball;
  int ballSpeed;
  int ballDirectionX;
  int ballDirectionY;
  //------------------------
  void incializar(int fase) {
    x1 = 20;
    y1 = 90;
    y2 = 250;
    x2 = 460;
    fecharjogo = false;
    fasegame = fase;
    parajogo = true;
    ballX = x1;
    ballY = y1;
    novapartida = false;
    oldBallX = x1;
    oldBallY = y1;
    paddleX = x1 + 10;
    scaleball = 8;
    ballSpeed = 20 - (fasegame * 2);
    scalepaddleX = 60;
    scalepaddleY = 10;
    ballDirectionX = 1;
    ballDirectionY = 1;
    paddleY = y2 - 3;
    oldPaddleX = x1 + 10;
    oldPaddleY = y2 - 3;
    app_layout_actionbar_barra_1("Ball", "SD::SD1/SYS.H/IMAGEM/GAME/M1.BMP", 0, 51, 0);
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.fillRect(10, 80 , 470, 270);
    pontoscomputador = 0;
    pontosusuario = 0;
    texto[0] = "Cmp: ";
    texto[0] += pontoscomputador;
    texto[1] = "Usr: ";
    texto[1] += pontosusuario;
    texto[2] = "Fase: ";
    texto[2] += fasegame;
    app_layout_texto_barra(texto, 3);
    hora = memoriareadint(3).toInt();
    minuto = memoriareadint(2).toInt();
  }
  void lacoderepeticao() {
    boolean printlayout = false;
    if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
      minuto = memoriareadint(2).toInt();
      hora = memoriareadint(3).toInt();
      if (!teladebloqueio) {
        printdataehora2();
      }
    }
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        printmenujogo();
        if (fecharjogo) {
        } else {
          if (novapartida) {
            novapartida = false;
          } else {
            printlayout = true;
          }
        }
      } else if (c == PS2_LEFTARROW) {
        paddleX -= 8;
        if (paddleX < x1) {
          paddleX = x1;
        }
      } else if (c == PS2_RIGHTARROW) {
        paddleX += 8;
        if ((paddleX + scalepaddleX) > x2) {
          paddleX = x2 - scalepaddleX;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Ball", "SD::SD1/SYS.H/IMAGEM/GAME/M1.BMP", 0, 51, 0);
      TFTscreen.setColor(0, 0, 0);
      TFTscreen.fillRect(10, 80 , 470, 270);
      texto[0] = "Cmp: ";
      texto[0] += pontoscomputador;
      texto[1] = "Usr: ";
      texto[1] += pontosusuario;
      texto[2] = "Fase: ";
      texto[2] += fasegame;
      app_layout_texto_barra(texto, 3);
    }
    TFTscreen.setColor(0, 0, 0);
    if (oldPaddleX != paddleX || oldPaddleY != paddleY) {
      TFTscreen.fillRoundRect(oldPaddleX, oldPaddleY, oldPaddleX + scalepaddleX, oldPaddleY + scalepaddleY);
    }
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.fillRoundRect(paddleX, paddleY, paddleX + scalepaddleX, paddleY + scalepaddleY);
    oldPaddleX = paddleX;
    oldPaddleY = paddleY;
    if (millis() % ballSpeed < 2) {
      moveBall();
    }
  }
  void moveBall() {
    if (ballX > x2 || ballX < x1) {
      ballDirectionX = -ballDirectionX;
    }
    if (ballY > y2 || ballY < y1) {
      ballDirectionY = -ballDirectionY;
      if (ballY > y2) {
        pontoscomputador++;
        texto[0] = "Cmp: ";
        texto[0] += pontoscomputador;
        texto[1] = "Usr: ";
        texto[1] += pontosusuario;
        texto[2] = "Fase: ";
        texto[2] += fasegame;
        app_layout_texto_barra(texto, 3);
        if (pontoscomputador > 9) {
          parajogo = false;
          fecharjogo = true;
          gameover();
          printmenujogo();
        }
      }
    }
    if (inPaddle(ballX, ballY, paddleX, paddleY, scalepaddleX, scalepaddleY)) {
      pontosusuario++;
      texto[0] = "Cmp: ";
      texto[0] += pontoscomputador;
      texto[1] = "Usr: ";
      texto[1] += pontosusuario;
      texto[2] = "Fase: ";
      texto[2] += fasegame;
      app_layout_texto_barra(texto, 3);
      if (pontosusuario > 9) {
        fasegame++;
        if (fasegame > 5) {
          parajogo = false;
          fecharjogo = true;
          fimdejogo();
          printmenujogo();
        } else {
          parajogo = false;
          printfasegame(fasegame);
          incializar(fasegame);
        }
      }
      ballDirectionY = -ballDirectionY;
    }
    ballX += ballDirectionX;
    ballY += ballDirectionY;
    TFTscreen.setColor(0, 0, 0);
    if (oldBallX != ballX || oldBallY != ballY) {
      TFTscreen.fillCircle(oldBallX, oldBallY, scaleball);
    }
    TFTscreen.setColor(255, 30, 30);
    TFTscreen.fillCircle(ballX, ballY, scaleball);
    oldBallX = ballX;
    oldBallY = ballY;
  }
  boolean inPaddle(int x, int y, int rectX, int rectY, int rectWidth, int rectHeight) {
    boolean result = false;
    if ((x >= rectX && x <= (rectX + rectWidth)) &&
        (y >= rectY && y <= (rectY + rectHeight))) {
      result = true;
    }
    return result;
  }
  void printmenujogo() {
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.fillRoundRect(110, 65 + 30, 114 + 255, 69 + 30 + (8 * 16));
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(112, 67 + 30, 112 + 255, 67 + 30 + (8 * 16));
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.setBackColor(230, 230, 230);
    TFTscreen.setFont(BigFont);
    TFTscreen.print2("Jogo Ball", 112 + 14, 67 + 30 + (1 * 16));
    TFTscreen.print2("1) Sair", 112 + 14, 67 + 30 + (3 * 16));
    TFTscreen.print2("2) Novo", 112 + 14, 67 + 30 + (4 * 16));
    TFTscreen.print2("3) Voltar", 112 + 14, 67 + 30 + (5 * 16));
    TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + 30 + (6 * 16));
    while (true) {
      delay(1);
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == '1') {
          fecharjogo = true;
          break;
        } else if (c == '2') {
          incializar(1);
          novapartida = true;
          break;
        } else if (c == '3') {
          break;
        } else if (c == '4') {
          TFTscreen.clrScr();
          TFTscreen.fillScr(0, 0, 0);
          desligar_n5();
          if (desligarn5) {
            fecharjogo = true;
          }
          break;
        }
      }
    }
  }
};
//---------------------------BOOT INICIALIZACAO------------------------
void print_boot_inicializaca() {
  app_layout_actionbar_barra_3("BOOT", 0, 50, 0);
  String texto[1];
  texto[0] = "S: ";
  texto[0] += "0";
  app_layout_texto_barra(texto, 1);
  String lista[3] = {
    "IDE N5",
    "SISTEMA",
    "CONTROLE:: MOUSE TECLADO"
  };
  app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
}
void boot_inicializaca() {
  int sistemaoperacionaldeini = 2;
  while (true) {
    TFTscreen.background(0, 0, 0);
    for (int h = 1; h <= 3; h++) {
      TFTscreen.stroke(255, 255, 255);
      TFTscreen.setTextSize(14);
      TFTscreen.setCursor(200, 110);
      TFTscreen.print(h);
      delay(1000);
      TFTscreen.stroke(0, 0, 0);
      TFTscreen.setCursor(200, 110);
      TFTscreen.print(h);
      if (keyboard.available()) {
        char c = keyboard.read();
        if (c == PS2_ENTER) {
          print_boot_inicializaca();
          String sistemaoperacionaldeinia = "";
          while (true) {
            String texto[1];
            if (keyboard.available()) {
              char c = keyboard.read();
              if (c == PS2_ENTER) {
                sistemaoperacionaldeini = sistemaoperacionaldeinia.toInt();
                h = 11;
                break;
              } else if (c == PS2_DELETE) {
                sistemaoperacionaldeinia = sistemaoperacionaldeinia.substring(0, sistemaoperacionaldeinia.length() - 1);
              } else {
                sistemaoperacionaldeinia += String(c);
              }
            }
            delay(100);
            texto[0] = "S: ";
            texto[0] += sistemaoperacionaldeinia;
            texto[0] += "_";
            app_layout_texto_barra(texto, 1);
            delay(100);
            app_layout_print_barra(0, 0, 0);
          }
        }
      }
    }
    break;
  }
  switch (sistemaoperacionaldeini) {
    case 1:
      while (true) {
        if (begin_consultardiretoriopastaSD(portadecartaosystem)) {
          app_iden5scipt();
        } else {
          system01inaction = true;
          app_iden5scipt_dos();
        }
      }
      break;
    case 2:
      if (begin_consultardiretoriopastaSD(portadecartaosystem)) {
        incializar_sistema();
      } else {
        system01inaction = true;
        app_iden5scipt_dos();
      }
      break;
    case 3:
      mouse.initialize();
      Mouse.begin();
      Keyboard.begin();
      controlusb();
      break;
    default:
      if ((sistemaoperacionaldeini >= 42) && (sistemaoperacionaldeini <= 52)) {
        portadecartaosystem = sistemaoperacionaldeini;
        if (begin_consultardiretoriopastaSD(portadecartaosystem)) {
          incializar_sistema();
        } else {
          system01inaction = true;
          app_iden5scipt_dos();
        }
      }
      break;
  }
}
//---------------------------------------------------------------------
//---------------------------TELA INICIAR------------------------------
void tela_iniciar() {
  imagegaleria(memoriareadint(9), 0, 0, 480, 320);
  teladebloqueio = true;
  analogWrite(9, memoriareadint(24).toInt() * 63);
  if (desligarn5) {
    desligarn5 = false;
  }
  int hora = memoriareadint(3).toInt();
  int minuto = memoriareadint(2).toInt();
  printdataehora();
  int tempo  =  temporestante();
  while (true) {
    if (execucao() == 1) {
      imagegaleria(memoriareadint(9), 0, 0, 480, 320);
      printdataehora();
    }
    delay(1);
    if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
      minuto = memoriareadint(2).toInt();
      hora = memoriareadint(3).toInt();
      printdataehora();
    }
    if (memoriareadint(30).toInt() != 0) {
      if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
        incializar_sistema_suspender();
        incializar_sistema_aguarde();
        imagegaleria(memoriareadint(9), 0, 0, 480, 320);
        printdataehora();
        tempo  =  temporestante();
      }
    }
    if (keyboard.available()) {
      if (memoriareadint(20).toInt() == 1) {
        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
      }
      char c = keyboard.read();
      if (c == PS2_ENTER) {
        teladebloqueio = false;
        tela_bloqueio();
        teladebloqueio = true;
        if (desligarn5) {
          break;
        } else {
          if ((suspenderpassword == true) || (suspendermenuapp == true)) {
            incializar_sistema_suspender();
            incializar_sistema_aguarde();
            printdataehora();
            tempo  =  temporestante();
            suspendermenuapp = false;
            suspenderpassword = false;
          } else {
            imagegaleria(memoriareadint(9), 0, 0, 480, 320);
            printdataehora();
          }
        }
      } else if (c == PS2_ESC) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          imagegaleria(memoriareadint(9), 0, 0, 480, 320);
          printdataehora();
        }
      } else if (c == PS2_TAB) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          imagegaleria(memoriareadint(9), 0, 0, 480, 320);
          printdataehora();
        }
      }
      tempo  =  temporestante();
    }
  }
}
void tela_iniciar_suspender() {
  teladebloqueio = true;
  if (desligarn5) {
    desligarn5 = false;
  }
  int minuto = memoriareadint(2).toInt();
  int hora = memoriareadint(3).toInt();
  int tempo  =  temporestante();
  imagegaleria(memoriareadint(9), 0, 0, 480, 320);
  printdataehora();
  while (true) {
    delay(1);
    if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
      minuto = memoriareadint(2).toInt();
      hora = memoriareadint(3).toInt();
      printdataehora();
    }
    if (memoriareadint(30).toInt() != 0) {
      if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
        break;
      }
    }
    if (keyboard.available()) {
      if (memoriareadint(20).toInt() == 1) {
        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
      }
      char c = keyboard.read();
      if (c == PS2_ENTER) {
        teladebloqueio = false;
        tela_bloqueio_suspender();
        teladebloqueio = true;
        if (desligarn5) {
          break;
        } else {
          if ((!suspenden5) || (suspenderpasswordapp == true)) {
            suspenderpasswordapp = false;
            break;
          } else {
            imagegaleria(memoriareadint(9), 0, 0, 480, 320);
            printdataehora();
          }
        }
      } else if (c == PS2_ESC) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          imagegaleria(memoriareadint(9), 0, 0, 480, 320);
          printdataehora();
        }
      } else if (c == PS2_TAB) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          imagegaleria(memoriareadint(9), 0, 0, 480, 320);
          printdataehora();
        }
      }
      tempo  =  temporestante();
    }
  }
}
//---------------------------------------------------------------------
//---------------------------DESLIGAR N5-------------------------------
void incializar_sistema() {
  while (true) {
    incializar_sistema_n5();
    incializar_sistema_bem_vindo();
    n5umativo = true;
    tela_iniciar();
    incializar_sistema_reiniciar();
    n5umativo = false;
  }
}
void tela_suspender() {
  while (true) {
    delay(1);
    incializar_sistema_suspender();
    incializar_sistema_aguarde();
    tela_iniciar_suspender();
    if ((!suspenden5) || (desligarn5)) {
      break;
    }
  }
}
void incializar_sistema_n5() {
  printimageoriginal("SD::SD1/SYS.H/IMAGEM/INICIA~1/M1.BMP", 0, 0);
  delay(2000);
}
void incializar_sistema_bem_vindo() {
  printimageoriginal("SD::SD1/SYS.H/IMAGEM/INICIA~1/M2.BMP", 0, 0);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  transferenciacontagemregressiva = true;
  leiaincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
  transferenciacontagemregressiva = false;
  lerbancodedaos("SD::SD1/SYS.H/APPDATA/DESPER~1/m.dat");
  tranferirdadosdespertador();
  lerbancodedaos("SD::SD1/SYS.H/APPDATA/ATIVID~1/m.dat");
  tranferirdadosatividades();
  criarpastaemsdcardinicial();
  carregarshow(228, 154, 20, 4, 255, 255, 255);
}
void incializar_sistema_suspender() {
  printimageoriginal("SD::SD1/SYS.H/IMAGEM/INICIA~1/M5.BMP", 0, 0);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  TFTscreen.background(0, 0, 0);
  while (true) {
    delay(1);
    if (keyboard.available()) {
      if (memoriareadint(20).toInt() == 1) {
        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
      }
      char c = keyboard.read();
      break;
    }
  }
}
void incializar_sistema_aguarde() {
  printimageoriginal("SD::SD1/SYS.H/IMAGEM/INICIA~1/M6.BMP", 0, 0);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
}
void incializar_sistema_reiniciar() {
  printimageoriginal("SD::SD1/SYS.H/IMAGEM/INICIA~1/M4.BMP", 0, 0);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
}
void desligar_n5() {
  TFTscreen.background(0, 0, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2("Desligar N5", 112 + 14, 67 + (1 * 16));
  TFTscreen.print2("1) Voltar", 112 + 14, 67 + (3 * 16));
  TFTscreen.print2("2) Desligar", 112 + 14, 67 + (4 * 16));
  TFTscreen.print2("3) Reiniciar", 112 + 14, 67 + (5 * 16));
  TFTscreen.print2("4) Suspender", 112 + 14, 67 + (6 * 16));
  while (true) {
    delay(1);
    if (keyboard.available()) {
      if (memoriareadint(20).toInt() == 1) {
        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
      }
      char c = keyboard.read();
      if (c == PS2_ENTER) {
      } else if (c == PS2_ESC) {
        break;
      } else if (c == '2') {
        som1("SD::SD1/SYS.H/MUSICA/SAIDA.WAV");
        incializar_sistema_desligar();
      } else if (c == '3') {
        som1("SD::SD1/SYS.H/MUSICA/SAIDA.WAV");
        desligarn5 = true;
        break;
      } else if (c == '1') {
        break;
      } else if (c == '4') {
        som1("SD::SD1/SYS.H/MUSICA/SAIDA.WAV");
        incializar_sistema_suspender();
        incializar_sistema_aguarde();
        break;
      }
    }
  }
}

void incializar_sistema_desligar() {
  printimageoriginal("SD::SD1/SYS.H/IMAGEM/INICIA~1/M3.BMP", 0, 0);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
  carregarshow(228, 154, 20, 4, 255, 255, 255);
  TFTscreen.clrScr();
  TFTscreen.background(0, 0, 0);
  delay(100);
  for (int i = 2; i <= 53; i++) {
    pinMode(i, INPUT);
  }
  while (true);
}
//---------------------------------------------------------------------
//---------------------------TELA BLOQUEIO-----------------------------
void printpassword() {
  TFTscreen.background(120, 120, 120);
  TFTscreen.setColor(51, 51, 51);
  TFTscreen.fillRoundRect(175, 50, 305, 170);
  TFTscreen.fillRoundRect(83, 242, 83 + 314, 242 + 42);
  TFTscreen.setFont(BigFont);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  if (memoriareadint(99).equals("0")) {
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.print2("N5 CONTROL", CENTER, 194);
  } else {
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.print2(memoriareadint(99).c_str(), CENTER, 194);
  }
  if (!(memoriareadint(10).equals("0"))) {
    printimagescalatrans(memoriareadint(10), 185, 60, 110, 100);
  }
}
void tela_bloqueio() {
  int blo = memoriareadint(60).toInt();
  int tempo  =  temporestante();
  if (blo == 1) {
    if (memoriareadint(21).toInt() == 1) {
      som1("SD::SD1/SYS.H/MUSICA/ENTRAD.WAV");
    }
    String acumulador;
    printpassword();
    while (true) {
      delay(1);
      if (memoriareadint(30).toInt() != 0) {
        if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
          suspenderpassword = true;
          break;
        }
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        TFTscreen.setColor(51, 51, 51);
        TFTscreen.setFont(BigFont);
        for (int j = 1; j <= acumulador.length(); j++) {
          if (j <= 11) {
            TFTscreen.print2("*", 83 + (j * 15), 257);
          }
        }
        char c = keyboard.read();
        if (c == PS2_ENTER) {
          String senha = memoriareadint(8);
          if (senha.equals(acumulador)) {
            desktop();
            if (memoriareadint(21).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/ENTRAD.WAV");
            }
            acumulador = "";
            tempo  =  temporestante();
            if (desligarn5) {
              break;
            } else {
              if (suspendermenuapp == true) {
                break;
              } else {
                printpassword();
              }
            }
          } else {
            TFTscreen.setFont(BigFont);
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.setColor(0, 0, 0);
            TFTscreen.print2("Senha Errada", CENTER, 290 - 1);
            TFTscreen.print2("Senha Errada", CENTER, 290 + 1);
            TFTscreen.setColor(255, 255, 255);
            TFTscreen.print2("Senha Errada", CENTER, 290);
          }
        } else if (c == PS2_ESC) {
          break;
        } else if (c == PS2_TAB) {
          desligar_n5();
          if (desligarn5) {
            break;
          } else {
            printpassword();
          }
        } else if (c == PS2_DELETE) {
          String apaga = "";
          for (int j = 1; j < acumulador.length(); j++) {
            apaga += acumulador.charAt(j - 1);
          }
          acumulador = apaga;
        } else {
          String entrada1 = String(c);
          acumulador = acumulador + entrada1;
        }
        TFTscreen.setColor(255, 255, 255);
        TFTscreen.setFont(BigFont);
        for (int j = 1; j <= acumulador.length(); j++) {
          if (j <= 11) {
            TFTscreen.print2("*", 83 + (j * 15), 257);
          }
        }
        tempo  =  temporestante();
      }
    }
  } else {
    desktop();
    tempo  =  temporestante();
  }
}
void tela_bloqueio_suspender() {
  int blo = memoriareadint(60).toInt();
  if (blo == 1) {
    if (memoriareadint(21).toInt() == 1) {
      som1("SD::SD1/SYS.H/MUSICA/ENTRAD.WAV");
    }
    int tempo  =  temporestante();
    String acumulador;
    printpassword();
    while (true) {
      delay(1);
      if (memoriareadint(30).toInt() != 0) {
        if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
          suspenderpasswordapp = true;
          break;
        }
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        TFTscreen.setColor(51, 51, 51);
        TFTscreen.setFont(BigFont);
        for (int j = 1; j <= acumulador.length(); j++) {
          if (j <= 11) {
            TFTscreen.print2("*", 83 + (j * 15), 257);
          }
        }
        char c = keyboard.read();
        if (c == PS2_ENTER) {
          String senha = memoriareadint(8);
          if (senha.equals(acumulador)) {
            suspenden5 = false;
            break;
          } else {
            TFTscreen.setFont(BigFont);
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.setColor(0, 0, 0);
            TFTscreen.print2("Senha Errada", CENTER, 290 - 1);
            TFTscreen.print2("Senha Errada", CENTER, 290 + 1);
            TFTscreen.setColor(255, 255, 255);
            TFTscreen.print2("Senha Errada", CENTER, 290);
          }
        } else if (c == PS2_ESC) {
          break;
        } else if (c == PS2_TAB) {
          desligar_n5();
          if (desligarn5) {
            break;
          } else {
            printpassword();
          }
        } else if (c == PS2_DELETE) {
          String apaga = "";
          for (int j = 1; j < acumulador.length(); j++) {
            apaga += acumulador.charAt(j - 1);
          }
          acumulador = apaga;
        } else {
          String entrada1 = String(c);
          acumulador = acumulador + entrada1;
        }
        TFTscreen.setColor(255, 255, 255);
        TFTscreen.setFont(BigFont);
        for (int j = 1; j <= acumulador.length(); j++) {
          if (j <= 11) {
            TFTscreen.print2("*", 83 + (j * 15), 257);
          }
        }
        tempo  =  temporestante();
      }
    }
  } else {
    suspenden5 = false;
  }
}
//---------------------------------------------------------------------
//######################################################################
//#############################LINGUAGEM################################
struct linguagemstruct {
  int variavelquantidade;
  int functionsquantidade;
  char teclado_teclas;
  String          banco_dados[ensize1];
  String             variavel[ensize1];
  String            functions[ensize1];
  String         variaveltype[ensize1];
  String        variavelvalue[ensize1];
  String       functionsvalue[ensize1];
  boolean    existenciadefecharprogram;
  void interpretadorcomadosinitall(String cmda) {
    teclado_teclas = '\0';
    variavelquantidade = 0;
    functionsquantidade = 0;
    int u = 0;
    while (variavel[u] != "") {
      variavel[u] = "";
      u++;
    }
    u = 0;
    while (variaveltype[u] != "") {
      variaveltype[u] = "";
      u++;
    }
    u = 0;
    while (banco_dados[u] != "") {
      banco_dados[u] = "";
      u++;
    }
    u = 0;
    while (functionsvalue[u] != "") {
      functionsvalue[u] = "";
      u++;
    }
    u = 0;
    while (functions[u] != "") {
      functions[u] = "";
      u++;
    }
    u = 0;
    while (variavelvalue[u] != "") {
      variavelvalue[u] = "";
      u++;
    }
    existenciadefecharprogram = false;
    linterpretadorcomados(cmda);
  }
  void linterpretadorcomados(String cmda) {
    String cmdlanguagem = cmda;
    String funlanguagem;
    for (int contagemlaguagem = 0; contagemlaguagem < cmdlanguagem.length(); contagemlaguagem++) {
      if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
      } else {
        funlanguagem += cmdlanguagem.charAt(contagemlaguagem);
      }
      if (existenciadefecharprogram) {
        break;
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == PS2_ESC) {
          existenciadefecharprogram = true;
          break;
        }
      }
      int cmdlanguagemant = contagemlaguagem;
      contagemlaguagem = funcaowrite(cmdlanguagem, funlanguagem, contagemlaguagem);
      if (!(cmdlanguagemant == contagemlaguagem)) {
        funlanguagem = "";
      }
      cmdlanguagemant = contagemlaguagem;
      contagemlaguagem = funcaovariavelcreate(cmdlanguagem, funlanguagem, contagemlaguagem);
      if (!(cmdlanguagemant == contagemlaguagem)) {
        funlanguagem = "";
      }
      cmdlanguagemant = contagemlaguagem;
      contagemlaguagem = funcaocariavaelatribuir(cmdlanguagem, funlanguagem, contagemlaguagem);
      if (!(cmdlanguagemant == contagemlaguagem)) {
        funlanguagem = "";
      }
    }
  }
  int funcaocariavaelatribuir(String cmdlanguagem, String funlanguagem, int contagemlaguagem) {
    String text1;
    String valuer;
    int u = 0;
    while (true) {
      if (!system01inaction) {
        delay(1);
      }
      if (existenciadefecharprogram) {
        break;
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == PS2_ESC) {
          existenciadefecharprogram = true;
          break;
        }
      }
      u++;
      if (u <= variavelquantidade) {
        if (funlanguagem.equals(variavel[u])) {
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals("=")) {
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  }
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals(";")) {
                  if (variaveltype[u].equals("float")) {
                    String verificarvariavel = String(expresacalculos(valuer));
                    if (verificarvariavel.equals("")) {
                    } else {
                      valuer = verificarvariavel;
                    }
                  } else {
                    if (variaveltype[u].equals("cfloat")) {
                      String verificarvariavel = String(expresacalculos(valuer));
                      if (verificarvariavel.equals("")) {
                      } else {
                        valuer = verificarvariavel;
                      }
                    } else {
                      if (variaveltype[u].equals("string")) {
                        String verificarvariavel = String(verificastring(valuer));
                        if (verificarvariavel.equals("")) {
                        } else {
                          valuer = verificarvariavel;
                        }
                      } else {
                        if (variaveltype[u].equals("boolean")) {
                          String verificarvariavel = String(verificaav(valuer));
                          if (verificarvariavel.equals("")) {
                          } else {
                            valuer = verificarvariavel;
                          }
                        } else {
                          if (variaveltype[u].equals("int")) {
                            String verificarvariavel = String(expresacinteger(valuer));
                            if (verificarvariavel.equals("")) {
                            } else {
                              valuer = verificarvariavel;
                            }
                          } else {
                            if (variaveltype[u].equals("double")) {
                              String verificarvariavel = String(expresacalculos(valuer));
                              if (verificarvariavel.equals("")) {
                              } else {
                                valuer = verificarvariavel;
                              }
                            } else {
                              if (variaveltype[u].equals("char")) {
                                String verificarvariavel = verificastring(valuer);
                                if (verificarvariavel.equals("")) {
                                } else {
                                  valuer = String(verificarvariavel.charAt(1));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  text1 = valuer;
                  valuer = "";
                  funlanguagem = "";
                  break;
                } else {
                  if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                  } else {
                    valuer += cmdlanguagem.charAt(contagemlaguagem);
                  }
                }
              }
              break;
            } else {
              if (funlanguagem.equals("+") && (String(cmdlanguagem.charAt(contagemlaguagem + 1)).equals("="))) {
                funlanguagem = "";
                contagemlaguagem++;
                while (true) {
                  if (!system01inaction) {
                    delay(1);
                  }
                  if (existenciadefecharprogram) {
                    break;
                  }
                  if (keyboard.available()) {
                    if (memoriareadint(20).toInt() == 1) {
                      som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                    }
                    char c = keyboard.read();
                    if (c == PS2_ESC) {
                      existenciadefecharprogram = true;
                      break;
                    }
                  }
                  contagemlaguagem++;
                  funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                  if (funlanguagem.equals(";")) {
                    if (variaveltype[u].equals("float")) {
                      double soma = convertestrtodouble(variavelvalue[u]) + convertestrtodouble(expresacalculos(valuer));
                      String verificarvariavel = String(expresacalculos(String(soma)));
                      if (verificarvariavel.equals("")) {
                      } else {
                        valuer = verificarvariavel;
                      }
                    } else {
                      if (variaveltype[u].equals("cfloat")) {
                        double soma = convertestrtodouble(variavelvalue[u]) + convertestrtodouble(expresacalculos(valuer));
                        String verificarvariavel = String(expresacalculos(String(soma)));
                        if (verificarvariavel.equals("")) {
                        } else {
                          valuer = verificarvariavel;
                        }
                      } else {
                        if (variaveltype[u].equals("string")) {
                          String soma = variavelvalue[u];
                          soma += verificastring(valuer);
                          String verificarvariavel = soma;
                          if (verificarvariavel.equals("")) {
                          } else {
                            valuer = verificarvariavel;
                          }
                        } else {
                          if (variaveltype[u].equals("int")) {
                            double soma = convertestrtodouble(variavelvalue[u]) + convertestrtodouble(expresacalculos(valuer));
                            String verificarvariavel = String(expresacinteger(String(soma)));
                            if (verificarvariavel.equals("")) {
                            } else {
                              valuer = verificarvariavel;
                            }
                          } else {
                            if (variaveltype[u].equals("double")) {
                              double soma = convertestrtodouble(variavelvalue[u]) + convertestrtodouble(expresacalculos(valuer));
                              String verificarvariavel = String(expresacalculos(String(soma)));
                              if (verificarvariavel.equals("")) {
                              } else {
                                valuer = verificarvariavel;
                              }
                            }
                          }
                        }
                      }
                    }
                    text1 = valuer;
                    valuer = "";
                    funlanguagem = "";
                    break;
                  } else {
                    if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                    } else {
                      valuer += cmdlanguagem.charAt(contagemlaguagem);
                    }
                  }
                }
                break;
              } else {
                if (funlanguagem.equals("-") && (String(cmdlanguagem.charAt(contagemlaguagem + 1)).equals("="))) {
                  funlanguagem = "";
                  contagemlaguagem++;
                  while (true) {
                    if (!system01inaction) {
                      delay(1);
                    }
                    if (existenciadefecharprogram) {
                      break;
                    }
                    if (keyboard.available()) {
                      if (memoriareadint(20).toInt() == 1) {
                        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                      }
                      char c = keyboard.read();
                      if (c == PS2_ESC) {
                        existenciadefecharprogram = true;
                        break;
                      }
                    }
                    contagemlaguagem++;
                    funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                    if (funlanguagem.equals(";")) {
                      if (variaveltype[u].equals("float")) {
                        double soma = convertestrtodouble(variavelvalue[u]) - convertestrtodouble(expresacalculos(valuer));
                        String verificarvariavel = String(expresacalculos(String(soma)));
                        if (verificarvariavel.equals("")) {
                        } else {
                          valuer = verificarvariavel;
                        }
                      } else {
                        if (variaveltype[u].equals("cfloat")) {
                          double soma = convertestrtodouble(variavelvalue[u]) - convertestrtodouble(expresacalculos(valuer));
                          String verificarvariavel = String(expresacalculos(String(soma)));
                          if (verificarvariavel.equals("")) {
                          } else {
                            valuer = verificarvariavel;
                          }
                        } else {
                          if (variaveltype[u].equals("int")) {
                            double soma = convertestrtodouble(variavelvalue[u]) - convertestrtodouble(expresacalculos(valuer));
                            String verificarvariavel = String(expresacinteger(String(soma)));
                            if (verificarvariavel.equals("")) {
                            } else {
                              valuer = verificarvariavel;
                            }
                          } else {
                            if (variaveltype[u].equals("double")) {
                              double soma = convertestrtodouble(variavelvalue[u]) - convertestrtodouble(expresacalculos(valuer));
                              String verificarvariavel = String(expresacalculos(String(soma)));
                              if (verificarvariavel.equals("")) {
                              } else {
                                valuer = verificarvariavel;
                              }
                            }
                          }
                        }
                      }
                      text1 = valuer;
                      valuer = "";
                      funlanguagem = "";
                      break;
                    } else {
                      if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                      } else {
                        valuer += cmdlanguagem.charAt(contagemlaguagem);
                      }
                    }
                  }
                  break;
                } else {
                  if (funlanguagem.equals("/") && (String(cmdlanguagem.charAt(contagemlaguagem + 1)).equals("="))) {
                    funlanguagem = "";
                    contagemlaguagem++;
                    while (true) {
                      if (!system01inaction) {
                        delay(1);
                      }
                      if (existenciadefecharprogram) {
                        break;
                      }
                      if (keyboard.available()) {
                        if (memoriareadint(20).toInt() == 1) {
                          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                        }
                        char c = keyboard.read();
                        if (c == PS2_ESC) {
                          existenciadefecharprogram = true;
                          break;
                        }
                      }
                      contagemlaguagem++;
                      funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                      if (funlanguagem.equals(";")) {
                        if (variaveltype[u].equals("float")) {
                          double soma = convertestrtodouble(variavelvalue[u]) / convertestrtodouble(expresacalculos(valuer));
                          String verificarvariavel = String(expresacalculos(String(soma)));
                          if (verificarvariavel.equals("")) {
                          } else {
                            valuer = verificarvariavel;
                          }
                        } else {
                          if (variaveltype[u].equals("cfloat")) {
                            double soma = convertestrtodouble(variavelvalue[u]) / convertestrtodouble(expresacalculos(valuer));
                            String verificarvariavel = String(expresacalculos(String(soma)));
                            if (verificarvariavel.equals("")) {
                            } else {
                              valuer = verificarvariavel;
                            }
                          } else {
                            if (variaveltype[u].equals("int")) {
                              double soma = convertestrtodouble(variavelvalue[u]) / convertestrtodouble(expresacalculos(valuer));
                              String verificarvariavel = String(expresacinteger(String(soma)));
                              if (verificarvariavel.equals("")) {
                              } else {
                                valuer = verificarvariavel;
                              }
                            } else {
                              if (variaveltype[u].equals("double")) {
                                double soma = convertestrtodouble(variavelvalue[u]) / convertestrtodouble(expresacalculos(valuer));
                                String verificarvariavel = String(expresacalculos(String(soma)));
                                if (verificarvariavel.equals("")) {
                                } else {
                                  valuer = verificarvariavel;
                                }
                              }
                            }
                          }
                        }
                        text1 = valuer;
                        valuer = "";
                        funlanguagem = "";
                        break;
                      } else {
                        if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                        } else {
                          valuer += cmdlanguagem.charAt(contagemlaguagem);
                        }
                      }
                    }
                    break;
                  } else {
                    if (funlanguagem.equals("%") && (String(cmdlanguagem.charAt(contagemlaguagem + 1)).equals("="))) {
                      funlanguagem = "";
                      contagemlaguagem++;
                      while (true) {
                        if (!system01inaction) {
                          delay(1);
                        }
                        if (existenciadefecharprogram) {
                          break;
                        }
                        if (keyboard.available()) {
                          if (memoriareadint(20).toInt() == 1) {
                            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                          }
                          char c = keyboard.read();
                          if (c == PS2_ESC) {
                            existenciadefecharprogram = true;
                            break;
                          }
                        }
                        contagemlaguagem++;
                        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                        if (funlanguagem.equals(";")) {
                          if (variaveltype[u].equals("float")) {
                            int soma = variavelvalue[u].toInt() % expresacalculos(valuer).toInt();
                            String verificarvariavel = String(expresacalculos(String(soma)));
                            if (verificarvariavel.equals("")) {
                            } else {
                              valuer = verificarvariavel;
                            }
                          } else {
                            if (variaveltype[u].equals("cfloat")) {
                              int soma = variavelvalue[u].toInt() % expresacalculos(valuer).toInt();
                              String verificarvariavel = String(expresacalculos(String(soma)));
                              if (verificarvariavel.equals("")) {
                              } else {
                                valuer = verificarvariavel;
                              }
                            } else {
                              if (variaveltype[u].equals("int")) {
                                int soma = variavelvalue[u].toInt() % expresacalculos(valuer).toInt();
                                String verificarvariavel = String(expresacinteger(String(soma)));
                                if (verificarvariavel.equals("")) {
                                } else {
                                  valuer = verificarvariavel;
                                }
                              } else {
                                if (variaveltype[u].equals("double")) {
                                  int soma = variavelvalue[u].toInt() % expresacalculos(valuer).toInt();
                                  String verificarvariavel = String(expresacalculos(String(soma)));
                                  if (verificarvariavel.equals("")) {
                                  } else {
                                    valuer = verificarvariavel;
                                  }
                                }
                              }
                            }
                          }
                          text1 = valuer;
                          valuer = "";
                          funlanguagem = "";
                          break;
                        } else {
                          if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                          } else {
                            valuer += cmdlanguagem.charAt(contagemlaguagem);
                          }
                        }
                      }
                      break;
                    } else {
                      if (funlanguagem.equals("+") && (String(cmdlanguagem.charAt(contagemlaguagem + 1)).equals("+"))) {
                        funlanguagem = "";
                        contagemlaguagem++;
                        while (true) {
                          if (!system01inaction) {
                            delay(1);
                          }
                          if (existenciadefecharprogram) {
                            break;
                          }
                          if (keyboard.available()) {
                            if (memoriareadint(20).toInt() == 1) {
                              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                            }
                            char c = keyboard.read();
                            if (c == PS2_ESC) {
                              existenciadefecharprogram = true;
                              break;
                            }
                          }
                          contagemlaguagem++;
                          funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                          if (funlanguagem.equals(";")) {
                            if (variaveltype[u].equals("float")) {
                              float soma = convertestrtodouble(variavelvalue[u]) + 1;
                              String verificarvariavel = String(expresacalculos(String(soma)));
                              if (verificarvariavel.equals("")) {
                              } else {
                                valuer = verificarvariavel;
                              }
                            } else {
                              if (variaveltype[u].equals("cfloat")) {
                                float soma = convertestrtodouble(variavelvalue[u]) + 1;
                                String verificarvariavel = String(expresacalculos(String(soma)));
                                if (verificarvariavel.equals("")) {
                                } else {
                                  valuer = verificarvariavel;
                                }
                              } else {
                                if (variaveltype[u].equals("int")) {
                                  int soma = variavelvalue[u].toInt() + 1;
                                  String verificarvariavel = String(expresacinteger(String(soma)));
                                  if (verificarvariavel.equals("")) {
                                  } else {
                                    valuer = verificarvariavel;
                                  }
                                } else {
                                  if (variaveltype[u].equals("double")) {
                                    double soma = convertestrtodouble(variavelvalue[u]) + 1;
                                    String verificarvariavel = String(expresacalculos(String(soma)));
                                    if (verificarvariavel.equals("")) {
                                    } else {
                                      valuer = verificarvariavel;
                                    }
                                  }
                                }
                              }
                            }
                            text1 = valuer;
                            valuer = "";
                            funlanguagem = "";
                            break;
                          } else {
                            if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                            } else {
                              valuer += cmdlanguagem.charAt(contagemlaguagem);
                            }
                          }
                        }
                        break;
                      } else {
                        if (funlanguagem.equals("-") && (String(cmdlanguagem.charAt(contagemlaguagem + 1)).equals("-"))) {
                          funlanguagem = "";
                          contagemlaguagem++;
                          while (true) {
                            if (!system01inaction) {
                              delay(1);
                            }
                            if (existenciadefecharprogram) {
                              break;
                            }
                            if (keyboard.available()) {
                              if (memoriareadint(20).toInt() == 1) {
                                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                              }
                              char c = keyboard.read();
                              if (c == PS2_ESC) {
                                existenciadefecharprogram = true;
                                break;
                              }
                            }
                            contagemlaguagem++;
                            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                            if (funlanguagem.equals(";")) {
                              if (variaveltype[u].equals("float")) {
                                float soma = convertestrtodouble(variavelvalue[u]) - 1;
                                String verificarvariavel = String(expresacalculos(String(soma)));
                                if (verificarvariavel.equals("")) {
                                } else {
                                  valuer = verificarvariavel;
                                }
                              } else {
                                if (variaveltype[u].equals("cfloat")) {
                                  float soma = convertestrtodouble(variavelvalue[u]) - 1;
                                  String verificarvariavel = String(expresacalculos(String(soma)));
                                  if (verificarvariavel.equals("")) {
                                  } else {
                                    valuer = verificarvariavel;
                                  }
                                } else {
                                  if (variaveltype[u].equals("int")) {
                                    int soma = variavelvalue[u].toInt() - 1;
                                    String verificarvariavel = String(expresacinteger(String(soma)));
                                    if (verificarvariavel.equals("")) {
                                    } else {
                                      valuer = verificarvariavel;
                                    }
                                  } else {
                                    if (variaveltype[u].equals("double")) {
                                      double soma = convertestrtodouble(variavelvalue[u]) - 1;
                                      String verificarvariavel = String(expresacalculos(String(soma)));
                                      if (verificarvariavel.equals("")) {
                                      } else {
                                        valuer = verificarvariavel;
                                      }
                                    }
                                  }
                                }
                              }
                              text1 = valuer;
                              valuer = "";
                              funlanguagem = "";
                              break;
                            } else {
                              if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                              } else {
                                valuer += cmdlanguagem.charAt(contagemlaguagem);
                              }
                            }
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          variavelvalue[u] = text1;
          u = 0;
          text1 = "";
          valuer = "";
          break;
        }
      } else {
        break;
      }
    }
    return contagemlaguagem;
  }
  String expresacalculos(String valores) {
    String value;
    String analisandovalor;
    String fucaoariteminica1;
    String fucaoariteminica2;
    double    calculolanguagem;
    boolean possufuncaoaritemica = false;
    for (int contagedecalculovariave1 = 0; contagedecalculovariave1 < valores.length(); contagedecalculovariave1++) {
      if (!system01inaction) {
        delay(1);
      }
      if (existenciadefecharprogram) {
        break;
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == PS2_ESC) {
          existenciadefecharprogram = true;
          break;
        }
      }
      if ((String(valores.charAt(contagedecalculovariave1)).equals("+")) || (String(valores.charAt(contagedecalculovariave1)).equals("*")) || (String(valores.charAt(contagedecalculovariave1)).equals("/")) || (String(valores.charAt(contagedecalculovariave1)).equals("-")) || (String(valores.charAt(contagedecalculovariave1)).equals("%"))) {
        fucaoariteminica1 = fucaoariteminica2;
        fucaoariteminica2 = String(valores.charAt(contagedecalculovariave1));
        if (!possufuncaoaritemica) {
          calculolanguagem = convertestrtodouble(analisandovalor);
          analisandovalor = "";
          possufuncaoaritemica = true;
        } else {
          if (fucaoariteminica1.equals("+")) {
            calculolanguagem += convertestrtodouble(analisandovalor);
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("*")) {
            calculolanguagem *= convertestrtodouble(analisandovalor);
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("/")) {
            calculolanguagem /= convertestrtodouble(analisandovalor);
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("-")) {
            calculolanguagem -= convertestrtodouble(analisandovalor);
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("%")) {
            calculolanguagem = convertestrtodouble(String(String(calculolanguagem).toInt() % analisandovalor.toInt()));
            analisandovalor = "";
          }
        }
      } else {
        if ((String(valores.charAt(contagedecalculovariave1)).equals(" ")) || (String(valores.charAt(contagedecalculovariave1)).equals("\n")) || (String(valores.charAt(contagedecalculovariave1)).equals("\r")) || (String(valores.charAt(contagedecalculovariave1)).equals("\t"))) {
        } else {
          analisandovalor += valores.charAt(contagedecalculovariave1);
        }
        if (String(valores.charAt(contagedecalculovariave1)).equals("(")) {
          value = "";
          int ladodireito = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            contagedecalculovariave1++;
            if ((String(valores.charAt(contagedecalculovariave1)).equals(")")) && (ladodireito == (ladoesquerdo + 1))) {
              String verificarvariavel = String(expresacalculos(value));
              if (verificarvariavel.equals("")) {
              } else {
                value = verificarvariavel;
              }
              analisandovalor = value;
              value = "";
              break;
            } else {
              if (String(valores.charAt(contagedecalculovariave1)).equals("(")) {
                ladodireito++;
              }
              if (String(valores.charAt(contagedecalculovariave1)).equals(")")) {
                ladoesquerdo++;
              }
              value += String(valores.charAt(contagedecalculovariave1));
            }
          }
        }
        String retornavalor = funcaoread(valores, analisandovalor, contagedecalculovariave1);
        if (retornavalor.equals("")) {
        } else {
          String verificarafinaliza = String(valores.charAt(contagedecalculovariave1 + 1));
          if (verificarafinaliza.equals("(")) {
            contagedecalculovariave1++;
            verificarafinaliza = "";
            while (true) {
              if (!system01inaction) {
                delay(1);
              }
              if (existenciadefecharprogram) {
                break;
              }
              if (keyboard.available()) {
                if (memoriareadint(20).toInt() == 1) {
                  som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                }
                char c = keyboard.read();
                if (c == PS2_ESC) {
                  existenciadefecharprogram = true;
                  break;
                }
              }
              contagedecalculovariave1++;
              verificarafinaliza = String(valores.charAt(contagedecalculovariave1));
              if (verificarafinaliza.equals(")")) {
                verificarafinaliza = "";
                break;
              } else {
                if (String(valores.charAt(contagedecalculovariave1)).equals(" ") || (String(valores.charAt(contagedecalculovariave1)).equals("\n")) || (String(valores.charAt(contagedecalculovariave1)).equals("\r")) || (String(valores.charAt(contagedecalculovariave1)).equals("\t"))) {
                }
              }
            }
          }
          analisandovalor = retornavalor;
        }
      }
    }
    if (possufuncaoaritemica) {
      fucaoariteminica1 = fucaoariteminica2;
      if (fucaoariteminica1.equals("+")) {
        calculolanguagem += convertestrtodouble(analisandovalor);
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("*")) {
        calculolanguagem *= convertestrtodouble(analisandovalor);
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("/")) {
        calculolanguagem /= convertestrtodouble(analisandovalor);
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("-")) {
        calculolanguagem -= convertestrtodouble(analisandovalor);
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("%")) {
        calculolanguagem = convertestrtodouble(String(String(calculolanguagem).toInt() % analisandovalor.toInt()));
        analisandovalor = "";
      }
    } else {
      calculolanguagem = convertestrtodouble(analisandovalor);
      analisandovalor = "";
    }
    return transfordoublecasadecimais2(calculolanguagem);
  }
  String expresacinteger(String valores) {
    String value;
    String analisandovalor;
    String fucaoariteminica1;
    String fucaoariteminica2;
    long    calculolanguagem;
    boolean possufuncaoaritemica = false;
    int u = 0;
    for (int contagedecalculovariave1 = 0; contagedecalculovariave1 < valores.length(); contagedecalculovariave1++) {
      if (!system01inaction) {
        delay(1);
      }
      if (existenciadefecharprogram) {
        break;
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == PS2_ESC) {
          existenciadefecharprogram = true;
          break;
        }
      }
      if ((String(valores.charAt(contagedecalculovariave1)).equals("+")) || (String(valores.charAt(contagedecalculovariave1)).equals("*")) || (String(valores.charAt(contagedecalculovariave1)).equals("/")) || (String(valores.charAt(contagedecalculovariave1)).equals("-")) || (String(valores.charAt(contagedecalculovariave1)).equals("%"))) {
        fucaoariteminica1 = fucaoariteminica2;
        fucaoariteminica2 = String(valores.charAt(contagedecalculovariave1));
        if (!possufuncaoaritemica) {
          calculolanguagem = analisandovalor.toInt();
          analisandovalor = "";
          possufuncaoaritemica = true;
        } else {
          if (fucaoariteminica1.equals("+")) {
            calculolanguagem += analisandovalor.toInt();
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("*")) {
            calculolanguagem *= analisandovalor.toInt();
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("/")) {
            calculolanguagem /= analisandovalor.toInt();
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("-")) {
            calculolanguagem -= analisandovalor.toInt();
            analisandovalor = "";
          }
          if (fucaoariteminica1.equals("%")) {
            long somavaloredd = String(calculolanguagem).toInt() % analisandovalor.toInt();
            calculolanguagem = somavaloredd;
            analisandovalor = "";
          }
        }
      } else {
        if ((String(valores.charAt(contagedecalculovariave1)).equals(" ")) || (String(valores.charAt(contagedecalculovariave1)).equals("\n")) || (String(valores.charAt(contagedecalculovariave1)).equals("\r")) || (String(valores.charAt(contagedecalculovariave1)).equals("\t"))) {
        } else {
          analisandovalor += valores.charAt(contagedecalculovariave1);
        }
        if (String(valores.charAt(contagedecalculovariave1)).equals("(")) {
          value = "";
          int ladodireito = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            contagedecalculovariave1++;
            if ((String(valores.charAt(contagedecalculovariave1)).equals(")")) && (ladodireito == (ladoesquerdo + 1))) {
              String verificarvariavel = String(expresacinteger(value));
              if (verificarvariavel.equals("")) {
              } else {
                value = verificarvariavel;
              }
              analisandovalor = value;
              value = "";
              break;
            } else {
              if (String(valores.charAt(contagedecalculovariave1)).equals("(")) {
                ladodireito++;
              }
              if (String(valores.charAt(contagedecalculovariave1)).equals(")")) {
                ladoesquerdo++;
              }
              value += String(valores.charAt(contagedecalculovariave1));
            }
          }
        }
        String retornavalor = funcaoread(valores, analisandovalor, contagedecalculovariave1);
        if (retornavalor.equals("")) {
        } else {
          String verificarafinaliza = String(valores.charAt(contagedecalculovariave1 + 1));
          if (verificarafinaliza.equals("(")) {
            contagedecalculovariave1++;
            verificarafinaliza = "";
            while (true) {
              if (!system01inaction) {
                delay(1);
              }
              if (existenciadefecharprogram) {
                break;
              }
              if (keyboard.available()) {
                if (memoriareadint(20).toInt() == 1) {
                  som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                }
                char c = keyboard.read();
                if (c == PS2_ESC) {
                  existenciadefecharprogram = true;
                  break;
                }
              }
              contagedecalculovariave1++;
              verificarafinaliza = String(valores.charAt(contagedecalculovariave1));
              if (verificarafinaliza.equals(")")) {
                verificarafinaliza = "";
                break;
              } else {
                if (String(valores.charAt(contagedecalculovariave1)).equals(" ") || (String(valores.charAt(contagedecalculovariave1)).equals("\n")) || (String(valores.charAt(contagedecalculovariave1)).equals("\r")) || (String(valores.charAt(contagedecalculovariave1)).equals("\t"))) {
                }
              }
            }
          }
          analisandovalor = retornavalor;
        }
      }
    }
    if (possufuncaoaritemica) {
      fucaoariteminica1 = fucaoariteminica2;
      if (fucaoariteminica1.equals("+")) {
        calculolanguagem += analisandovalor.toInt();
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("*")) {
        calculolanguagem *= analisandovalor.toInt();
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("/")) {
        calculolanguagem /= analisandovalor.toInt();
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("-")) {
        calculolanguagem -= analisandovalor.toInt();
        analisandovalor = "";
      }
      if (fucaoariteminica1.equals("%")) {
        long somavaloredd = String(calculolanguagem).toInt() % analisandovalor.toInt();
        calculolanguagem = somavaloredd;
        analisandovalor = "";
      }
    } else {
      calculolanguagem = analisandovalor.toInt();
      analisandovalor = "";
    }
    return String(calculolanguagem);
  }
  int funcaovariavelcreate(String cmdlanguagem, String funlanguagem, int contagemlaguagem) {
    String text1;
    String text2;
    String valuer;
    boolean igualdade = false;
    if (funlanguagem.equals("int")) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade) {
                String verificarvariavel = String(String(expresacinteger(valuer)).toInt());
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "int";
      if (igualdade) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    if (funlanguagem.equals("string")) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade == true) {
                String verificarvariavel = String(verificastring(valuer));
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "string";
      if (igualdade == true) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    if (funlanguagem.equals("char") ) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade == true) {
                String verificarvariavel = verificastring(valuer);
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = String(valuer.charAt(0));
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "char";
      if (igualdade == true) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    if (funlanguagem.equals("float")) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade == true) {
                String verificarvariavel = String(expresacalculos(valuer));
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "float";
      if (igualdade == true) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    if (funlanguagem.equals("cfloat")) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade == true) {
                String verificarvariavel = String(expresacalculos(valuer));
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "cfloat";
      if (igualdade == true) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    if (funlanguagem.equals("double")) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade == true) {
                String verificarvariavel = String(expresacalculos(valuer));
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "double";
      if (igualdade == true) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    if (funlanguagem.equals("long")) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade == true) {
                String verificarvariavel = String(expresacinteger(valuer));
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "long";
      if (igualdade == true) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    if (funlanguagem.equals("boolean")) {
      variavelquantidade++;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(" ")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              if (igualdade == true) {
                String verificarvariavel = verificaav(valuer);
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
              } else {
                text1 = valuer;
              }
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals("=")) {
                igualdade = true;
                text1 = valuer;
                valuer = "";
                funlanguagem = "";
              } else {
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }
      variaveltype[variavelquantidade] = "boolean";
      if (igualdade == true) {
        variavel[variavelquantidade] = text1;
        variavelvalue[variavelquantidade] = text2;
      } else {
        variavel[variavelquantidade] = text1;
      }
      igualdade = false;
      text1 = "";
      text2 = "";
      valuer = "";
    }
    return contagemlaguagem;
  }
  String verificaav(String valores) {
    String text1;
    String text2;
    String valuer;
    String operacao;
    String analizar;
    boolean valorasera = false;
    String fucaologica1;
    String fucaologica2;
    boolean valoraseratotal = false;
    boolean possufuncaologica = false;
    if ((valores.equals("true"))) {
      return "true";
    } else {
      if ((valores.equals("false"))) {
        return "false";
      } else {
        for (int i = 0; i < valores.length(); i++) {
          if (!system01inaction) {
            delay(1);
          }
          if (existenciadefecharprogram) {
            break;
          }
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == PS2_ESC) {
              existenciadefecharprogram = true;
              break;
            }
          }
          if ((String(valores.charAt(i)).equals(" ")) || (String(valores.charAt(i)).equals("\n")) || (String(valores.charAt(i)).equals("\r")) || (String(valores.charAt(i)).equals("\t"))) {
          } else {
            analizar += valores.charAt(i);
          }
          if (analizar.equals("(")) {
            analizar = "";
            while (true) {
              if (!system01inaction) {
                delay(1);
              }
              if (existenciadefecharprogram) {
                break;
              }
              if (keyboard.available()) {
                if (memoriareadint(20).toInt() == 1) {
                  som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                }
                char c = keyboard.read();
                if (c == PS2_ESC) {
                  existenciadefecharprogram = true;
                  break;
                }
              }
              i++;
              analizar = String(valores.charAt(i));
              if (analizar.equals(")")) {
                String verificarvariavel = String(verificastring(valuer));
                if (verificarvariavel.equals("")) {
                } else {
                  valuer = verificarvariavel;
                }
                text2 = valuer;
                valuer = "";
                analizar = "";
                break;
              } else {
                if (analizar.equals("<") || analizar.equals(">") || analizar.equals("!") || analizar.equals("=")) {
                  if (analizar.equals("<")) {
                    i++;
                    if (String(valores.charAt(i)).equals("=")) {
                      operacao = "<=";
                    } else {
                      i--;
                      operacao = "<";
                    }
                  }
                  if (analizar.equals(">")) {
                    i++;
                    if (String(valores.charAt(i)).equals("=")) {
                      operacao = ">=";
                    } else {
                      i--;
                      operacao = ">";
                    }
                  }
                  if (analizar.equals("=")) {
                    i++;
                    if (String(valores.charAt(i)).equals("=")) {
                      i++;
                      if (String(valores.charAt(i)).equals("@")) {
                        operacao = "==@";
                      } else {
                        i--;
                        operacao = "==";
                      }
                    }
                  }
                  if (analizar.equals("!")) {
                    i++;
                    if (String(valores.charAt(i)).equals("=")) {
                      i++;
                      if (String(valores.charAt(i)).equals("@")) {
                        operacao = "!=@";
                      } else {
                        i--;
                        operacao = "!=";
                      }
                    }
                  }
                  String verificarvariavel = String(verificastring(valuer));
                  if (verificarvariavel.equals("")) {
                  } else {
                    valuer = verificarvariavel;
                  }
                  text1 = valuer;
                  valuer = "";
                  analizar = "";
                } else {
                  if (String(valores.charAt(i)).equals(" ") || (String(valores.charAt(i)).equals("\n")) || (String(valores.charAt(i)).equals("\r")) || (String(valores.charAt(i)).equals("\t"))) {
                  } else {
                    valuer += valores.charAt(i);
                  }
                }
              }
            }
            if (operacao.equals("==@")) {
              if (text1.equals(text2)) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            if (operacao.equals("!=@")) {
              if (!(text1.equals(text2))) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            double somavalorexpressao1;
            double somavalorexpressao2;
            somavalorexpressao1 = convertestrtodouble(text1);
            somavalorexpressao2 = convertestrtodouble(text2);
            if (operacao.equals("!=")) {
              if (somavalorexpressao1 != somavalorexpressao2) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            if (operacao.equals("==")) {
              if (somavalorexpressao1 == somavalorexpressao2) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            if (operacao.equals(">")) {
              if (somavalorexpressao1 > somavalorexpressao2) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            if (operacao.equals(">=")) {
              if (somavalorexpressao1 >= somavalorexpressao2) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            if (operacao.equals("<")) {
              if (somavalorexpressao1 < somavalorexpressao2) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            if (operacao.equals("<=")) {
              if (somavalorexpressao1 <= somavalorexpressao2) {
                valorasera = true;
              } else {
                valorasera = false;
              }
            }
            analizar = "";
            text1 = "";
            text2 = "";
            valuer = "";
            operacao = "";
          }
          if (analizar.equals("||") || analizar.equals("&&") || analizar.equals("!")) {
            fucaologica1 = fucaologica2;
            fucaologica2 = analizar;
            if (!possufuncaologica) {
              valoraseratotal = valorasera;
              valorasera = false;
              possufuncaologica = true;
            } else {
              if (fucaologica1.equals("||")) {
                valoraseratotal = valoraseratotal || valorasera;
                valorasera = false;
              }
              if (fucaologica1.equals("&&")) {
                valoraseratotal = valoraseratotal && valorasera;
                valorasera = false;
              }
              if (fucaologica1.equals("!")) {
                valoraseratotal = !valoraseratotal;
                valorasera = false;
              }
            }
            analizar = "";
          }
        }
        if (possufuncaologica) {
          fucaologica1 = fucaologica2;
          if (fucaologica1.equals("||")) {
            valoraseratotal = valoraseratotal || valorasera;
            valorasera = false;
          }
          if (fucaologica1.equals("&&")) {
            valoraseratotal = valoraseratotal && valorasera;
            valorasera = false;
          }
          if (fucaologica1.equals("!")) {
            valoraseratotal = !valoraseratotal;
            valorasera = false;
          }
        } else {
          valoraseratotal = valorasera;
          valorasera = false;
        }
        if (valoraseratotal) {
          return "true";
        } else {
          return "false";
        }
      }
    }
  }
  boolean loopverifica(String text) {
    if (verificaav(text).equals("true")) {
      return true;
    } else {
      return false;
    }
  }
  int funcaowrite(String cmdlanguagem, String funlanguagem, int contagemlaguagem) {
    String text1;
    String text2;
    String text3;
    String text4;
    int contagem;
    String valuer;
    String programforever;
    String programwhile;
    String programreoetco;
    String programwhilecondicao;
    String programcondicaoelse;
    String programcondicaoif;
    boolean autilizacaodeeslestrue = false;
    if (funlanguagem.equals(comandolinguagemestrutura[0])) {
      programforever = "";
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(")")) {
              text2 = valuer;
              valuer = "";
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  }
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals("{")) {
                  funlanguagem = "";
                  int ladodireito = 1;
                  int ladoesquerdo = 0;
                  while (true) {
                    if (!system01inaction) {
                      delay(1);
                    }
                    if (existenciadefecharprogram) {
                      break;
                    }
                    if (keyboard.available()) {
                      if (memoriareadint(20).toInt() == 1) {
                        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                      }
                      char c = keyboard.read();
                      if (c == PS2_ENTER) {
                      } else if (c == PS2_TAB) {
                      } else if (c == PS2_ESC) {
                        existenciadefecharprogram = true;
                        break;
                      } else if (c == PS2_DELETE) {
                      } else {
                      }
                    }
                    contagemlaguagem++;
                    String apaga;
                    if (ladodireito == ladoesquerdo) {
                      for (int j = 1; j < programforever.length(); j++) {
                        apaga += programforever.charAt(j - 1);
                      }
                      programforever = apaga;
                      apaga = "";
                      break;
                    } else {
                      if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("{")) {
                        programforever += cmdlanguagem.charAt(contagemlaguagem);
                        ladodireito++;
                      } else {
                        if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("}")) {
                          programforever += cmdlanguagem.charAt(contagemlaguagem);
                          ladoesquerdo++;
                        } else {
                          programforever += cmdlanguagem.charAt(contagemlaguagem);
                        }
                      }
                    }
                  }
                  break;
                }
              }
              break;
            }
          }
          break;
        }
      }
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        linterpretadorcomados(programforever);
      }
    }
    if (funlanguagem.equals(comandolinguagemestrutura[1])) {
      programforever = "";
      programreoetco = "";
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(")")) {
              text2 = valuer;
              valuer = "";
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ENTER) {
                  } else if (c == PS2_TAB) {
                  } else if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  } else if (c == PS2_DELETE) {
                  } else {
                  }
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals("{")) {
                  funlanguagem = "";
                  int ladodireito = 1;
                  int ladoesquerdo = 0;
                  while (true) {
                    if (!system01inaction) {
                      delay(1);
                    }
                    if (existenciadefecharprogram) {
                      break;
                    }
                    if (keyboard.available()) {
                      if (memoriareadint(20).toInt() == 1) {
                        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                      }
                      char c = keyboard.read();
                      if (c == PS2_ENTER) {
                      } else if (c == PS2_TAB) {
                      } else if (c == PS2_ESC) {
                        existenciadefecharprogram = true;
                        break;
                      } else if (c == PS2_DELETE) {
                      } else {
                      }
                    }
                    contagemlaguagem++;
                    String apaga;
                    if (ladodireito == ladoesquerdo) {
                      for (int j = 1; j < programforever.length(); j++) {
                        apaga += programforever.charAt(j - 1);
                      }
                      programforever = apaga;
                      apaga = "";
                      break;
                    } else {
                      if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("{")) {
                        programforever += cmdlanguagem.charAt(contagemlaguagem);
                        ladodireito++;
                      } else {
                        if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("}")) {
                          programforever += cmdlanguagem.charAt(contagemlaguagem);
                          ladoesquerdo++;
                        } else {
                          programforever += cmdlanguagem.charAt(contagemlaguagem);
                        }
                      }
                    }
                  }
                  break;
                }
              }
              break;
            } else {
              programreoetco += funlanguagem;
            }
          }
          break;
        }
      }
      for (int i = 1; i <= String(expresacalculos(programreoetco)).toInt(); i++) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        linterpretadorcomados(programforever);
      }
    }
    if (funlanguagem.equals(comandolinguagemestrutura[2])) {
      programwhile = "";
      programwhilecondicao = "";
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          int ladoditeiro = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if ((funlanguagem.equals(")")) && (ladoesquerdo + 1 == ladoditeiro)) {
              text2 = valuer;
              valuer = "";
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ENTER) {
                  } else if (c == PS2_TAB) {
                  } else if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  } else if (c == PS2_DELETE) {
                  } else {
                  }
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals("{")) {
                  funlanguagem = "";
                  int ladodireito = 1;
                  int ladoesquerdo = 0;
                  while (true) {
                    if (!system01inaction) {
                      delay(1);
                    }
                    if (existenciadefecharprogram) {
                      break;
                    }
                    if (keyboard.available()) {
                      if (memoriareadint(20).toInt() == 1) {
                        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                      }
                      char c = keyboard.read();
                      if (c == PS2_ENTER) {
                      } else if (c == PS2_TAB) {
                      } else if (c == PS2_ESC) {
                        existenciadefecharprogram = true;
                        break;
                      } else if (c == PS2_DELETE) {
                      } else {
                      }
                    }
                    contagemlaguagem++;
                    String apaga;
                    if (ladodireito == ladoesquerdo) {
                      for (int j = 1; j < programwhile.length(); j++) {
                        apaga += programwhile.charAt(j - 1);
                      }
                      programwhile = apaga;
                      apaga = "";
                      break;
                    } else {
                      if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("{")) {
                        programwhile += cmdlanguagem.charAt(contagemlaguagem);
                        ladodireito++;
                      } else {
                        if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("}")) {
                          programwhile += cmdlanguagem.charAt(contagemlaguagem);
                          ladoesquerdo++;
                        } else {
                          programwhile += cmdlanguagem.charAt(contagemlaguagem);
                        }
                      }
                    }
                  }
                  break;
                }
              }
              break;
            } else {
              if (funlanguagem.equals("(")) {
                ladoditeiro++;
              }
              if (funlanguagem.equals(")")) {
                ladoesquerdo++;
              }
              programwhilecondicao += funlanguagem;
            }
          }
          break;
        }
      }
      while (loopverifica(programwhilecondicao)) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        linterpretadorcomados(programwhile);
      }
    }
    if (funlanguagem.equals(comandolinguagemestrutura[3])) {
      programwhile = "";
      programwhilecondicao = "";
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          int ladoditeiro = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if ((funlanguagem.equals(")")) && (ladoesquerdo + 1 == ladoditeiro)) {
              text2 = valuer;
              valuer = "";
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ENTER) {
                  } else if (c == PS2_TAB) {
                  } else if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  } else if (c == PS2_DELETE) {
                  } else {
                  }
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals("{")) {
                  funlanguagem = "";
                  int ladodireito = 1;
                  int ladoesquerdo = 0;
                  while (true) {
                    if (!system01inaction) {
                      delay(1);
                    }
                    if (existenciadefecharprogram) {
                      break;
                    }
                    if (keyboard.available()) {
                      if (memoriareadint(20).toInt() == 1) {
                        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                      }
                      char c = keyboard.read();
                      if (c == PS2_ENTER) {
                      } else if (c == PS2_TAB) {
                      } else if (c == PS2_ESC) {
                        existenciadefecharprogram = true;
                        break;
                      } else if (c == PS2_DELETE) {
                      } else {
                      }
                    }
                    contagemlaguagem++;
                    String apaga;
                    if (ladodireito == ladoesquerdo) {
                      for (int j = 1; j < programwhile.length(); j++) {
                        apaga += programwhile.charAt(j - 1);
                      }
                      programwhile = apaga;
                      apaga = "";
                      break;
                    } else {
                      if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("{")) {
                        programwhile += cmdlanguagem.charAt(contagemlaguagem);
                        ladodireito++;
                      } else {
                        if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("}")) {
                          programwhile += cmdlanguagem.charAt(contagemlaguagem);
                          ladoesquerdo++;
                        } else {
                          programwhile += cmdlanguagem.charAt(contagemlaguagem);
                        }
                      }
                    }
                  }
                  break;
                }
              }
              break;
            } else {
              if (funlanguagem.equals("(")) {
                ladoditeiro++;
              }
              if (funlanguagem.equals(")")) {
                ladoesquerdo++;
              }
              programwhilecondicao += funlanguagem;
            }
          }
          break;
        }
      }
      do {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        linterpretadorcomados(programwhile);
      } while (loopverifica(programwhilecondicao));
    }
    if (funlanguagem.equals(comandolinguagemestrutura[4])) {
      programwhile = "";
      programwhilecondicao = "";
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          int ladoditeiro = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if ((funlanguagem.equals(")")) && (ladoesquerdo + 1 == ladoditeiro)) {
              text2 = valuer;
              valuer = "";
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ENTER) {
                  } else if (c == PS2_TAB) {
                  } else if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  } else if (c == PS2_DELETE) {
                  } else {
                  }
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals("{")) {
                  funlanguagem = "";
                  int ladodireito = 1;
                  int ladoesquerdo = 0;
                  while (true) {
                    if (!system01inaction) {
                      delay(1);
                    }
                    if (existenciadefecharprogram) {
                      break;
                    }
                    if (keyboard.available()) {
                      if (memoriareadint(20).toInt() == 1) {
                        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                      }
                      char c = keyboard.read();
                      if (c == PS2_ENTER) {
                      } else if (c == PS2_TAB) {
                      } else if (c == PS2_ESC) {
                        existenciadefecharprogram = true;
                        break;
                      } else if (c == PS2_DELETE) {
                      } else {
                      }
                    }
                    contagemlaguagem++;
                    String apaga;
                    if (ladodireito == ladoesquerdo) {
                      for (int j = 1; j < programwhile.length(); j++) {
                        apaga += programwhile.charAt(j - 1);
                      }
                      programwhile = apaga;
                      apaga = "";
                      break;
                    } else {
                      if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("{")) {
                        programwhile += cmdlanguagem.charAt(contagemlaguagem);
                        ladodireito++;
                      } else {
                        if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("}")) {
                          programwhile += cmdlanguagem.charAt(contagemlaguagem);
                          ladoesquerdo++;
                        } else {
                          programwhile += cmdlanguagem.charAt(contagemlaguagem);
                        }
                      }
                    }
                  }
                  break;
                }
              }
              break;
            } else {
              if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
              } else {
                if (funlanguagem.equals("(")) {
                  ladoditeiro++;
                }
                if (funlanguagem.equals(")")) {
                  ladoesquerdo++;
                }
                programwhilecondicao += funlanguagem;
              }
            }
          }
          break;
        }
      }
      functionsquantidade++;
      functions[functionsquantidade] = verificastring(programwhilecondicao);
      functionsvalue[functionsquantidade] = programwhile;
    }

    if (funlanguagem.equals(comandolinguagemestrutura[5])) {
      programcondicaoif = "";
      programcondicaoelse = "";
      programwhilecondicao = "";
      autilizacaodeeslestrue = false;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          int ladoditeiro = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if ((funlanguagem.equals(")")) && (ladoesquerdo + 1 == ladoditeiro)) {
              text2 = valuer;
              valuer = "";
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ENTER) {
                  } else if (c == PS2_TAB) {
                  } else if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  } else if (c == PS2_DELETE) {
                  } else {
                  }
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals("{")) {
                  funlanguagem = "";
                  int ladodireito = 1;
                  int ladoesquerdo = 0;
                  while (true) {
                    if (!system01inaction) {
                      delay(1);
                    }
                    if (existenciadefecharprogram) {
                      break;
                    }
                    if (keyboard.available()) {
                      if (memoriareadint(20).toInt() == 1) {
                        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                      }
                      char c = keyboard.read();
                      if (c == PS2_ENTER) {
                      } else if (c == PS2_TAB) {
                      } else if (c == PS2_ESC) {
                        existenciadefecharprogram = true;
                        break;
                      } else if (c == PS2_DELETE) {
                      } else {
                      }
                    }
                    contagemlaguagem++;
                    String apaga;
                    if (ladodireito == ladoesquerdo) {
                      for (int j = 1; j < programcondicaoif.length(); j++) {
                        apaga += programcondicaoif.charAt(j - 1);
                      }
                      programcondicaoif = apaga;
                      apaga = "";
                      break;
                    } else {
                      if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("{")) {
                        programcondicaoif += cmdlanguagem.charAt(contagemlaguagem);
                        ladodireito++;
                      } else {
                        if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("}")) {
                          programcondicaoif += cmdlanguagem.charAt(contagemlaguagem);
                          ladoesquerdo++;
                        } else {
                          programcondicaoif += cmdlanguagem.charAt(contagemlaguagem);
                        }
                      }
                    }
                  }
                  break;
                }
              }
              break;
            } else {
              if (funlanguagem.equals("(")) {
                ladoditeiro++;
              }
              if (funlanguagem.equals(")")) {
                ladoesquerdo++;
              }
              programwhilecondicao += funlanguagem;
            }
          }
          break;
        }
      }
      contagemlaguagem--;
      valuer = "";
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ENTER) {
          } else if (c == PS2_TAB) {
          } else if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          } else if (c == PS2_DELETE) {
          } else {
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals(";")) {
          funlanguagem = "";
          break;
        }
        if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals(" ")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
        } else {
          valuer += cmdlanguagem.charAt(contagemlaguagem);
        }
        if (valuer.equals(comandolinguagemestrutura[6])) {
          autilizacaodeeslestrue = true;
          programcondicaoelse = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals("{")) {
              funlanguagem = "";
              int ladodireito = 1;
              int ladoesquerdo = 0;
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ENTER) {
                  } else if (c == PS2_TAB) {
                  } else if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  } else if (c == PS2_DELETE) {
                  } else {
                  }
                }
                contagemlaguagem++;
                String apaga;
                if (ladodireito == ladoesquerdo) {
                  for (int j = 1; j < programcondicaoelse.length(); j++) {
                    apaga += programcondicaoelse.charAt(j - 1);
                  }
                  programcondicaoelse = apaga;
                  apaga = "";
                  break;
                } else {
                  if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("{")) {
                    programcondicaoelse += cmdlanguagem.charAt(contagemlaguagem);
                    ladodireito++;
                  } else {
                    if (String(cmdlanguagem.charAt(contagemlaguagem)).equals("}")) {
                      programcondicaoelse += cmdlanguagem.charAt(contagemlaguagem);
                      ladoesquerdo++;
                    } else {
                      programcondicaoelse += cmdlanguagem.charAt(contagemlaguagem);
                    }
                  }
                }
              }
              break;
            }
          }
          contagemlaguagem--;
          valuer = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals(";")) {
              funlanguagem = "";
              break;
            }
          }
          break;
        }
      }
      if (autilizacaodeeslestrue) {
        if (loopverifica(programwhilecondicao)) {
          linterpretadorcomados(programcondicaoif);
        } else {
          linterpretadorcomados(programcondicaoelse);
        }
      } else {
        if (loopverifica(programwhilecondicao)) {
          linterpretadorcomados(programcondicaoif);
        }
      }
    }
    if (funlanguagem.equals("/*")) {
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("*")) {
          funlanguagem = "";
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if (funlanguagem.equals("/")) {
              break;
            }
          }
          break;
        }
      }
      text1 = "";
      valuer = "";
    }
    String textoad[10];
    int numerofuncao = 0;
    
    
    //Sistema
    if (funlanguagem.equals(comandolinguagemsistema[0])) {
      numerofuncao = 1;
    }
    if (funlanguagem.equals(comandolinguagemsistema[1])) {
      numerofuncao = 2;
    }
    if (funlanguagem.equals(comandolinguagemsistema[2])) {
      numerofuncao = 3;
    }
    if (funlanguagem.equals(comandolinguagemsistema[3])) {
      numerofuncao = 4;
    }
    if (funlanguagem.equals(comandolinguagemsistema[4])) {
      numerofuncao = 5;
    }
    if (funlanguagem.equals(comandolinguagemsistema[5])) {
      numerofuncao = 6;
    }
    if (funlanguagem.equals(comandolinguagemsistema[6])) {
      numerofuncao = 7;
    }
    if (funlanguagem.equals(comandolinguagemsistema[7])) {
      numerofuncao = 8;
    }
    if (funlanguagem.equals(comandolinguagemsistema[8])) {
      numerofuncao = 9;
    }
    //-----------------------------------------
    
    //Pino Digital
    if (funlanguagem.equals(comandolinguagempinodigital[0])) {
      numerofuncao = 10;
    }
    if (funlanguagem.equals(comandolinguagempinodigital[1])) {
      numerofuncao = 11;
    }
    //-----------------------------------------
    
    //Pino Analogico
    if (funlanguagem.equals(comandolinguagempinoanalogico[0])) {
      numerofuncao = 12;
    }
    if (funlanguagem.equals(comandolinguagempinoanalogico[2])) {
      numerofuncao = 13;
    }
    //-----------------------------------
    
    //Time
    if (funlanguagem.equals(comandolinguagemtime[0])) {
      numerofuncao = 14;
    }
    if (funlanguagem.equals(comandolinguagemtime[1])) {
      numerofuncao = 15;
    }
    if (funlanguagem.equals(comandolinguagemtime[2])) {
      numerofuncao = 16;
    }
    if (funlanguagem.equals(comandolinguagemtime[3])) {
      numerofuncao = 17;
    }
    if (funlanguagem.equals(comandolinguagemtime[4])) {
      numerofuncao = 18;
    }
    if (funlanguagem.equals(comandolinguagemtime[5])) {
      numerofuncao = 19;
    }
    if (funlanguagem.equals(comandolinguagemtime[6])) {
      numerofuncao = 20;
    }
    if (funlanguagem.equals(comandolinguagemtime[7])) {
      numerofuncao = 21;
    }
    //-----------------------------------
    
    if (numerofuncao != 0) {
      contagem = 0;
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        contagemlaguagem++;
        funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          int ladodireito = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            contagemlaguagem++;
            funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
            if ((funlanguagem.equals(")")) && (ladodireito == (ladoesquerdo + 1))) {
              textoad[contagem] = valuer;
              valuer = "";
              funlanguagem = "";
              while (true) {
                if (!system01inaction) {
                  delay(1);
                }
                if (existenciadefecharprogram) {
                  break;
                }
                contagemlaguagem++;
                funlanguagem = String(cmdlanguagem.charAt(contagemlaguagem));
                if (funlanguagem.equals(";")) {
                  funlanguagem = "";
                  break;
                }
              }
              break;
            } else {
              if (funlanguagem.equals(",")) {
                textoad[contagem] = valuer;
                valuer = "";
                contagem++;
                funlanguagem = "";
              } else {
                if (funlanguagem.equals("(")) {
                  ladodireito++;
                }
                if (funlanguagem.equals(")")) {
                  ladoesquerdo++;
                }
                if ((String(cmdlanguagem.charAt(contagemlaguagem)).equals("\n")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\r")) || (String(cmdlanguagem.charAt(contagemlaguagem)).equals("\t"))) {
                } else {
                  valuer += cmdlanguagem.charAt(contagemlaguagem);
                }
              }
            }
          }
          break;
        }
      }

      //Sistema
      if ( numerofuncao == 1) {
        existenciadefecharprogram = true;
      }
      if ( numerofuncao == 2) {
        existenciadefecharprogram = true;
        som1("SD::SD1/SYS.H/MUSICA/SAIDA.WAV");
        desligarn5 = true;
      }
      if ( numerofuncao == 3) {
        som1("SD::SD1/SYS.H/MUSICA/SAIDA.WAV");
        incializar_sistema_suspender();
        incializar_sistema_aguarde();
      }
      if ( numerofuncao == 4) {
        som1("SD::SD1/SYS.H/MUSICA/SAIDA.WAV");
        incializar_sistema_desligar();
      }
      if ( numerofuncao == 5) {
        openaappgameandconfig(verificastring(textoad[0]));
      }
      if ( numerofuncao == 6) {
        openaappgameandconfig(verificastring(textoad[0]));
      }
      if ( numerofuncao == 7) {
        openaappgameandconfig(verificastring(textoad[0]));
      }
      if ( numerofuncao == 8) {
        app_gerenciador_arquivo_open_dir(verificastring(textoad[0]));
      }
      if ( numerofuncao == 9) {
        app_gerenciador_arquivo_open_file(verificastring(textoad[0]));
      }
      //-----------------------------------
      
      //Pino Digital
      if ( numerofuncao == 10) {
        if (textoad[1].equals("OUTPUT")) {
          if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
            pinMode(pinodigital(expresacinteger(textoad[0]).toInt()), OUTPUT);
          }
        } else {
          if (textoad[1].equals("INPUT")) {
            if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
              pinMode(pinodigital(expresacinteger(textoad[0]).toInt()), INPUT);
            }
          }
        }
      }
      if ( numerofuncao == 11) {
        if (textoad[1].equals("HIGH")) {
          if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
            digitalWrite(pinodigital(expresacinteger(textoad[0]).toInt()), HIGH);
          }
        } else {
          if (textoad[1].equals("LOW")) {
            if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
              digitalWrite(pinodigital(expresacinteger(textoad[0]).toInt()), LOW);
            }
          }
        }
      }
      //-----------------------------------
      
      //Pino Analogico
      if ( numerofuncao == 12) {
        //Pesquisar AnalogReference
      }
      if ( numerofuncao == 13) {
        analogWrite(pinodigital(expresacinteger(textoad[0]).toInt()), expresacinteger(textoad[1]).toInt());
      }
      //-----------------------------------
      
      //Time
      if ( numerofuncao == 14) {
        int valordelay = expresacinteger(textoad[0]).toInt();
        for (int i = 0; i <  valordelay; i++) {
          if (existenciadefecharprogram) {
            break;
          }
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == PS2_ESC) {
              existenciadefecharprogram = true;
              break;
            }
          }
        }
      }
      if ( numerofuncao == 15) {
        int valordelay = expresacinteger(textoad[0]).toInt();
        for (int i = 0; i <  valordelay; i++) {
          if (existenciadefecharprogram) {
            break;
          }
          delayMicroseconds(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == PS2_ESC) {
              existenciadefecharprogram = true;
              break;
            }
          }
        }
      }
      if ( numerofuncao == 16) {
        if (!system01inaction) {
          memoriawriteint(1, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      }
      if ( numerofuncao == 17) {
        if (!system01inaction) {
          memoriawriteint(2, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      }
      if ( numerofuncao == 18) {
        if (!system01inaction) {
          memoriawriteint(3, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      }
      if ( numerofuncao == 19) {
        if (!system01inaction) {
          memoriawriteint(4, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      }
      if ( numerofuncao == 20) {
        if (!system01inaction) {
          memoriawriteint(5, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      }
      if ( numerofuncao == 21) {
        if (!system01inaction) {
          memoriawriteint(6, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      }
      //-----------------------------------
      
      valuer = "";
      contagem = 0;
    }
    return contagemlaguagem;
  }
  String funcaoread(String text, String funcao, int i) {
    int u = 0;
    String valuer;
    int contagem = 0;
    String retornavalor;
    String funlanguagem;
    while (true) {
      if (!system01inaction) {
        delay(1);
      }
      if (existenciadefecharprogram) {
        break;
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == PS2_ESC) {
          existenciadefecharprogram = true;
          break;
        }
      }
      u++;
      if (u <= variavelquantidade) {
        if (funcao.equals(variavel[u])) {
          if (variaveltype[u].equals("int")) {
            retornavalor = String(expresacinteger(variavelvalue[u]));
          }
          if (variaveltype[u].equals("long")) {
            retornavalor = String(expresacinteger(variavelvalue[u]));
          }
          if (variaveltype[u].equals("double")) {
            retornavalor = transfordoublecasadecimais2(convertestrtodouble(variavelvalue[u]));
          }
          if (variaveltype[u].equals("float")) {
            retornavalor = transfordoublecasadecimais3(convertestrtodouble(variavelvalue[u]));
          }
          if (variaveltype[u].equals("cfloat")) {
            retornavalor = transfordoublecasadecimais4(convertestrtodouble(variavelvalue[u]));
          }
          if (variaveltype[u].equals("char")) {
            retornavalor = String(verificastring(variavelvalue[u]).charAt(0));
          }
          if (variaveltype[u].equals("boolean")) {
            retornavalor = String(verificaav(variavelvalue[u]));
          }
          if (variaveltype[u].equals("String")) {
            retornavalor = verificastring(variavelvalue[u]);
          }
          break;
        }
      } else {
        break;
      }
    }
    String textoad[4];
    int numerofuncao = 0;
    if (funcao.equals("Readbox")) {
      numerofuncao = 1;
    } else if (funcao.equals("Length")) {
      numerofuncao = 2;
    } else if (funcao.equals("AtChar")) {
      numerofuncao = 3;
    } else if (funcao.equals("Round")) {
      numerofuncao = 4;
    } else if (funcao.equals("toChar")) {
      numerofuncao = 5;
    } else if (funcao.equals("toByte")) {
      numerofuncao = 6;
    } else if (funcao.equals("toLong")) {
      numerofuncao = 7;
    } else if (funcao.equals("toFloat")) {
      numerofuncao = 8;
    } else if (funcao.equals("toInt")) {
      numerofuncao = 9;
    } else if (funcao.equals("Millis()")) {
      retornavalor = String(millis());
    } else if (funcao.equals("Micros()")) {
      retornavalor = String(micros());
    } else if (funcao.equals("digitalRead")) {
      numerofuncao = 10;
    } else if (funcao.equals("analogRead")) {
      numerofuncao = 11;
    } else if (funcao.equals("mRando")) {
      numerofuncao = 12;
    } else if (funcao.equals("mmRando")) {
      numerofuncao = 13;
    } else if (funcao.equals("LCD.height()")) {
      retornavalor = String(TFTscreen.height());
    } else if (funcao.equals("LCD.width()")) {
      retornavalor = String(TFTscreen.width());
    } else if (funcao.equals("temporestante()")) {
      if (!system01inaction) {
        retornavalor = String(temporestante());
      }
    } else if (funcao.equals("Max")) {
      numerofuncao = 14;
    } else if (funcao.equals("Pow")) {
      numerofuncao = 15;
    } else if (funcao.equals("Min")) {
      numerofuncao = 16;
    } else if (funcao.equals("Map")) {
      numerofuncao = 17;
    } else if (funcao.equals("Nanis")) {
      numerofuncao = 18;
    } else if (funcao.equals("Exp")) {
      numerofuncao = 19;
    } else if (funcao.equals("Fnisi")) {
      numerofuncao = 20;
    } else if (funcao.equals("Log")) {
      numerofuncao = 21;
    } else if (funcao.equals("10log")) {
      numerofuncao = 22;
    } else if (funcao.equals("Tan")) {
      numerofuncao = 23;
    } else if (funcao.equals("Cos")) {
      numerofuncao = 24;
    } else if (funcao.equals("Sin")) {
      numerofuncao = 25;
    } else if (funcao.equals("Rtan")) {
      numerofuncao = 26;
    } else if (funcao.equals("Rcos")) {
      numerofuncao = 27;
    } else if (funcao.equals("Rsin")) {
      numerofuncao = 28;
    } else if (funcao.equals("Ratan")) {
      numerofuncao = 29;
    } else if (funcao.equals("Racos")) {
      numerofuncao = 30;
    } else if (funcao.equals("Rasin")) {
      numerofuncao = 31;
    } else if (funcao.equals("Atan")) {
      numerofuncao = 32;
    } else if (funcao.equals("Acos")) {
      numerofuncao = 33;
    } else if (funcao.equals("Asin")) {
      numerofuncao = 34;
    } else if (funcao.equals("Secondget()")) {
      funlanguagem = "";
      if (!system01inaction) {
        retornavalor = memoriareadint(1);
      }
    } else if (funcao.equals("Minuteget()")) {
      funlanguagem = "";
      if (!system01inaction) {
        retornavalor = memoriareadint(2);
      }
    } else if (funcao.equals("Hourget()")) {
      funlanguagem = "";
      if (!system01inaction) {
        retornavalor = memoriareadint(3);
      }
    } else if (funcao.equals("Dayget()")) {
      funlanguagem = "";
      if (!system01inaction) {
        retornavalor = memoriareadint(4);
      }
    } else if (funcao.equals("Monthget()")) {
      funlanguagem = "";
      if (!system01inaction) {
        retornavalor = memoriareadint(5);
      }
    } else if (funcao.equals("Yearget()")) {
      funlanguagem = "";
      if (!system01inaction) {
        retornavalor = memoriareadint(6);
      }
    } else if (funcao.equals("Database.read")) {
      numerofuncao = 35;
    } else if (funcao.equals("SD.readfile")) {
      numerofuncao = 36;
    } else if (funcao.equals("Serialdigitalread")) {
      numerofuncao = 37;
    } else if (funcao.equals("Serialanalogread")) {
      numerofuncao = 38;
    } else if (funcao.equals("Serialreadeeprom")) {
      numerofuncao = 39;
    } else if (funcao.equals("Serialsecondget")) {
      numerofuncao = 40;
    } else if (funcao.equals("Serialminuteget")) {
      numerofuncao = 41;
    } else if (funcao.equals("Serialhourget")) {
      numerofuncao = 42;
    } else if (funcao.equals("Serialdayget")) {
      numerofuncao = 43;
    } else if (funcao.equals("Serialmonthget")) {
      numerofuncao = 44;
    } else if (funcao.equals("Serialyearget")) {
      numerofuncao = 45;
    } else if (funcao.equals("keyboardread()")) {
      funlanguagem = "";
      teclado_teclas = '\0';
      char c = keyboard.read();
      retornavalor = String(c);
    } else if (funcao.equals("Sqrt")) {
      numerofuncao = 46;
    } else if (funcao.equals("Abs")) {
      numerofuncao = 47;
    } else if (funcao.equals("Constrain")) {
      numerofuncao = 48;
    } else if (funcao.equals("SD.exists")) {
      numerofuncao = 49;
    } else if (funcao.equals("Read2box")) {
      numerofuncao = 50;
    }
    if (numerofuncao != 0) {
      while (true) {
        if (!system01inaction) {
          delay(1);
        }
        if (existenciadefecharprogram) {
          break;
        }
        if (keyboard.available()) {
          if (memoriareadint(20).toInt() == 1) {
            som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
          }
          char c = keyboard.read();
          if (c == PS2_ESC) {
            existenciadefecharprogram = true;
            break;
          }
        }
        i++;
        funlanguagem = String(text.charAt(i));
        if (funlanguagem.equals("(")) {
          funlanguagem = "";
          int ladodireito = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              }
            }
            i++;
            if ((String(text.charAt(i)).equals(")")) && (ladodireito == (ladoesquerdo + 1))) {
              textoad[contagem] = valuer;
              valuer = "";
              funlanguagem = "";
              break;
            } else {
              if (funlanguagem.equals(",")) {
                textoad[contagem] = valuer;
                valuer = "";
                contagem++;
                funlanguagem = "";
              } else {
                if (String(text.charAt(i)).equals("(")) {
                  ladodireito++;
                }
                if (String(text.charAt(i)).equals(")")) {
                  ladoesquerdo++;
                }
                if ( (String(text.charAt(i)).equals("\n")) || (String(text.charAt(i)).equals("\r")) || (String(text.charAt(i)).equals("\t"))) {
                } else {
                  valuer += text.charAt(i);
                }
              }
            }
          }
          break;
        }
      }
      if ( numerofuncao == 1) {
        retornavalor = texto_write(verificastring(textoad[0]));
      } else if ( numerofuncao == 2) {
        retornavalor = String(verificastring(textoad[0]).length());
      } else if ( numerofuncao == 3) {
        retornavalor = String(verificastring(textoad[0]).charAt(expresacinteger(textoad[1]).toInt()));
      } else if ( numerofuncao == 4) {
        retornavalor = String(round(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 5) {
        retornavalor = conversostrtochar(verificastring(textoad[0]));
      } else if ( numerofuncao == 6) {
        byte* tobyte1;
        char* tobyte2 = conversostrtochar(verificastring(textoad[0]));
        int tobyte3 = 0;
        while (tobyte2[tobyte3] != '\0') {
          tobyte1[tobyte3] = byte(tobyte2[tobyte3]);
          tobyte3++;
        }
        char* tobyte4;
        tobyte3 = 0;
        while (tobyte1[tobyte3] != '0') {
          tobyte4[tobyte3] = tobyte1[tobyte3];
          tobyte3++;
        }
        retornavalor = String(tobyte4);
      } else if ( numerofuncao == 7) {
        retornavalor = String(long(expresacinteger(textoad[0]).toInt()));
      } else if ( numerofuncao == 8) {
        retornavalor = String(transfordoublecasadecimais3(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 9) {
        retornavalor = String(expresacinteger(textoad[0]).toInt());
      } else if ( numerofuncao == 10) {
        retornavalor = String(digitalRead(expresacinteger(textoad[0]).toInt()));
      } else if ( numerofuncao == 11) {
        retornavalor = String(analogRead(expresacinteger(textoad[0]).toInt()));
      } else if ( numerofuncao == 12) {
        retornavalor = String(random(convertestrtodouble(expresacinteger(textoad[0]))));
      } else if ( numerofuncao == 13) {
        retornavalor = String(random(convertestrtodouble(expresacalculos(textoad[0])), convertestrtodouble(expresacalculos(textoad[1]))));
      } else if ( numerofuncao == 14) {
        retornavalor = String(max(convertestrtodouble(expresacalculos(textoad[0])), convertestrtodouble(expresacalculos(textoad[1]))));
      } else if ( numerofuncao == 15) {
        retornavalor = String(pow(convertestrtodouble(expresacalculos(textoad[0])), convertestrtodouble(expresacalculos(textoad[1]))));
      } else if ( numerofuncao == 16) {
        retornavalor = String(min(convertestrtodouble(expresacalculos(textoad[0])), convertestrtodouble(expresacalculos(textoad[1]))));
      } else if ( numerofuncao == 17) {
        retornavalor = String(map(convertestrtodouble(expresacalculos(textoad[0])), convertestrtodouble(expresacalculos(textoad[1])), convertestrtodouble(expresacalculos(textoad[2])), convertestrtodouble(expresacalculos(textoad[3])), convertestrtodouble(expresacalculos(textoad[4]))));
      } else if ( numerofuncao == 18) {
        retornavalor = String(isnan( convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 19) {
        retornavalor = String(exp(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 20) {
        retornavalor = String(isinf(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 21) {
        retornavalor = String(log(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 22) {
        retornavalor = String(log10(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 23) {
        retornavalor = String(tan( convertestrtodouble(expresacalculos(textoad[0])) * PI / 180));
      } else if ( numerofuncao == 24) {
        retornavalor = String(cos( convertestrtodouble(expresacalculos(textoad[0])) * PI / 180));
      } else if ( numerofuncao == 25) {
        retornavalor = String(sin( convertestrtodouble(expresacalculos(textoad[0])) * PI / 180));
      } else if ( numerofuncao == 26) {
        retornavalor = String(tan( convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 27) {
        retornavalor = String(cos( convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 28) {
        retornavalor = String(sin( convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 29) {
        retornavalor = String(atan( convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 30) {
        retornavalor = String(acos( convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 31) {
        retornavalor = String(asin( convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 32) {
        retornavalor = String((atan( convertestrtodouble(expresacalculos(textoad[0]))) * 180 / PI));
      } else if ( numerofuncao == 33) {
        retornavalor = String((acos( convertestrtodouble(expresacalculos(textoad[0]))) * 180 / PI));
      } else if ( numerofuncao == 34) {
        retornavalor = String((asin( convertestrtodouble(expresacalculos(textoad[0]))) * 180 / PI));
      } else if ( numerofuncao == 35) {
        retornavalor = banco_dados[expresacinteger(textoad[0]).toInt()];
      } else if ( numerofuncao == 36) {
        if (!system01inaction) {
          retornavalor = lerarquivo(verificastring(textoad[0]));
        }
      } else if ( numerofuncao == 37) {
        String valorserial = "digit.read():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 38) {
        String valorserial = "analog.read():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 39) {
        String valorserial = "eeprom.read():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 40) {
        comunicacaotx("segundo.get(); run();", expresacinteger(textoad[0]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 41) {
        comunicacaotx("minuto.get(); run();", expresacinteger(textoad[0]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 42) {
        comunicacaotx("hora.get(); run();", expresacinteger(textoad[0]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 43) {
        comunicacaotx("dia.get(); run();", expresacinteger(textoad[0]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 44) {
        comunicacaotx("mes.get(); run();", expresacinteger(textoad[0]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 45) {
        comunicacaotx("ano.get(); run();", expresacinteger(textoad[0]).toInt());
        retornavalor = comunicacaorx(expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 46) {
        retornavalor = String(sqrt(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 47) {
        retornavalor = String(abs(convertestrtodouble(expresacalculos(textoad[0]))));
      } else if ( numerofuncao == 48) {
        retornavalor = String(constrain(convertestrtodouble(expresacalculos(textoad[0])), convertestrtodouble(expresacalculos(textoad[1])), convertestrtodouble(expresacalculos(textoad[2]))));
      } else if ( numerofuncao == 49) {
        if (!system01inaction) {
          if (exists_consultardiretoriopastaSD(verificastring(textoad[0]))) {
            retornavalor = "1";
          } else {
            retornavalor = "0";
          }
        }
      } else if ( numerofuncao == 50) {
        retornavalor = readtext1(verificastring(textoad[0]), verificastring(textoad[1]));
      }
      valuer = "";
      contagem = 0;
    }
    return retornavalor;
  }
  String verificastring(String text) {
    String analizar;
    String valuer1;
    String text6;
    for (int i = 0; i < text.length(); i++) {
      if (existenciadefecharprogram) {
        break;
      }
      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == PS2_ENTER) {
        } else if (c == PS2_TAB) {
        } else if (c == PS2_ESC) {
          existenciadefecharprogram = true;
          break;
        } else if (c == PS2_DELETE) {
        } else {
        }
      }
      analizar = String(text.charAt(i));
      if (analizar.equals("\"")) {
        analizar = "";
        valuer1 = "";
        while (true) {
          if (!system01inaction) {
            delay(1);
          }
          if (existenciadefecharprogram) {
            break;
          }
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == PS2_ENTER) {
            } else if (c == PS2_TAB) {
            } else if (c == PS2_ESC) {
              existenciadefecharprogram = true;
              break;
            } else if (c == PS2_DELETE) {
            } else {
            }
          }
          i++;
          analizar = String(text.charAt(i));
          if (analizar.equals("\"")) {
            text6 += valuer1;
            valuer1 = "";
            analizar = "";
            break;
          } else {
            valuer1 += text.charAt(i);
          }
        }
      } else {
        analizar = String(text.charAt(i));
        if (analizar.equals("(")) {
          analizar = "";
          valuer1 = "";
          int ladodireito = 1;
          int ladoesquerdo = 0;
          while (true) {
            if (!system01inaction) {
              delay(1);
            }
            if (existenciadefecharprogram) {
              break;
            }
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == PS2_ENTER) {
              } else if (c == PS2_TAB) {
              } else if (c == PS2_ESC) {
                existenciadefecharprogram = true;
                break;
              } else if (c == PS2_DELETE) {
              } else {
              }
            }
            i++;
            analizar = String(text.charAt(i));
            if ((String(text.charAt(i)).equals(")")) && (ladodireito == (ladoesquerdo + 1))) {
              String verificarvariavel = String(expresacalculos(valuer1));
              if (verificarvariavel.equals("")) {
              } else {
                valuer1 = verificarvariavel;
              }
              text6 += valuer1;
              valuer1 = "";
              analizar = "";
              break;
            } else {
              if (String(text.charAt(i)).equals("(")) {
                ladodireito++;
              }
              if (String(text.charAt(i)).equals(")")) {
                ladoesquerdo++;
              }
              valuer1 += text.charAt(i);
            }
          }
        } else {
          if ((String(text.charAt(i)).equals(" "))) {
          } else {
            valuer1 += text.charAt(i);
          }
          String retornavalor = funcaoread(text, valuer1, i);
          if (retornavalor.equals("")) {
          } else {
            valuer1 = "";
            String verificarafinaliza = String(text.charAt(i + 1));
            if (verificarafinaliza.equals("(")) {
              i++;
              verificarafinaliza = "";
              while (true) {
                if (existenciadefecharprogram) {
                  break;
                }
                if (keyboard.available()) {
                  if (memoriareadint(20).toInt() == 1) {
                    som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
                  }
                  char c = keyboard.read();
                  if (c == PS2_ENTER) {
                  } else if (c == PS2_TAB) {
                  } else if (c == PS2_ESC) {
                    existenciadefecharprogram = true;
                    break;
                  } else if (c == PS2_DELETE) {
                  } else {
                  }
                }
                i++;
                verificarafinaliza = String(text.charAt(i));
                if (verificarafinaliza.equals(")")) {
                  verificarafinaliza = "";
                  break;
                } else {
                  if (String(text.charAt(i)).equals(" ") || (String(text.charAt(i)).equals("\n")) || (String(text.charAt(i)).equals("\r")) || (String(text.charAt(i)).equals("\t"))) {
                  }
                }
              }
            }
            text6 += retornavalor;
          }
        }
      }
    }
    return text6;
  }
};
//##############################APLICATIVOS############################
//##############################PARTE_1################################
//---------------------------MUSICA------------------------------------
struct app_galeria_musica {
  int count;
  boolean repet;
  int quantidade;
  boolean execucao;
  boolean aleatorio;
  int duracaomusica;
  int duracaomusica2;
  boolean interrupcao;
  int contagemtempomusica;
  char som(String uri, String nome) {
    char retorna = '0';
    int hora = memoriareadint(3).toInt();
    int minuto = memoriareadint(2).toInt();
    if (!execucao) {
      while (true) {
        delay(1);
        if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
          minuto = memoriareadint(2).toInt();
          hora = memoriareadint(3).toInt();
          printdataehora2();
        }
        if (keyboard.available()) {
          char c = keyboard.read();
          if (c == '1') {
            retorna = '1';
            break;
          } else if (c == '2') {
            retorna = '2';
            break;
          } else if (c == '3') {
            retorna = '3';
            break;
          } else if (c == '4') {
            retorna = '4';
            break;
          } else if (c == '5') {
            retorna = '5';
            break;
          } else if (c == '6') {
            if (aleatorio) {
              aleatorio = false;
            } else {
              aleatorio = true;
              repet = false;
            }
            int scrollx = 95;
            int scrolly = 30;
            if (aleatorio) {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N9.BMP", 80 + scrollx, 205 - scrolly);
            } else {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N8.BMP", 80 + scrollx, 205 - scrolly);
            }
            TFTscreen.setColor(255, 0, 0);
            TFTscreen.fillCircle(80 + 56 + scrollx, 205 + 51 - scrolly, 12);
            TFTscreen.setFont(SmallFont);
            TFTscreen.setColor(255, 255, 255);
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.print2("6", 80 + 54 + scrollx, 205 + 44 - scrolly);
          } else if (c == '7') {
            if (repet) {
              repet = false;
            } else {
              repet = true;
              aleatorio = false;
            }
            int scrollx = 95;
            int scrolly = 30;
            if (repet) {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N11.BMP", 150 + scrollx, 205 - scrolly);
            } else {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N10.BMP", 150 + scrollx, 205 - scrolly);
            }
            TFTscreen.setColor(255, 0, 0);
            TFTscreen.fillCircle(150 + 56 + scrollx, 205 + 51 - scrolly, 12);
            TFTscreen.setFont(SmallFont);
            TFTscreen.setColor(255, 255, 255);
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.print2("7", 150 + 54 + scrollx, 205 + 44 - scrolly);
          } else if (c == '8') {
            retorna = '8';
            break;
          } else if (c == PS2_ESC) {
            retorna = PS2_ESC;
            break;
          }
        }
      }
    } else {
      if (!interrupcao) {
        duracaomusica = 0;
        duracaomusica2 = 0;
        contagemtempomusica = 0;
        SPI.setClockDivider(4);
        Audio.begin(88200, 100);
        count = 0;
        myFile_app_galeria_musica = consultardiretoriopastaSD(uri);
        quantidade = myFile_app_galeria_musica.size();
        duracaomusica =  String(myFile_app_galeria_musica.size(), DEC).toInt() / (176879.8783783784);
      } else {
        interrupcao = false;
        myFile_app_galeria_musica.close();
        Audio.end();
        SPI.setClockDivider(4);
        Audio.begin(88200, 100);
        myFile_app_galeria_musica = consultardiretoriopastaSD(uri);
        myFile_app_galeria_musica.seek(myFile_app_galeria_musica.size() - quantidade);
      }
      while (myFile_app_galeria_musica.available()) {
        delay(1);
        if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
          minuto = memoriareadint(2).toInt();
          hora = memoriareadint(3).toInt();
          printdataehora2();
        }
        short buffernsom[1024];
        myFile_app_galeria_musica.read(buffernsom, sizeof(buffernsom));
        if (quantidade >= 1024) {
          int volumen = (memoriareadint(22).toInt()) * 204.8;
          Audio.prepare(buffernsom, 1024, volumen);
          Audio.write(buffernsom, 1024);
          quantidade -= sizeof(buffernsom);
        } else {
          if (quantidade > 0) {
            int volumen = (memoriareadint(22).toInt()) * 204.8;
            Audio.prepare(buffernsom, 1024, volumen);
            Audio.write(buffernsom, quantidade);
            quantidade = 0;
          }
        }
        count++;
        if (count == 100) {
          contagemtempomusica++;
          duracaomusica2 = duracaomusica - int(contagemtempomusica * (1.157787686771493));
          String texto;
          if (int(duracaomusica2 / 60) < 10) {
            texto += "0";
          }
          texto += String(int(duracaomusica2 / 60));
          texto += ":";
          if ((duracaomusica2 % 60) < 10) {
            texto += "0";
          }
          texto += String((duracaomusica2 % 60));
          count = 0;
          String texto2[2];
          texto2[0] = nome;
          texto2[1] = texto;
          app_layout_texto_barra(texto2, 2);
        }
        if (keyboard.available()) {
          char c = keyboard.read();
          if (c == '1') {
            retorna = '1';
            if (interrupcao) {
              interrupcao = false;
            }
            break;
          } else if (c == '2') {
            if (!interrupcao) {
              interrupcao = true;
            }
            retorna = '2';
            break;
          } else if (c == '3') {
            if (interrupcao) {
              interrupcao = false;
            }
            retorna = '3';
            break;
          } else if (c == '4') {
            if (interrupcao) {
              interrupcao = false;
            }
            retorna = '4';
            break;
          } else if (c == '5') {
            if (interrupcao) {
              interrupcao = false;
            }
            retorna = '5';
            break;
          } else if (c == '6') {
            if (aleatorio) {
              aleatorio = false;
            } else {
              aleatorio = true;
              repet = false;
            }
            int scrollx = 95;
            int scrolly = 30;
            if (aleatorio) {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N9.BMP", 80 + scrollx, 205 - scrolly);
            } else {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N8.BMP", 80 + scrollx, 205 - scrolly);
            }
            TFTscreen.setColor(255, 0, 0);
            TFTscreen.fillCircle(80 + 56 + scrollx, 205 + 51 - scrolly, 12);
            TFTscreen.setFont(SmallFont);
            TFTscreen.setColor(255, 255, 255);
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.print2("6", 80 + 54 + scrollx, 205 + 44 - scrolly);
          } else if (c == '7') {
            if (repet) {
              repet = false;
            } else {
              repet = true;
              aleatorio = false;
            }
            int scrollx = 95;
            int scrolly = 30;
            if (repet) {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N11.BMP", 150 + scrollx, 205 - scrolly);
            } else {
              printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N10.BMP", 150 + scrollx, 205 - scrolly);
            }
            TFTscreen.setColor(255, 0, 0);
            TFTscreen.fillCircle(150 + 56 + scrollx, 205 + 51 - scrolly, 12);
            TFTscreen.setFont(SmallFont);
            TFTscreen.setColor(255, 255, 255);
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.print2("7", 150 + 54 + scrollx, 205 + 44 - scrolly);
          } else if (c == '8') {
            if (interrupcao) {
              interrupcao = false;
            }
            retorna = '8';
            break;
          } else if (c == PS2_ESC) {
            retorna = PS2_ESC;
            break;
          }
        }
      }
      if (!interrupcao) {
        myFile_app_galeria_musica.close();
        Audio.end();
      }
    }
    return retorna;
  }
  void galeria_musica() {
    String nome;
    String file;
    int posicao = 1;
    int posicao2 = 1;
    boolean sairapp = false;
    repet = false;
    execucao = false;
    aleatorio = false;
    interrupcao = false;
    int cartaodebusca = app_gerenciador_arquivo_memoria_read();
    buscar_arquivos(".WAV", false, posicao2, cartaodebusca);
    nome = arquivosencontradonome[posicao];
    file = arquivosencontrado[posicao];
    boolean printlayout = false;
    app_layout_actionbar_barra_1("Musica", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 127, 127, 127);
    printmusica(posicao);
    while (true) {
      char str = som(file, nome);
      printlayout = false;
      char c = str;
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Musica", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '0') {
        if (repet) {
        } else {
          if (aleatorio) {
            posicao = random(arquivosencontradocntagem - 1) + 1;
          } else {
            posicao++;
            if (posicao > arquivosencontradocntagem) {
              posicao = 1;
            }
          }
        }
        if (posicao > 6) {
          int quantidadelayout = int(arquivosencontradocntagem / 6);
          if ((arquivosencontradocntagem % 6) > 0) {
            quantidadelayout++;
          }
          posicao2++;
          if (posicao2 > quantidadelayout) {
            posicao2 = 1;
          }
          posicao = 1;
          buscar_arquivos(".WAV", false, posicao2, cartaodebusca);
        }
        nome = arquivosencontradonome[posicao];
        file = arquivosencontrado[posicao];
        interrupcao = false;
      } else if (c == '1') {
        if (repet) {
        } else {
          if (aleatorio) {
            posicao = random(arquivosencontradocntagem - 1) + 1;
          } else {
            posicao--;
            if (posicao < 1) {
              posicao = arquivosencontradocntagem;
            }
          }
        }
        if (posicao < 1) {
          int quantidadelayout = int(arquivosencontradocntagem / 6);
          if ((arquivosencontradocntagem % 6) > 0) {
            quantidadelayout++;
          }
          posicao2--;
          if (posicao2 < 1) {
            posicao2 = quantidadelayout;
          }
          posicao = 6;
          buscar_arquivos(".WAV", false, posicao2, cartaodebusca);
        }
        nome = arquivosencontradonome[posicao];
        file = arquivosencontrado[posicao];
        String texto2[1];
        texto2[0] = nome;
        app_layout_texto_barra(texto2, 1);
        interrupcao = false;
      } else if (c == '2') {
        if (execucao) {
          execucao = false;
        } else {
          execucao = true;
        }
        int scrollx = 95;
        int scrolly = 30;
        if (execucao) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N4.BMP", 80 + scrollx, 140 - scrolly);
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N3.BMP", 80 + scrollx, 140 - scrolly);
        }
        TFTscreen.setColor(255, 0, 0);
        TFTscreen.fillCircle(80 + 56 + scrollx, 140 + 51 - scrolly, 12);
        TFTscreen.setFont(SmallFont);
        TFTscreen.setColor(255, 255, 255);
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        TFTscreen.print2("2", 80 + 54 + scrollx, 140 + 44 - scrolly);
      } else if (c == '3') {
        if (repet) {
        } else {
          if (aleatorio) {
            posicao = random(arquivosencontradocntagem - 1) + 1;
          } else {
            posicao++;
            if (posicao > arquivosencontradocntagem) {
              posicao = 1;
            }
          }
        }
        if (posicao > 6) {
          int quantidadelayout = int(arquivosencontradocntagem / 6);
          if ((arquivosencontradocntagem % 6) > 0) {
            quantidadelayout++;
          }
          posicao2++;
          if (posicao2 > quantidadelayout) {
            posicao2 = 1;
          }
          posicao = 1;
          buscar_arquivos(".WAV", false, posicao2, cartaodebusca);
        }
        nome = arquivosencontradonome[posicao];
        file = arquivosencontrado[posicao];
        String texto2[1];
        texto2[0] = nome;
        app_layout_texto_barra(texto2, 1);
        interrupcao = false;
      } else if (c == '4') {
        if (repet) {
        } else {
          if (aleatorio) {
            posicao = random(arquivosencontradocntagem - 1) + 1;
          } else {
            posicao = 1;
          }
        }
        posicao2 = 1;
        buscar_arquivos(".WAV", false, posicao2, cartaodebusca);
        nome = arquivosencontradonome[posicao];
        file = arquivosencontrado[posicao];
        String texto2[1];
        texto2[0] = nome;
        app_layout_texto_barra(texto2, 1);
        interrupcao = false;
      } else if (c == '5') {
        if (repet) {
        } else {
          if (aleatorio) {
            posicao = random(arquivosencontradocntagem - 1) + 1;
          } else {
            posicao = arquivosencontradocntagem;
          }
        }
        int quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao2 = quantidadelayout;
        buscar_arquivos(".WAV", false, posicao2, cartaodebusca);
        nome = arquivosencontradonome[posicao];
        file = arquivosencontrado[posicao];
        String texto2[1];
        texto2[0] = nome;
        app_layout_texto_barra(texto2, 1);
        interrupcao = false;
      } else if (c == '8') {
        String urlmusicafile = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
        nome = namefile(urlmusicafile);
        urlmusicafile.replace("+", "");
        file = urlmusicafile;
        execucao = true;
        interrupcao = false;
        printlayout = true;
      }
      if (printlayout)
      {
        buscar_arquivos(".WAV", false, posicao2, cartaodebusca);
        app_layout_actionbar_barra_1("Musica", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 127, 127, 127);
        printmusica(posicao);
      }
    }
  }
  void printmusica(int posicao) {
    int scrollx = 95;
    int scrolly = 30;
    app_layout_print_barra(0, 0, 0);
    printdataehora2();
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N2.BMP", 10 + scrollx, 140 - scrolly);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(10 + 56 + scrollx, 140 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 10 + 54 + scrollx, 140 + 44 - scrolly);
    if (execucao) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N4.BMP", 80 + scrollx, 140 - scrolly);
    } else {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N3.BMP", 80 + scrollx, 140 - scrolly);
    }
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(80 + 56 + scrollx, 140 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 80 + 54 + scrollx, 140 + 44 - scrolly);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N5.BMP", 150 + scrollx, 140 - scrolly);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(150 + 56 + scrollx, 140 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 150 + 54 + scrollx, 140 + 44 - scrolly);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N6.BMP", 220 + scrollx, 140 - scrolly);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(220 + 56 + scrollx, 140 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("4", 220 + 54 + scrollx, 140 + 44 - scrolly);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N7.BMP", 10 + scrollx, 205 - scrolly);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(10 + 56 + scrollx, 205 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("5", 10 + 54 + scrollx, 205 + 44 - scrolly);
    if (aleatorio) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N9.BMP", 80 + scrollx, 205 - scrolly);
    } else {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N8.BMP", 80 + scrollx, 205 - scrolly);
    }
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(80 + 56 + scrollx, 205 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("6", 80 + 54 + scrollx, 205 + 44 - scrolly);
    if (repet) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N11.BMP", 150 + scrollx, 205 - scrolly);
    } else {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N10.BMP", 150 + scrollx, 205 - scrolly);
    }
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(150 + 56 + scrollx, 205 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("7", 150 + 54 + scrollx, 205 + 44 - scrolly);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/MUS/N12.BMP", 220 + scrollx, 205 - scrolly);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(220 + 56 + scrollx, 205 + 51 - scrolly, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("8", 220 + 54 + scrollx, 205 + 44 - scrolly);
    printdataehora2();
    String texto[1];
    texto[0] = arquivosencontradonome[posicao];
    app_layout_texto_barra(texto, 1);
  }
};
//---------------------------------------------------------------------
//---------------------------DESKTOP-----------------------------------
void openaappgameandconfig(String valor) {
  if (texto.equals(nomegame[0])) {
    jogo_app_ball();
  } else if (texto.equals(nomegame[1])) {
    jogo_app_corrida();
    //---------------------------------------------------
  } else if (texto.equals(nomeconfiguracao[0])) {
    configuracao_som();
  } else if (texto.equals(nomeconfiguracao[1])) {
    configuracao_tela();
  } else if (texto.equals(nomeconfiguracao[2])) {
    configuracao_armazenamento();
  } else if (texto.equals(nomeconfiguracao[3])) {
    configuracao_bateria();
  } else if (texto.equals(nomeconfiguracao[4])) {
    configuracao_seguraca();
  } else if (texto.equals(nomeconfiguracao[5])) {
    configuracao_idioma();
  } else if (texto.equals(nomeconfiguracao[6])) {
    configuracao_datahora();
  } else if (texto.equals(nomeconfiguracao[7])) {
    configuracao_sobre();
    //---------------------------------------------------
  } else if (texto.equals(nomeaplicativo[0])) {
    app_blocodenota("", 0);
  } else if (texto.equals(nomeaplicativo[1])) {
    app_calculadora();
  } else if (texto.equals(nomeaplicativo[2])) {
    app_configuracao();
  } else if (texto.equals(nomeaplicativo[3])) {
    app_contregressiva();
  } else if (texto.equals(nomeaplicativo[4])) {
    app_cronometro();
  } else if (texto.equals(nomeaplicativo[5])) {
    app_despertador();
  } else if (texto.equals(nomeaplicativo[6])) {
    app_galeriaimage();
  } else if (texto.equals(nomeaplicativo[7])) {
    app_gerenciador_arquivo_memoria();
  } else if (texto.equals(nomeaplicativo[8])) {
    app_gerenciadorio();
  } else if (texto.equals(nomeaplicativo[9])) {
    app_gerenciadorsensor();
  } else if (texto.equals(nomeaplicativo[10])) {
    app_gerprocesso();
  } else if (texto.equals(nomeaplicativo[11])) {
  } else if (texto.equals(nomeaplicativo[12])) {
    app_iden5scipt();
  } else if (texto.equals(nomeaplicativo[13])) {
    app_game();
  } else if (texto.equals(nomeaplicativo[14])) {
    app_atividades();
  } else if (texto.equals(nomeaplicativo[15])) {
    app_galeria_musica musicaapp;
    musicaapp.galeria_musica();
  } else if (texto.equals(nomeaplicativo[16])) {
    app_outrosaplicatos();
  } else if (texto.equals(nomeaplicativo[17])) {
    app_desenhar("", 0);
  }
}
void abriraplicativoatalho(String dir) {
  String texto = lerarquivo(dir);
  texto.replace(" ", "");
  texto.replace("\n", "");
  texto.replace("\r", "");
  texto.replace("\t", "");
  openaappgameandconfig(texto);
}
String iconaplicativoatalho(String dir) {
  String texto = lerarquivo(dir);
  texto.replace(" ", "");
  texto.replace("\n", "");
  texto.replace("\r", "");
  texto.replace("\t", "");
  if (texto.equals(nomegame[0])) {
    return "SD::SD1/SYS.H/IMAGEM/GAME/M1.BMP";
  } else if (texto.equals(nomegame[1])) {
    return "SD::SD1/SYS.H/IMAGEM/GAME/M2.BMP";
    //---------------------------------------------------

  } else if (texto.equals(nomeconfiguracao[0])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M1.BMP";
  } else if (texto.equals(nomeconfiguracao[1])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M2.BMP";
  } else if (texto.equals(nomeconfiguracao[2])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP";
  } else if (texto.equals(nomeconfiguracao[3])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M4.BMP";
  } else if (texto.equals(nomeconfiguracao[4])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M5.BMP";
  } else if (texto.equals(nomeconfiguracao[5])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M6.BMP";
  } else if (texto.equals(nomeconfiguracao[6])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M7.BMP";
  } else if (texto.equals(nomeconfiguracao[7])) {
    return "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M8.BMP";
    //---------------------------------------------------
  } else if (texto.equals(nomeaplicativo[0])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP";
  } else if (texto.equals(nomeaplicativo[1])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M2.BMP";
  } else if (texto.equals(nomeaplicativo[2])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M3.BMP";
  } else if (texto.equals(nomeaplicativo[3])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M4.BMP";
  } else if (texto.equals(nomeaplicativo[4])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M5.BMP";
  } else if (texto.equals(nomeaplicativo[5])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M6.BMP";
  } else if (texto.equals(nomeaplicativo[6])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M7.BMP";
  } else if (texto.equals(nomeaplicativo[7])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP";
  } else if (texto.equals(nomeaplicativo[8])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M9.BMP";
  } else if (texto.equals(nomeaplicativo[9])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M10.BMP";
  } else if (texto.equals(nomeaplicativo[10])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M11.BMP";
  } else if (texto.equals(nomeaplicativo[11])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M12.BMP";
  } else if (texto.equals(nomeaplicativo[12])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP";
  } else if (texto.equals(nomeaplicativo[13])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M14.BMP";
  } else if (texto.equals(nomeaplicativo[14])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M15.BMP";
  } else if (texto.equals(nomeaplicativo[15])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP";
  } else if (texto.equals(nomeaplicativo[16])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M17.BMP";
  } else if (texto.equals(nomeaplicativo[17])) {
    return "SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP";
  }
}
void desktop() {
  String cartaodememoriadir;
  cartaodememoriadir = "SD::SD1/USUARIO/DESKTOP";
  boolean sairapp = false;
  limparvariavelbuscaarquivosgeral();
  diretoriogerpasta = cartaodememoriadir;
  int posicao = 1;
  printDirectory(posicao, diretoriogerpasta);
  imagegaleria(memoriareadint(9), 0, 0, 480, 320);
  app_layout_print_barra(0, 0, 0);
  printaarquivoslist();
  String texto[1];
  if (true) {
    int quantidadelayout = int(contagemdearquivos / 6);
    if ((contagemdearquivos % 6) > 0) {
      quantidadelayout++;
    }
    texto[0] = "DESKTOP: P";
    texto[0] += String(posicao) + "-" + String(quantidadelayout);
    app_layout_texto_barra(texto, 1);
  }
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
        menu_aplicativo();
        diretoriogerpasta = cartaodememoriadir;
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_TAB) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_ESC) {
        break;
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero;
        if (c == '1') {
          appnumero = 1;
        }
        if (c == '2') {
          appnumero = 2;
        }
        if (c == '3') {
          appnumero = 3;
        }
        if (c == '4') {
          appnumero = 4;
        }
        if (c == '5') {
          appnumero = 5;
        }
        if (c == '6') {
          appnumero = 6;
        }
        if (appnumero <= contagemdearquivos) {
          if (tipodearquivo[appnumero].equals("folder")) {
            diretoriogerpasta += arquivosger[appnumero];
            contagemdearquivosuri++;
            uriarquivosger[contagemdearquivosuri] = arquivosger[appnumero];
            posicao = 1;
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("bmp")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            visualizarimagem(uri, 2, 0, 0, 0);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("wav")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            tocarsom(uri, namearquivosger[appnumero]);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("n5s")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            TFTscreen.background(0, 0, 0);
            linguagemstruct func;
            func.interpretadorcomadosinitall(lerarquivo(uri));
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("lnk")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            abriraplicativoatalho(uri);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("txt")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += "+";
            uri += namearquivosger[appnumero];
            app_blocodenota(uri, 1);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("n5p")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += "+";
            uri += namearquivosger[appnumero];
            app_desenhar(uri, 1);
            printlayout = true;
          }
        }
      } else if (c == 'N') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          app_layout_carregamento("Nomear", "", 50);
          String urlcopia = diretoriogerpasta;
          urlcopia += "/";
          urlcopia += namearquivosger[poicao2];
          String urlcolar = diretoriogerpasta;
          urlcolar += "/";
          urlcolar += readtext1("Nomear", namearquivosger[poicao2]);
          if (!((urlcolar.equals("")) || (urlcolar.equals(urlcopia)))) {
            if (tipodearquivo[poicao2].equals("folder")) {
              areadetraferenciaurlcola = urlcolar;
              gerardiretorio(areadetraferenciaurlcola);
              url1 = "";
              for (int i = 0; i <= 99; i++) {
                memoriagerenciadorarquivo[i] = "";
              }
              urlcopia = diretoriogerpasta;
              urlcopia += "/";
              urlcopia += "+";
              urlcopia += namearquivosger[poicao2];
              areadetraferenciaurl = urlcopia;
              urlcopia.replace("+", "");
              colarpasta(consultardiretoriopastaSD(urlcopia), 0);
              removediretorio(urlcopia);
              areadetraferenciaurl = "";
              areadetraferenciaurlcola = "";
            } else {
              colararquivo(urlcopia, urlcolar);
              removearquivo(urlcopia);
            }
          }
          app_layout_carregamento("Nomear", "", 100);
          posicao = 1;
          printlayout = true;
        }
      } else if (c == 'I') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          app_layout_print_dialogo2("Informacao", "");
          carregarshow(228, 154, 20, 4, 255, 255, 255);
          String urlcopia = diretoriogerpasta;
          urlcopia += "/";
          urlcopia += namearquivosger[poicao2];
          informacaofile(urlcopia);
          carregarshow(228, 154, 20, 4, 255, 255, 255);
          posicao = 1;
          printlayout = true;
        }
      } else if (c == 'A') {
        app_layout_carregamento("Criar File", "", 50);
        String urlcolar = diretoriogerpasta;
        urlcolar += "/";
        urlcolar += readtext1("Criar Arquivo", "SemNome.txt");
        if (!(urlcolar.equals(""))) {
          gravararquivo(urlcolar, "");
        }
        app_layout_carregamento("Criar File", "", 100);
        posicao = 1;
        printlayout = true;
      } else if (c == 'P') {
        app_layout_carregamento("Criar Dir", "", 50);
        String urlcolar = diretoriogerpasta;
        urlcolar += "/";
        urlcolar += readtext1("Criar Diretorio", "Nova Pasta");
        if (!(urlcolar.equals(""))) {
          gerardiretorio(urlcolar);
        }
        app_layout_carregamento("Criar Dir", "", 100);
        posicao = 1;
        printlayout = true;
      } else if (c == 'C') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          areadetraferenciaurl = diretoriogerpasta;
          areadetraferenciaurl += "/";
          areadetraferenciaurl += "+";
          areadetraferenciaurl += namearquivosger[poicao2];
          if (tipodearquivo[poicao2].equals("folder")) {
            tipoareadetraferenciaurl = "folder";
          } else {
            tipoareadetraferenciaurl = "";
          }
          tipoareadetraferenciaurlcola = "";
          printlayout = true;
        }
      } else if (c == 'X') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          areadetraferenciaurl = diretoriogerpasta;
          areadetraferenciaurl += "/";
          areadetraferenciaurl += "+";
          areadetraferenciaurl += namearquivosger[poicao2];
          if (tipodearquivo[poicao2].equals("folder")) {
            tipoareadetraferenciaurl = "folder";
          } else {
            tipoareadetraferenciaurl = "";
          }
          tipoareadetraferenciaurlcola = "recortar";
          printlayout = true;
        }
      } else if (c == 'V') {
        if (tipoareadetraferenciaurl.equals("folder")) {
          areadetraferenciaurlcola = diretoriogerpasta;
          areadetraferenciaurlcola += "/";
          areadetraferenciaurlcola += namefile(areadetraferenciaurl);
          gerardiretorio(areadetraferenciaurlcola);
          url1 = "";
          for (int i = 0; i <= 99; i++) {
            memoriagerenciadorarquivo[i] = "";
          }
          String urlcopia = areadetraferenciaurl;
          urlcopia.replace("+", "");
          colarpasta(consultardiretoriopastaSD(urlcopia), 0);
          if (tipoareadetraferenciaurlcola.equals("recortar")) {
            removediretorio(urlcopia);
          }
        } else {
          String urlcopia = areadetraferenciaurl;
          String urlcolar = diretoriogerpasta;
          urlcolar += "/";
          urlcolar += namefile(urlcopia);
          urlcopia.replace("+", "");
          colararquivo_dialogo(urlcopia, urlcolar);
          if (tipoareadetraferenciaurlcola.equals("recortar")) {
            removearquivo(urlcopia);
          }
        }
        for (int i = 0; i <= 99; i++) {
          memoriagerenciadorarquivo[i] = "";
        }
        posicao = 1;
        tipoareadetraferenciaurl = "";
        areadetraferenciaurlcola = "";
        areadetraferenciaurl = "";
        tipoareadetraferenciaurlcola = "";
        printlayout = true;
      } else if (c == 'D') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          app_layout_carregamento("Deletar", "", 50);
          String urldeletar = diretoriogerpasta;
          urldeletar += "/";
          urldeletar += namearquivosger[poicao2];
          if (tipodearquivo[poicao2].equals("folder")) {
            removediretorio(urldeletar);
          } else {
            removearquivo(urldeletar);
          }
          app_layout_carregamento("Deletar", "", 100);
          posicao = 1;
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_DELETE) {
        if (!(diretoriogerpasta.equals(cartaodememoriadir))) {
          diretoriogerpasta.replace(uriarquivosger[contagemdearquivosuri], "");
          uriarquivosger[contagemdearquivosuri] = "";
          contagemdearquivosuri--;
          if (diretoriogerpasta.equals("")) {
            diretoriogerpasta = cartaodememoriadir;
          }
          posicao = 1;
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      limparvariavelbuscaarquivos();
      printDirectory(posicao, diretoriogerpasta);
      imagegaleria(memoriareadint(9), 0, 0, 480, 320);
      app_layout_print_barra(0, 0, 0);
      printaarquivoslist();
      int quantidadelayout = int(contagemdearquivos / 6);
      if ((contagemdearquivos % 6) > 0) {
        quantidadelayout++;
      }
      texto[0] = "DESKTOP: P";
      texto[0] += String(posicao) + "-" + String(quantidadelayout);
      app_layout_texto_barra(texto, 1);
    }
  }
}
void criarpastaemsdcardinicial() {
  //gerardiretorio("SD::SD1/USUARIO/DESKTOP");
  //gerardiretorio("SD::SD1/USUARIO/APP.H");
  //gerardiretorio("SD::SD1/USUARIO/DOCUM");
  //gerardiretorio("SD::SD1/USUARIO/IMAGEM");
  //gerardiretorio("SD::SD1/USUARIO/MUSICA");
}
//---------------------------------------------------------------------
//---------------------------Menu--------------------------------------
void printbackapp(int item) {
  TFTscreen.clrScr();
  TFTscreen.fillScr(21, 21, 21);
  app_layout_print_barra(0, 0, 0);
  int scroll = 30;
  if (((((item - 1) * 6) + 1) <= quantidadedeaplicativo)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/APLICA~1/M";
    uri += String(((item - 1) * 6) + 1);
    uri += ".bmp";
    printimagetransparente(uri, 81, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeaplicativo[((item - 1) * 6)].c_str(), 65, 169 - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 150 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 143, 143 - scroll);
  }
  if (((((item - 1) * 6) + 2) <= quantidadedeaplicativo)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/APLICA~1/M";
    uri += String(((item - 1) * 6) + 2);
    uri += ".bmp";
    printimagetransparente(uri, 201, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeaplicativo[((item - 1) * 6) + 1].c_str(), 185, 169 - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 150 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 263, 143 - scroll);
  }
  if (((((item - 1) * 6) + 3) <= quantidadedeaplicativo)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/APLICA~1/M";
    uri += String(((item - 1) * 6) + 3);
    uri += ".bmp";
    printimagetransparente(uri, 331, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeaplicativo[((item - 1) * 6) + 2].c_str(), 315, 169 - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 150 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 393, 143 - scroll);
  }
  if (((((item - 1) * 6) + 4) <= quantidadedeaplicativo)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/APLICA~1/M";
    uri += String(((item - 1) * 6) + 4);
    uri += ".bmp";
    printimagetransparente(uri, 81, 193 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeaplicativo[((item - 1) * 6) + 3].c_str(), 65, 269 - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 250 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("4", 143, 243 - scroll);
  }
  if (((((item - 1) * 6) + 5) <= quantidadedeaplicativo)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/APLICA~1/M";
    uri += String(((item - 1) * 6) + 5);
    uri += ".bmp";
    printimagetransparente(uri, 201, 193 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeaplicativo[((item - 1) * 6) + 4].c_str(), 185, 269 - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 250 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("5", 263, 243 - scroll);
  }
  if (((((item - 1) * 6) + 6) <= quantidadedeaplicativo)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/APLICA~1/M";
    uri += String(((item - 1) * 6) + 6);
    uri += ".bmp";
    printimagetransparente(uri, 331, 193 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeaplicativo[((item - 1) * 6) + 5].c_str(), 315, 269 - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 250 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("6", 393, 243 - scroll);
  }
}
void printapp(int item) {
  TFTscreen.clrScr();
  TFTscreen.fillScr(230, 230, 230);
  String uri = "SD::SD1/SYS.H/IMAGEM/APLICA~1/M";
  uri += String(item);
  uri += ".bmp";
  printimagetransparente(uri, 211, 131);
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2(nomeaplicativo[item - 1].c_str(), 195, 207);
  delay(3000);
}
void menu_aplicativo() {
  int posicao = 1;
  printbackapp(posicao);
  String texto[1];
  if (true) {
    int  quantidadelayout = int(quantidadedeaplicativo / 6);
    if ((quantidadedeaplicativo % 6) > 0) {
      quantidadelayout++;
    }
    texto[0] = "MENU APP: P";
    texto[0] += String(posicao) + "-" + String(quantidadelayout);
    app_layout_texto_barra(texto, 1);
  }
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero = ((posicao - 1) * 6);
        if (c == '1') {
          appnumero += 1;
        }
        if (c == '2') {
          appnumero += 2;
        }
        if (c == '3') {
          appnumero += 3;
        }
        if (c == '4') {
          appnumero += 4;
        }
        if (c == '5') {
          appnumero += 5;
        }
        if (c == '6') {
          appnumero += 6;
        }
        if (appnumero <= quantidadedeaplicativo) {
          printapp(appnumero);
          delay(250);
          switch (appnumero) {
            case 1:
              app_blocodenota("", 0);
              break;
            case 2:
              app_calculadora();
              break;
            case 3:
              app_configuracao();
              break;
            case 4:
              app_contregressiva();
              break;
            case 5:
              app_cronometro();
              break;
            case 6:
              app_despertador();
              break;
            case 7:
              app_galeriaimage();
              break;
            case 8:
              app_gerenciador_arquivo_memoria();
              break;
            case 9:
              app_gerenciadorio();
              break;
            case 10:
              app_gerenciadorsensor();
              break;
            case 11:
              app_gerprocesso();
              break;
            case 12:
              break;
            case 13:
              app_iden5scipt();
              break;
            case 14:
              app_game();
              break;
            case 15:
              app_atividades();
              break;
            case 16:
              app_galeria_musica musicaapp;
              musicaapp.galeria_musica();
              break;
            case 17:
              app_outrosaplicatos();
              break;
            case 18:
              app_desenhar("", 0);
              break;
          }
          if (desligarn5) {
            break;
          } else {
            printlayout = true;
          }
        }
      } else if (c == PS2_ESC) {
        break;
      } else if (c == PS2_TAB) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        int  quantidadelayout = int(quantidadedeaplicativo / 6);
        if ((quantidadedeaplicativo % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(quantidadedeaplicativo / 6);
        if ((quantidadedeaplicativo % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(quantidadedeaplicativo / 6);
        if ((quantidadedeaplicativo % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(quantidadedeaplicativo / 6);
        if ((quantidadedeaplicativo % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      printbackapp(posicao);
      int  quantidadelayout = int(quantidadedeaplicativo / 6);
      if ((quantidadedeaplicativo % 6) > 0) {
        quantidadelayout++;
      }
      texto[0] = "MENU APP: P";
      texto[0] += String(posicao) + "-" + String(quantidadelayout);
      app_layout_texto_barra(texto, 1);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------BLOCO DE NOTA-----------------------------
void app_blocodenota(String uri, int opcao) {
  int scroll = 0;
  int cursory = 0;
  int cursorx = 0;
  int espacoeixoX = 8;
  int espacoeixoY = 12;
  String nomearquivo[1];
  String enderecoarquivo;
  boolean sairapp = false;
  int marginedittext = 5;
  int edittexteixoY1 = 110;
  int edittexteixoX1 = 80;
  int edittexteixoY2 = 250;
  int edittexteixoX2 = 410;
  int edittexteixoX =  edittexteixoX2 - edittexteixoX1;
  int edittexteixoY = edittexteixoY2 - edittexteixoY1;
  String arraycampotexto = "";
  app_layout_actionbar_barra_1("Bloco de Nota", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 0, 0, 100);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
  if (opcao == 1) {
    scroll = 0;
    cursory = 0;
    cursorx = 0;
    espacoeixoX = 8;
    espacoeixoY = 12;
    marginedittext = 5;
    enderecoarquivo = uri;
    if (!(enderecoarquivo.equals(""))) {
      nomearquivo[0] = namefile(enderecoarquivo);
      enderecoarquivo.replace("+", "");
      String valor = lerarquivo(enderecoarquivo);
      arraycampotexto = valor;
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    for (int i = 1; i < arraycampotexto.length() + 1; i++) {
      int numerolinha = 0;
      int numerocoluna = 0;
      if ((i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) > int(i / int((edittexteixoX - espacoeixoX) / espacoeixoX))) {
        numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) + 1;
      } else {
        if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) - 1;
        } else {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX));
        }
      }
      if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
        numerocoluna = int((edittexteixoX - espacoeixoX) / espacoeixoX);
      } else {
        numerocoluna = (i % int((edittexteixoX - espacoeixoX) / espacoeixoX));
      }
      if ((((numerolinha * espacoeixoY) + marginedittext + scroll) > 0) && (!(String(arraycampotexto.charAt(i - 1)).equals(""))) && ((edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
        if ((!(String(arraycampotexto.charAt(i - 1)).equals(" "))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\n"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\t"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\r")))) {
          TFTscreen.printChar(arraycampotexto.charAt(i - 1), edittexteixoX1 + (((numerocoluna - 1) * espacoeixoX) + marginedittext), edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll));
        }
      }
    }
    if ((((cursory * espacoeixoY) + marginedittext + scroll + 1) > 0) && ((edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
      TFTscreen.printChar('|', edittexteixoX1 + ((cursorx * espacoeixoX) + marginedittext), edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll + 1));
    }
  }
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
      if (c == PS2_ENTER) {
        cursory += 1;
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
        }
      } else if (c == PS2_TAB) {
        cursorx += 4;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 0;
          cursory += 1;
        }
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
        }
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (10 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (10 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Bloco de Nota", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Novo", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Abrir", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Salvar", 112 + 14, 67 + (6 * 16));
        TFTscreen.print2("5) Voltar", 112 + 14, 67 + (7 * 16));
        TFTscreen.print2("6) Desligar N5", 112 + 14, 67 + (8 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              scroll = 0;
              cursory = 0;
              cursorx = 0;
              espacoeixoX = 8;
              espacoeixoY = 12;
              marginedittext = 5;
              arraycampotexto = "";
              break;
            } else if (c == '3') {
              scroll = 0;
              cursory = 0;
              cursorx = 0;
              espacoeixoX = 8;
              espacoeixoY = 12;
              marginedittext = 5;
              enderecoarquivo = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
              if (!(enderecoarquivo.equals(""))) {
                nomearquivo[0] = namefile(enderecoarquivo);
                enderecoarquivo.replace("+", "");
                String valor = lerarquivo(enderecoarquivo);
                arraycampotexto = valor;
              }
              if (desligarn5) {
                sairapp = true;
              }
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              if (enderecoarquivo.equals("")) {
                salvararquivo(1, "", "", arraycampotexto);
              } else {
                salvararquivo(2, "", enderecoarquivo, arraycampotexto);
              }
              if (desligarn5) {
                sairapp = true;
              }
              break;
            } else if (c == '5') {
              break;
            } else if (c == '6') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;

            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_PAGEDOWN) {
      } else if (c == PS2_PAGEUP) {
      } else if (c == PS2_LEFTARROW) {
        cursorx -= 1;
        if (cursorx < 0) {
          cursorx = ((edittexteixoX - espacoeixoX) / espacoeixoX);
          cursory -= 1;
        }
        if (cursory < 0) {
          cursory = 0;
        }
      } else if (c == PS2_RIGHTARROW) {
        cursorx += 1;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 0;
          cursory += 1;
        }
      } else if (c == PS2_UPARROW) {
        cursory -= 1;
        if (cursory < 0) {
          cursory = 0;
        }
      } else if (c == PS2_DOWNARROW) {
        cursory += 1;
      } else if (c == PS2_DELETE) {
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          if (((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) > int((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX))) {
            cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) + 1;
          } else {
            if (((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
              cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) - 1;
            } else {
              cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX));
            }
          }
          if (((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
            cursorx = int((edittexteixoX - espacoeixoX) / espacoeixoX);
          } else {
            cursorx = ((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX));
          }
        }
        String textoanterio = arraycampotexto.substring(0, cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
        String textoposterio = arraycampotexto.substring(1 + cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
        arraycampotexto = "";
        arraycampotexto += textoanterio;
        arraycampotexto += textoposterio;
        if (arraycampotexto.equals("")) {
          scroll = 0;
          cursory = 0;
          cursorx = 0;
          espacoeixoX = 8;
          espacoeixoY = 12;
          marginedittext = 5;
          arraycampotexto = "";
        }
      } else {
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
          arraycampotexto += String(c);
        } else {
          String textoanterio = arraycampotexto.substring(0, cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
          String textoposterio = arraycampotexto.substring(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
          arraycampotexto = "";
          arraycampotexto += textoanterio;
          arraycampotexto += String(c);
          arraycampotexto += textoposterio;
        }
        cursorx += 1;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 1;
          cursory += 1;
        }
      }
    }
    scroll = (edittexteixoY - espacoeixoY) - (cursory * (espacoeixoY + 1));
    if (scroll > 0) {
      scroll = 0;
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Bloco de Nota", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 0, 0, 100);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    for (int i = 1; i < arraycampotexto.length() + 1; i++) {
      int numerolinha = 0;
      int numerocoluna = 0;
      if ((i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) > int(i / int((edittexteixoX - espacoeixoX) / espacoeixoX))) {
        numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) + 1;
      } else {
        if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) - 1;
        } else {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX));
        }
      }
      if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
        numerocoluna = int((edittexteixoX - espacoeixoX) / espacoeixoX);
      } else {
        numerocoluna = (i % int((edittexteixoX - espacoeixoX) / espacoeixoX));
      }
      if ((((numerolinha * espacoeixoY) + marginedittext + scroll) > 0) && (!(String(arraycampotexto.charAt(i - 1)).equals(""))) && ((edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
        if ((!(String(arraycampotexto.charAt(i - 1)).equals(" "))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\n"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\t"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\r")))) {
          TFTscreen.printChar(arraycampotexto.charAt(i - 1), edittexteixoX1 + (((numerocoluna - 1) * espacoeixoX) + marginedittext), edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll));
        }
      }
    }
    if ((((cursory * espacoeixoY) + marginedittext + scroll + 1) > 0) && ((edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
      TFTscreen.printChar('|', edittexteixoX1 + ((cursorx * espacoeixoX) + marginedittext), edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll + 1));
    }
  }
}

//---------------------------------------------------------------------
//---------------------------CALCULADORA-------------------------------
String calcladoracal(String valores) {
  String value;
  String analisandovalor;
  String fucaoariteminica1;
  String fucaoariteminica2;
  double    calculolanguagem;
  boolean possufuncaoaritemica = false;
  for (int contagedecalculovariave1 = 0; contagedecalculovariave1 < valores.length(); contagedecalculovariave1++) {
    delay(1);
    if ((String(valores.charAt(contagedecalculovariave1)).equals("+")) || (String(valores.charAt(contagedecalculovariave1)).equals("*")) || (String(valores.charAt(contagedecalculovariave1)).equals("/")) || (String(valores.charAt(contagedecalculovariave1)).equals("-")) || (String(valores.charAt(contagedecalculovariave1)).equals("%")) || (String(valores.charAt(contagedecalculovariave1)).equals("&")) || (String(valores.charAt(contagedecalculovariave1)).equals("^"))) {
      fucaoariteminica1 = fucaoariteminica2;
      fucaoariteminica2 = String(valores.charAt(contagedecalculovariave1));
      if (!possufuncaoaritemica) {
        calculolanguagem = convertestrtodouble(analisandovalor);
        analisandovalor = "";
        possufuncaoaritemica = true;
      } else {
        if (fucaoariteminica1.equals("+")) {
          calculolanguagem += convertestrtodouble(analisandovalor);
          analisandovalor = "";
        }
        if (fucaoariteminica1.equals("*")) {
          calculolanguagem *= convertestrtodouble(analisandovalor);
          analisandovalor = "";
        }
        if (fucaoariteminica1.equals("/")) {
          calculolanguagem /= convertestrtodouble(analisandovalor);
          analisandovalor = "";
        }
        if (fucaoariteminica1.equals("-")) {
          calculolanguagem -= convertestrtodouble(analisandovalor);
          analisandovalor = "";
        }
        if (fucaoariteminica1.equals("%")) {
          calculolanguagem = (calculolanguagem *  convertestrtodouble(analisandovalor)) / 100;
          analisandovalor = "";
        }
        if (fucaoariteminica1.equals("^")) {
          calculolanguagem = pow(calculolanguagem, convertestrtodouble(analisandovalor));
          analisandovalor = "";
        }
        if (fucaoariteminica1.equals("&")) {
          calculolanguagem = convertestrtodouble(String(String(calculolanguagem).toInt() % analisandovalor.toInt()));
          analisandovalor = "";
        }
      }
    } else {
      if ((String(valores.charAt(contagedecalculovariave1)).equals(" ")) || (String(valores.charAt(contagedecalculovariave1)).equals("\n")) || (String(valores.charAt(contagedecalculovariave1)).equals("\r")) || (String(valores.charAt(contagedecalculovariave1)).equals("\t"))) {
      } else {
        analisandovalor += valores.charAt(contagedecalculovariave1);
      }
      if (String(valores.charAt(contagedecalculovariave1)).equals("(")) {
        value = "";
        int ladodireito = 1;
        int ladoesquerdo = 0;
        while (true) {
          delay(1);
          contagedecalculovariave1++;
          if ((String(valores.charAt(contagedecalculovariave1)).equals(")")) && (ladodireito == (ladoesquerdo + 1))) {
            String verificarvariavel = String(calcladoracal(value));
            if (verificarvariavel.equals("")) {
            } else {
              value = verificarvariavel;
            }
            analisandovalor = value;
            value = "";
            break;
          } else {
            if (String(valores.charAt(contagedecalculovariave1)).equals("(")) {
              ladodireito++;
            }
            if (String(valores.charAt(contagedecalculovariave1)).equals(")")) {
              ladoesquerdo++;
            }
            value += String(valores.charAt(contagedecalculovariave1));
          }
        }
      }
      String retornavalor = calculadorafun(valores, analisandovalor, contagedecalculovariave1);
      if (retornavalor.equals("")) {
      } else {
        String verificarafinaliza = String(valores.charAt(contagedecalculovariave1 + 1));
        if (verificarafinaliza.equals("(")) {
          contagedecalculovariave1++;
          verificarafinaliza = "";
          while (true) {
            delay(1);
            contagedecalculovariave1++;
            verificarafinaliza = String(valores.charAt(contagedecalculovariave1));
            if (verificarafinaliza.equals(")")) {
              verificarafinaliza = "";
              break;
            } else {
              if (String(valores.charAt(contagedecalculovariave1)).equals(" ") || (String(valores.charAt(contagedecalculovariave1)).equals("\n")) || (String(valores.charAt(contagedecalculovariave1)).equals("\r")) || (String(valores.charAt(contagedecalculovariave1)).equals("\t"))) {
              }
            }
          }
        }
        analisandovalor = retornavalor;
      }
    }
  }
  if (possufuncaoaritemica) {
    fucaoariteminica1 = fucaoariteminica2;
    if (fucaoariteminica1.equals("+")) {
      calculolanguagem += convertestrtodouble(analisandovalor);
      analisandovalor = "";
    }
    if (fucaoariteminica1.equals("*")) {
      calculolanguagem *= convertestrtodouble(analisandovalor);
      analisandovalor = "";
    }
    if (fucaoariteminica1.equals("/")) {
      calculolanguagem /= convertestrtodouble(analisandovalor);
      analisandovalor = "";
    }
    if (fucaoariteminica1.equals("-")) {
      calculolanguagem -= convertestrtodouble(analisandovalor);
      analisandovalor = "";
    }
    if (fucaoariteminica1.equals("%")) {
      calculolanguagem = (calculolanguagem *  convertestrtodouble(analisandovalor)) / 100;
      analisandovalor = "";
    }
    if (fucaoariteminica1.equals("^")) {
      calculolanguagem = pow(calculolanguagem, convertestrtodouble(analisandovalor));
      analisandovalor = "";
    }
    if (fucaoariteminica1.equals("&")) {
      calculolanguagem = convertestrtodouble(String(String(calculolanguagem).toInt() % analisandovalor.toInt()));
      analisandovalor = "";
    }
  } else {
    calculolanguagem = convertestrtodouble(analisandovalor);
    analisandovalor = "";
  }
  return transfordoublecasadecimais1(calculolanguagem);
}
String calculadorafun(String text, String funcao, int i) {
  int u = 0;
  String valuer;
  int contagem = 0;
  String retornavalor;
  String funlanguagem;
  String textoad[4];
  int numerofuncao = 0;
  if (funcao.equals("Max")) {
    numerofuncao = 1;
  } else if (funcao.equals("Pow")) {
    numerofuncao = 2;
  } else if (funcao.equals("Min")) {
    numerofuncao = 3;
  } else if (funcao.equals("Map")) {
    numerofuncao = 4;
  } else if (funcao.equals("Nanis")) {
    numerofuncao = 5;
  } else if (funcao.equals("Exp")) {
    numerofuncao = 6;
  } else if (funcao.equals("Fnisi")) {
    numerofuncao = 7;
  } else if (funcao.equals("Log")) {
    numerofuncao = 8;
  } else if (funcao.equals("10log")) {
    numerofuncao = 9;
  } else if (funcao.equals("Tan")) {
    numerofuncao = 10;
  } else if (funcao.equals("Cos")) {
    numerofuncao = 11;
  } else if (funcao.equals("Sin")) {
    numerofuncao = 12;
  } else if (funcao.equals("Rtan")) {
    numerofuncao = 13;
  } else if (funcao.equals("Rcos")) {
    numerofuncao = 14;
  } else if (funcao.equals("Rsin")) {
    numerofuncao = 15;
  } else if (funcao.equals("Ratan")) {
    numerofuncao = 16;
  } else if (funcao.equals("Racos")) {
    numerofuncao = 17;
  } else if (funcao.equals("Rasin")) {
    numerofuncao = 18;
  } else if (funcao.equals("Atan")) {
    numerofuncao = 19;
  } else if (funcao.equals("Acos")) {
    numerofuncao = 20;
  } else if (funcao.equals("Asin")) {
    numerofuncao = 21;
  }  else if (funcao.equals("Sqrt")) {
    numerofuncao = 22;
  } else if (funcao.equals("Abs")) {
    numerofuncao = 23;
  } else if (funcao.equals("Constrain")) {
    numerofuncao = 24;
  }
  if (numerofuncao != 0) {
    while (true) {
      delay(1);
      i++;
      funlanguagem = String(text.charAt(i));
      if (funlanguagem.equals("(")) {
        funlanguagem = "";
        int ladodireito = 1;
        int ladoesquerdo = 0;
        while (true) {
          delay(1);
          i++;
          if ((String(text.charAt(i)).equals(")")) && (ladodireito == (ladoesquerdo + 1))) {
            textoad[contagem] = valuer;
            valuer = "";
            funlanguagem = "";
            break;
          } else {
            if (funlanguagem.equals(",")) {
              textoad[contagem] = valuer;
              valuer = "";
              contagem++;
              funlanguagem = "";
            } else {
              if (String(text.charAt(i)).equals("(")) {
                ladodireito++;
              }
              if (String(text.charAt(i)).equals(")")) {
                ladoesquerdo++;
              }
              if ( (String(text.charAt(i)).equals("\n")) || (String(text.charAt(i)).equals("\r")) || (String(text.charAt(i)).equals("\t"))) {
              } else {
                valuer += text.charAt(i);
              }
            }
          }
        }
        break;
      }
    }
    if ( numerofuncao == 1) {
      retornavalor = String(max(convertestrtodouble(calcladoracal(textoad[0])), convertestrtodouble(calcladoracal(textoad[1]))));
    } else if ( numerofuncao == 2) {
      retornavalor = String(pow(convertestrtodouble(calcladoracal(textoad[0])), convertestrtodouble(calcladoracal(textoad[1]))));
    } else if ( numerofuncao == 3) {
      retornavalor = String(min(convertestrtodouble(calcladoracal(textoad[0])), convertestrtodouble(calcladoracal(textoad[1]))));
    } else if ( numerofuncao == 4) {
      retornavalor = String(map(convertestrtodouble(calcladoracal(textoad[0])), convertestrtodouble(calcladoracal(textoad[1])), convertestrtodouble(calcladoracal(textoad[2])), convertestrtodouble(calcladoracal(textoad[3])), convertestrtodouble(calcladoracal(textoad[4]))));
    } else if ( numerofuncao == 5) {
      retornavalor = String(isnan( convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 6) {
      retornavalor = String(exp(convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 7) {
      retornavalor = String(isinf(convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 8) {
      retornavalor = String(log(convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 9) {
      retornavalor = String(log10(convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 10) {
      retornavalor = String(tan( convertestrtodouble(calcladoracal(textoad[0])) * PI / 180));
    } else if ( numerofuncao == 11) {
      retornavalor = String(cos( convertestrtodouble(calcladoracal(textoad[0])) * PI / 180));
    } else if ( numerofuncao == 12) {
      retornavalor = String(sin( convertestrtodouble(calcladoracal(textoad[0])) * PI / 180));
    } else if ( numerofuncao == 13) {
      retornavalor = String(tan( convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 14) {
      retornavalor = String(cos( convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 15) {
      retornavalor = String(sin( convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 16) {
      retornavalor = String(atan( convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 17) {
      retornavalor = String(acos( convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 18) {
      retornavalor = String(asin( convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 19) {
      retornavalor = String((atan( convertestrtodouble(calcladoracal(textoad[0]))) * 180 / PI));
    } else if ( numerofuncao == 20) {
      retornavalor = String((acos( convertestrtodouble(calcladoracal(textoad[0]))) * 180 / PI));
    } else if ( numerofuncao == 21) {
      retornavalor = String((asin( convertestrtodouble(calcladoracal(textoad[0]))) * 180 / PI));
    }  else if ( numerofuncao == 22) {
      retornavalor = String(sqrt(convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 23) {
      retornavalor = String(abs(convertestrtodouble(calcladoracal(textoad[0]))));
    } else if ( numerofuncao == 24) {
      retornavalor = String(constrain(convertestrtodouble(calcladoracal(textoad[0])), convertestrtodouble(calcladoracal(textoad[1])), convertestrtodouble(calcladoracal(textoad[2]))));
    }
    valuer = "";
    contagem = 0;
  }
  return retornavalor;
}
void dialogo_calculadora() {
  int i = 0;
  int curso = 0;
  String acumulador;
  boolean sairapp = false;
  TFTscreen.background(0, 0, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (6 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2("Calculadora", 112 + 14, 67 + (1 * 16));
  TFTscreen.setColor(200, 200, 200);
  TFTscreen.fillRoundRect(112 + 14, 67 + (3 * 16), 112 + 255 - 14, 67 + (5 * 16));
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      TFTscreen.setColor(200, 200, 200);
      TFTscreen.setBackColor(VGA_TRANSPARENT);
      curso = 0;
      for (int j = i; j <= acumulador.length(); j++) {
        curso++;
        if (curso <= 14) {
          TFTscreen.print2(String(acumulador.charAt(j - 1)), 112 + 14 + ((j - i) * 15), 77 + (3 * 16));
        }
      }
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
        i = 0;
        acumulador = calcladoracal(acumulador);
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Calculadora", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        i--;
        if (i < 0) {
          i = 0;
        }
      } else if (c == PS2_RIGHTARROW) {
        i++;
        if (i > acumulador.length()) {
          i = acumulador.length();
        }
      } else if (c == PS2_DELETE) {
        i--;
        if (i < 0) {
          i = 0;
        }
        String apaga = "";
        for (int j = 1; j < acumulador.length(); j++) {
          apaga += acumulador.charAt(j - 1);
        }
        acumulador = apaga;
      } else {
        String entrada1 = String(c);
        acumulador = acumulador + entrada1;
        if (acumulador.length() >= 14) {
          i++;
        }
      }
      TFTscreen.setColor(0, 0, 0);
      TFTscreen.setBackColor(VGA_TRANSPARENT);
      curso = 0;
      for (int j = i; j <= acumulador.length(); j++) {
        curso++;
        if (curso <= 14) {
          TFTscreen.print2(String(acumulador.charAt(j - 1)), 112 + 14 + ((j - i) * 15), 77 + (3 * 16));
        }
      }
    }
    if (printlayout)
    {
      TFTscreen.background(0, 0, 0);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (6 * 16));
      TFTscreen.setColor(0, 0, 0);
      TFTscreen.setBackColor(230, 230, 230);
      TFTscreen.setFont(BigFont);
      TFTscreen.print2("Calculadora", 112 + 14, 67 + (1 * 16));
      TFTscreen.setColor(200, 200, 200);
      TFTscreen.fillRoundRect(112 + 14, 67 + (3 * 16), 112 + 255 - 14, 67 + (5 * 16));
    }
  }
}

void app_calculadora() {
  int i = 0;
  int curso = 0;
  String acumulador;
  app_layout_actionbar_barra_1("Calculadora", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M2.BMP", 127, 127, 0);
  boolean sairapp = false;
  TFTscreen.setColor(200, 200, 200);
  TFTscreen.fillRoundRect(30, 57 + (3 * 16), 450, 57 + (8 * 16));
  app_layout_print_paragrafo_1("Max; Pow; Min; Map; Nanis; Exp; Fnisi; Log; 10Log; Tan; Cos; Sin; Rtan; Rcos; Rsin; Ratan; Racos; Rasin; Atan; Acos; Asin; Sqrt; Abs; Constrain.", 30, 77 + (8 * 16), 450, 260, 0, 0, 0);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      TFTscreen.setTextSize(5);
      TFTscreen.stroke(200, 200, 200);
      TFTscreen.setCursor(75, 77 + (3 * 16));
      curso = 0;
      for (int j = i; j <= acumulador.length(); j++) {
        curso++;
        if (curso <= 11) {
          TFTscreen.print(String(acumulador.charAt(j - 1)));
        }
      }
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
        i = 0;
        acumulador = calcladoracal(acumulador);
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Calculadora", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        i--;
        if (i < 0) {
          i = 0;
        }
      } else if (c == PS2_RIGHTARROW) {
        i++;
        if (i > acumulador.length()) {
          i = acumulador.length();
        }
      } else if (c == PS2_DELETE) {
        i--;
        if (i < 0) {
          i = 0;
        }
        String apaga = "";
        for (int j = 1; j < acumulador.length(); j++) {
          apaga += acumulador.charAt(j - 1);
        }
        acumulador = apaga;
      } else {
        String entrada1 = String(c);
        acumulador = acumulador + entrada1;
        if (acumulador.length() >= 11) {
          i++;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Calculadora", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M2.BMP", 127, 127, 0);
      TFTscreen.setColor(200, 200, 200);
      TFTscreen.fillRoundRect(30, 57 + (3 * 16), 450, 57 + (8 * 16));
      app_layout_print_paragrafo_1("Max; Pow; Min; Map; Nanis; Exp; Fnisi; Log; 10Log; Tan; Cos; Sin; Rtan; Rcos; Rsin; Ratan; Racos; Rasin; Atan; Acos; Asin; Sqrt; Abs; Constrain.", 30, 77 + (8 * 16), 450, 260, 0, 0, 0);
    }
    TFTscreen.setTextSize(5);
    TFTscreen.stroke(0, 0, 0);
    TFTscreen.setCursor(75, 77 + (3 * 16));
    curso = 0;
    for (int j = i; j <= acumulador.length(); j++) {
      curso++;
      if (curso <= 11) {
        TFTscreen.print(String(acumulador.charAt(j - 1)));
      }
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO------------------------------
void printconfig(int item) {
  TFTscreen.clrScr();
  TFTscreen.fillScr(230, 230, 230);
  String uri = "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M";
  uri += String(item);
  uri += ".bmp";
  printimagetransparente(uri, 211, 131);
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2(nomeconfiguracao[item - 1].c_str(), 195, 207);
  delay(3000);
}
void printbackconfig(int item) {
  app_layout_actionbar_barra_1("Configuracao", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M3.BMP", -30, -30, -30);
  int scroll = 3;
  int reduzir = 12;
  if (((((item - 1) * 6) + 1) <= quantidadedeconfiguracao)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M";
    uri += String(((item - 1) * 6) + 1);
    uri += ".bmp";
    printimagetransparente(uri, 81, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeconfiguracao[((item - 1) * 6)].c_str(), 65, 169 - reduzir - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 150 - reduzir - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 143, 143 - reduzir - scroll);
  }
  if (((((item - 1) * 6) + 2) <= quantidadedeconfiguracao)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M";
    uri += String(((item - 1) * 6) + 2);
    uri += ".bmp";
    printimagetransparente(uri, 201, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeconfiguracao[((item - 1) * 6) + 1].c_str(), 185, 169 - reduzir - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 150 - reduzir - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 263, 143 - reduzir - scroll);
  }
  if (((((item - 1) * 6) + 3) <= quantidadedeconfiguracao)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M";
    uri += String(((item - 1) * 6) + 3);
    uri += ".bmp";
    printimagetransparente(uri, 331, 93 - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeconfiguracao[((item - 1) * 6) + 2].c_str(), 315, 169 - reduzir - scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 150 - reduzir - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 393, 143 - reduzir - scroll);
  }
  if (((((item - 1) * 6) + 4) <= quantidadedeconfiguracao)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M";
    uri += String(((item - 1) * 6) + 4);
    uri += ".bmp";
    printimagetransparente(uri, 81, 193 - reduzir - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeconfiguracao[((item - 1) * 6) + 3].c_str(), 65, 269 - (2 * reduzir) -  scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 250 - (2 * reduzir) -  scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("4", 143, 243 - (2 * reduzir) -  scroll);
  }
  if (((((item - 1) * 6) + 5) <= quantidadedeconfiguracao)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M";
    uri += String(((item - 1) * 6) + 5);
    uri += ".bmp";
    printimagetransparente(uri, 201, 193 - reduzir - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeconfiguracao[((item - 1) * 6) + 4].c_str(), 185, 269 - (2 * reduzir) -  scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 250 - (2 * reduzir) -  scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("5", 263, 243 - (2 * reduzir) -  scroll);
  }
  if (((((item - 1) * 6) + 6) <= quantidadedeconfiguracao)) {
    String uri = "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M";
    uri += String(((item - 1) * 6) + 6);
    uri += ".bmp";
    printimagetransparente(uri, 331, 193 - reduzir - scroll);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nomeconfiguracao[((item - 1) * 6) + 5].c_str(), 315, 269 - (2 * reduzir) -  scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 250 - (2 * reduzir) -  scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("6", 393, 243 - (2 * reduzir) -  scroll);
  }
}
void app_configuracao() {
  int posicao = 1;
  boolean sairapp = false;
  printbackconfig(posicao);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero = ((posicao - 1) * 6);
        if (c == '1') {
          appnumero += 1;
        }
        if (c == '2') {
          appnumero += 2;
        }
        if (c == '3') {
          appnumero += 3;
        }
        if (c == '4') {
          appnumero += 4;
        }
        if (c == '5') {
          appnumero += 5;
        }
        if (c == '6') {
          appnumero += 6;
        }
        if (appnumero <= quantidadedeconfiguracao) {
          printconfig(appnumero);
          delay(250);
          switch (appnumero) {
            case 1:
              configuracao_som();
              break;
            case 2:
              configuracao_tela();
              break;
            case 3:
              configuracao_armazenamento();
              break;
            case 4:
              configuracao_bateria();
              break;
            case 5:
              configuracao_seguraca();
              break;
            case 6:
              configuracao_idioma();
              break;
            case 7:
              configuracao_datahora();
              break;
            case 8:
              configuracao_sobre();
              break;
          }
          if (desligarn5) {
            break;
          } else {
            printlayout = true;
          }
        }
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Configuracao", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        int  quantidadelayout = int(quantidadedeconfiguracao / 6);
        if ((quantidadedeconfiguracao % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(quantidadedeconfiguracao / 6);
        if ((quantidadedeconfiguracao % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(quantidadedeconfiguracao / 6);
        if ((quantidadedeconfiguracao % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(quantidadedeconfiguracao / 6);
        if ((quantidadedeconfiguracao % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      printbackconfig(posicao);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::SOM-------------------------
void configuracao_som() {
  boolean sairapp = false;
  String lista[3] = {
    "Volume",
    "Som de Tecla",
    "Som de Tela Bloqueio"
  };
  app_layout_actionbar_barra_1("Configuracao::Som", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M1.BMP", -30, -30, -30);
  app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::Som", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        int valort = memoriareadint(22).toInt();
        valort = quantidadevalorcinco("Volume", valort );
        memoriawriteint(22, String(valort));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        int valort = memoriareadint(20).toInt();
        if (valort == 1) {
          valort = statusatividade("Som Tecla", true);
        } else {
          valort = statusatividade("Som Tecla", false);
        }
        if (valort) {
          memoriawriteint(20, "1");
        } else {
          memoriawriteint(20, "0");
        }
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '3') {
        int valort = memoriareadint(21).toInt();
        if (valort == 1) {
          valort = statusatividade("Som Tela Bq.", true);
        } else {
          valort = statusatividade("Som Tela Bq.", false);
        }
        if (valort) {
          memoriawriteint(21, "1");
        } else {
          memoriawriteint(21, "0");
        }
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Configuracao::Som", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M1.BMP", -30, -30, -30);
      app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::TELA------------------------
void configuracao_tela() {
  boolean sairapp = false;
  String lista[2] = {
    "Background",
    "Tempo Suspender"
  };
  app_layout_actionbar_barra_1("Configuracao::Tela", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M2.BMP", -30, -30, -30);
  app_layout_list("Opcoes", lista, 2, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::Tela", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        String enderecoarquivo = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
        enderecoarquivo.replace("+", "");
        memoriawriteint(9, enderecoarquivo);
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        memoriawriteint(30, readtext1("Tempo Espe.", memoriareadint(30)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Configuracao::Tela", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M2.BMP", -30, -30, -30);
      app_layout_list("Opcoes", lista, 2, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::ARMAZENAMENTO---------------
void printamarzenamento(int posicao) {
  int tempo  =  temporestante();
  TFTscreen.background(0, 0, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(90, 67 + (2 * 16), 389, 67 + (7 * 16));
  float volumesize;
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.setFont(BigFont);
  if (!card.init(SPI_HALF_SPEED, posicao)) {
    TFTscreen.print2("Cartao Erro", 112 + 14, 67 + (3 * 16));
    delay(3000);
  } else {
    switch (card.type()) {
      case SD_CARD_TYPE_SD1:
        TFTscreen.print2("SD1 ", 112 + 14, 67 + (3 * 16));
        break;
      case SD_CARD_TYPE_SD2:
        TFTscreen.print2("SD2 ", 112 + 14, 67 + (3 * 16));
        break;
      case SD_CARD_TYPE_SDHC:
        TFTscreen.print2("SDHC ", 112 + 14, 67 + (3 * 16));
        break;
      default:
        TFTscreen.print2("Unknown", 112 + 14, 67 + (3 * 16));
    }
    volume.init(card);
    TFTscreen.print2("FAT", 112 + 14, 67 + (4 * 16));
    TFTscreen.print2(String(volume.fatType(), DEC), 112 + 14 + (3 * 15), 67 + (4 * 16));
    volumesize = volume.blocksPerCluster();
    volumesize *= volume.clusterCount();
    volumesize *= 512;
    volumesize /= 1024;
    int tipodeformato = 0;
    while (volumesize >= 1024) {
      tipodeformato++;
      volumesize /= 1024;
    }
    switch (tipodeformato) {
      case 0:
        TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("KB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
        break;
      case 1:
        TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("MB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
        break;
      case 2:
        TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("GB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
        break;
    }
    while (true) {
      delay(1);
      if (memoriareadint(30).toInt() != 0) {
        if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
          suspenden5 = true;
          tela_suspender();
          TFTscreen.background(0, 0, 0);
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(90, 67 + (2 * 16), 389, 67 + (7 * 16));
          float volumesize;
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.setFont(BigFont);
          card.init(SPI_HALF_SPEED, posicao);
          switch (card.type()) {
            case SD_CARD_TYPE_SD1:
              TFTscreen.print2("SD1 ", 112 + 14, 67 + (3 * 16));
              break;
            case SD_CARD_TYPE_SD2:
              TFTscreen.print2("SD2 ", 112 + 14, 67 + (3 * 16));
              break;
            case SD_CARD_TYPE_SDHC:
              TFTscreen.print2("SDHC ", 112 + 14, 67 + (3 * 16));
              break;
            default:
              TFTscreen.print2("Unknown", 112 + 14, 67 + (3 * 16));
          }
          volume.init(card);
          TFTscreen.print2("FAT", 112 + 14, 67 + (4 * 16));
          TFTscreen.print2(String(volume.fatType(), DEC), 112 + 14 + (3 * 15), 67 + (4 * 16));
          volumesize = volume.blocksPerCluster();
          volumesize *= volume.clusterCount();
          volumesize *= 512;
          volumesize /= 1024;
          int tipodeformato = 0;
          while (volumesize >= 1024) {
            tipodeformato++;
            volumesize /= 1024;
          }
          switch (tipodeformato) {
            case 0:
              TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
              TFTscreen.print2("KB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
              break;
            case 1:
              TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
              TFTscreen.print2("MB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
              break;
            case 2:
              TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
              TFTscreen.print2("GB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
              break;
          }
          tempo  =  temporestante();
        }
      }

      if (keyboard.available()) {
        if (memoriareadint(20).toInt() == 1) {
          som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
        }
        char c = keyboard.read();
        if (c == PS2_ESC) {
          break;
        } else if (c == PS2_TAB) {
          desligar_n5();
          if (desligarn5) {
            break;
          } else {
            TFTscreen.background(0, 0, 0);
            TFTscreen.setColor(230, 230, 230);
            TFTscreen.fillRoundRect(90, 67 + (2 * 16), 389, 67 + (7 * 16));
            float volumesize;
            TFTscreen.setColor(0, 0, 0);
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.setFont(BigFont);
            card.init(SPI_HALF_SPEED, posicao);
            switch (card.type()) {
              case SD_CARD_TYPE_SD1:
                TFTscreen.print2("SD1 ", 112 + 14, 67 + (3 * 16));
                break;
              case SD_CARD_TYPE_SD2:
                TFTscreen.print2("SD2 ", 112 + 14, 67 + (3 * 16));
                break;
              case SD_CARD_TYPE_SDHC:
                TFTscreen.print2("SDHC ", 112 + 14, 67 + (3 * 16));
                break;
              default:
                TFTscreen.print2("Unknown", 112 + 14, 67 + (3 * 16));
            }
            volume.init(card);
            TFTscreen.print2("FAT", 112 + 14, 67 + (4 * 16));
            TFTscreen.print2(String(volume.fatType(), DEC), 112 + 14 + (3 * 15), 67 + (4 * 16));
            volumesize = volume.blocksPerCluster();
            volumesize *= volume.clusterCount();
            volumesize *= 512;
            volumesize /= 1024;
            int tipodeformato = 0;
            while (volumesize >= 1024) {
              tipodeformato++;
              volumesize /= 1024;
            }
            switch (tipodeformato) {
              case 0:
                TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
                TFTscreen.print2("KB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
                break;
              case 1:
                TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
                TFTscreen.print2("MB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
                break;
              case 2:
                TFTscreen.print2(String(volumesize), 112 + 14, 67 + (5 * 16));
                TFTscreen.print2("GB", 112 + 14 + (String(volumesize).length() * 15), 67 + (5 * 16));
                break;
            }
          }
        }
        tempo  =  temporestante();
      }
    }
  }
}
void configuracao_armazenamento() {
  boolean sairapp = false;
  String lista[2] = {
    "Info. Sd card 1",
    "Info. Sd card 2"
  };
  app_layout_actionbar_barra_1("Conf.::Armazenamento", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", -30, -30, -30);
  app_layout_list("Opcoes", lista, 2, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::Armaze.", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        printamarzenamento(53);
        (void)begin_consultardiretoriopastaSD(portadecartaosystem);
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        printamarzenamento(13);
        (void)begin_consultardiretoriopastaSD(portadecartaosystem);
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Conf.::Armazenamento", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", -30, -30, -30);
      app_layout_list("Opcoes", lista, 2, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::BATERIA---------------------
void printbateria() {
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (9.0 / 1023.0);
  int porcenatge = ((voltage * 100) / 9);
  TFTscreen.setFont(SevenSegNumFont);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.print2(String(porcenatge), 250, 67 + (3 * 16));
}
void configuracao_bateria() {
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Conf.::Bateria", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M4.BMP", -30, -30, -30);
  printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M4.bmp",  112 + 14, 67 + (3 * 16));
  printbateria();
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::Bateria", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else {
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Conf.::Bateria", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M4.BMP", -30, -30, -30);
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M4.bmp",  112 + 14, 67 + (3 * 16));
    }
    printbateria();
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::SEGURANAÇA------------------
void configuracao_seguraca() {
  boolean sairapp = false;
  String lista[4] = {
    "Usuario: Nome",
    "Usuario: Foto",
    "Usuario: Senha",
    "Tela de Bloqueio",
  };
  app_layout_actionbar_barra_1("Conf.::Seguranca", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M5.BMP", -30, -30, -30);
  app_layout_list("Opcoes", lista, 4, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::Segura.", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        memoriawriteint(99, readtext1("Nome", memoriareadint(99)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        String enderecoarquivo = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
        enderecoarquivo.replace("+", "");
        memoriawriteint(10, enderecoarquivo);
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '3') {
        memoriawriteint(8, readtext1("Senha", memoriareadint(8)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '4') {
        int valort = memoriareadint(60).toInt();
        if (valort == 1) {
          valort = statusatividade("Tela Bloq.", true);
        } else {
          valort = statusatividade("Tela Bloq.", false);
        }
        if (valort) {
          memoriawriteint(60, "1");
        } else {
          memoriawriteint(60, "0");
        }
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Conf.::Seguranca", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M5.BMP", -30, -30, -30);
      app_layout_list("Opcoes", lista, 4, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::IDIOMA------------------------
void configuracao_idioma() {
  boolean sairapp = false;
  String lista[3] = {
    "Ingles",
    "Espanhol",
    "Portugues"
  };
  app_layout_actionbar_barra_1("Configuracao::Idioma", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M6.BMP", -30, -30, -30);
  app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::Idioma", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        memoriawriteint(61, "1");
        app_layout_print_notificacao1("Idioma escolhido: Ingles.");
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        memoriawriteint(61, "2");
        app_layout_print_notificacao1("Idioma escolhido: Espanhol.");
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '3') {
        memoriawriteint(61, "3");
        app_layout_print_notificacao1("Idioma escolhido: Portugues.");
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Configuracao::Idioma", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M6.BMP", -30, -30, -30);
      app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::DATAHORA--------------------
void configuracao_datahora() {
  boolean sairapp = false;
  String lista[5] = {
    "Dia",
    "Mes",
    "Ano",
    "Hora",
    "Minuto"
  };
  app_layout_actionbar_barra_1("Conf.::Data/Hora", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M7.BMP", -30, -30, -30);
  app_layout_list("Opcoes", lista, 5, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::D/H", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        memoriawriteint(4, readtext1("Dia", memoriareadint(4)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        memoriawriteint(5, readtext1("Mes", memoriareadint(5)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '3') {
        memoriawriteint(6, readtext1("Ano", memoriareadint(6)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '4') {
        memoriawriteint(3, readtext1("Hora", memoriareadint(3)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '5') {
        memoriawriteint(2, readtext1("Minuto", memoriareadint(2)));
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Conf.::Data/Hora", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M7.BMP", -30, -30, -30);
      app_layout_list("Opcoes", lista, 5, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CONFIGURACAO::SOBRE-----------------------
void printsobre() {
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setFont(BigFont);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2("Versao: 1.0", 108, 67 + (8 * 16));
  TFTscreen.print2("Modelo: N5-0x0001", 108, 67 + (9 * 16));
  int valor = freeram();
  if (valor < 0) {
    valor = valor * (-1);
  }
  TFTscreen.setFont(SevenSegNumFont);
  TFTscreen.print2(String(valor), 250, 67 + (3 * 16));
  printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M9.bmp",  112 + 14, 67 + (3 * 16));
}
void configuracao_sobre() {
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Conf.::Sobre", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M8.BMP", -30, -30, -30);
  printsobre();
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Conf.::Sobre", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else {
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Conf.::Sobre", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M8.BMP",  -30, -30, -30);
      printsobre();
    }
  }
}

//---------------------------------------------------------------------
//---------------------------CONTAGEM REGR-----------------------------
void app_contregressiva() {
  boolean sairapp = false;
  String lista[4] = {
    "Hora",
    "Minuto",
    "Segundo",
    "Contagem"
  };
  app_layout_actionbar_barra_1("Contagem Regressiva", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M4.BMP", 0, 100, 100);
  app_layout_list("Opcoes", lista, 4, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Cont. Regre.", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        transferenciacontagemregressiva = true;
        memoriawriteint(31, readtext1("Hora", memoriareadint(31)));
        transferenciacontagemregressiva = false;
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        transferenciacontagemregressiva = true;
        memoriawriteint(32, readtext1("Minuto", memoriareadint(32)));
        transferenciacontagemregressiva = false;
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '3') {
        transferenciacontagemregressiva = true;
        memoriawriteint(33, readtext1("Segundo", memoriareadint(33)));
        transferenciacontagemregressiva = false;
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '4') {
        transferenciacontagemregressiva = true;
        int valort = memoriareadint(34).toInt();
        boolean valortboo;
        if (valort == 1) {
          valortboo = statusatividade("Contagem", true);
        } else {
          valortboo = statusatividade("Contagem", false);
        }
        if (valortboo) {
          memoriawriteint(34, "1");
        } else {
          memoriawriteint(34, "0");
        }
        transferenciacontagemregressiva = false;
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Contagem Regressiva", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M4.BMP", 0, 100, 100);
      app_layout_list("Opcoes", lista, 4, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------CRONOMETRO--------------------------------
void print_cronometro_hora(int hora) {
  String texto;
  TFTscreen.setFont(SevenSegNumFont);
  if (hora < 10) {
    texto += "0";
  }
  texto += String(hora);
  TFTscreen.print2(texto, 120, 195);
}
void print_cronometro_minuto(int minuto) {
  String texto;
  TFTscreen.setFont(SevenSegNumFont);
  if (minuto < 10) {
    texto += "0";
  }
  texto += String(minuto);
  TFTscreen.print2(texto, 200, 195);
}
void print_cronometro_segundo(int segundo) {
  String texto;
  TFTscreen.setFont(SevenSegNumFont);
  if (segundo < 10) {
    texto += "0";
  }
  texto += String(segundo);
  TFTscreen.print2(texto, 280, 195);
}
void app_cronometro() {
  boolean sairapp = false;
  String lista[2] = {
    "Limpar",
    "Contagem"
  };
  boolean startcronometro = false;
  int tempo  =  temporestante();
  int hora = memoriareadint(3).toInt();
  int minuto = memoriareadint(2).toInt();
  int horac = 0;
  int minutoc = 0;
  int segundoc = 0;
  int millisegundocro  = 0;
  app_layout_actionbar_barra_1("Cronometro", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M5.BMP", -51, 51, 0);
  app_layout_list("Opcoes", lista, 2, 10, 90, 14, 16, 255, 255, 255);
  print_cronometro_hora(horac);
  print_cronometro_minuto(minutoc);
  print_cronometro_segundo(segundoc);
  printdataehora2();
  while (true) {
    delay(1);
    boolean printlayout = false;
    if (execucao() == 1) {
      printlayout = true;
    }
    if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
      minuto = memoriareadint(2).toInt();
      hora = memoriareadint(3).toInt();
      printdataehora2();
    }
    if (memoriareadint(30).toInt() != 0) {
      if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
        suspenden5 = true;
        tela_suspender();
        printlayout = true;
      }
    }
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Cronometro", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        startcronometro = false;
        horac = 0;
        minutoc = 0;
        segundoc = 0;
        millisegundocro  = 0;
        printlayout = true;
      } else if (c == '2') {
        if (startcronometro) {
          startcronometro = false;
        } else {
          startcronometro = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Cronometro", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M5.BMP", -51, 51, 0);
      app_layout_list("Opcoes", lista, 1, 10, 90, 14, 16, 255, 255, 255);
      print_cronometro_hora(horac);
      print_cronometro_minuto(minutoc);
      print_cronometro_segundo(segundoc);
      printdataehora2();
    }
    if (startcronometro) {
      if ((millis() - millisegundocro) >= 1000) {
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        TFTscreen.setColor(0, 102, 51);
        print_cronometro_segundo(segundoc);
        segundoc++;
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        TFTscreen.setColor(255, 255, 255);
        print_cronometro_segundo(segundoc);
        millisegundocro = millis();
        if (segundoc > 59) {
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.setColor(0, 102, 51);
          print_cronometro_segundo(segundoc);
          segundoc = 0;
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.setColor(255, 255, 255);
          print_cronometro_segundo(segundoc);
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.setColor(0, 102, 51);
          print_cronometro_minuto(minutoc);
          minutoc++;
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.setColor(255, 255, 255);
          print_cronometro_minuto(minutoc);
          if (minutoc > 59) {
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.setColor(0, 102, 51);
            print_cronometro_hora(horac);
            horac++;
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.setColor(255, 255, 255);
            print_cronometro_hora(horac);
            if (horac > 99) {
              TFTscreen.setBackColor(VGA_TRANSPARENT);
              TFTscreen.setColor(0, 102, 51);
              print_cronometro_hora(horac);
              horac = 0;
              TFTscreen.setBackColor(VGA_TRANSPARENT);
              TFTscreen.setColor(255, 255, 255);
              print_cronometro_hora(horac);
            }
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.setColor(0, 102, 51);
            print_cronometro_minuto(minutoc);
            minutoc = 0;
            TFTscreen.setBackColor(VGA_TRANSPARENT);
            TFTscreen.setColor(255, 255, 255);
            print_cronometro_minuto(minutoc);
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------
//---------------------------DESPERTADOR-------------------------------
void tranferirdadosdespertador() {
  transferenciadespertador = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 13; j++) {
      despertador[i][j] = bancodedados[i][j];
    }
  }
  transferenciadespertador = false;
}
void app_despertador_cadastro_print(String nome, String toque, int hora, int minuto, int duracao, boolean dom, boolean seg, boolean ter, boolean qua, boolean qui, boolean sex, boolean sab) {
  app_layout_print_caixa_texto_simples(35, 90, 165, 125, "1", String("Nome " + nome));
  app_layout_print_caixa_texto_simples(175, 90, 305, 125, "2", String("Hora " + String(hora)));
  app_layout_print_caixa_texto_simples(315, 90, 445, 125, "3", String("Minuto " + String(minuto)));
  app_layout_print_caixa_texto_simples(35, 135, 165, 170, "4", String("Duracao " + String(duracao)));
  app_layout_print_caixa_texto_simples(175, 135, 305, 170, "5", String("Toque " + toque));
  if (dom) {
    app_layout_print_caixa_texto_simples(315, 135, 445, 170, "6", "Dom: Ativo");
  } else {
    app_layout_print_caixa_texto_simples(315, 135, 445, 170, "6", "Dom: Desativado");
  }
  if (seg) {
    app_layout_print_caixa_texto_simples(35, 180, 165, 215,  "7", "Seg: Ativo");
  } else {
    app_layout_print_caixa_texto_simples(35, 180, 165, 215,  "7", "Seg: Desativado");
  }
  if (ter) {
    app_layout_print_caixa_texto_simples(175, 180, 305, 215, "8", "Ter: Ativo");
  } else {
    app_layout_print_caixa_texto_simples(175, 180, 305, 215, "8", "Ter: Desativado");
  }
  if (qua) {
    app_layout_print_caixa_texto_simples(315, 180, 445, 215, "9", "Qua: Ativo");
  } else {
    app_layout_print_caixa_texto_simples(315, 180, 445, 215, "9", "Qua: Desativado");
  }
  if (qui) {
    app_layout_print_caixa_texto_simples(35, 225, 165, 260,  "q", "Qui: Ativo");
  } else {
    app_layout_print_caixa_texto_simples(35, 225, 165, 260,  "q", "Qui: Desativado");
  }
  if (sex) {
    app_layout_print_caixa_texto_simples(175, 225, 305, 260, "w", "Sex: Ativo");
  } else {
    app_layout_print_caixa_texto_simples(175, 225, 305, 260, "w", "Sex: Desativado");
  }
  if (sab) {
    app_layout_print_caixa_texto_simples(315, 225, 445, 260, "e", "Sab: Ativo");
  } else {
    app_layout_print_caixa_texto_simples(315, 225, 445, 260, "e", "Sab: Desativado");
  }
}
void app_despertador_cadastro() {
  int hora;
  int minuto;
  int duracao;
  String nome;
  boolean dom;
  boolean seg;
  boolean ter;
  boolean qua;
  boolean qui;
  boolean sex;
  boolean sab;
  String toque;
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Cadastro Despertador", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M6.BMP", 0, 0, 100);
  app_despertador_cadastro_print(nome, toque, hora, minuto, duracao, dom, seg, ter, qua, qui, sex, sab);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Despertador", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Salvar", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Cancelar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              String texto[12];
              texto[0] = nome;
              texto[1] = String(hora);
              texto[2] = String(minuto);
              texto[3] = String(duracao);
              texto[4] = toque;
              if (dom) {
                texto[5] = "1";
              } else {
                texto[5] = "0";
              }
              if (seg) {
                texto[6] = "1";
              } else {
                texto[6] = "0";
              }
              if (ter) {
                texto[7] = "1";
              } else {
                texto[7] = "0";
              }
              if (qua) {
                texto[8] = "1";
              } else {
                texto[8] = "0";
              }
              if (qui) {
                texto[9] = "1";
              } else {
                texto[9] = "0";
              }
              if (sex) {
                texto[10] = "1";
              } else {
                texto[10] = "0";
              }
              if (sab) {
                texto[11] = "1";
              } else {
                texto[11] = "0";
              }
              insertbancodedados(texto);
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              sairapp = true;
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        nome = readtext1("Nome", nome);
        printlayout = true;
      } else if (c == '2') {
        hora = readtext1("Hora", String(hora)).toInt();
        printlayout = true;
      } else if (c == '3') {
        minuto = readtext1("Minuto", String(minuto)).toInt();
        printlayout = true;
      } else if (c == '4') {
        duracao = readtext1("Duracao", String(duracao)).toInt();
        printlayout = true;
      } else if (c == '5') {
        String enderecoarquivo = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
        enderecoarquivo.replace("+", "");
        toque = enderecoarquivo;
        printlayout = true;
      } else if (c == '6') {
        dom = statusatividade("Domingo", dom);
        printlayout = true;
      } else if (c == '7') {
        seg = statusatividade("Segunda", seg);
        printlayout = true;
      } else if (c == '8') {
        ter = statusatividade("Terca", ter);
        printlayout = true;
      } else if (c == '9') {
        qua = statusatividade("Quarta", qua);
        printlayout = true;
      } else if (c == 'q') {
        qui = statusatividade("Quinta", qui);
        printlayout = true;
      } else if (c == 'w') {
        sex = statusatividade("Sexta", sex);
        printlayout = true;
      } else if (c == 'e') {
        sab = statusatividade("Sabado", sab);
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Cadastro Despertador", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M6.BMP", 0, 0, 100);
      app_despertador_cadastro_print(nome, toque, hora, minuto, duracao, dom, seg, ter, qua, qui, sex, sab);
    }
  }
}
void app_despertador_cadastro_visualizar(int posicao) {
  int hora =  bancodedados[posicao][1].toInt();
  int minuto = bancodedados[posicao][2].toInt();
  int duracao = bancodedados[posicao][3].toInt();
  String nome = bancodedados[posicao][0];
  boolean dom;
  if (bancodedados[posicao][5].toInt() == 1) {
    dom = true;
  } else {
    dom = false;
  }
  boolean seg;
  if (bancodedados[posicao][6].toInt() == 1) {
    seg = true;
  } else {
    seg = false;
  }
  boolean ter;
  if (bancodedados[posicao][7].toInt() == 1) {
    ter = true;
  } else {
    ter = false;
  }
  boolean qua;
  if (bancodedados[posicao][8].toInt() == 1) {
    qua = true;
  } else {
    qua = false;
  }
  boolean qui;
  if (bancodedados[posicao][9].toInt() == 1) {
    qui = true;
  } else {
    qui = false;
  }
  boolean sex;
  if (bancodedados[posicao][10].toInt() == 1) {
    sex = true;
  } else {
    sex = false;
  }
  boolean sab;
  if (bancodedados[posicao][11].toInt() == 1) {
    sab = true;
  } else {
    sab = false;
  }
  String toque = bancodedados[posicao][4];
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Cadastro Despertador", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M6.BMP", 0, 0, 100);
  app_despertador_cadastro_print(nome, toque, hora, minuto, duracao, dom, seg, ter, qua, qui, sex, sab);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (9 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (9 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Despertador", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Salvar", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Excluir", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Cancelar", 112 + 14, 67 + (6 * 16));
        TFTscreen.print2("5) Desligar N5", 112 + 14, 67 + (7 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              String texto[12];
              texto[0] = nome;
              texto[1] = String(hora);
              texto[2] = String(minuto);
              texto[3] = String(duracao);
              texto[4] = toque;
              if (dom) {
                texto[5] = "1";
              } else {
                texto[5] = "0";
              }
              if (seg) {
                texto[6] = "1";
              } else {
                texto[6] = "0";
              }
              if (ter) {
                texto[7] = "1";
              } else {
                texto[7] = "0";
              }
              if (qua) {
                texto[8] = "1";
              } else {
                texto[8] = "0";
              }
              if (qui) {
                texto[9] = "1";
              } else {
                texto[9] = "0";
              }
              if (sex) {
                texto[10] = "1";
              } else {
                texto[10] = "0";
              }
              if (sab) {
                texto[11] = "1";
              } else {
                texto[11] = "0";
              }
              updatebancodedados(texto, posicao);
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              deletebancodedados(posicao);
              sairapp = true;
              break;
            } else if (c == '4') {
              sairapp = true;
              break;
            } else if (c == '5') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        nome = readtext1("Nome", nome);
        printlayout = true;
      } else if (c == '2') {
        hora = readtext1("Hora", String(hora)).toInt();
        printlayout = true;
      } else if (c == '3') {
        minuto = readtext1("Minuto", String(minuto)).toInt();
        printlayout = true;
      } else if (c == '4') {
        duracao = readtext1("Duracao", String(duracao)).toInt();
        printlayout = true;
      } else if (c == '5') {
        String enderecoarquivo = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
        enderecoarquivo.replace("+", "");
        toque = enderecoarquivo;
        printlayout = true;
      } else if (c == '6') {
        dom = statusatividade("Domingo", dom);
        printlayout = true;
      } else if (c == '7') {
        seg = statusatividade("Segunda", seg);
        printlayout = true;
      } else if (c == '8') {
        ter = statusatividade("Terca", ter);
        printlayout = true;
      } else if (c == '9') {
        qua = statusatividade("Quarta", qua);
        printlayout = true;
      } else if (c == 'q') {
        qui = statusatividade("Quinta", qui);
        printlayout = true;
      } else if (c == 'w') {
        sex = statusatividade("Sexta", sex);
        printlayout = true;
      } else if (c == 'e') {
        sab = statusatividade("Sabado", sab);
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Cadastro Despertador", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M6.BMP", 0, 0, 100);
      app_despertador_cadastro_print(nome, toque, hora, minuto, duracao, dom, seg, ter, qua, qui, sex, sab);
    }
  }
}

void app_despertador_lista(int posicao) {

  if (((((posicao - 1) * 2) + 1) <= bancodedadosreadint(0, 0).toInt())) {
    String titulo = bancodedados[((posicao - 1) * 2) + 1][0];
    String texto = "Hora ";
    if (bancodedados[((posicao - 1) * 2) + 1][1].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 1][1];
    }
    texto += ":";
    if (bancodedados[((posicao - 1) * 2) + 1][2].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 1][2];
    }
    if (bancodedados[((posicao - 1) * 2) + 1][5].equals("1")) {
      texto += " Dom ";
    }
    if (bancodedados[((posicao - 1) * 2) + 1][6].equals("1")) {
      texto += " Seg ";
    }
    if (bancodedados[((posicao - 1) * 2) + 1][7].equals("1")) {
      texto += " Ter ";
    }
    if (bancodedados[((posicao - 1) * 2) + 1][8].equals("1")) {
      texto += " Qua ";
    }
    if (bancodedados[((posicao - 1) * 2) + 1][9].equals("1")) {
      texto += " Qui ";
    }
    if (bancodedados[((posicao - 1) * 2) + 1][10].equals("1")) {
      texto += " Sex ";
    }
    if (bancodedados[((posicao - 1) * 2) + 1][11].equals("1")) {
      texto += " Sab ";
    }
    app_layout_print_caixa_texto(30, 90, 450, titulo, 1, texto);
  }
  if (((((posicao - 1) * 2) + 2) <= bancodedadosreadint(0, 0).toInt())) {
    String titulo = bancodedados[((posicao - 1) * 2) + 2][0];
    String texto = "Hora ";
    if (bancodedados[((posicao - 1) * 2) + 2][1].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 2][1];
    }
    texto += ":";
    if (bancodedados[((posicao - 1) * 2) + 2][2].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 2][2];
    }
    if (bancodedados[((posicao - 1) * 2) + 2][5].equals("1")) {
      texto += " Dom ";
    }
    if (bancodedados[((posicao - 1) * 2) + 2][6].equals("1")) {
      texto += " Seg ";
    }
    if (bancodedados[((posicao - 1) * 2) + 2][7].equals("1")) {
      texto += " Ter ";
    }
    if (bancodedados[((posicao - 1) * 2) + 2][8].equals("1")) {
      texto += " Qua ";
    }
    if (bancodedados[((posicao - 1) * 2) + 2][9].equals("1")) {
      texto += " Qui ";
    }
    if (bancodedados[((posicao - 1) * 2) + 2][10].equals("1")) {
      texto += " Sex ";
    }
    if (bancodedados[((posicao - 1) * 2) + 2][11].equals("1")) {
      texto += " Sab ";
    }
    app_layout_print_caixa_texto(30, 185, 450, titulo, 2, texto);
  }
}
void app_despertador() {
  boolean sairapp = false;
  int posicao = 1;
  lerbancodedaos("SD::SD1/SYS.H/APPDATA/DESPER~1/m.dat");
  if (bancodedadosreadint(1, 0).toInt() == 0) {
    bancodedadoswriteint(1, 0, "12");
  }
  app_layout_actionbar_barra_1("Despertador", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M6.BMP", 0, 0, 100);
  app_despertador_lista(posicao);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Despertador", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Novo", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Voltar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              app_despertador_cadastro();
              salvarbancodedaos("SD::SD1/SYS.H/APPDATA/DESPER~1/m.dat");
              lerbancodedaos("SD::SD1/SYS.H/APPDATA/DESPER~1/m.dat");
              if (desligarn5) {
                sairapp = true;
              }
              break;
            } else if (c == '3') {
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          salvarbancodedaos("SD::SD1/SYS.H/APPDATA/DESPER~1/m.dat");
          transferenciadespertador = true;
          tranferirdadosdespertador();
          transferenciadespertador = false;
          break;
        } else {
          printlayout = true;
        }
      } else if ((c == '1') || (c == '2')) {
        int appnumero = ((posicao - 1) * 2);
        if (c == '1') {
          appnumero += 1;
        }
        if (c == '2') {
          appnumero += 2;
        }
        app_despertador_cadastro_visualizar(appnumero);
        salvarbancodedaos("SD::SD1/SYS.H/APPDATA/DESPER~1/m.dat");
        lerbancodedaos("SD::SD1/SYS.H/APPDATA/DESPER~1/m.dat");
        int quantidadelayout = int(bancodedadosreadint(0, 0).toInt() / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(bancodedadosreadint(0, 0).toInt() / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(bancodedadosreadint(0, 0).toInt() / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Despertador", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M6.BMP", 0, 0, 100);
      app_despertador_lista(posicao);
    }
  }
}
//---------------------------------------------------------------------

//#####################################################################

//##############################PARTE_2################################

//---------------------------GALERIA-----------------------------------
void printgaleriagrid(int item) {
  int scroll = 3;
  if ((!arquivosencontrado[1].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(81 - 5, 93 - scroll - 5, 81 + 57 + 5, 93 - scroll + 57 + 5);
    printimagescalatrans(arquivosencontrado[1], 81, 93 - scroll, 57, 57);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 150 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 143, 143 - scroll);
  }
  if ((!arquivosencontrado[2].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(201 - 5, 93 - scroll - 5, 201 + 57 + 5, 93 - scroll + 57 + 5);
    printimagescalatrans(arquivosencontrado[2], 201, 93 - scroll, 57, 57);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 150 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 263, 143 - scroll);
  }
  if ((!arquivosencontrado[3].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(331 - 5, 93 - scroll - 5, 331 + 57 + 5, 93 - scroll + 57 + 5);
    printimagescalatrans(arquivosencontrado[3], 331, 93 - scroll, 57, 57);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 150 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 393, 143 - scroll);
  }
  if ((!arquivosencontrado[4].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(81 - 5, 193 - scroll - 5, 81 + 57 + 5, 193 - scroll + 57 + 5);
    printimagescalatrans(arquivosencontrado[4], 81, 193 - scroll, 57, 57);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 250 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("4", 143, 243 - scroll);
  }
  if ((!arquivosencontrado[5].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(201 - 5, 193 - scroll - 5, 201 + 57 + 5, 193 - scroll + 57 + 5);
    printimagescalatrans(arquivosencontrado[5], 201, 193 - scroll, 57, 57);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 250 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("5", 263, 243 - scroll);
  }
  if ((!arquivosencontrado[6].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(331 - 5, 193 - scroll - 5, 331 + 57 + 5, 193 - scroll + 57 + 5);
    printimagescalatrans(arquivosencontrado[6], 331, 193 - scroll, 57, 57);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 250 - scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("6", 393, 243 - scroll);
  }
}

void app_galeriaimage() {
  int posicao = 1;
  boolean sairapp = false;
  int cartaodebusca = app_gerenciador_arquivo_memoria_read();
  buscar_arquivos(".BMP", false, posicao, cartaodebusca);
  app_layout_actionbar_barra_1("Galeria", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M7.BMP", 127, 127, 127);
  printgaleriagrid(posicao);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Galeria", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero ;
        if (c == '1') {
          appnumero = 1;
        }
        if (c == '2') {
          appnumero = 2;
        }
        if (c == '3') {
          appnumero = 3;
        }
        if (c == '4') {
          appnumero = 4;
        }
        if (c == '5') {
          appnumero = 5;
        }
        if (c == '6') {
          appnumero = 6;
        }
        if (appnumero <= arquivosencontradocntagem) {
          visualizarimagem("", 1, appnumero, posicao, cartaodebusca);
          if (desligarn5) {
            break;
          } else {
            printlayout = true;
          }
        }
      } else if (c == PS2_LEFTARROW) {
        int  quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      buscar_arquivos(".BMP", false, posicao, cartaodebusca);
      app_layout_actionbar_barra_1("Galeria", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M7.BMP", 127, 127, 127);
      printgaleriagrid(posicao);
    }
  }
}
void visualizarimagem(String uri, int tipo, int numero, int posicao, int cartaodebusca) {
  int posicao1 = ((posicao * 6) + numero);
  int posicao2;
  int posicao3;
  String uri2;
  boolean sairapp = false;
  if (tipo == 1) {
    posicao2 = int(posicao1 / 6);
    posicao3 = int(posicao1 % 6);
    buscar_arquivos(".BMP", false, posicao2, cartaodebusca);
    uri2 = arquivosencontrado[posicao3];
  } else {
    uri2 = uri;
  }
  imagegaleria(uri2, 0, 0, 480, 320);
  teladebloqueio = true;
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (9 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (9 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Visu. Image", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) D. back.", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) D. Image US", 112 + 14, 67 + (6 * 16));
        TFTscreen.print2("5) Desligar N5", 112 + 14, 67 + (7 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              memoriawriteint(9, uri2);
              break;
            } else if (c == '4') {
              memoriawriteint(10, uri2);
              break;
            } else if (c == '5') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          teladebloqueio = false;
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        if (tipo == 1) {
          posicao1--;
          if (posicao1 < 1) {
            posicao1 = arquivosencontradocntagem;
          }
          printlayout = true;
        }
      } else if (c == PS2_RIGHTARROW) {
        if (tipo == 1) {
          posicao1++;
          if (posicao1 > arquivosencontradocntagem) {
            posicao1 = 1;
          }
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      if (tipo == 1) {
        posicao2 = int(posicao1 / 6);
        posicao3 = int(posicao1 % 6);
        buscar_arquivos(".BMP", false, posicao2, cartaodebusca);
        uri2 = arquivosencontrado[posicao3];
      } else {
        uri2 = uri;
      }
      imagegaleria(uri2.c_str(), 0, 0, 480, 320);
      teladebloqueio = true;
    }
  }
}
//---------------------------------------------------------------------
//---------------------------GER. ARQUIVOS-----------------------------
void limparvariavelbuscaarquivos() {
  contagemdearquivos = 0;
  for (int i = 0; i < 7; i++) {
    arquivosger[i] = "";
  }
  for (int i = 0; i < 7; i++) {
    namearquivosger[i] = "";
  }
  for (int i = 0; i < 7; i++) {
    tipodearquivo[i] = "";
  }
}
void printDirectory(int posicao, String dirstr) {
  File dir;
  contagemdearquivos = 0;
  int contagemdearquivosposicao = 1;
  if (String(dirstr.charAt(dirstr.length() - 1)).equals("/")) {
    dir = consultardiretoriopastaSD(dirstr);
  } else {
    dir = consultardiretoriopastaSD(String(dirstr + "/"));
  }
  while (true) {
    contagemdearquivos++;
    File entry =  dir.openNextFile();
    if (!entry) {
      break;
    }
    if (contagemdearquivosposicao <= 6) {
      if ((((posicao - 1) * 6) + contagemdearquivosposicao) == contagemdearquivos) {
        arquivosger[contagemdearquivosposicao] = "/";
        arquivosger[contagemdearquivosposicao] += String(entry.name());
        namearquivosger[contagemdearquivosposicao] = String(entry.name());
        if (entry.isDirectory()) {
          tipodearquivo[contagemdearquivosposicao] = "folder";
        } else {
          if (namearquivosger[contagemdearquivosposicao].indexOf(".BMP") > 0) {
            tipodearquivo[contagemdearquivosposicao] = "bmp";
          } else if (namearquivosger[contagemdearquivosposicao].indexOf(".WAV") > 0) {
            tipodearquivo[contagemdearquivosposicao] = "wav";
          } else if (namearquivosger[contagemdearquivosposicao].indexOf(".LNK") > 0) {
            tipodearquivo[contagemdearquivosposicao] = "lnk";
          } else if (namearquivosger[contagemdearquivosposicao].indexOf(".N5S") > 0) {
            tipodearquivo[contagemdearquivosposicao] = "n5s";
          } else if (namearquivosger[contagemdearquivosposicao].indexOf(".N5P") > 0) {
            tipodearquivo[contagemdearquivosposicao] = "n5p";
          } else if (namearquivosger[contagemdearquivosposicao].indexOf(".TXT") > 0) {
            tipodearquivo[contagemdearquivosposicao] = "txt";
          } else {
            tipodearquivo[contagemdearquivosposicao] = "file";
          }
        }
        contagemdearquivosposicao++;
      }
    }
    entry.close();
  }
  dir.close();
}
void informacaofile(String dir) {
  File myFile = consultardiretoriopastaSD(dir);
  int tamanho = myFile.size();
  String  formato = ".";
  formato += nameformato(String(myFile.name()));
  String nome = String(myFile.name());
  nome.replace(formato, "");
  int tipodeformato = 0;
  while (tamanho >= 1024) {
    tipodeformato++;
    tamanho /= 1024;
  }
  TFTscreen.background(255, 255, 255);
  TFTscreen.stroke(0, 0, 0);
  TFTscreen.setTextSize(2);
  TFTscreen.setCursor(0, 0);
  TFTscreen.println("Informacao FILE");
  TFTscreen.print("Nome: ");
  TFTscreen.println(nome);
  TFTscreen.print("Size: ");
  TFTscreen.print(tamanho);
  switch (tipodeformato) {
    case 1:
      TFTscreen.println("KB");
      break;
    case 2:
      TFTscreen.println("MB");
      break;
    case 3:
      TFTscreen.println("GB");
      break;
  }
  TFTscreen.print("Formato: ");
  TFTscreen.println(formato);
  while (true) {
    delay(1);
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ESC) {
        break;
      }
    }
  }
}
void printaarquivoslist() {
  int scroll = 3;
  int reduzir = 12;
  if (tipodearquivo[1].equals("")) {
  } else {
    if (tipodearquivo[1].equals("folder")) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M2.BMP", 81, 93 - scroll);
    } else {
      if (tipodearquivo[1].equals("")) {
      } else {
        if (tipodearquivo[1].equals("bmp")) {
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(81 - 5, 93 - scroll - 5, 81 + 57 + 5, 93 - scroll + 50 + 5);
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[1];
          printimagescalatrans(uri, 81, 93 - scroll, 57, 50);
        } else if (tipodearquivo[1].equals("wav")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 81, 93 - scroll);
        } else if (tipodearquivo[1].equals("lnk")) {
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[1];
          printimagetransparente(iconaplicativoatalho(uri), 81, 93 - scroll);
        } else if (tipodearquivo[1].equals("n5s")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 81, 93 - scroll);
        } else if (tipodearquivo[1].equals("n5p")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 81, 93 - scroll);
        } else if (tipodearquivo[1].equals("txt")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 81, 93 - scroll);
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M3.BMP", 81, 93 - scroll);
        }
      }
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(namearquivosger[ 1].c_str(), 65, 169 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 150 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 143, 143 - scroll - reduzir);
  }
  if (tipodearquivo[ 2].equals("")) {
  } else {
    if (tipodearquivo[ 2].equals("folder")) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M2.BMP", 201, 93 - scroll);
    } else {
      if (tipodearquivo[ 2].equals("")) {
      } else {
        if (tipodearquivo[ 2].equals("bmp")) {
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(201 - 5, 93 - scroll - 5, 201 + 57 + 5, 93 - scroll + 50 + 5);
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[2];
          printimagescalatrans(uri, 201, 93 - scroll, 57, 50);
        } else if (tipodearquivo[2].equals("wav")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 201, 93 - scroll);
        } else if (tipodearquivo[2].equals("lnk")) {
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[2];
          printimagetransparente(iconaplicativoatalho(uri), 201, 93 - scroll);
        } else if (tipodearquivo[ 2].equals("n5s")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 201, 93 - scroll);
        } else if (tipodearquivo[ 2].equals("n5p")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 201, 93 - scroll);
        } else if (tipodearquivo[ 2].equals("txt")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 201, 93 - scroll);
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M3.BMP", 201, 93 - scroll);
        }
      }
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(namearquivosger[ 2].c_str(), 185, 169 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 150 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 263, 143 - scroll - reduzir);
  }
  if (tipodearquivo[ 3].equals("")) {
  } else {
    if (tipodearquivo[ 3].equals("folder")) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M2.BMP", 331, 93 - scroll);
    } else {
      if (tipodearquivo[ 3].equals("")) {
      } else {
        if (tipodearquivo[ 3].equals("bmp")) {
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(331 - 5, 93 - scroll - 5, 331 + 57 + 5, 93 - scroll + 50 + 5);
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[ 3];
          printimagescalatrans(uri, 331, 93 - scroll, 57, 50);
        } else if (tipodearquivo[ 3].equals("wav")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 331, 93 - scroll);
        } else if (tipodearquivo[3].equals("lnk")) {
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[3];
          printimagetransparente(iconaplicativoatalho(uri), 331, 93 - scroll);
        } else if (tipodearquivo[ 3].equals("n5s")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 331, 93 - scroll);
        } else if (tipodearquivo[ 3].equals("n5p")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 331, 93 - scroll);
        } else if (tipodearquivo[ 3].equals("txt")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 331, 93 - scroll);
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M3.BMP", 331, 93 - scroll);
        }
      }
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(namearquivosger[ 3].c_str(), 315, 169 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 150 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 393, 143 - scroll - reduzir);
  }
  if (tipodearquivo[ 4].equals("")) {
  } else {
    if (tipodearquivo[ 4].equals("folder")) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M2.BMP", 81, 193 - scroll - reduzir);
    } else {
      if (tipodearquivo[ 4].equals("")) {
      } else {
        if (tipodearquivo[ 4].equals("bmp")) {
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(81 - 5, 193 - scroll - reduzir - 5, 81 + 57 + 5, 193 - scroll - reduzir + 50 + 5);
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[ 4];
          printimagescalatrans(uri, 81, 193 - scroll - reduzir, 57, 50);
        } else if (tipodearquivo[ 4].equals("wav")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 81, 193 - scroll - reduzir);
        } else if (tipodearquivo[4].equals("lnk")) {
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[4];
          printimagetransparente(iconaplicativoatalho(uri), 81, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 4].equals("n5s")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 81, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 4].equals("n5p")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 81, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 4].equals("txt")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 81, 193 - scroll - reduzir);
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M3.BMP", 81, 193 - scroll - reduzir);
        }
      }
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(namearquivosger[ 4].c_str(), 65, 269 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 250 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("4", 143, 243 - scroll - reduzir);
  }
  if (tipodearquivo[ 5].equals("")) {
  } else {
    if (tipodearquivo[ 5].equals("folder")) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M2.BMP", 201, 193 - scroll - reduzir);
    } else {
      if (tipodearquivo[ 5].equals("")) {
      } else {
        if (tipodearquivo[ 5].equals("bmp")) {
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(201 - 5, 193 - scroll - reduzir - 5, 201 + 57 + 5, 193 - scroll - reduzir + 50 + 5);
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[ 5];
          printimagescalatrans(uri, 201, 193 - scroll - reduzir, 57, 50);
        } else if (tipodearquivo[ 5].equals("wav")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 201, 193 - scroll - reduzir);
        } else if (tipodearquivo[5].equals("lnk")) {
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[5];
          printimagetransparente(iconaplicativoatalho(uri), 201, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 5].equals("n5s")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 201, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 5].equals("n5p")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 201, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 5].equals("txt")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 201, 193 - scroll - reduzir);
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M3.BMP", 201, 193 - scroll - reduzir);
        }
      }
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(namearquivosger[ 5].c_str(), 185, 269 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 250 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("5", 263, 243 - scroll - reduzir);
  }
  if (tipodearquivo[ 6].equals("")) {
  } else {
    if (tipodearquivo[ 6].equals("folder")) {
      printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M2.BMP", 331, 193 - scroll - reduzir);
    } else {
      if (tipodearquivo[ 6].equals("")) {
      } else {
        if (tipodearquivo[ 6].equals("bmp")) {
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(331 - 5, 193 - scroll - reduzir - 5, 331 + 57 + 5, 193 - scroll - reduzir + 50 + 5);
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[ 6];
          printimagescalatrans(uri, 331, 193 - scroll - reduzir, 57, 50);
        } else if (tipodearquivo[ 6].equals("wav")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M16.BMP", 331, 193 - scroll - reduzir);
        } else if (tipodearquivo[6].equals("lnk")) {
          String uri = diretoriogerpasta;
          uri += "/";
          uri += namearquivosger[6];
          printimagetransparente(iconaplicativoatalho(uri), 331, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 6].equals("n5s")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 331, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 6].equals("n5p")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 331, 193 - scroll - reduzir);
        } else if (tipodearquivo[ 6].equals("txt")) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", 331, 193 - scroll - reduzir);
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/GERARQ~1/M3.BMP", 331, 193 - scroll - reduzir);
        }
      }
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(namearquivosger[6].c_str(), 315, 269 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 250 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("6", 393, 243 - scroll - reduzir);
  }
}
void limparvariavelbuscaarquivosgeral() {
  diretoriogerpasta = "";
  contagemdearquivos = 0;
  contagemdearquivosuri = 0;
  for (int i = 0; i < 7; i++) {
    arquivosger[i] = "";
  }
  for (int i = 0; i < 7; i++) {
    namearquivosger[i] = "";
  }
  for (int i = 0; i < 7; i++) {
    tipodearquivo[i] = "";
  }
  for (int i = 0; i < 100; i++) {
    uriarquivosger[i] = "";
  }
}
void app_gerenciador_arquivo_memoria() {
  boolean sairapp = false;
  if (card.init(SPI_HALF_SPEED, 13)) {
    app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 159, 118 + 20);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.setFont(BigFont);
    TFTscreen.print2("SD1", 159, 187 + 20);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(224, 195, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 221, 188);
    (void)begin_consultardiretoriopastaSD(portadecartaosystem);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 269, 118 + 20);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.setFont(BigFont);
    TFTscreen.print2("SD2", 269, 187 + 20);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(334, 195, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 331, 188);
    while (true) {
      String str = app_layout_espera_kyboard();
      boolean printlayout = false;
      if (str.equals("tela")) {
        printlayout = true;
      } else {
        char c = str.charAt(0);
        if (c == PS2_ENTER) {
        } else if (c == PS2_TAB) {
        } else if (c == PS2_ESC) {
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.setBackColor(230, 230, 230);
          TFTscreen.setFont(BigFont);
          TFTscreen.print2("Ger. Arquivo", 112 + 14, 67 + (1 * 16));
          TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
          TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
          TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
          while (true) {
            delay(1);
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == '1') {
                sairapp = true;
                break;
              } else if (c == '2') {
                break;
              } else if (c == '3') {
                TFTscreen.clrScr();
                TFTscreen.fillScr(0, 0, 0);
                desligar_n5();
                if (desligarn5) {
                  sairapp = true;
                }
                break;
              }
            }
          }
          if (sairapp) {
            break;
          } else {
            printlayout = true;
          }
        } else if (c == '1') {
          app_gerenciador_arquivo(1);
          printlayout = true;
        } else if (c == '2') {
          app_gerenciador_arquivo(2);
          printlayout = true;
        }
      }
      if (printlayout)
      {
        app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
        printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 159, 118 + 20);
        TFTscreen.setColor(255, 255, 255);
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("SD1", 159, 187 + 20);
        TFTscreen.setColor(255, 0, 0);
        TFTscreen.fillCircle(224, 195, 12);
        TFTscreen.setFont(SmallFont);
        TFTscreen.setColor(255, 255, 255);
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        TFTscreen.print2("1", 221, 188);
        if (card.init(SPI_HALF_SPEED, 13)) {
          (void)begin_consultardiretoriopastaSD(portadecartaosystem);
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 269, 118 + 20);
          TFTscreen.setColor(255, 255, 255);
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.setFont(BigFont);
          TFTscreen.print2("SD2", 269, 187 + 20);
          TFTscreen.setColor(255, 0, 0);
          TFTscreen.fillCircle(334, 195, 12);
          TFTscreen.setFont(SmallFont);
          TFTscreen.setColor(255, 255, 255);
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.print2("2", 331, 188);
        }
      }
    }
  } else {
    app_gerenciador_arquivo(1);
  }
}
int app_gerenciador_arquivo_memoria_read() {
  int retorno = 1;
  boolean sairapp = false;
  if (card.init(SPI_HALF_SPEED, 13)) {
    app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 159, 118 + 20);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.setFont(BigFont);
    TFTscreen.print2("SD1", 159, 187 + 20);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(224, 195, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 221, 188);
    (void)begin_consultardiretoriopastaSD(portadecartaosystem);
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 269, 118 + 20);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.setFont(BigFont);
    TFTscreen.print2("SD2", 269, 187 + 20);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(334, 195, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 331, 188);
    while (true) {
      String str = app_layout_espera_kyboard();
      boolean printlayout = false;
      if (str.equals("tela")) {
        printlayout = true;
      } else {
        char c = str.charAt(0);
        if (c == PS2_ENTER) {
        } else if (c == PS2_TAB) {
        } else if (c == PS2_ESC) {
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (6 * 16));
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (6 * 16));
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.setBackColor(230, 230, 230);
          TFTscreen.setFont(BigFont);
          TFTscreen.print2("Ger. Arquivo", 112 + 14, 67 + (1 * 16));
          TFTscreen.print2("1) Voltar", 112 + 14, 67 + (3 * 16));
          TFTscreen.print2("2) Desligar N5", 112 + 14, 67 + (4 * 16));
          while (true) {
            delay(1);
            if (keyboard.available()) {
              if (memoriareadint(20).toInt() == 1) {
                som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
              }
              char c = keyboard.read();
              if (c == '1') {
                break;
              } else if (c == '2') {
                TFTscreen.clrScr();
                TFTscreen.fillScr(0, 0, 0);
                desligar_n5();
                if (desligarn5) {
                  sairapp = true;
                }
                break;
              }
            }
          }
          if (sairapp) {
            break;
          } else {
            printlayout = true;
          }
        } else if (c == '1') {
          retorno = 1;
          break;
        } else if (c == '2') {
          retorno = 2;
          break;
        }
      }
      if (printlayout)
      {
        app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
        printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 159, 118 + 20);
        TFTscreen.setColor(255, 255, 255);
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("SD1", 159, 187 + 20);
        TFTscreen.setColor(255, 0, 0);
        TFTscreen.fillCircle(224, 195, 12);
        TFTscreen.setFont(SmallFont);
        TFTscreen.setColor(255, 255, 255);
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        TFTscreen.print2("1", 221, 188);
        if (card.init(SPI_HALF_SPEED, 13)) {
          (void)begin_consultardiretoriopastaSD(portadecartaosystem);
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/M3.BMP", 269, 118 + 20);
          TFTscreen.setColor(255, 255, 255);
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.setFont(BigFont);
          TFTscreen.print2("SD2", 269, 187 + 20);
          TFTscreen.setColor(255, 0, 0);
          TFTscreen.fillCircle(334, 195, 12);
          TFTscreen.setFont(SmallFont);
          TFTscreen.setColor(255, 255, 255);
          TFTscreen.setBackColor(VGA_TRANSPARENT);
          TFTscreen.print2("2", 331, 188);
        }
      }
    }
  }
  (void)begin_consultardiretoriopastaSD(portadecartaosystem);
  return retorno;
}
void app_gerenciador_arquivo(int opcao) {
  String cartaodememoriadir;
  if (opcao == 1) {
    cartaodememoriadir = "SD::SD1/USUARIO";
  } else if (opcao == 2) {
    cartaodememoriadir =  "SD::SD2";
  }
  app_gerenciador_arquivo_open_dir(cartaodememoriadir);
}
void app_gerenciador_arquivo_open_file(String uridir) {
  if (uridir.indexOf(".BMP") > 0) {
    visualizarimagem(uridir, 2, 0, 0, 0);
  } else if (uridir.indexOf(".LNK") > 0) {
    abriraplicativoatalho(uridir);
  } else if (uridir.indexOf(".WAV") > 0) {
    tocarsom(uridir, "Som");
  } else if (uridir.indexOf(".N5S") > 0) {
    TFTscreen.background(0, 0, 0);
    linguagemstruct func;
    func.interpretadorcomadosinitall(lerarquivo(uridir));
  } else if (uridir.indexOf(".N5P") > 0) {
    app_desenhar(uridir, 1);
  } else{
    app_blocodenota(uridir, 1);
  }
}
void app_gerenciador_arquivo_open_dir(String uridir) {
  String cartaodememoriadir = uridir;
  boolean sairapp = false;
  limparvariavelbuscaarquivosgeral();
  diretoriogerpasta = cartaodememoriadir;
  int posicao = 1;
  printDirectory(posicao, diretoriogerpasta);
  app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
  printaarquivoslist();
  String texto[1];
  texto[0] = diretoriogerpasta;
  app_layout_texto_barra(texto, 1);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Ger. Arquivo", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Ajuda", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Voltar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              app_gerenciador_arquivo_ajuda();
              break;
            } else if (c == '3') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero;
        if (c == '1') {
          appnumero = 1;
        }
        if (c == '2') {
          appnumero = 2;
        }
        if (c == '3') {
          appnumero = 3;
        }
        if (c == '4') {
          appnumero = 4;
        }
        if (c == '5') {
          appnumero = 5;
        }
        if (c == '6') {
          appnumero = 6;
        }
        if (appnumero <= contagemdearquivos) {
          if (tipodearquivo[appnumero].equals("folder")) {
            diretoriogerpasta += arquivosger[appnumero];
            contagemdearquivosuri++;
            uriarquivosger[contagemdearquivosuri] = arquivosger[appnumero];
            posicao = 1;
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("bmp")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            visualizarimagem(uri, 2, 0, 0, 0);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("lnk")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            abriraplicativoatalho(uri);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("wav")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            tocarsom(uri, namearquivosger[appnumero]);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("n5s")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            TFTscreen.background(0, 0, 0);
            linguagemstruct func;
            func.interpretadorcomadosinitall(lerarquivo(uri));
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("txt")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += "+";
            uri += namearquivosger[appnumero];
            app_blocodenota(uri, 1);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("n5p")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += "+";
            uri += namearquivosger[appnumero];
            app_desenhar(uri, 1);
            printlayout = true;
          }
        }
      } else if (c == 'N') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          app_layout_carregamento("Nomear", "", 50);
          String urlcopia = diretoriogerpasta;
          urlcopia += "/";
          urlcopia += namearquivosger[poicao2];
          String urlcolar = diretoriogerpasta;
          urlcolar += "/";
          urlcolar += readtext1("Nomear", namearquivosger[poicao2]);
          if (!((urlcolar.equals("")) || (urlcolar.equals(urlcopia)))) {
            if (tipodearquivo[poicao2].equals("folder")) {
              areadetraferenciaurlcola = urlcolar;
              gerardiretorio(areadetraferenciaurlcola);
              url1 = "";
              for (int i = 0; i <= 99; i++) {
                memoriagerenciadorarquivo[i] = "";
              }
              urlcopia = diretoriogerpasta;
              urlcopia += "/";
              urlcopia += "+";
              urlcopia += namearquivosger[poicao2];
              areadetraferenciaurl = urlcopia;
              urlcopia.replace("+", "");
              colarpasta(consultardiretoriopastaSD(urlcopia), 0);
              removediretorio(urlcopia);
              areadetraferenciaurl = "";
              areadetraferenciaurlcola = "";
            } else {
              colararquivo(urlcopia, urlcolar);
              removearquivo(urlcopia);
            }
          }
          app_layout_carregamento("Nomear", "", 100);
          posicao = 1;
          printlayout = true;
        }
      } else if (c == 'I') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          app_layout_print_dialogo2("Informacao", "");
          carregarshow(228, 154, 20, 4, 255, 255, 255);
          String urlcopia = diretoriogerpasta;
          urlcopia += "/";
          urlcopia += namearquivosger[poicao2];
          informacaofile(urlcopia);
          carregarshow(228, 154, 20, 4, 255, 255, 255);
          posicao = 1;
          printlayout = true;
        }
      } else if (c == 'A') {
        app_layout_carregamento("Criar File", "", 50);
        String urlcolar = diretoriogerpasta;
        urlcolar += "/";
        urlcolar += readtext1("Criar Arquivo", "SemNome.txt");
        if (!(urlcolar.equals(""))) {
          gravararquivo(urlcolar, "");
        }
        app_layout_carregamento("Criar File", "", 100);
        posicao = 1;
        printlayout = true;
      } else if (c == 'P') {
        app_layout_carregamento("Criar Dir", "", 50);
        String urlcolar = diretoriogerpasta;
        urlcolar += "/";
        urlcolar += readtext1("Criar Diretorio", "Nova Pasta");
        if (!(urlcolar.equals(""))) {
          gerardiretorio(urlcolar);
        }
        app_layout_carregamento("Criar Dir", "", 100);
        posicao = 1;
        printlayout = true;
      } else if (c == 'C') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          areadetraferenciaurl = diretoriogerpasta;
          areadetraferenciaurl += "/";
          areadetraferenciaurl += "+";
          areadetraferenciaurl += namearquivosger[poicao2];
          if (tipodearquivo[poicao2].equals("folder")) {
            tipoareadetraferenciaurl = "folder";
          } else {
            tipoareadetraferenciaurl = "";
          }
          tipoareadetraferenciaurlcola = "";
          printlayout = true;
        }
      } else if (c == 'X') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          areadetraferenciaurl = diretoriogerpasta;
          areadetraferenciaurl += "/";
          areadetraferenciaurl += "+";
          areadetraferenciaurl += namearquivosger[poicao2];
          if (tipodearquivo[poicao2].equals("folder")) {
            tipoareadetraferenciaurl = "folder";
          } else {
            tipoareadetraferenciaurl = "";
          }
          tipoareadetraferenciaurlcola = "recortar";
          printlayout = true;
        }
      } else if (c == 'V') {
        if (tipoareadetraferenciaurl.equals("folder")) {
          areadetraferenciaurlcola = diretoriogerpasta;
          areadetraferenciaurlcola += "/";
          areadetraferenciaurlcola += namefile(areadetraferenciaurl);
          gerardiretorio(areadetraferenciaurlcola);
          url1 = "";
          for (int i = 0; i <= 99; i++) {
            memoriagerenciadorarquivo[i] = "";
          }
          String urlcopia = areadetraferenciaurl;
          urlcopia.replace("+", "");
          colarpasta(consultardiretoriopastaSD(urlcopia), 0);
          if (tipoareadetraferenciaurlcola.equals("recortar")) {
            removediretorio(urlcopia);
          }
        } else {
          String urlcopia = areadetraferenciaurl;
          String urlcolar = diretoriogerpasta;
          urlcolar += "/";
          urlcolar += namefile(urlcopia);
          urlcopia.replace("+", "");
          colararquivo_dialogo(urlcopia, urlcolar);
          if (tipoareadetraferenciaurlcola.equals("recortar")) {
            removearquivo(urlcopia);
          }
        }
        for (int i = 0; i <= 99; i++) {
          memoriagerenciadorarquivo[i] = "";
        }
        posicao = 1;
        tipoareadetraferenciaurl = "";
        areadetraferenciaurlcola = "";
        areadetraferenciaurl = "";
        tipoareadetraferenciaurlcola = "";
        printlayout = true;
      } else if (c == 'D') {
        int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
        if (poicao2 != 0) {
          app_layout_carregamento("Deletar", "", 50);
          String urldeletar = diretoriogerpasta;
          urldeletar += "/";
          urldeletar += namearquivosger[poicao2];
          if (tipodearquivo[poicao2].equals("folder")) {
            removediretorio(urldeletar);
          } else {
            removearquivo(urldeletar);
          }
          app_layout_carregamento("Deletar", "", 100);
          posicao = 1;
          printlayout = true;
        }
      } else if (c == PS2_LEFTARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_DELETE) {
        if (!(diretoriogerpasta.equals(cartaodememoriadir))) {
          diretoriogerpasta.replace(uriarquivosger[contagemdearquivosuri], "");
          uriarquivosger[contagemdearquivosuri] = "";
          contagemdearquivosuri--;
          if (diretoriogerpasta.equals("")) {
            diretoriogerpasta = cartaodememoriadir;
          }
          posicao = 1;
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      limparvariavelbuscaarquivos();
      printDirectory(posicao, diretoriogerpasta);
      app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
      printaarquivoslist();
      texto[0] = diretoriogerpasta;
      app_layout_texto_barra(texto, 1);
    }
  }
}

String app_gerenciador_arquivo_read(int opcao, int opcao2) {
  String cartaodememoriadir;
  if (opcao2 == 1) {
    cartaodememoriadir = "SD::SD1/USUARIO";
  } else if (opcao2 == 2) {
    cartaodememoriadir =  "SD::SD2";
  }
  String valoraserretona;
  boolean sairapp = false;
  limparvariavelbuscaarquivosgeral();
  diretoriogerpasta = cartaodememoriadir;
  int posicao = 1;
  printDirectory(posicao, diretoriogerpasta);
  app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
  printaarquivoslist();
  String texto[1];
  texto[0] = diretoriogerpasta;
  app_layout_texto_barra(texto, 1);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Ger. Arquivo", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Ajuda", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Voltar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              app_gerenciador_arquivo_ajuda();
              break;
            } else if (c == '3') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero;
        if (c == '1') {
          appnumero = 1;
        }
        if (c == '2') {
          appnumero = 2;
        }
        if (c == '3') {
          appnumero = 3;
        }
        if (c == '4') {
          appnumero = 4;
        }
        if (c == '5') {
          appnumero = 5;
        }
        if (c == '6') {
          appnumero = 6;
        }
        if (appnumero <= contagemdearquivos) {
          if (tipodearquivo[appnumero].equals("folder")) {
            diretoriogerpasta += arquivosger[appnumero];
            contagemdearquivosuri++;
            uriarquivosger[contagemdearquivosuri] = arquivosger[appnumero];
            posicao = 1;
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("bmp")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            visualizarimagem(uri, 2, 0, 0, 0);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("lnk")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            abriraplicativoatalho(uri);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("wav")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            tocarsom(uri, namearquivosger[appnumero]);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("n5s")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += namearquivosger[appnumero];
            TFTscreen.background(0, 0, 0);
            linguagemstruct func;
            func.interpretadorcomadosinitall(lerarquivo(uri));
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("txt")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += "+";
            uri += namearquivosger[appnumero];
            app_blocodenota(uri, 1);
            printlayout = true;
          } else if (tipodearquivo[appnumero].equals("n5p")) {
            String uri = diretoriogerpasta;
            uri += "/";
            uri += "+";
            uri += namearquivosger[appnumero];
            app_desenhar(uri, 1);
            printlayout = true;
          }
        }
      } else if (c == '+') {
        if (opcao == 1) {
          valoraserretona = diretoriogerpasta;
          valoraserretona += "/";
        } else {
          int poicao2 = app_gerenciador_arquivo_selecionar(diretoriogerpasta, posicao);
          if (poicao2 != 0) {
            valoraserretona = diretoriogerpasta;
            valoraserretona += "/";
            valoraserretona += "+";
            valoraserretona += namearquivosger[poicao2];
          }
        }
        break;
      } else if (c == PS2_LEFTARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(contagemdearquivos / 6);
        if ((contagemdearquivos % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_DELETE) {
        if (!(diretoriogerpasta.equals(cartaodememoriadir))) {
          diretoriogerpasta.replace(uriarquivosger[contagemdearquivosuri], "");
          uriarquivosger[contagemdearquivosuri] = "";
          contagemdearquivosuri--;
          if (diretoriogerpasta.equals("")) {
            diretoriogerpasta = cartaodememoriadir;
          }
          posicao = 1;
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      limparvariavelbuscaarquivos();
      printDirectory(posicao, diretoriogerpasta);
      app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
      printaarquivoslist();
      texto[0] = diretoriogerpasta;
      app_layout_texto_barra(texto, 1);
    }
  }
  return valoraserretona;
}

int app_gerenciador_arquivo_selecionar(String diretorio, int posicao) {
  int retorna = 0;
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
  printaarquivoslist();
  String texto[2];
  texto[0] = diretoriogerpasta;
  texto[1] = "S:";
  texto[1] += String(retorna);
  app_layout_texto_barra(texto, 2);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Selecion. File", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Salvar", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Cancelar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              retorna = 0;
              sairapp = true;
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        retorna = 1;
        printlayout = true;
      } else if (c == '2') {
        retorna = 2;
        printlayout = true;
      } else if (c == '3') {
        retorna = 3;
        printlayout = true;
      } else if (c == '4') {
        retorna = 4;
        printlayout = true;
      } else if (c == '5') {
        retorna = 5;
        printlayout = true;
      } else if (c == '6') {
        retorna = 6;
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Ger. Arquivo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
      printaarquivoslist();
      texto[0] = diretoriogerpasta;
      texto[1] = "S:";
      texto[1] += String(retorna);
      app_layout_texto_barra(texto, 2);
    }
  }
  return retorna;
}
void app_gerenciador_arquivo_ajuda() {
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Ajuda::G.F.", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
  app_layout_print_paragrafo_1("+ = RETORNA URI DIRETORIO || RETORNA URI ARQUIVO SHIFT+N = NOMEAR; SHIFT+I = INFORMACAO; SHIFT+P = CRIAR DIRETORIO; SHIFT+A = CRIAR ARQUIVO; SHIFT+C = COPIAR; SHIFT+X = RECORTAR; SHIFT+V = COLAR; SHIFT+D = DELETAR.", 30, 77 + (8 * 16), 450, 260, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Ajuda::G.F.", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else {
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Ajuda::G.F.", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M8.BMP", -30, -30, -30);
      app_layout_print_paragrafo_1("+ = RETORNA URI DIRETORIO || RETORNA URI ARQUIVO SHIFT+N = NOMEAR; SHIFT+I = INFORMACAO; SHIFT+P = CRIAR DIRETORIO; SHIFT+A = CRIAR ARQUIVO; SHIFT+C = COPIAR; SHIFT+X = RECORTAR; SHIFT+V = COLAR; SHIFT+D = DELETAR.", 30, 77 + (8 * 16), 450, 260, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------GER. I/O----------------------------------
void app_gerenciadorio() {
  int pino, frequencia;
  app_layout_actionbar_barra_1("Gerenciador I/O", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M9.BMP", 0, 50, 0);
  String lista[7] = {
    "Ligar Pino",
    "Digitar Pino",
    "Desligar Pino",
    "Frequencia Pino",
    "Digitar Frequencia",
    "Consultar Pino Dialogo",
    "Consultar Pino Grafico"
  };
  app_layout_list("Opcoes", lista, 7, 10, 90, 14, 16, 255, 255, 255);
  String texto[2];
  texto[0] = "P:";
  texto[0] += String(pino);
  texto[1] = "F:";
  texto[1] += String(frequencia);
  app_layout_texto_barra(texto, 2);
  boolean sairapp = false;
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Geren. I/O", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        pinMode(pino, OUTPUT);
        digitalWrite(pino, HIGH);
      } else if (c == '2') {
        pino = readtext1("Digite Pino", String(pino)).toInt();
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '3') {
        digitalWrite(pino, LOW);
      } else if (c == '4') {
        pinMode(pino, OUTPUT);
        analogWrite(pino, frequencia);
      } else if (c == '5') {
        frequencia = readtext1("Digite Freq.", String(frequencia)).toInt();
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '6') {
        pinMode(pino, INPUT);
        if (digitalRead(pino) == 1) {
          app_layout_print_notificacao1("Existe sinal");
        } else {
          app_layout_print_notificacao1("Nao existe sinal");
        }
        printlayout = true;
      } else if (c == '7') {
        app_gerenciadorio_grafico(pino);
        printlayout = true;
      } else {
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Gerenciador I/O", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M9.BMP", 0, 50, 0);
      app_layout_list("Opcoes", lista, 7, 10, 90, 14, 16, 255, 255, 255);
      texto[0] = "P:";
      texto[0] += String(pino);
      texto[1] = "F:";
      texto[1] += String(frequencia);
      app_layout_texto_barra(texto, 2);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------GER. SENSOR-------------------------------
void app_gerenciadorsensor() {
  int pino = 0;
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Ger. Sensor", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M10.BMP", 0, 50, 0);
  String lista[3] = {
    "Digitar Pino",
    "Consultar Pino Dialogo",
    "Consultar Pino Grafico"
  };
  app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
  String texto[1];
  texto[0] = "P:";
  texto[0] += String(pino);
  app_layout_texto_barra(texto, 1);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Ger. Sensor", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        pino = readtext1("Digite Pino", String(pino)).toInt();
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '2') {
        String printstr = "O sinal e ";
        printstr += String(analogRead(pino));
        app_layout_print_notificacao1(printstr);
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '3') {
        app_gerenciadorsensor_grafico(pino);
        if (desligarn5) {
          break;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Ger. Sensor", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M10.BMP", 0, 50, 0);
      app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
      texto[0] = "P:";
      texto[0] += String(pino);
      app_layout_texto_barra(texto, 1);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------GER. PROCES-------------------------------
void app_gerprocesso() {
  boolean sairapp = false;
  String lista[3] = {
    "Memoria",
    "Processo",
    "Notificacao"
  };
  app_layout_actionbar_barra_1("Ger. Proces.", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M11.BMP", 0, 0, 100);
  app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Ger. Proces.", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        app_memoriasistema();
        printlayout = true;
      } else if (c == '2') {
        ger_processo();
        printlayout = true;
      } else if (c == '3') {
        alertanotificacao = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Ger. Proces.", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M11.BMP", 0, 0, 100);
      app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
void app_memoriasistema_lista(int posicao) {
  if (((((posicao - 1) * 2) + 1) <= 99)) {
    String titulo = "Posicao: ";
    titulo += ((posicao - 1) * 2) + 1;
    String texto = memoriareadint(((posicao - 1) * 2) + 1);
    app_layout_print_caixa_texto(30, 90, 450, titulo, 1, texto);
  }
  if (((((posicao - 1) * 2) + 2) <= 99)) {
    String titulo = "Posicao: ";
    titulo += ((posicao - 1) * 2) + 2;
    String texto = memoriareadint(((posicao - 1) * 2) + 2);
    app_layout_print_caixa_texto(30, 185, 450, titulo, 2, texto);
  }
}
void app_memoriasistema() {
  boolean sairapp = false;
  int posicao = 1;
  app_layout_actionbar_barra_1("Memoria S.O", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M9.bmp", 0, 0, 100);
  app_memoriasistema_lista(posicao);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Memoria S.O", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if ((c == '1') || (c == '2')) {
        int appnumero = ((posicao - 1) * 2);
        if (c == '1') {
          appnumero += 1;
        }
        if (c == '2') {
          appnumero += 2;
        }
        String textoposicao = "Posicao: ";
        textoposicao += appnumero;
        memoriawriteint(appnumero, readtext1(textoposicao, memoriareadint(appnumero)));
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(99 / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(99 / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Memoria S.O", "SD::SD1/SYS.H/IMAGEM/CONFIG~1/M9.bmp", 0, 0, 100);
      app_memoriasistema_lista(posicao);
    }
  }
}
void ger_processo() {
  String lista[3];
  boolean sairapp = false;
  lista[0] = "Atividades:";
  lista[1] = "Despertador:";
  lista[2] = "Cont. Regre.: ";
  if (!transferenciaatividades) {
    lista[0] += "Ativo";
  } else {
    lista[0] += "Desativado";
  }
  if (!transferenciadespertador) {
    lista[1] += "Ativo";
  } else {
    lista[1] += "Desativado";
  }
  if (!transferenciacontagemregressiva) {
    lista[2] += "Ativo";
  } else {
    lista[2] += "Desativado";
  }
  app_layout_actionbar_barra_1("Processo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M11.BMP", 0, 0, 100);
  app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Processo", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        transferenciaatividades = !statusatividade("Atividades", !transferenciaatividades);
        printlayout = true;
      } else if (c == '2') {
        transferenciadespertador = !statusatividade("Despertador", !transferenciadespertador);
        printlayout = true;
      } else if (c == '3') {
        transferenciacontagemregressiva = !statusatividade("Cont. Regre.", !transferenciacontagemregressiva);
        printlayout = true;
      }
    }
    if (printlayout)
    {
      lista[0] = "Atividades:";
      lista[1] = "Despertador:";
      lista[2] = "Cont. Regre.: ";
      if (!transferenciaatividades) {
        lista[0] += "Ativo";
      } else {
        lista[0] += "Desativado";
      }
      if (!transferenciadespertador) {
        lista[1] += "Ativo";
      } else {
        lista[1] += "Desativado";
      }
      if (!transferenciacontagemregressiva) {
        lista[2] += "Ativo";
      } else {
        lista[2] += "Desativado";
      }
      app_layout_actionbar_barra_1("Processo", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M11.BMP", 0, 0, 100);
      app_layout_list("Opcoes", lista, 3, 10, 90, 14, 16, 255, 255, 255);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------AJUDA-------------------------------------
//---------------------------------------------------------------------

//#####################################################################


//##############################PARTE_3################################

//---------------------------IDE N5SCRIPT------------------------------
void app_iden5scipt() {
  int scroll = 0;
  int cursory = 0;
  int cursorx = 0;
  int espacoeixoX = 8;
  int espacoeixoY = 12;
  String nomearquivo[1];
  String enderecoarquivo;
  boolean sairapp = false;
  int marginedittext = 5;
  int edittexteixoY1 = 110;
  int edittexteixoX1 = 80;
  int edittexteixoY2 = 250;
  int edittexteixoX2 = 410;
  int edittexteixoX =  edittexteixoX2 - edittexteixoX1;
  int edittexteixoY = edittexteixoY2 - edittexteixoY1;
  String arraycampotexto = "";
  app_layout_actionbar_barra_1("IDE N5Script", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 0, 50, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
      if (c == PS2_ENTER) {
        cursory += 1;
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
        }
      } else if (c == PS2_TAB) {
        cursorx += 4;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 0;
          cursory += 1;
        }
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
        }
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (11 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (11 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("IDE N5Script", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Novo", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Abrir", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Salvar", 112 + 14, 67 + (6 * 16));
        TFTscreen.print2("5) Voltar", 112 + 14, 67 + (7 * 16));
        TFTscreen.print2("6) Executar", 112 + 14, 67 + (8 * 16));
        TFTscreen.print2("7) Desligar N5", 112 + 14, 67 + (9 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              scroll = 0;
              cursory = 0;
              cursorx = 0;
              espacoeixoX = 8;
              espacoeixoY = 12;
              marginedittext = 5;
              arraycampotexto = "";
              break;
            } else if (c == '3') {
              scroll = 0;
              cursory = 0;
              cursorx = 0;
              espacoeixoX = 8;
              espacoeixoY = 12;
              marginedittext = 5;
              enderecoarquivo = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
              if (!(enderecoarquivo.equals(""))) {
                nomearquivo[0] = namefile(enderecoarquivo);
                enderecoarquivo.replace("+", "");
                String valor = lerarquivo(enderecoarquivo);
                arraycampotexto = valor;
              }
              if (desligarn5) {
                sairapp = true;
              }
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              if (enderecoarquivo.equals("")) {
                salvararquivo(1, "", "", arraycampotexto);
              } else {
                salvararquivo(2, "", enderecoarquivo, arraycampotexto);
              }
              if (desligarn5) {
                sairapp = true;
              }
              break;
            } else if (c == '5') {
              break;
            } else if (c == '6') {
              TFTscreen.background(0, 0, 0);
              linguagemstruct func;
              func.interpretadorcomadosinitall(arraycampotexto);
              break;
            } else if (c == '7') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;

            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_PAGEDOWN) {
      } else if (c == PS2_PAGEUP) {
      } else if (c == PS2_LEFTARROW) {
        cursorx -= 1;
        if (cursorx < 0) {
          cursorx = ((edittexteixoX - espacoeixoX) / espacoeixoX);
          cursory -= 1;
        }
        if (cursory < 0) {
          cursory = 0;
        }
      } else if (c == PS2_RIGHTARROW) {
        cursorx += 1;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 0;
          cursory += 1;
        }
      } else if (c == PS2_UPARROW) {
        cursory -= 1;
        if (cursory < 0) {
          cursory = 0;
        }
      } else if (c == PS2_DOWNARROW) {
        cursory += 1;
      } else if (c == PS2_DELETE) {
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          if (((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) > int((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX))) {
            cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) + 1;
          } else {
            if (((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
              cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) - 1;
            } else {
              cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX));
            }
          }
          if (((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
            cursorx = int((edittexteixoX - espacoeixoX) / espacoeixoX);
          } else {
            cursorx = ((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX));
          }
        }
        String textoanterio = arraycampotexto.substring(0, cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
        String textoposterio = arraycampotexto.substring(1 + cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
        arraycampotexto = "";
        arraycampotexto += textoanterio;
        arraycampotexto += textoposterio;
        if (arraycampotexto.equals("")) {
          scroll = 0;
          cursory = 0;
          cursorx = 0;
          espacoeixoX = 8;
          espacoeixoY = 12;
          marginedittext = 5;
          arraycampotexto = "";
        }
      } else {
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
          arraycampotexto += String(c);
        } else {
          String textoanterio = arraycampotexto.substring(0, cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
          String textoposterio = arraycampotexto.substring(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
          arraycampotexto = "";
          arraycampotexto += textoanterio;
          arraycampotexto += String(c);
          arraycampotexto += textoposterio;
        }
        cursorx += 1;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 1;
          cursory += 1;
        }
      }
    }
    scroll = (edittexteixoY - espacoeixoY) - (cursory * (espacoeixoY + 1));
    if (scroll > 0) {
      scroll = 0;
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("IDE N5Script", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M13.BMP", 0, 50, 0);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    for (int i = 1; i < arraycampotexto.length() + 1; i++) {
      int numerolinha = 0;
      int numerocoluna = 0;
      if ((i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) > int(i / int((edittexteixoX - espacoeixoX) / espacoeixoX))) {
        numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) + 1;
      } else {
        if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) - 1;
        } else {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX));
        }
      }
      if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
        numerocoluna = int((edittexteixoX - espacoeixoX) / espacoeixoX);
      } else {
        numerocoluna = (i % int((edittexteixoX - espacoeixoX) / espacoeixoX));
      }
      if ((((numerolinha * espacoeixoY) + marginedittext + scroll) > 0) && (!(String(arraycampotexto.charAt(i - 1)).equals(""))) && ((edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
        if ((!(String(arraycampotexto.charAt(i - 1)).equals(" "))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\n"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\t"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\r")))) {
          TFTscreen.printChar(arraycampotexto.charAt(i - 1), edittexteixoX1 + (((numerocoluna - 1) * espacoeixoX) + marginedittext), edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll));
        }
      }
    }
    if ((((cursory * espacoeixoY) + marginedittext + scroll + 1) > 0) && ((edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
      TFTscreen.printChar('|', edittexteixoX1 + ((cursorx * espacoeixoX) + marginedittext), edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll + 1));
    }
  }
}
//---------------------------------------------------------------------
//---------------------------JOGOS-------------------------------------
void jogo_app_ball() {
  jogoball jogo;
  jogo.incializar(1);
  while (!jogo.fecharjogo) {
    if (jogo.parajogo) {
      jogo.lacoderepeticao();
    }
  }
}
void jogo_app_corrida() {
  jogocorrida jogo;
  jogo.incializar(1);
  while (!jogo.fecharjogo) {
    if (jogo.parajogo) {
      jogo.lacoderepeticao();
    }
  }
}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
//---------------------------ATIVIDADES-------------------------------
void tranferirdadosatividades() {
  transferenciaatividades = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 7; j++) {
      atividades[i][j] = bancodedados[i][j];
    }
  }
  transferenciaatividades = false;
}
void app_atividades_cadastro_print(String nome, String assunto, int hora, int minuto, int dia, int mes, int ano) {
  app_layout_print_caixa_texto_simples(35, 90, 165, 125, "1", String("Nome " + nome));
  app_layout_print_caixa_texto_simples(175, 90, 305, 125, "2", String("Assunto " + assunto));
  app_layout_print_caixa_texto_simples(315, 90, 445, 125, "3", String("Hora " + String(hora)));
  app_layout_print_caixa_texto_simples(35, 135, 165, 170, "4", String("Minuto " + String(minuto)));
  app_layout_print_caixa_texto_simples(175, 135, 305, 170, "5", String("Dia " + String(dia)));
  app_layout_print_caixa_texto_simples(315, 135, 445, 170, "6", String("Mes " + String(mes)));
  app_layout_print_caixa_texto_simples(35, 180, 165, 215,  "7", String("Ano " + String(ano)));
}
void app_atividades_cadastro() {
  int dia;
  int mes;
  int ano;
  int hora;
  int minuto;
  String nome;
  String assunto;
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Cadastro Atividades", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M15.BMP", 0, 127, 127);
  app_atividades_cadastro_print(nome, assunto, hora, minuto, dia, mes, ano);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Atividades", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Salvar", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Cancelar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              String texto[7];
              texto[0] = nome;
              texto[1] = assunto;
              texto[2] = String(hora);
              texto[3] = String(minuto);
              texto[4] = String(dia);
              texto[5] = String(mes);
              texto[6] = String(ano);
              insertbancodedados(texto);
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              sairapp = true;
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        nome = readtext1("Nome", nome);
        printlayout = true;
      } else if (c == '2') {
        assunto = readtext1("Assunto", assunto);
        printlayout = true;
      } else if (c == '3') {
        hora = readtext1("Hora", String(hora)).toInt();
        printlayout = true;
      } else if (c == '4') {
        minuto = readtext1("Minuto", String(minuto)).toInt();
        printlayout = true;
      } else if (c == '5') {
        dia = readtext1("Dia", String(dia)).toInt();
        printlayout = true;
      } else if (c == '6') {
        mes = readtext1("Mes", String(mes)).toInt();
        printlayout = true;
      } else if (c == '7') {
        ano = readtext1("Ano", String(ano)).toInt();
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Cadastro Atividades", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M15.BMP", 0, 127, 127);
      app_atividades_cadastro_print(nome, assunto, hora, minuto, dia, mes, ano);
    }
  }
}
void app_atividades_cadastro_visualizar(int posicao) {
  int dia = bancodedados[posicao][4].toInt();
  int mes = bancodedados[posicao][5].toInt();
  int ano = bancodedados[posicao][6].toInt();
  int hora = bancodedados[posicao][2].toInt();
  int minuto = bancodedados[posicao][3].toInt();
  String nome = bancodedados[posicao][0];
  String assunto = bancodedados[posicao][1];
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Cadastro Atividades", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M15.BMP", 0, 127, 127);
  app_atividades_cadastro_print(nome, assunto, hora, minuto, dia, mes, ano);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (9 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (9 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Atividades", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Salvar", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Excluir", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Cancelar", 112 + 14, 67 + (6 * 16));
        TFTscreen.print2("5) Desligar N5", 112 + 14, 67 + (7 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              String texto[7];
              texto[0] = nome;
              texto[1] = assunto;
              texto[2] = String(hora);
              texto[3] = String(minuto);
              texto[4] = String(dia);
              texto[5] = String(mes);
              texto[6] = String(ano);
              updatebancodedados(texto, posicao);
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              deletebancodedados(posicao);
              sairapp = true;
              break;
            } else if (c == '4') {
              sairapp = true;
              break;
            } else if (c == '5') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == '1') {
        nome = readtext1("Nome", nome);
        printlayout = true;
      } else if (c == '2') {
        assunto = readtext1("Assunto", assunto);
        printlayout = true;
      } else if (c == '3') {
        hora = readtext1("Hora", String(hora)).toInt();
        printlayout = true;
      } else if (c == '4') {
        minuto = readtext1("Minuto", String(minuto)).toInt();
        printlayout = true;
      } else if (c == '5') {
        dia = readtext1("Dia", String(dia)).toInt();
        printlayout = true;
      } else if (c == '6') {
        mes = readtext1("Mes", String(mes)).toInt();
        printlayout = true;
      } else if (c == '7') {
        ano = readtext1("Ano", String(ano)).toInt();
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Cadastro Atividades", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M15.BMP", 0, 127, 127);
      app_atividades_cadastro_print(nome, assunto, hora, minuto, dia, mes, ano);
    }
  }
}

void app_atividades_lista(int posicao) {

  if (((((posicao - 1) * 2) + 1) <= bancodedadosreadint(0, 0).toInt())) {
    String titulo = bancodedados[((posicao - 1) * 2) + 1][0];
    String texto = bancodedados[((posicao - 1) * 2) + 1][1];
    texto += ". Horario ";
    if (bancodedados[((posicao - 1) * 2) + 1][2].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 1][2];
    }
    texto += ":";
    if (bancodedados[((posicao - 1) * 2) + 1][3].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 1][3];
    }
    texto += " ";
    if (bancodedados[((posicao - 1) * 2) + 1][4].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 1][4];
    }
    texto += "/";
    if (bancodedados[((posicao - 1) * 2) + 1][5].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 1][5];
    }
    texto += "/";
    if (bancodedados[((posicao - 1) * 2) + 1][6].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 1][6];
    }
    app_layout_print_caixa_texto(30, 90, 450, titulo, 1, texto);
  }
  if (((((posicao - 1) * 2) + 2) <= bancodedadosreadint(0, 0).toInt())) {
    String titulo = bancodedados[((posicao - 1) * 2) + 2][0];
    String texto = bancodedados[((posicao - 1) * 2) + 2][1];
    texto += ". Horario ";
    if (bancodedados[((posicao - 1) * 2) + 2][2].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 2][2];
    }
    texto += ":";
    if (bancodedados[((posicao - 1) * 2) + 2][3].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 2][3];
    }
    texto += " ";
    if (bancodedados[((posicao - 1) * 2) + 2][4].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 2][4];
    }
    texto += "/";
    if (bancodedados[((posicao - 1) * 2) + 2][5].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 2][5];
    }
    texto += "/";
    if (bancodedados[((posicao - 1) * 2) + 2][6].equals("0")) {
      texto += "00";
    } else {
      texto += bancodedados[((posicao - 1) * 2) + 2][6];
    }
    app_layout_print_caixa_texto(30, 185, 450, titulo, 2, texto);
  }
}
void app_atividades() {
  boolean sairapp = false;
  int posicao = 1;
  lerbancodedaos("SD::SD1/SYS.H/APPDATA/ATIVID~1/m.dat");
  if (bancodedadosreadint(1, 0).toInt() == 0) {
    bancodedadoswriteint(1, 0, "7");
  }
  app_layout_actionbar_barra_1("Atividades", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M15.BMP", 0, 127, 127);
  app_atividades_lista(posicao);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Atividades", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Novo", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Voltar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              app_atividades_cadastro();
              salvarbancodedaos("SD::SD1/SYS.H/APPDATA/ATIVID~1/m.dat");
              lerbancodedaos("SD::SD1/SYS.H/APPDATA/ATIVID~1/m.dat");
              if (desligarn5) {
                sairapp = true;
              }
              break;
            } else if (c == '3') {
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          salvarbancodedaos("SD::SD1/SYS.H/APPDATA/ATIVID~1/m.dat");
          transferenciaatividades = true;
          tranferirdadosatividades();
          transferenciaatividades = false;
          break;
        } else {
          printlayout = true;
        }
      } else if ((c == '1') || (c == '2')) {
        int appnumero = ((posicao - 1) * 2);
        if (c == '1') {
          appnumero += 1;
        }
        if (c == '2') {
          appnumero += 2;
        }
        app_atividades_cadastro_visualizar(appnumero);
        salvarbancodedaos("SD::SD1/SYS.H/APPDATA/ATIVID~1/m.dat");
        lerbancodedaos("SD::SD1/SYS.H/APPDATA/ATIVID~1/m.dat");
        int quantidadelayout = int(bancodedadosreadint(0, 0).toInt() / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(bancodedadosreadint(0, 0).toInt() / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(bancodedadosreadint(0, 0).toInt() / 2);
        if ((bancodedadosreadint(0, 0).toInt() % 2) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Atividades", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M15.BMP", 0, 127, 127);
      app_atividades_lista(posicao);
    }
  }
}
//---------------------------------------------------------------------
//---------------------------OUTROS APP--------------------------------
void printoutrosapp(int item) {
  TFTscreen.clrScr();
  TFTscreen.fillScr(230, 230, 230);
  String uri = arquivosencontrado[item];
  String namen = arquivosencontradonome[item];
  namen.toLowerCase();
  uri.replace(namen, "");
  uri += "ICON.BMP";
  String nameapp = arquivosencontradonome[item];
  nameapp.replace(".N5S", "");
  TFTscreen.setColor(100, 100, 100);
  TFTscreen.fillRoundRect(211 - 5, 131 - 5, 211 + 57 + 5, 131 + 57 + 5);
  printimagescalatrans(uri, 211, 131, 57, 57);
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2(nameapp, 195, 207);
  delay(3000);
}
void printbackoutrosapp() {
  int scroll = 3;
  int reduzir = 5;
  if ((!arquivosencontrado[1].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(81 - 5, 93 - scroll - 5, 81 + 57 + 5, 93 - scroll + 57 + 5);
    String uri = arquivosencontrado[1];
    String namen = arquivosencontradonome[1];
    namen.toLowerCase();
    uri.replace(namen, "");
    uri += "ICON.BMP";
    String nameapp = arquivosencontradonome[1];
    nameapp.replace(".N5S", "");
    printimagescalatrans(uri, 81, 93 - scroll, 57, 57);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nameapp, 65, 171 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 150 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 143, 143 - scroll - reduzir);
  }
  if ((!arquivosencontrado[2].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(201 - 5, 93 - scroll - 5, 201 + 57 + 5, 93 - scroll + 57 + 5);
    String uri = arquivosencontrado[2];
    String namen = arquivosencontradonome[2];
    namen.toLowerCase();
    uri.replace(namen, "");
    uri += "ICON.BMP";
    String nameapp = arquivosencontradonome[2];
    nameapp.replace(".N5S", "");
    printimagescalatrans(uri, 201, 93 - scroll, 57, 57);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nameapp, 185, 171 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 150 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 263, 143 - scroll - reduzir);
  }
  if ((!arquivosencontrado[3].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(331 - 5, 93 - scroll - 5, 331 + 57 + 5, 93 - scroll + 57 + 5);
    String uri = arquivosencontrado[3];
    String namen = arquivosencontradonome[3];
    namen.toLowerCase();
    uri.replace(namen, "");
    uri += "ICON.BMP";
    String nameapp = arquivosencontradonome[3];
    nameapp.replace(".N5S", "");
    printimagescalatrans(uri, 331, 93 - scroll, 57, 57);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nameapp, 315, 171 - scroll - reduzir);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 150 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 393, 143 - scroll - reduzir);
  }
  if ((!arquivosencontrado[4].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(81 - 5, 193 - scroll - reduzir - 5, 81 + 57 + 5, 193 - scroll - reduzir + 57 + 5);
    String uri = arquivosencontrado[4];
    String namen = arquivosencontradonome[4];
    namen.toLowerCase();
    uri.replace(namen, "");
    uri += "ICON.BMP";
    String nameapp = arquivosencontradonome[4];
    nameapp.replace(".N5S", "");
    printimagescalatrans(uri, 81, 193 - scroll - reduzir, 57, 57);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nameapp, 65, 269 - scroll - reduzir - 3);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(145, 250 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("4", 143, 243 - scroll - reduzir);
  }
  if ((!arquivosencontrado[5].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(201 - 5, 193 - scroll - reduzir - 5, 201 + 57 + 5, 193 - scroll - reduzir + 57 + 5);
    String uri = arquivosencontrado[5];
    String namen = arquivosencontradonome[5];
    namen.toLowerCase();
    uri.replace(namen, "");
    uri += "ICON.BMP";
    String nameapp = arquivosencontradonome[5];
    nameapp.replace(".N5S", "");
    printimagescalatrans(uri, 201, 193 - scroll - reduzir, 57, 57);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nameapp, 185, 269 - scroll - reduzir - 3);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(265, 250 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("5", 263, 243 - scroll - reduzir);
  }
  if ((!arquivosencontrado[6].equals(""))) {
    TFTscreen.setColor(230, 230, 230);
    TFTscreen.fillRoundRect(331 - 5, 193 - scroll - reduzir - 5, 331 + 57 + 5, 193 - scroll - reduzir + 57 + 5);
    String uri = arquivosencontrado[6];
    String namen = arquivosencontradonome[6];
    namen.toLowerCase();
    uri.replace(namen, "");
    uri += "ICON.BMP";
    String nameapp = arquivosencontradonome[6];
    nameapp.replace(".N5S", "");
    printimagescalatrans(uri, 331, 193 - scroll - reduzir, 57, 57);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2(nameapp, 315, 269 - scroll - reduzir - 3);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(395, 250 - scroll - reduzir, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("6", 393, 243 - scroll - reduzir);
  }
}
void app_outrosaplicatos() {
  boolean sairapp = false;
  int posicao = 1;
  int cartaodebusca = app_gerenciador_arquivo_memoria_read();
  buscar_arquivos(".N5S", true, posicao, cartaodebusca);
  app_layout_actionbar_barra_1("Outros Apps", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M17.BMP", 0, 50, 0);
  printbackoutrosapp();
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Outros Apps", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Desligar N5", 112 + 14, 67 + (5 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if ((c == '1') || (c == '2') || (c == '3') || (c == '4') || (c == '5') || (c == '6')) {
        int appnumero;
        if (c == '1') {
          appnumero = 1;
        }
        if (c == '2') {
          appnumero = 2;
        }
        if (c == '3') {
          appnumero = 3;
        }
        if (c == '4') {
          appnumero = 4;
        }
        if (c == '5') {
          appnumero = 5;
        }
        if (c == '6') {
          appnumero = 6;
        }
        if (appnumero <= arquivosencontradocntagem) {
          printoutrosapp(appnumero);
          TFTscreen.background(0, 0, 0);
          String uri = arquivosencontrado[appnumero];
          uri += arquivosencontradonome[appnumero];
          linguagemstruct func;
          func.interpretadorcomadosinitall(lerarquivo(uri));
          if (desligarn5) {
            break;
          } else {
            printlayout = true;
          }
        }
      } else if (c == PS2_LEFTARROW) {
        int  quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao--;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_RIGHTARROW) {
        int quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao++;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      } else if (c == PS2_UPARROW) {
        int  quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao -= 2;
        if (posicao < 1) {
          posicao = quantidadelayout;
        }
        printlayout = true;
      } else if (c == PS2_DOWNARROW) {
        int quantidadelayout = int(arquivosencontradocntagem / 6);
        if ((arquivosencontradocntagem % 6) > 0) {
          quantidadelayout++;
        }
        posicao += 2;
        if (posicao > quantidadelayout) {
          posicao = 1;
        }
        printlayout = true;
      }
    }
    if (printlayout)
    {
      buscar_arquivos(".N5S", true, posicao, cartaodebusca);
      app_layout_actionbar_barra_1("Outros Apps", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M17.BMP", 0, 50, 0);
      printbackoutrosapp();
    }
  }
}
//---------------------------------------------------------------------
//---------------------------DESENHAR----------------------------------
void app_desenhar(String uri, int opcao) {
  int corr = 0;
  int corg = 0;
  int corb = 0;
  int posicaox = 0;
  int posicaoy = 0;
  int desenho[30][20];
  boolean pintar = true;
  boolean sairapp = false;
  int hexvalue = creatergb(255, 255, 255);
  app_layout_actionbar_barra_1("Desenhar", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 127, 127, 127);
  for (int i = 0; i < 30; i++) {
    for (int j = 0; j < 20; j++) {
      desenho[i][j] = hexvalue;
      int r1 = hexvalue >> 16;
      int g1 = hexvalue >> 8 & 0xff;
      int b1 = hexvalue & 0xff;
      TFTscreen.fill(r1, g1, b1);
      TFTscreen.stroke(r1, g1, b1);
      TFTscreen.rect(122 + i * 8, 95 + j * 8, 8, 8);
      delay(1);
    }
  }
  TFTscreen.fill(0, 0, 0);
  TFTscreen.stroke(0, 0, 0);
  hexvalue = creatergb(0, 0, 0);
  if (opcao == 1) {
    String codegravarmemoriauri = uri;
    if (!(codegravarmemoriauri.equals(""))) {
      if (!(codegravarmemoriauri.equals(""))) {
        codegravarmemoriauri.replace("+", "");
        String codegravarmemoria = lerarquivo(codegravarmemoriauri);
        int u = 0;
        for (int i = 0; i < 30; i++) {
          for (int j = 0; j < 20; j++) {
            String codegravarmemoria1;
            while (true) {
              u++;
              if (String(codegravarmemoria.charAt(u)).equals(";")) {
                desenho[i][j] = codegravarmemoria1.toInt();
                delay(1);
                break;
              } else {
                if (String(codegravarmemoria.charAt(u)).equals(" ") || String(codegravarmemoria.charAt(u)).equals("\r") || String(codegravarmemoria.charAt(u)).equals("\n") || String(codegravarmemoria.charAt(u)).equals("\t")) {
                } else {
                  codegravarmemoria1 += String(codegravarmemoria.charAt(u));
                }
              }
              if (u >= codegravarmemoria.length()) {
                break;
              }
            }
          }
        }
      }
    }
  }
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (10 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (10 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Desenhar", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Sair", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Novo", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Abrir", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Salvar", 112 + 14, 67 + (6 * 16));
        TFTscreen.print2("5) Voltar", 112 + 14, 67 + (7 * 16));
        TFTscreen.print2("6) Desligar N5", 112 + 14, 67 + (8 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              sairapp = true;
              break;
            } else if (c == '2') {
              posicaox = 0;
              posicaoy = 0;
              corr = 0;
              corg = 0;
              corb = 0;
              desenho[60][40];
              hexvalue = creatergb(255, 255, 255);
              pintar = true;
              for (int i = 0; i < 30; i++) {
                for (int j = 0; j < 20; j++) {
                  desenho[i][j] = hexvalue;
                  delay(1);
                }
              }
              hexvalue = creatergb(0, 0, 0);
              break;
            } else if (c == '3') {
              String codegravarmemoriauri = app_gerenciador_arquivo_read(2, app_gerenciador_arquivo_memoria_read());
              if (!(codegravarmemoriauri.equals(""))) {
                if (!(codegravarmemoriauri.equals(""))) {
                  codegravarmemoriauri.replace("+", "");
                  String codegravarmemoria = lerarquivo(codegravarmemoriauri);
                  int u = 0;
                  for (int i = 0; i < 30; i++) {
                    for (int j = 0; j < 20; j++) {
                      String codegravarmemoria1;
                      while (true) {
                        u++;
                        if (String(codegravarmemoria.charAt(u)).equals(";")) {
                          desenho[i][j] = codegravarmemoria1.toInt();
                          delay(1);
                          break;
                        } else {
                          if (String(codegravarmemoria.charAt(u)).equals(" ") || String(codegravarmemoria.charAt(u)).equals("\r") || String(codegravarmemoria.charAt(u)).equals("\n") || String(codegravarmemoria.charAt(u)).equals("\t")) {
                          } else {
                            codegravarmemoria1 += String(codegravarmemoria.charAt(u));
                          }
                        }
                        if (u >= codegravarmemoria.length()) {
                          break;
                        }
                      }
                    }
                  }
                }
                if (desligarn5) {
                  sairapp = true;
                }
              }
              break;
            } else if (c == '4') {
              String codegravarmemoria = "";
              for (int i = 0; i < 30; i++) {
                for (int j = 0; j < 20; j++) {
                  codegravarmemoria +=  desenho[i][j];
                  codegravarmemoria += ";";
                }
              }
              salvararquivo(3, ".n5p", "", codegravarmemoria);
              codegravarmemoria = "";
              if (desligarn5) {
                sairapp = true;
              }
              break;
            } else if (c == '5') {
              break;
            } else if (c == '6') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;
            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == 'r') {
        corr = readtext1("Cor R", String(corr)).toInt();
        printlayout = true;
      } else if (c == 'g') {
        corg = readtext1("Cor G", String(corg)).toInt();
        printlayout = true;
      } else if (c == 'b') {
        corb = readtext1("Cor B", String(corb)).toInt();
        printlayout = true;
      } else if (c == 'a') {
        TFTscreen.stroke(corr, corg, corb);
        TFTscreen.fill(corr, corg, corb);
        pintar = true;
      } else if (c == 's') {
        pintar = false;
        TFTscreen.stroke(0, 0, 0);
        TFTscreen.fill(255, 255, 255);
      } else if (c == PS2_LEFTARROW) {
        posicaox--;
        if (posicaox < 0) {
          posicaox = 0;
        }
        TFTscreen.rect(122 + posicaox * 8, 95 + posicaoy * 8, 8, 8);
        if (pintar) {
          desenho[posicaox][posicaoy] = hexvalue;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_RIGHTARROW) {
        posicaox++;
        if (posicaox > 29) {
          posicaox = 29;
        }
        TFTscreen.rect(122 + posicaox * 8, 95 + posicaoy * 8, 8, 8);
        if (pintar) {
          desenho[posicaox][posicaoy] = hexvalue;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_DOWNARROW) {
        posicaoy++;
        if (posicaoy > 19) {
          posicaoy = 19;
        }
        TFTscreen.rect(122 + posicaox * 8, 95 + posicaoy * 8, 8, 8);
        if (pintar) {
          desenho[posicaox][posicaoy] = hexvalue;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_UPARROW) {
        posicaoy--;
        if (posicaoy < 0) {
          posicaoy = 0;
        }
        TFTscreen.rect(122 + posicaox * 8, 95 + posicaoy * 8, 8, 8);
        if (pintar) {
          desenho[posicaox][posicaoy] = hexvalue;
        } else {
          printlayout = true;
        }
      }
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Desenhar", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M18.BMP", 127, 127, 127);
      for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 20; j++) {
          int r1 = desenho[i][j] >> 16;
          int g1 = desenho[i][j] >> 8 & 0xff;
          int b1 = desenho[i][j] & 0xff;
          TFTscreen.fill(r1, g1, b1);
          TFTscreen.stroke(r1, g1, b1);
          TFTscreen.rect(122 + i * 8, 95 + j * 8, 8, 8);
          delay(1);
        }
      }
      TFTscreen.fill(corr, corg, corb);
      TFTscreen.stroke(corr, corg, corb);
      hexvalue = creatergb(corr, corg, corb);
    }
  }
}

//---------------------------------------------------------------------
//---------------------------N5 SCRIPT DOS-----------------------------
void app_iden5scipt_dos() {
  int scroll = 0;
  int cursory = 0;
  int cursorx = 0;
  int espacoeixoX = 8;
  int espacoeixoY = 12;
  String nomearquivo[1];
  String enderecoarquivo;
  boolean sairapp = false;
  int marginedittext = 5;
  int edittexteixoY1 = 110;
  int edittexteixoX1 = 80;
  int edittexteixoY2 = 250;
  int edittexteixoX2 = 410;
  int edittexteixoX =  edittexteixoX2 - edittexteixoX1;
  int edittexteixoY = edittexteixoY2 - edittexteixoY1;
  String arraycampotexto = "";
  app_layout_actionbar_barra_3("IDE N5Script", 0, 50, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
  while (true) {
    String str = app_layout_espera_kyboard();
    boolean printlayout = false;
    if (str.equals("tela")) {
      printlayout = true;
    } else {
      char c = str.charAt(0);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
      if (c == PS2_ENTER) {
        cursory += 1;
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
        }
      } else if (c == PS2_TAB) {
        cursorx += 4;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 0;
          cursory += 1;
        }
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
        }
      } else if (c == PS2_ESC) {
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (8 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (8 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("IDE N5Script", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Novo", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Voltar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Executar", 112 + 14, 67 + (5 * 16));
        TFTscreen.print2("4) Desligar N5", 112 + 14, 67 + (6 * 16));
        while (true) {
          delay(1);
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == '1') {
              scroll = 0;
              cursory = 0;
              cursorx = 0;
              espacoeixoX = 8;
              espacoeixoY = 12;
              marginedittext = 5;
              arraycampotexto = "";
              break;
            } else if (c == '2') {
              break;
            } else if (c == '3') {
              TFTscreen.background(0, 0, 0);
              linguagemstruct func;
              func.interpretadorcomadosinitall(arraycampotexto);
              break;
            } else if (c == '4') {
              TFTscreen.clrScr();
              TFTscreen.fillScr(0, 0, 0);
              desligar_n5();
              if (desligarn5) {
                sairapp = true;
              }
              break;

            }
          }
        }
        if (sairapp) {
          break;
        } else {
          printlayout = true;
        }
      } else if (c == PS2_PAGEDOWN) {
      } else if (c == PS2_PAGEUP) {
      } else if (c == PS2_LEFTARROW) {
        cursorx -= 1;
        if (cursorx < 0) {
          cursorx = ((edittexteixoX - espacoeixoX) / espacoeixoX);
          cursory -= 1;
        }
        if (cursory < 0) {
          cursory = 0;
        }
      } else if (c == PS2_RIGHTARROW) {
        cursorx += 1;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 0;
          cursory += 1;
        }
      } else if (c == PS2_UPARROW) {
        cursory -= 1;
        if (cursory < 0) {
          cursory = 0;
        }
      } else if (c == PS2_DOWNARROW) {
        cursory += 1;
      } else if (c == PS2_DELETE) {
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          if (((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) > int((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX))) {
            cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) + 1;
          } else {
            if (((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
              cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX)) - 1;
            } else {
              cursory = ((arraycampotexto.length() - 1) / int((edittexteixoX - espacoeixoX) / espacoeixoX));
            }
          }
          if (((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
            cursorx = int((edittexteixoX - espacoeixoX) / espacoeixoX);
          } else {
            cursorx = ((arraycampotexto.length() - 1) % int((edittexteixoX - espacoeixoX) / espacoeixoX));
          }
        }
        String textoanterio = arraycampotexto.substring(0, cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
        String textoposterio = arraycampotexto.substring(1 + cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
        arraycampotexto = "";
        arraycampotexto += textoanterio;
        arraycampotexto += textoposterio;
        if (arraycampotexto.equals("")) {
          scroll = 0;
          cursory = 0;
          cursorx = 0;
          espacoeixoX = 8;
          espacoeixoY = 12;
          marginedittext = 5;
          arraycampotexto = "";
        }
      } else {
        if (String(arraycampotexto.charAt(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)))).equals("")) {
          for (int i = 0; i < cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)); i++) {
            if (String(arraycampotexto.charAt(i)).equals("")) {
              arraycampotexto += " ";
            }
          }
          arraycampotexto += String(c);
        } else {
          String textoanterio = arraycampotexto.substring(0, cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
          String textoposterio = arraycampotexto.substring(cursorx + (cursory * ((edittexteixoX - espacoeixoX) / espacoeixoX)));
          arraycampotexto = "";
          arraycampotexto += textoanterio;
          arraycampotexto += String(c);
          arraycampotexto += textoposterio;
        }
        cursorx += 1;
        if (cursorx > ((edittexteixoX - espacoeixoX) / espacoeixoX)) {
          cursorx = 1;
          cursory += 1;
        }
      }
    }
    scroll = (edittexteixoY - espacoeixoY) - (cursory * (espacoeixoY + 1));
    if (scroll > 0) {
      scroll = 0;
    }
    if (printlayout)
    {
      app_layout_actionbar_barra_3("IDE N5Script", 0, 50, 0);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.fillRoundRect(edittexteixoX1 - 10, edittexteixoY1 - 10, edittexteixoX2 + 10, edittexteixoY2 + 10);
    }
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(0, 0, 0);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    for (int i = 1; i < arraycampotexto.length() + 1; i++) {
      int numerolinha = 0;
      int numerocoluna = 0;
      if ((i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) > int(i / int((edittexteixoX - espacoeixoX) / espacoeixoX))) {
        numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) + 1;
      } else {
        if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX)) - 1;
        } else {
          numerolinha = (i / int((edittexteixoX - espacoeixoX) / espacoeixoX));
        }
      }
      if ((i % int((edittexteixoX - espacoeixoX) / espacoeixoX)) == 0) {
        numerocoluna = int((edittexteixoX - espacoeixoX) / espacoeixoX);
      } else {
        numerocoluna = (i % int((edittexteixoX - espacoeixoX) / espacoeixoX));
      }
      if ((((numerolinha * espacoeixoY) + marginedittext + scroll) > 0) && (!(String(arraycampotexto.charAt(i - 1)).equals(""))) && ((edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
        if ((!(String(arraycampotexto.charAt(i - 1)).equals(" "))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\n"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\t"))) && (!(String(arraycampotexto.charAt(i - 1)).equals("\r")))) {
          TFTscreen.printChar(arraycampotexto.charAt(i - 1), edittexteixoX1 + (((numerocoluna - 1) * espacoeixoX) + marginedittext), edittexteixoY1 + ((numerolinha * espacoeixoY) + marginedittext + scroll));
        }
      }
    }
    if ((((cursory * espacoeixoY) + marginedittext + scroll + 1) > 0) && ((edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll)) <= (edittexteixoY2 - marginedittext))) {
      TFTscreen.printChar('|', edittexteixoX1 + ((cursorx * espacoeixoX) + marginedittext), edittexteixoY1 + ((cursory * espacoeixoY) + marginedittext + scroll + 1));
    }
  }
}
//---------------------------------------------------------------------

//#####################################################################
void buscar_arquivos(String opcao, boolean oculto, int posicao, int opcao2) {
  arquivosencontradocntagem = 0;
  posicaobuscaarquivo = posicao;
  contagemposicaobuscaarquivo = 1;
  urlbuscaarquivoencontrado = "";
  urlbuscaarquivoencontradoformato = opcao;
  for (int i = 0; i < 100; i++) {
    urlbuscaarquivo[i] = "";
  }
  for (int i = 0; i < 7; i++) {
    arquivosencontrado[i] = "";
  }
  for (int i = 0; i < 7; i++) {
    arquivosencontradonome[i] = "";
  }
  File rootlista;
  String cartaodebusca;
  if (opcao2 == 1) {
    cartaodebusca = "SD::SD1";
  } else {
    cartaodebusca = "SD::SD2";
  }
  if (oculto) {
    printDirectorybuscaarquivooculto(consultardiretoriopastaSD(String(cartaodebusca + "/")), 0, opcao, cartaodebusca);
  } else {
    printDirectorybuscaarquivo(consultardiretoriopastaSD(String(cartaodebusca + "/")), 0, opcao, cartaodebusca);
  }
}
void printDirectorybuscaarquivo(File dir, int numTabs, String formato, String cartaodebusca) {
  while (true) {
    delay(1);
    File entry =  dir.openNextFile();
    if (! entry) {
      break;
    }
    urlbuscaarquivoencontrado = String(entry.name());
    int value = 0;
    value = urlbuscaarquivoencontrado.indexOf(formato);
    if (value > 0) {

      if (formato.equals(urlbuscaarquivoencontradoformato)) {
        arquivosencontradocntagem++;
        String ab;
        ab += "/";
        int u = 0;
        while (!(urlbuscaarquivo[u].equals(""))) {
          ab += urlbuscaarquivo[u];
          u++;
        }
        ab += urlbuscaarquivoencontrado;
        ab.toLowerCase();
        if (contagemposicaobuscaarquivo <= 6) {
          if ((((posicaobuscaarquivo - 1) * 6) + contagemposicaobuscaarquivo) == arquivosencontradocntagem) {
            arquivosencontradonome[contagemposicaobuscaarquivo] = String(entry.name());
            if (ab.indexOf("SD::SD") > 0) {
              arquivosencontrado[contagemposicaobuscaarquivo] = ab;
            } else {
              arquivosencontrado[contagemposicaobuscaarquivo] = cartaodebusca;
              arquivosencontrado[contagemposicaobuscaarquivo] += ab;
            }
            contagemposicaobuscaarquivo++;
          }
        }
      }
    }
    value = urlbuscaarquivoencontrado.indexOf(".");
    if (value > 0) {
    } else {
      if (entry.isDirectory()) {
        String b1;
        b1 += String(entry.name());
        b1 += "/";
        urlbuscaarquivo[numTabs] = b1;
        printDirectorybuscaarquivo(entry, numTabs + 1, formato, cartaodebusca);
      }
    }
    entry.close();
  }
}
void printDirectorybuscaarquivooculto(File dir, int numTabs, String formato, String cartaodebusca) {
  while (true) {
    delay(1);
    File entry =  dir.openNextFile();
    if (! entry) {
      break;
    }
    urlbuscaarquivoencontrado = String(entry.name());
    int value = 0;
    value = urlbuscaarquivoencontrado.indexOf(formato);
    if (value > 0) {
      if (formato.equals(urlbuscaarquivoencontradoformato)) {
        arquivosencontradocntagem++;
        String nametext = String(entry.name());
        String ab;
        ab += "/";
        int u = 0;
        while (!(urlbuscaarquivo[u].equals(""))) {
          ab += urlbuscaarquivo[u];
          u++;
        }
        ab += url1;
        ab.toLowerCase();
        if (contagemposicaobuscaarquivo <= 6) {
          if ((((posicaobuscaarquivo - 1) * 6) + contagemposicaobuscaarquivo) == arquivosencontradocntagem) {
            arquivosencontradonome[contagemposicaobuscaarquivo] = String(entry.name());
            if (ab.indexOf("SD::SD") > 0) {
              arquivosencontrado[contagemposicaobuscaarquivo] = ab;
            } else {
              arquivosencontrado[contagemposicaobuscaarquivo] = cartaodebusca;
              arquivosencontrado[contagemposicaobuscaarquivo] += ab;
            }
            contagemposicaobuscaarquivo++;
          }
        }
      }
    }
    if (entry.isDirectory()) {
      String b1;
      b1 += String(entry.name());
      b1 += "/";
      urlbuscaarquivo[numTabs] = b1;
      printDirectorybuscaarquivooculto(entry, numTabs + 1, formato, cartaodebusca);
    }
    entry.close();
  }
}
void tocarsom(String uri, String nome) {
  short buffern[1024];
  app_layout_print_dialogo(nome, "Para sair precione esc");
  SPI.setClockDivider(4);
  Audio.begin(88200, 100);
  int count = 0;
  File myFile = consultardiretoriopastaSD(uri);
  int quantidade = myFile.size();
  int duracaomusica =  String(myFile.size(), DEC).toInt() / (176879.8783783784);
  int duracaomusica2 = 0;
  int contagemtempomusica = 0;
  while (myFile.available()) {
    delay(1);
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ESC) {
        break;
      }
    }
    if (quantidade > sizeof(buffern)) {
      myFile.read(buffern, sizeof(buffern));
      int volumen = (memoriareadint(22).toInt()) * 204.8;
      Audio.prepare(buffern, 1024, volumen);
      Audio.write(buffern, 1024);
    } else {
      myFile.read(buffern, sizeof(buffern));
      int volumen = (memoriareadint(22).toInt()) * 204.8;
      Audio.prepare(buffern, 1024, volumen);
      Audio.write(buffern, quantidade );
    }
    count++;
    if (count == 100) {
      contagemtempomusica++;
      duracaomusica2 = duracaomusica - int(contagemtempomusica * (1.157787686771493));
      String texto;
      if (int(duracaomusica2 / 60) < 10) {
        texto += "0";
      }
      texto += String(int(duracaomusica2 / 60));
      texto += ":";
      if ((duracaomusica2 % 60) < 10) {
        texto += "0";
      }
      texto += String((duracaomusica2 % 60));
      count = 0;
      TFTscreen.setColor(0, 0, 0);
      TFTscreen.setBackColor(230, 230, 230);
      TFTscreen.setFont(BigFont);
      TFTscreen.print2(texto, 114 + 14, 67 + (5 * 16));
    }
  }
  myFile.close();
  Audio.end();
}
