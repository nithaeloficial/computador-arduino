int execucao() {
  if ((segundoplano_processamento_despertador() == 1) || (segundoplano_notificacao() == 1)) {
    return 1;
  } else {
    return 0;
  }
}
void segundoplano_contagemdatahora() {
  if (n5umativo) {
    if (memoriareadint(6).equals("0")) {
      memoriawriteint(1, "00");
      memoriawriteint(2, "00");
      memoriawriteint(3, "00");
      memoriawriteint(4, "30");
      memoriawriteint(5, "09");
      memoriawriteint(6, "2015");
      memoriawriteint(7, "00");
    }
    int variavel_1 = memoriareadint(1).toInt();
    int variavel_2 = memoriareadint(2).toInt();
    int variavel_3 = memoriareadint(3).toInt();
    int variavel_4 = memoriareadint(4).toInt();
    int variavel_5 = memoriareadint(5).toInt();
    int variavel_6 = memoriareadint(6).toInt();
    int variavel_7 = memoriareadint(7).toInt();
    if ((millis() - variavel_7) < 0) {
      variavel_7 = millis();
    } else {
      variavel_1 = (millis() - variavel_7) / 1000;
    }
    if (variavel_1 > 59) {
      variavel_1 = 0;
      variavel_2++;
      variavel_7 = millis();
      if (variavel_2 > 59) {
        variavel_3++;
        variavel_2 = 0;
        if (variavel_3 > 23) {
          segundoplano_processamento_despertador2();
          variavel_4++;
          variavel_3 = 0;
          if (variavel_5 == 1 | variavel_5 == 5 | variavel_5 == 7 | variavel_5 == 8 | variavel_5 == 10 | variavel_5 == 12) {
            if (variavel_4 > 31) {
              variavel_4 = 1;
              variavel_5++;
              if (variavel_5 > 12) {
                variavel_6++;
                variavel_5 = 1;
              }
            }
          }
          else if (variavel_5 == 2) {
            if (variavel_6 % 400 == 0) {
              if (variavel_4 > 29) {
                variavel_4 = 1;
                variavel_5++;
              }
            } else {
              if (variavel_4 > 28) {
                variavel_4 = 1;
                variavel_5++;
              }
            }
          }
          else {
            if (variavel_4 > 30) {
              variavel_4 = 1;
              variavel_5++;
            }
          }
        }
      }
    }
    memoriawriteint(1, String(variavel_1));
    memoriawriteint(2, String(variavel_2));
    memoriawriteint(3, String(variavel_3));
    memoriawriteint(4, String(variavel_4));
    memoriawriteint(5, String(variavel_5));
    memoriawriteint(6, String(variavel_6));
    memoriawriteint(7, String(variavel_7));
  }
  delay(50);
  yield();
}
void segundoplano_processamento() {
  if (n5umativo) {
    if (!transferenciacontagemregressiva) {
      segundoplano_processamento_contagemregressiva();
    }
    if (!transferenciaatividades) {
      segundoplano_processamento_atividades();
    }
  }
  delay(50);
  yield();
}
void segundoplano_processamento_atividades() {
  for (int i = 1; i <= atividades[0][0].toInt(); i++) {
    delay(1);
    if (atividades[i][2].toInt() == memoriareadint(3).toInt()) {
      if (atividades[i][3].toInt() < memoriareadint(2).toInt()) {
        if (atividades[i][4].toInt() == memoriareadint(4).toInt()) {
          if (atividades[i][5].toInt() == memoriareadint(5).toInt()) {
            if (atividades[i][6].toInt() == memoriareadint(6).toInt()) {
              varnotificacao[varquantdadenotificacao] = "Atividade::";
              varnotificacao[varquantdadenotificacao] += atividades[i][0];
              varnotificacao[varquantdadenotificacao] += "::";
              varnotificacao[varquantdadenotificacao] += atividades[i][1];
              varnotificacao[varquantdadenotificacao] += ". Horario ";
              if (atividades[i][2].equals("0")) {
                varnotificacao[varquantdadenotificacao] += "00";
              } else {
                varnotificacao[varquantdadenotificacao] += atividades[i][2];
              }
              varnotificacao[varquantdadenotificacao] += ":";
              if (atividades[i][3].equals("0")) {
                varnotificacao[varquantdadenotificacao] += "00";
              } else {
                varnotificacao[varquantdadenotificacao] += atividades[i][3];
              }
              varnotificacao[varquantdadenotificacao] += " ";
              if (atividades[i][4].equals("0")) {
                varnotificacao[varquantdadenotificacao] += "00";
              } else {
                varnotificacao[varquantdadenotificacao] += atividades[i][4];
              }
              varnotificacao[varquantdadenotificacao] += "/";
              if (atividades[i][5].equals("0")) {
                varnotificacao[varquantdadenotificacao] += "00";
              } else {
                varnotificacao[varquantdadenotificacao] += atividades[i][5];
              }
              varnotificacao[varquantdadenotificacao] += "/";
              if (atividades[i][6].equals("0")) {
                varnotificacao[varquantdadenotificacao] += "00";
              } else {
                varnotificacao[varquantdadenotificacao] += atividades[i][6];
              }
              atividades[i][6] = "0";
              varquantdadenotificacao++;
              alertanotificacao = true;
            }
          }
        }
      }
    }
  }
  delay(50);
}

