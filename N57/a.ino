if (funlanguagem.equals("pinMode")) {
      numerofuncao = 1;
    } else if (funlanguagem.equals("digitalWrite")) {
      numerofuncao = 2;
    } else if (funlanguagem.equals("analogWrite")) {
      numerofuncao = 3;
    /*} else if (funlanguagem.equals("databaseWrite")) {
      numerofuncao = 4;
    } else if (funlanguagem.equals("Serialsecondset")) {
      numerofuncao = 5;
    } else if (funlanguagem.equals("Serialminuteset")) {
      numerofuncao = 6;
    } else if (funlanguagem.equals("Serialhourset")) {
      numerofuncao = 7;
    } else if (funlanguagem.equals("Serialmonthset")) {
      numerofuncao = 8;
    } else if (funlanguagem.equals("Serialyearset")) {
      numerofuncao = 9;
    } else if (funlanguagem.equals("Serialdayset")) {
      numerofuncao = 10;
    } else if (funlanguagem.equals("Serialtvprintln")) {
      numerofuncao = 11;
    } else if (funlanguagem.equals("Serialtvselectfont")) {
      numerofuncao = 12;
    } else if (funlanguagem.equals("Serialtvnotone")) {
      numerofuncao = 13;
    } else if (funlanguagem.equals("Serialtvprint")) {
      numerofuncao = 14;*/
    } else if (funlanguagem.equals("SD.write")) {
      numerofuncao = 15;
    } else if (funlanguagem.equals("LCD.point")) {
      numerofuncao = 16;
    } else if (funlanguagem.equals("LCD.setCursor")) {
      numerofuncao = 17;
    } else if (funlanguagem.equals("LCD.background")) {
      numerofuncao = 18;
    } else if (funlanguagem.equals("LCD.circle")) {
      numerofuncao = 19;
    } else if (funlanguagem.equals("LCD.line")) {
      numerofuncao = 20;
    } else if (funlanguagem.equals("LCD.rect")) {
      numerofuncao = 21;
    } else if (funlanguagem.equals("LCD.stroke")) {
      numerofuncao = 22;
    } else if (funlanguagem.equals("Mouse.move")) {
      numerofuncao = 23;
    } else if (funlanguagem.equals("LCD.fill")) {
      numerofuncao = 24;
    } else if (funlanguagem.equals("LCD.image")) {
      numerofuncao = 25;
    } else if (funlanguagem.equals("LCD.noStroke")) {
      numerofuncao = 26;
    } else if (funlanguagem.equals("LCD.noFill")) {
      numerofuncao = 27;
    } else if (funlanguagem.equals("LCD.SetTextSize")) {
      numerofuncao = 28;
    } else if (funlanguagem.equals("Run.function")) {
      numerofuncao = 29;
    } else if (funlanguagem.equals("LCD.lnprint")) {
      numerofuncao = 31;
    } else if (funlanguagem.equals("LCD.print")) {
      numerofuncao = 30;
    } else if (funlanguagem.equals("SD.mkdir")) {
      numerofuncao = 32;
    } else if (funlanguagem.equals("SD.remove")) {
      numerofuncao = 33;
    } else if (funlanguagem.equals("SD.rmdir")) {
      numerofuncao = 34;
    } else if (funlanguagem.equals("LCD.text")) {
      numerofuncao = 35;
    } else if (funlanguagem.equals("Serialtvtext")) {
      numerofuncao = 36;
    } else if (funlanguagem.equals("Serialtonedelay")) {
      numerofuncao = 37;
    } else if (funlanguagem.equals("SerialpinMode")) {
      numerofuncao = 38;
    } else if (funlanguagem.equals("Serialdigitalwrite")) {
      numerofuncao = 39;
    } else if (funlanguagem.equals("Serialeepromwrite")) {
      numerofuncao = 40;
    } else if (funlanguagem.equals("Serialanalogwrite")) {
      numerofuncao = 41;
    } else if (funlanguagem.equals("Serialtone")) {
      numerofuncao = 42;
    } else if (funlanguagem.equals("delay")) {
      numerofuncao = 43;
    } else if (funlanguagem.equals("Serialtvclear")) {
      numerofuncao = 44;
    } else if (funlanguagem.equals("secondset")) {
      numerofuncao = 45;
    } else if (funlanguagem.equals("minuteset")) {
      numerofuncao = 46;
    } else if (funlanguagem.equals("hourset")) {
      numerofuncao = 47;
    } else if (funlanguagem.equals("dayset")) {
      numerofuncao = 48;
    } else if (funlanguagem.equals("monthset")) {
      numerofuncao = 49;
    } else if (funlanguagem.equals("yearset")) {
      numerofuncao = 50;
    } else if (funlanguagem.equals("close")) {
      numerofuncao = 51;
    } else if (funlanguagem.equals("SaveMemory")) {
      numerofuncao = 52;
    } else if (funlanguagem.equals("ReadMemory")) {
      numerofuncao = 53;
    } else if (funlanguagem.equals("expect")) {
      numerofuncao = 54;
    } else if (funlanguagem.equals("Mouseclick_middle")) {
      numerofuncao = 55;
    } else if (funlanguagem.equals("Mouseclick_left")) {
      numerofuncao = 56;
    } else if (funlanguagem.equals("Mouseclick_right")) {
      numerofuncao = 57;
    } else if (funlanguagem.equals("delayMicroseconds")) {
      numerofuncao = 58;
    } else if (funlanguagem.equals("speesh")) {
      numerofuncao = 59;
    }
    
    if ( numerofuncao == 1) {
        if (textoad[1].equals("OUTPUT")) {
          if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
            pinMode(expresacinteger(textoad[0]).toInt(), OUTPUT);
          }
        } else {
          if (textoad[1].equals("INPUT")) {
            if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
              pinMode(expresacinteger(textoad[0]).toInt(), INPUT);
            }
          }
        }
      } else if ( numerofuncao == 2) {
        if (textoad[1].equals("HIGH")) {
          if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
            digitalWrite(expresacinteger(textoad[0]).toInt(), HIGH);
          }
        } else {
          if (textoad[1].equals("LOW")) {
            if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
              digitalWrite(expresacinteger(textoad[0]).toInt(), LOW);
            }
          }
        }
      } else if ( numerofuncao == 3) {
        if ((expresacinteger(textoad[0]).toInt() != 13) && (expresacinteger(textoad[0]).toInt() != 12) && (expresacinteger(textoad[0]).toInt() != 11)) {
          analogWrite(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt());
        }
      } else if ( numerofuncao == 4) {
        banco_dados[expresacinteger(textoad[0]).toInt()] = verificastring(textoad[1]);
      } else if ( numerofuncao == 5) {
        String valorserial = "segundo.set():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 6) {
        String valorserial = "minuto.set():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 7) {
        String valorserial = "hora.set():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 8) {
        String valorserial = "mes.set():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 9) {
        String valorserial = "ano.set():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 10) {
        String valorserial = "dia.set():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 11) {
        String valorserial = "tv.println():=";
        valorserial += verificastring(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 12) {
        String valorserial = "tv.selectfont():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 13) {
        String valorserial = "somnao():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, verificastring(textoad[1]).toInt());
      } else if ( numerofuncao == 14) {
        String valorserial = "tv.print():=";
        valorserial += verificastring(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, verificastring(textoad[1]).toInt());
      } else if ( numerofuncao == 15) {
        if (!system01inaction) {
          gravararquivo(verificastring(textoad[0]),  verificastring(textoad[1]));
        }
      } else if ( numerofuncao == 16) {
        TFTscreen.point(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 17) {
        TFTscreen.setCursor(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt());
      } else if ( numerofuncao == 18) {
        TFTscreen.background(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 19) {
        TFTscreen.circle(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 20) {
        TFTscreen.line(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt(), expresacinteger(textoad[3]).toInt());
      } else if ( numerofuncao == 21) {
        TFTscreen.rect(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt(), expresacinteger(textoad[3]).toInt());
      } else if ( numerofuncao == 22) {
        TFTscreen.stroke(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 23) {
        Mouse.move(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 24) {
        TFTscreen.fill(expresacinteger(textoad[0]).toInt(), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 25) {
        if (!system01inaction) {
          printimage(verificastring(textoad[0]), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt());
        }
      } else if ( numerofuncao == 26) {
        TFTscreen.noStroke();
      } else if ( numerofuncao == 27) {
        TFTscreen.noFill();
      } else if ( numerofuncao == 28) {
        TFTscreen.setTextSize(expresacinteger(textoad[0]).toInt());
      } else if ( numerofuncao == 29) {
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
          if (u <= functionsquantidade) {
            if (verificastring(textoad[0]).equals(functions[u])) {
              linterpretadorcomados(functionsvalue[u]);
              break;
            }
          } else {
            break;
          }
        }
      } else if ( numerofuncao == 30) {
        TFTscreen.print(verificastring(textoad[0]));
      } else if ( numerofuncao == 31) {
        TFTscreen.println(verificastring(textoad[0]));
      } else if ( numerofuncao == 32) {
        if (!system01inaction) {
          gerardiretorio(verificastring(textoad[0]));
        }
      } else if ( numerofuncao == 33) {
        if (!system01inaction) {
          removearquivo(verificastring(textoad[0]));
        }
      } else if ( numerofuncao == 34) {
        if (!system01inaction) {
          removediretorio(verificastring(textoad[0]));
        }
      } else if ( numerofuncao == 35) {
        TFTscreen.text(conversostrtochar(verificastring(textoad[0])), expresacinteger(textoad[1]).toInt(), expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 36) {
        String valorserial = "tv.text():=";
        valorserial += verificastring(textoad[0]);
        valorserial += ",";
        valorserial += expresacinteger(textoad[1]);
        valorserial += "d";
        valorserial += expresacinteger(textoad[2]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[3]).toInt());
      } else if ( numerofuncao == 37) {
        String valorserial = "somt():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += ",";
        valorserial += expresacinteger(textoad[1]);
        valorserial += "d";
        valorserial += expresacinteger(textoad[2]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[3]).toInt());
      } else if ( numerofuncao == 38) {
        String valorserial = "pin.mode():=";
        valorserial += textoad[0];
        valorserial += ",";
        valorserial += expresacinteger(textoad[1]);
        valorserial += "; run();";
        comunicacaotx(valorserial, verificastring(textoad[2]).toInt());
      } else if ( numerofuncao == 39) {
        String valorserial = "digit.write():=";
        valorserial += textoad[0];
        valorserial += ",";
        valorserial += expresacinteger(textoad[1]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 40) {
        String valorserial = "eeprom.write():=";
        valorserial += expresacinteger(textoad[1]);
        valorserial += ",";
        valorserial += verificastring(textoad[0]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 41) {
        String valorserial = "analog.write():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += ",";
        valorserial += expresacinteger(textoad[1]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 42) {
        String valorserial = "som():=";
        valorserial += expresacinteger(textoad[0]);
        valorserial += ",";
        valorserial += expresacinteger(textoad[1]);
        valorserial += "; run();";
        comunicacaotx(valorserial, expresacinteger(textoad[2]).toInt());
      } else if ( numerofuncao == 43) {
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
      } else if ( numerofuncao == 44) {
        comunicacaotx("tv.clear(); run();", expresacinteger(textoad[0]).toInt());
      } else if ( numerofuncao == 45) {
        if (!system01inaction) {
          memoriawriteint(1, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      } else if ( numerofuncao == 46) {
        if (!system01inaction) {
          memoriawriteint(2, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      } else if ( numerofuncao == 47) {
        if (!system01inaction) {
          memoriawriteint(3, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      } else if ( numerofuncao == 48) {
        if (!system01inaction) {
          memoriawriteint(4, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      } else if ( numerofuncao == 49) {
        if (!system01inaction) {
          memoriawriteint(5, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      } else if ( numerofuncao == 50) {
        if (!system01inaction) {
          memoriawriteint(6, String(expresacinteger(textoad[0]).toInt()));
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
        }
      } else if ( numerofuncao == 51) {
        existenciadefecharprogram = true;
      } else if ( numerofuncao == 52) {
        if (!system01inaction) {
          saveincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
          saveincard("SD::SD1/SYS.H/MEMORIA/M2.dat", 2);
        }
      } else if ( numerofuncao == 53) {
        if (!system01inaction) {
          leiaincard("SD::SD1/SYS.H/MEMORIA/M1.dat", 1);
          leiaincard("SD::SD1/SYS.H/MEMORIA/M2.dat", 2);
        }
      } else if ( numerofuncao == 54) {
        while (true) {
          if (!system01inaction) {
            delay(1);
          }
          if (keyboard.available()) {
            if (memoriareadint(20).toInt() == 1) {
              som1("SD::SD1/SYS.H/MUSICA/TECLA1.WAV");
            }
            char c = keyboard.read();
            if (c == PS2_ENTER) {
              break;
            } else if (c == PS2_ESC) {
              existenciadefecharprogram = true;
              break;
            }
          }
        }
      } else if ( numerofuncao == 55) {
        Mouse.click(MOUSE_MIDDLE);
      } else if ( numerofuncao == 56) {
        Mouse.click(MOUSE_LEFT);
      } else if ( numerofuncao == 57) {
        Mouse.click(MOUSE_RIGHT);
      } else if ( numerofuncao == 58) {
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
      } else if ( numerofuncao == 59) {
        if (!system01inaction) {
          printspec(verificastring(textoad[0]));
        }
      }
