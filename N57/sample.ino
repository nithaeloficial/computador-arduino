void sample() {
  boolean sairapp = false;
  app_layout_actionbar_barra_1("Sample", "SD::SD1/SYS.H/IMAGEM/APLICA~1/Msample.BMP", 0, 50, 0);
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
        TFTscreen.print2("Sample", 112 + 14, 67 + (1 * 16));
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
      app_layout_actionbar_barra_1("Sample", "SD::SD1/SYS.H/IMAGEM/APLICA~1/Msample.BMP", 0, 50, 0);
    }
  }
}

void sample2() {
  boolean sairapp = false;
  boolean startsample2 = false;
  int tempo  =  temporestante();
  int hora = memoriareadint(3).toInt();
  int minuto = memoriareadint(2).toInt();
  app_layout_actionbar_barra_1("sample2", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M5.BMP", -51, 51, 0);
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
        TFTscreen.print2("sample2", 112 + 14, 67 + (1 * 16));
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
      app_layout_actionbar_barra_1("sample2", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M5.BMP", -51, 51, 0);
      printdataehora2();
    }
  }
}