int segundoplano_processamento_despertador() {
  int dia;
  if (!transferenciadespertador) {
    if (dia_da_semana2().toInt() == 1) {
      dia = 5;
    } else if (dia_da_semana2().toInt() == 2) {
      dia = 6;
    } else if (dia_da_semana2().toInt() == 3) {
      dia = 7;
    } else if (dia_da_semana2().toInt() == 4) {
      dia = 8;
    } else if (dia_da_semana2().toInt() == 5) {
      dia = 9;
    } else if (dia_da_semana2().toInt() == 6) {
      dia = 10;
    } else if (dia_da_semana2().toInt() == 7) {
      dia = 11;
    }
    return segundoplano_processamento_despertador_busca(dia);
  } else {
    return 0;
  }
}
int segundoplano_processamento_despertador_busca(int dia) {
  int retorno = 0;
  for (int i = 1; i <= despertador[0][0].toInt(); i++) {
    delay(1);
    if (despertador[i][dia].toInt() == 1) {
      int hora1 = despertador[i][1].toInt();
      int minuto1 = despertador[i][2].toInt();
      int hora2 = despertador[i][1].toInt();
      int minuto2 = despertador[i][2].toInt() + despertador[i][3].toInt();
      if (minuto2 > 60) {
        hora2++;
        minuto2 -= 60;
      }
      if ((despertador[i][dia].toInt() == 1) && (((hora1 <= memoriareadint(3).toInt()) && (minuto1 <= memoriareadint(2).toInt())) && ((hora2 >= memoriareadint(3).toInt()) && (minuto2 >= memoriareadint(2).toInt())))) {
        app_layout_print_dialogo("Despertador", String(despertador[i][0] + " - " + despertador[i][1] + ":" + despertador[i][2]));
        retorno = 1;
        int hora = memoriareadint(3).toInt();
        int minuto = memoriareadint(2).toInt();
        while (true) {
          delay(1);
          if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
            minuto = memoriareadint(2).toInt();
            hora = memoriareadint(3).toInt();
            printdataehora2();
          }
          if (((hora1 <= memoriareadint(3).toInt()) && (minuto1 <= memoriareadint(2).toInt())) && ((hora2 >= memoriareadint(3).toInt()) && (minuto2 >= memoriareadint(2).toInt()))) {
            if (despertador[i][4].equals("") || despertador[i][4].equals("0")) {
              if (som4("SD::SD1/SYS.H/MUSICA/NOTIFI~1.WAV") == 1) {
                despertador[i][dia] = "3";
                break;
              }
            } else {
              if (som4(despertador[i][4]) == 1) {
                despertador[i][dia] = "3";
                break;
              }
            }
          } else {
            break;
          }
        }
      }
    }
  }
  return retorno;
}
void segundoplano_processamento_contagemregressiva() {
  int variavel_1;
  int variavel_2;
  int variavel_3;
  int variavel_4;
  int hora = memoriareadint(31).toInt();
  int minuto = memoriareadint(32).toInt();
  int segundo = memoriareadint(33).toInt();
  int comecar = memoriareadint(34).toInt();
  if (comecar == 1) {
    if ((hora != 0) || (minuto != 0) || (segundo != 0)) {
      if ((memoriareadint(35).toInt() == 0)) {
        memoriawriteint(35, String(temporestante()));
      }
      if ((temporestante() - memoriareadint(35).toInt()) >= 1) {
        variavel_1 = 0;
        variavel_2 = 0;
        variavel_3 = 0;
        variavel_4 = (segundo) + (minuto * 60) + ((hora * 60) * 60);
        variavel_4--;
        for (int i = 1; i <= variavel_4; i++) {
          variavel_1++;
          if (variavel_1 > 59) {
            variavel_1 = 0;
            variavel_2++;
            if (variavel_2 > 59) {
              variavel_3++;
              variavel_2 = 0;
            }
          }
        }
        memoriawriteint(33, String(variavel_1));
        memoriawriteint(32, String(variavel_2));
        memoriawriteint(31, String(variavel_3));
        memoriawriteint(35, String(temporestante()));
      }
    } else {
      memoriawriteint(34, "0");
      memoriawriteint(35, "0");
      varnotificacao[varquantdadenotificacao] = "Contage regressiva chegou ao final :: ";
      varnotificacao[varquantdadenotificacao] += memoriareadint(4);
      varnotificacao[varquantdadenotificacao] += memoriareadint(5);
      varnotificacao[varquantdadenotificacao] += memoriareadint(6);
      varnotificacao[varquantdadenotificacao] += memoriareadint(3);
      varnotificacao[varquantdadenotificacao] += memoriareadint(2);
      varnotificacao[varquantdadenotificacao] += memoriareadint(1);
      varquantdadenotificacao++;
      alertanotificacao = true;
    }
  } else {
    memoriawriteint(35, "0");
  }
  delay(50);
}
int segundoplano_processamento_despertador2() {
  int dia;
  if (dia_da_semana2().toInt() == 1) {
    dia = 5;
  } else if (dia_da_semana2().toInt() == 2) {
    dia = 6;
  } else if (dia_da_semana2().toInt() == 3) {
    dia = 7;
  } else if (dia_da_semana2().toInt() == 4) {
    dia = 8;
  } else if (dia_da_semana2().toInt() == 5) {
    dia = 9;
  } else if (dia_da_semana2().toInt() == 6) {
    dia = 10;
  } else if (dia_da_semana2().toInt() == 7) {
    dia = 11;
  }
  segundoplano_processamento_despertador_busca2(dia);
}
void segundoplano_processamento_despertador_busca2(int dia) {
  for (int i = 1; i <= despertador[0][0].toInt(); i++) {
    delay(1);
    if (despertador[i][dia].toInt() == 3) {
      despertador[i][dia] = "1";
    }
  }
}
int segundoplano_notificacao() {
  int valor = 0;
  if (alertanotificacao) {
    som1("SD::SD1/SYS.H/MUSICA/NOTIFI~1.WAV");
    alertanotificacao = false;
    int quantidadelayout2 = int(varquantdadenotificacao / 3);
    if ((varquantdadenotificacao % 3) > 0) {
      quantidadelayout2++;
    }
    int posicao = quantidadelayout2;
    boolean sairapp = false;
    print_lista_notificacao(posicao);
    while (true) {
      String str = app_layout_espera_kyboard();
      boolean printlayout = false;
      if (str.equals("tela")) {
        printlayout = true;
      } else {
        char c = str.charAt(0);
        if (c == PS2_ENTER) {
        } else if ((c == '1') || (c == '2') || (c == '3')) {
          int appnumero = ((posicao - 1) * 3);
          if (c == '2') {
            appnumero += 1;
          }
          if (c == '3') {
            appnumero += 2;
          }
          app_layout_print_dialogo1("Notificacao", varnotificacao[appnumero]);
          if (appnumero < varquantdadenotificacao) {
            for (int i = appnumero; i < varquantdadenotificacao; i++) {
              varnotificacao[i] = varnotificacao[i + 1];
            }
          }
          varquantdadenotificacao--;
          break;
        } else if (c == PS2_ESC) {
          break;
        } else if (c == PS2_LEFTARROW) {
        } else if (c == PS2_RIGHTARROW) {
        } else if (c == PS2_UPARROW) {
          int  quantidadelayout = int(varquantdadenotificacao / 3);
          if ((varquantdadenotificacao % 3) > 0) {
            quantidadelayout++;
          }
          posicao--;
          if (posicao < 1) {
            posicao = quantidadelayout;
          }
          printlayout = true;
        } else if (c == PS2_DOWNARROW) {
          int quantidadelayout = int(varquantdadenotificacao / 3);
          if ((varquantdadenotificacao % 3) > 0) {
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
        print_lista_notificacao(posicao);
      }
    }
    valor = 1;
  }
  return valor;
}
void print_lista_notificacao(int item) {
  if (!teladebloqueio) {
    TFTscreen.setColor(20, 20, 20);
    TFTscreen.fillRect(300, 0, 479, 280);
  } else {
    TFTscreen.setColor(20, 20, 20);
    TFTscreen.fillRect(300, 1, 479, 319);
  }
  TFTscreen.setFont(SmallFont);
  TFTscreen.setColor(255, 255, 255);
  TFTscreen.setBackColor(VGA_TRANSPARENT);
  TFTscreen.print2("Notificacao", 310, 10);
  int scroll = 30;
  if (((((item - 1) * 3) + 1) <= varquantdadenotificacao) && (!varnotificacao[((item - 1) * 3)].equals(""))) {
    app_layout_print_notificacao(varnotificacao[((item - 1) * 3)], 10 + scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(318, 20 + scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("1", 316, 13 + scroll);
  }
  if (((((item - 1) * 3) + 2) <= varquantdadenotificacao) && (!varnotificacao[((item - 1) * 3) + 1].equals(""))) {
    app_layout_print_notificacao(varnotificacao[((item - 1) * 3) + 1], 82 + scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(318, 92 + scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("2", 316, 85 + scroll);
  }
  if (((((item - 1) * 3) + 3) <= varquantdadenotificacao) && (!varnotificacao[((item - 1) * 3) + 2].equals(""))) {
    app_layout_print_notificacao(varnotificacao[((item - 1) * 3) + 2], 154 + scroll);
    TFTscreen.setColor(255, 0, 0);
    TFTscreen.fillCircle(318, 164 + scroll, 12);
    TFTscreen.setFont(SmallFont);
    TFTscreen.setColor(255, 255, 255);
    TFTscreen.setBackColor(VGA_TRANSPARENT);
    TFTscreen.print2("3", 316, 157 + scroll);
  }
}


