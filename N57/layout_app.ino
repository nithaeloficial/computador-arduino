
void app_layout_print_caixa_texto_simples(int x1, int y1, int x2, int y2, String posicao, String texto) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(x1 - 2, y1 - 2, x2 + 2, y2 + 2);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(x1, y1, x2, y2);
  app_layout_print_paragrafo(1, texto , x1 + 10, y1 + 10, x2 - 10, y2 - 10, 0, 0, 0);
  TFTscreen.setColor(255, 0, 0);
  TFTscreen.fillCircle(x1 + 5, y1 + 5, 12);
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2(posicao, x1 + 3, y1 - 2);
}
void app_layout_print_caixa_texto(int x, int y, int x2, String titulo, int posicao, String acumulador) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(x - 2, y - 2, x2 + 2, y + 2 + (5 * 16));
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(x, y, x2, y + (5 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(titulo, x + 14, y + (1 * 16));
  app_layout_print_paragrafo(1, acumulador, x + 14, y + (2 * 16), x2 - 15, y + (4 * 16), 0, 0, 0);
  TFTscreen.setColor(255, 0, 0);
  TFTscreen.fillCircle(x + 5, y + 5, 12);
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2(String(posicao), x + 3, y - 2);
}
void app_layout_print_paragrafo(int font, String texto, int x1, int y1, int x2, int y2, int r, int g, int b) {
  if (font == 1) {
    TFTscreen.setFont(SmallFont);
  } else if (font == 2) {
    TFTscreen.setFont(BigFont);
  } else if (font == 3) {
  }
  app_layout_print_paragrafo_font(texto, x1, y1, x2, y2, r, g, b);
}
void app_layout_print_paragrafo_font(String texto, int x1, int y1, int x2, int y2, int r, int g, int b) {
  int scroll = 0;
  int cursory = 0;
  int cursorx = 0;
  int espacoeixoX = TFTscreen.getFontXsize();
  int espacoeixoY = TFTscreen.getFontYsize();
  int marginedittext = 5;
  int edittexteixoY1 = y1;
  int edittexteixoX1 = x1;
  int edittexteixoY2 = y2;
  int edittexteixoX =  x2 - x1;
  int edittexteixoY =  y2 - y1;
  String arraycampotexto = texto;
  scroll = (edittexteixoY - espacoeixoY) - (cursory * (espacoeixoY + 1));
  if (scroll > 0) {
    scroll = 0;
  }
  TFTscreen.setColor(r, g, b);
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
}
void app_layout_print_dialogo2(String titulo, String acumulador) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (9 * 16));
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (9 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(255, 255, 255);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(titulo, 112 + 14, 67 + (1 * 16));
  app_layout_print_paragrafo_1(acumulador, 112 + 14, 67 + (3 * 16), 112 + 255, 67 + (9 * 16), 0, 0, 0);
}
void app_layout_print_dialogo(String titulo, String acumulador) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(titulo, 112 + 14, 67 + (1 * 16));
  app_layout_print_paragrafo_1(acumulador, 112 + 14, 67 + (3 * 16), 112 + 255, 67 + (7 * 16), 0, 0, 0);
}
void app_layout_print_dialogo1(String titulo, String acumulador) {
  app_layout_print_dialogo(titulo, acumulador);
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
        break;
      } else {
      }
    }
    if (printlayout)
    {
      app_layout_print_dialogo(titulo, acumulador);
    }
  }
}

void app_layout_print_notificacao1(String acumulador) {
  app_layout_print_notificacao(acumulador, 10);
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
        break;
      } else {
      }
    }
    if (printlayout)
    {
      app_layout_print_notificacao(acumulador, 10);
    }
  }
}
void app_layout_print_notificacao(String acumulador, int y) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(316, y - 2, 480, y + 67);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(318, y, 480, y + 65);
  app_layout_print_paragrafo_1(acumulador, 335, y, 480, y + 65, 0, 0, 0);
}
void app_layout_print_paragrafo_1(String texto, int x1, int y1, int x2, int y2, int r, int g, int b) {
  int scroll = 0;
  int cursory = 0;
  int cursorx = 0;
  int espacoeixoX = 8;
  int espacoeixoY = 12;
  int marginedittext = 5;
  int edittexteixoY1 = y1;
  int edittexteixoX1 = x1;
  int edittexteixoY2 = y2;
  int edittexteixoX =  x2 - x1;
  int edittexteixoY =  y2 - y1;
  String arraycampotexto = texto;
  scroll = (edittexteixoY - espacoeixoY) - (cursory * (espacoeixoY + 1));
  if (scroll > 0) {
    scroll = 0;
  }
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(r, g, b);
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
}
void app_layout_carregamento(String titulo, String assunto, int carregamento) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(titulo, 112 + 14, 67 + (1 * 16));
  app_layout_print_paragrafo_1(assunto, 112 + 14, 67 + (3 * 16), 112 + 240, 67 + (5 * 16), 0, 0, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(126, 157, 352, 170);
  TFTscreen.setColor(51, 51, 151);
  TFTscreen.fillRoundRect(126, 157, 126 + int(carregamento * 2.26), 170);
}
void app_layout_carregamento_tempo(String titulo, String assunto, int carregamento, int tempo) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(titulo, 112 + 14, 67 + (1 * 16));
  app_layout_print_paragrafo_1(assunto, 112 + 14, 67 + (3 * 16), 112 + 240, 67 + (5 * 16), 0, 0, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(126, 157, 352, 170);
  TFTscreen.setColor(51, 51, 151);
  TFTscreen.fillRoundRect(126, 157, 126 + int(carregamento * 2.26), 170);
  String texto;
  if (int(tempo / 60) < 10) {
    texto += "0";
  }
  texto += String(int(tempo / 60));
  texto += ":";
  if ((tempo % 60) < 10) {
    texto += "0";
  }
  texto += String((tempo % 60));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(texto, 270, 67 + (1 * 16));
}
void app_layout_print_barra(int r, int g, int b) {
  TFTscreen.setColor(r, g, b);
  TFTscreen.fillRect(0, 280, 480, 320);
}
void app_layout_actionbar_barra_3(String nome, int r, int g, int b) {
  TFTscreen.fillScr(51 + r, 51 + g, 51 + b);
  app_layout_print_barra(0, 0, 0);
  TFTscreen.setColor(77 + r, 77 + g, 77 + b);
  TFTscreen.fillRect(0, 0, 480, 70);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(77 + r, 77 + g, 77 + b);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(nome, 15, 30);
}
void app_layout_actionbar_barra_1(String nome, String uri, int r, int g, int b) {
  TFTscreen.fillScr(51 + r, 51 + g, 51 + b);
  app_layout_print_barra(0, 0, 0);
  TFTscreen.setColor(77 + r, 77 + g, 77 + b);
  TFTscreen.fillRect(0, 0, 480, 70);
  printimagetransparente(uri, 15, 7);
  if ((77 + r + 77 + g + 77 + b) > 450) {
    TFTscreen.setColor(0, 0, 0);
  } else {
    TFTscreen.setColor(255, 255, 255);
  }
  TFTscreen.setBackColor(77 + r, 77 + g, 77 + b);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(nome, 90, 37);
}
void app_layout_actionbar_barra_2(String nome, String uri, int r, int g, int b) {
  TFTscreen.fillScr(230 + r, 230 + g, 230 + b);
  app_layout_print_barra(0, 0, 0);
  TFTscreen.setColor(200 + r, 200 + g, 200 + b);
  TFTscreen.fillRect(0, 0, 480, 70);
  printimagetransparente(uri, 15, 7);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(200 + r, 200 + g, 200 + b);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(nome, 90, 37);
}
void app_layout_list(String titulo, String texto[], int quantidade, int x, int y, int margix, int margiy, int r, int g, int b) {
  TFTscreen.setColor(r, g, b);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(titulo, x + margix, y + margiy);
  for (int i = 0; i < quantidade; i++) {
    String print_texto = String(i + 1);
    print_texto += ") ";
    print_texto += texto[i];
    TFTscreen.print2(print_texto, x + margix, y + ((i + 3)* margiy));
  }
}
void app_layout_texto_barra(String texto[], int quantidade) {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRect(1, 281, 365, 319);
  int valor = 365 / quantidade;
  String print_texto;
  for (int i = 0; i < quantidade; i++) {
    for (int j = 0; j < texto[i].length(); j++) {
      if ((j * 14) < (valor - 28)) {
        print_texto += texto[i].charAt(j);
      }
    }
    TFTscreen.setFont(BigFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(0, 0, 0);
    TFTscreen.print2(print_texto, 15 + (i * valor), 295);
    print_texto = "";
  }
}
String app_layout_espera_kyboard() {
  String keyboardtexto;
  if (!teladebloqueio) {
    printdataehora2();
  }
  int tempo  =  temporestante();
  int hora = memoriareadint(3).toInt();
  int minuto = memoriareadint(2).toInt();
  while (true) {
    delay(1);
    if (execucao() == 1) {
      keyboardtexto = "tela";
      break;
    }
    if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
      minuto = memoriareadint(2).toInt();
      hora = memoriareadint(3).toInt();
      if (!teladebloqueio) {
        printdataehora2();
      }
    }
    if (memoriareadint(30).toInt() != 0) {
      if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
        suspenden5 = true;
        tela_suspender();
        keyboardtexto = "tela";
        break;
      }
    }
    if (keyboard.available()) {
      char c = keyboard.read();
      keyboardtexto = String(c);
      break;
    }
  }
  return keyboardtexto;
}
void app_gerenciadorio_grafico(int pino) {
  boolean sairapp = false;
  int tempo  =  temporestante();
  int hora = memoriareadint(3).toInt();
  int minuto = memoriareadint(2).toInt();
  int frequencia = 0;
  String texto[2];
  texto[0] = "P:";
  texto[0] += String(pino);
  texto[1] = "F:";
  texto[1] += String(frequencia);
  pinMode(pino, INPUT);
  int oldx = 10, oldy = 260, x = 10, y = 260;
  app_layout_actionbar_barra_1("Gerenciador I/O", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M9.BMP", 0, 50, 0);
  oldx = 10; oldy = 260; x = 10; y = 260;
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.drawRect(0, 70, 479, 280);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.drawLine(239, 70, 239, 280);
  TFTscreen.drawLine(1, 170, 478, 170);
  for (int i = 9; i < 470; i += 10)
    TFTscreen.drawLine(i, 168, i, 172);
  for (int i = 80; i < 270; i += 10)
    TFTscreen.drawLine(237, i, 241, i);
  app_layout_texto_barra(texto, 2);
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
      } else {
      }
    }
    frequencia = digitalRead(pino);
    texto[0] = "P:";
    texto[0] += String(pino);
    texto[1] = "F:";
    texto[1] += String(frequencia);
    app_layout_texto_barra(texto, 2);
    if (frequencia == HIGH) {
      y = 90;
    } else {
      y = 260;
    }
    x += 10;
    if (x > 470) {
      printlayout = true;
    }
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.drawLine(oldx, oldy, x, y);
    oldx = x;
    oldy = y;
    delay(250);
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Gerenciador I/O", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M9.BMP", 0, 50, 0);
      oldx = 10; oldy = 260; x = 10; y = 260;
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.drawRect(0, 70, 479, 280);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.setBackColor(VGA_TRANSPARENT);
      TFTscreen.drawLine(239, 70, 239, 280);
      TFTscreen.drawLine(1, 170, 478, 170);
      for (int i = 9; i < 470; i += 10)
        TFTscreen.drawLine(i, 168, i, 172);
      for (int i = 80; i < 270; i += 10)
        TFTscreen.drawLine(237, i, 241, i);
      printdataehora2();
    }
  }
}
void app_gerenciadorsensor_grafico(int pino) {
  boolean sairapp = false;
  int tempo  =  temporestante();
  int hora = memoriareadint(3).toInt();
  int minuto = memoriareadint(2).toInt();
  int frequencia = 0;
  String texto[2];
  texto[0] = "P:";
  texto[0] += String(pino);
  texto[1] = "F:";
  texto[1] += String(frequencia);
  int oldx = 10, oldy = 260, x = 10, y = 260;
  app_layout_actionbar_barra_1("Ger. Sensor", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M10.BMP", 0, 50, 0);
  oldx = 10; oldy = 260; x = 10; y = 260;
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.drawRect(0, 70, 479, 280);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.drawLine(239, 70, 239, 280);
  TFTscreen.drawLine(1, 170, 478, 170);
  for (int i = 9; i < 470; i += 10)
    TFTscreen.drawLine(i, 168, i, 172);
  for (int i = 80; i < 270; i += 10)
    TFTscreen.drawLine(237, i, 241, i);
  printdataehora2();
  app_layout_texto_barra(texto, 2);
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
      } else {
      }
    }
    frequencia = analogRead(pino);
    texto[0] = "P:";
    texto[0] += String(pino);
    texto[1] = "F:";
    texto[1] += String(frequencia);
    app_layout_texto_barra(texto, 2);
    y = map(frequencia, 0, 1023, 260, 90);
    x += 10;
    if (x > 470) {
      printlayout = true;
    }
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.drawLine(oldx, oldy, x, y);
    oldx = x;
    oldy = y;
    delay(250);
    if (printlayout)
    {
      app_layout_actionbar_barra_1("Ger. Sensor", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M10.BMP", 0, 50, 0);
      oldx = 10; oldy = 260; x = 10; y = 260;
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.drawRect(0, 70, 479, 280);
      TFTscreen.setColor(230, 230, 230);
      TFTscreen.setBackColor(VGA_TRANSPARENT);
      TFTscreen.drawLine(239, 70, 239, 280);
      TFTscreen.drawLine(1, 170, 478, 170);
      for (int i = 9; i < 470; i += 10)
        TFTscreen.drawLine(i, 168, i, 172);
      for (int i = 80; i < 270; i += 10)
        TFTscreen.drawLine(237, i, 241, i);
      printdataehora2();
    }
  }
}
void printdataehora2() {
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(0, 0, 0);
  String texto;
  if (memoriareadint(3).toInt() < 10) {
    texto += "0";
  }
  texto += memoriareadint(3);
  texto += ":";
  if (memoriareadint(2).toInt() < 10) {
    texto += "0";
  }
  texto += memoriareadint(2);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(texto, 395, 295);
}
void printdataehora() {
  TFTscreen.setColor(102, 102, 255);
  TFTscreen.fillRoundRect(10, 215, 250, 308);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  String texto;
  TFTscreen.setFont(SevenSegNumFont);
  if (memoriareadint(3).toInt() < 10) {
    texto += "0";
  }
  texto += memoriareadint(3);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.print2(texto, 20, 225);
  texto = "";
  if (memoriareadint(2).toInt() < 10) {
    texto += "0";
  }
  texto += memoriareadint(2);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.print2(texto, 100, 225);
  texto = dia_da_semana();
  texto += memoriareadint(4);
  texto += " de ";
  texto += mes_palavra();
  TFTscreen.setFont(BigFont);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.print2(":", 85, 240);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.print2(texto, 20, 282);
}
String dia_da_semana() {
  String diasemana [] = {"Sab, ", "Dom, ", "Seg, ", "Ter, ", "Qua, ", "Qui, ", "Sex, "};
  int k = memoriareadint(4).toInt() + (2 * memoriareadint(5).toInt()) + ((3 * (memoriareadint(5).toInt() + 1)) / 5) + memoriareadint(6).toInt() + (memoriareadint(6).toInt() / 4) - (memoriareadint(6).toInt() / 100) + (memoriareadint(6).toInt() / 400) + 2;
  int dias = k % 7;
  return diasemana[dias];
}
String dia_da_semana2() {
  String diasemana [] = {"7", "1", "2", "3", "4", "5", "6"};
  int k = memoriareadint(4).toInt() + (2 * memoriareadint(5).toInt()) + ((3 * (memoriareadint(5).toInt() + 1)) / 5) + memoriareadint(6).toInt() + (memoriareadint(6).toInt() / 4) - (memoriareadint(6).toInt() / 100) + (memoriareadint(6).toInt() / 400) + 2;
  int dias = k % 7;
  return diasemana[dias];
}
String mes_palavra() {
  String meses     [] = {"", "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
  return meses[memoriareadint(5).toInt()];
}
int temporestante() {
  return (memoriareadint(1).toInt()) + (memoriareadint(2).toInt() * 60) + ((memoriareadint(3).toInt() * 60) * 60);
}

String readtext1(String nome, String texto) {
  int i = 0;
  int curso = 0;
  int tempo  =  temporestante();
  String acumulador = texto;
  TFTscreen.background(0, 0, 0);
  TFTscreen.setColor(230, 230, 230);
  TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255 , 67 + (6 * 16) + (3 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(230, 230, 230);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(nome, 112 + 14, 67 + (1 * 16) + (3 * 16));
  TFTscreen.setColor(200, 200, 200);
  TFTscreen.fillRoundRect(112 + 14, 67 + (3 * 16) + (3 * 16), 112 + 255 - 14, 67 + (5 * 16) + (3 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  for (int j = i; j <= acumulador.length(); j++) {
    curso++;
    if (curso <= 14) {
      TFTscreen.print2(String(acumulador.charAt(j - 1)), 112 + 14 + ((j - i) * 15), 77 + (3 * 16) + (3 * 16));
    }
  }
  while (true) {
    delay(1);
    if (memoriareadint(30).toInt() != 0) {
      if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
        suspenden5 = true;
        tela_suspender();
        TFTscreen.background(0, 0, 0);
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255 , 67 + (6 * 16) + (3 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2(nome, 112 + 14, 67 + (1 * 16) + (3 * 16));
        TFTscreen.setColor(200, 200, 200);
        TFTscreen.fillRoundRect(112 + 14, 67 + (3 * 16) + (3 * 16), 112 + 255 - 14, 67 + (5 * 16) + (3 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(VGA_TRANSPARENT);
        for (int j = i; j <= acumulador.length(); j++) {
          curso++;
          if (curso <= 14) {
            TFTscreen.print2(String(acumulador.charAt(j - 1)), 112 + 14 + ((j - i) * 15), 77 + (3 * 16) + (3 * 16));
          }
        }
        tempo  =  temporestante();
      }
    }
    if (keyboard.available()) {
      if (memoriareadint(20).toInt() == 1) {
        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
      }
      TFTscreen.setColor(200, 200, 200);
      TFTscreen.setBackColor(VGA_TRANSPARENT);
      curso = 0;
      for (int j = i; j <= acumulador.length(); j++) {
        curso++;
        if (curso <= 14) {
          TFTscreen.print2(String(acumulador.charAt(j - 1)), 112 + 14 + ((j - i) * 15), 77 + (3 * 16) + (3 * 16));
        }
      }
      char c = keyboard.read();
      if (c == PS2_ENTER) {
      } else if (c == PS2_ESC) {
        break;
      } else if (c == PS2_TAB) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          TFTscreen.background(0, 0, 0);
          TFTscreen.setColor(230, 230, 230);
          TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255 , 67 + (6 * 16) + (3 * 16));
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.setBackColor(230, 230, 230);
          TFTscreen.setFont(BigFont);
          TFTscreen.print2(nome, 112 + 14, 67 + (1 * 16) + (3 * 16));
          TFTscreen.setColor(200, 200, 200);
          TFTscreen.fillRoundRect(112 + 14, 67 + (3 * 16) + (3 * 16), 112 + 255 - 14, 67 + (5 * 16) + (3 * 16));
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
          TFTscreen.print2(String(acumulador.charAt(j - 1)), 112 + 14 + ((j - i) * 15), 77 + (3 * 16) + (3 * 16));
        }
      }
      tempo  =  temporestante();
    }
  }
  return acumulador;
}
boolean statusatividade(String nome, boolean statuss) {
  boolean valor = statuss;
  int tempo  =  temporestante();
  TFTscreen.background(0, 0, 0);
  TFTscreen.setColor(220, 220, 220);
  TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255, 67 + (4 * 16) + (3 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(220, 220, 220);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(nome, 112 + 14, 76 + (1 * 16) + (3 * 16));
  if (valor) {
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/SOM3.BMP", 310, 64 + (1 * 16) + (3 * 16));
  } else {
    printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/SOM2.BMP", 310, 64 + (1 * 16) + (3 * 16));
  }
  while (true) {
    delay(1);
    if (memoriareadint(30).toInt() != 0) {
      if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
        suspenden5 = true;
        tela_suspender();
        TFTscreen.background(0, 0, 0);
        TFTscreen.setColor(220, 220, 220);
        TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255, 67 + (4 * 16) + (3 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(220, 220, 220);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2(nome, 112 + 14, 76 + (1 * 16) + (3 * 16));
        if (valor) {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/SOM3.BMP", 310, 64 + (1 * 16) + (3 * 16));
        } else {
          printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/SOM2.BMP", 310, 64 + (1 * 16) + (3 * 16));
        }
        tempo  =  temporestante();
      }
    }
    if (keyboard.available()) {
      if (memoriareadint(20).toInt() == 1) {
        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
      }
      char c = keyboard.read();
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          TFTscreen.background(0, 0, 0);
          TFTscreen.setColor(220, 220, 220);
          TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255, 67 + (4 * 16) + (3 * 16));
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.setBackColor(220, 220, 220);
          TFTscreen.setFont(BigFont);
          TFTscreen.print2(nome, 112 + 14, 76 + (1 * 16) + (3 * 16));
        }
      } else if (c == PS2_LEFTARROW) {
        valor = false;
      } else if (c == PS2_RIGHTARROW) {
        valor = true;
      } else if (c == PS2_ESC) {
        break;
      }
      if (valor) {
        printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/SOM3.BMP", 310, 64 + (1 * 16) + (3 * 16));
      } else {
        printimagetransparente("SD::SD1/SYS.H/IMAGEM/CONFIG~1/SOM2.BMP", 310, 64 + (1 * 16) + (3 * 16));
      }
      tempo  =  temporestante();
    }
  }
  return valor;
}
int quantidadevalorcinco(String nome, int i) {
  int valor = i;
  int tempo  =  temporestante();
  TFTscreen.background(0, 0, 0);
  TFTscreen.setColor(220, 220, 220);
  TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255, 67 + (6 * 16) + (3 * 16));
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.setBackColor(220, 220, 220);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2(nome, 112 + 14, 67 + (1 * 16) + (3 * 16));
  TFTscreen.setColor(200, 200, 200);
  TFTscreen.fillRoundRect(112 + 14, 67 + (3 * 16) + (3 * 16), 112 + 255 - 14, 67 + (5 * 16) + (3 * 16));
  TFTscreen.setColor(150, 150, 150);
  for (int j = 1; j <= valor; j++) {
    TFTscreen.fillRoundRect(112 + (j * 35) + 10, 67 + 60 + (3 * 16), (112 + (j * 35)) + 25 + 10, 67 + 70 + (3 * 16));
  }
  while (true) {
    delay(1);
    if (memoriareadint(30).toInt() != 0) {
      if ((temporestante() - tempo) >= memoriareadint(30).toInt()) {
        suspenden5 = true;
        tela_suspender();
        TFTscreen.background(0, 0, 0);
        TFTscreen.setColor(220, 220, 220);
        TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255, 67 + (6 * 16) + (3 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(220, 220, 220);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2(nome, 112 + 14, 67 + (1 * 16) + (3 * 16));
        TFTscreen.setColor(150, 150, 150);
        for (int j = 1; j <= valor; j++) {
          TFTscreen.fillRoundRect(112 + (j * 35) + 10, 67 + 60 + (3 * 16), (112 + (j * 35)) + 25 + 10, 67 + 70 + (3 * 16));
        }
        tempo  =  temporestante();
      }
    }
    if (keyboard.available()) {
      TFTscreen.setColor(200, 200, 200);
      TFTscreen.fillRoundRect(112 + 14, 67 + (3 * 16) + (3 * 16), 112 + 255 - 14, 67 + (5 * 16) + (3 * 16));
      if (memoriareadint(20).toInt() == 1) {
        som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
      }
      char c = keyboard.read();
      if (c == PS2_ENTER) {
      } else if (c == PS2_TAB) {
        desligar_n5();
        if (desligarn5) {
          break;
        } else {
          TFTscreen.background(0, 0, 0);
          TFTscreen.setColor(220, 220, 220);
          TFTscreen.fillRoundRect(112, 67 + (3 * 16), 112 + 255, 67 + (6 * 16) + (3 * 16));
          TFTscreen.setColor(0, 0, 0);
          TFTscreen.setBackColor(220, 220, 220);
          TFTscreen.setFont(BigFont);
          TFTscreen.print2(nome, 112 + 14, 67 + (1 * 16) + (3 * 16));
        }
      } else if (c == PS2_LEFTARROW) {
        valor--;
        if (valor < 0) {
          valor = 5;
        }
      } else if (c == PS2_RIGHTARROW) {
        valor++;
        if (valor > 5) {
          valor = 0;
        }
      } else if (c == PS2_ESC) {
        break;
      }
      TFTscreen.setColor(150, 150, 150);
      for (int j = 1; j <= valor; j++) {
        TFTscreen.fillRoundRect(112 + (j * 35) + 10, 67 + 60 + (3 * 16), (112 + (j * 35)) + 25 + 10, 67 + 70 + (3 * 16));
      }
      tempo  =  temporestante();
    }
  }
  return valor;
}
void salvararquivo(int opcao, String formato, String endereco, String texto) {
  String formato2;
  String endereco2;
  String nomearquivo;
  if (opcao == 1) {
    endereco2 = app_gerenciador_arquivo_read(1, app_gerenciador_arquivo_memoria_read());
  } else if (opcao == 2) {
    nomearquivo = endereco;
  } else if (opcao == 3) {
    endereco2 = app_gerenciador_arquivo_read(1, app_gerenciador_arquivo_memoria_read());
    formato2 = formato;
  }
  nomearquivo = readtext1("Salvar Arquivo", nomearquivo);
  if (!(nomearquivo.equals(""))) {
    endereco2 += nomearquivo;
    endereco2 += formato2;
    removearquivo(endereco2);
    gravararquivo(endereco2, texto);
  }
}
String texto_write(String titulo) {
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
  TFTscreen.background(0, 0, 0);
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
        TFTscreen.fillRoundRect(110, 65, 114 + 255, 69 + (7 * 16));
        TFTscreen.setColor(230, 230, 230);
        TFTscreen.fillRoundRect(112, 67, 112 + 255, 67 + (7 * 16));
        TFTscreen.setColor(0, 0, 0);
        TFTscreen.setBackColor(230, 230, 230);
        TFTscreen.setFont(BigFont);
        TFTscreen.print2("Texto Write", 112 + 14, 67 + (1 * 16));
        TFTscreen.print2("1) Novo", 112 + 14, 67 + (3 * 16));
        TFTscreen.print2("2) Salvar", 112 + 14, 67 + (4 * 16));
        TFTscreen.print2("3) Voltar", 112 + 14, 67 + (5 * 16));
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
              sairapp = true;
              break;

            } else if (c == '3') {
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
      TFTscreen.background(0, 0, 0);
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
  return arraycampotexto;
}
void carregarshow(int x, int y, int raio, int ta, int r, int g, int b) {
  for (int j = 0; j < 2; j++) {
    for (int i = 0; i < 60; i += 5) {
      int angle = -90;
      float xa, ya;
      xa = x + (raio + 10) * cos((angle + i * 6) * M_PI / 180);
      ya = y +  (raio + 10) * sin((angle + i * 6) * M_PI / 180);
      TFTscreen.setColor(0, 0, 0);
      TFTscreen.fillCircle(xa, ya, ta);
      delay(100);
    }
    for (int i = 0; i < 60; i += 5) {
      int angle = -90;
      float xa, ya;
      xa = x + (raio + 10) * cos((angle + i * 6) * M_PI / 180);
      ya = y +  (raio + 10) * sin((angle + i * 6) * M_PI / 180);
      TFTscreen.setColor(r, g, b);
      TFTscreen.fillCircle(xa, ya, ta);
      delay(100);
    }
  }
}
void animatio14(char* str, int x, int y) {
  int i = 0;
  int x1 = x;
  while (str[i] != '\0') {
    delay(50);
    TFTscreen.setCursor(x1, y);
    TFTscreen.stroke(255, 255, 255);
    TFTscreen.print("_");
    delay(50);
    TFTscreen.setCursor(x1, y);
    TFTscreen.stroke(0, 0, 0);
    TFTscreen.print("_");
    TFTscreen.setCursor(x1, y);
    TFTscreen.stroke(255, 255, 255);
    TFTscreen.print(str[i]);
    i++;
    x1 += 26;
  }
}
void gameover() {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(110, 65 + 60, 114 + 255, 69 + 60 + (5 * 16));
  TFTscreen.setColor(255, 30, 30);
  TFTscreen.fillRoundRect(112, 67 + 60, 112 + 255, 67 + 60 + (5 * 16));
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(255, 30, 30);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2("Game Over", CENTER, 67 + 60 + (2 * 16));
  delay(3000);
}
void fimdejogo() {
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(110, 65 + 60, 114 + 255, 69 + 60 + (6 * 16));
  TFTscreen.setColor(255, 30, 30);
  TFTscreen.fillRoundRect(112, 67 + 60, 112 + 255, 67 + 60 + (6 * 16));
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(255, 30, 30);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2("Parabens", CENTER, 67 + 60 + (2 * 16));
  TFTscreen.print2("Fim De Jogo", CENTER, 67 + 60 + (3 * 16));
  delay(3000);
}
void printfasegame(int fase) {
  String valor = "Proxima Fase: ";
  valor += fase;
  TFTscreen.setColor(0, 0, 0);
  TFTscreen.fillRoundRect(110, 65 + 60, 114 + 255, 69 + 60 + (6 * 16));
  TFTscreen.setColor(255, 30, 30);
  TFTscreen.fillRoundRect(112, 67 + 60, 112 + 255, 67 + 60 + (6 * 16));
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(255, 30, 30);
  TFTscreen.setFont(BigFont);
  TFTscreen.print2("Parabens", CENTER, 67 + 60 + (2 * 16));
  TFTscreen.print2(valor, CENTER, 67 + 60 + (3 * 16));
  delay(3000);
}

