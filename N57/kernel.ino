//---------------------------PINO IO---------------------------------
int pinodigital(int pino) {
  int retorna;
  switch (pino) {
    case 1:
      break;
    case 2:
      break;
  }
  return retorna;
}
int pinoanalogico(int pino) {
  int retorna;
  switch (pino) {
    case 1:
      break;
    case 2:
      break;
  }
  return retorna;
}
//---------------------------------------------------------------------

//---------------------------ARMAZENAMENTO-----------------------------
PImage consultardiretoriopastaSD_pimage(String dir) {
  String returndir = consultardiretoriopastaSD_texto(dir);
  return TFTscreen.loadImage(returndir.c_str());
}
File consultardiretoriopastaSD(String dir) {
  String returndir = consultardiretoriopastaSD_texto(dir);
  return SD.open(returndir.c_str());
}
File write_file_consultardiretoriopastaSD(String dir) {
  String returndir = consultardiretoriopastaSD_texto(dir);
  return SD.open(returndir.c_str(), FILE_WRITE);
}
void remove_file_consultardiretoriopastaSD(String dir) {
  String returndir = consultardiretoriopastaSD_texto(dir);
  char urldel[30];
  for (int i = 0; i <= returndir.length(); i++) {
    urldel[i] = returndir.charAt(i);
  }
  SD.remove(urldel);
}
void remove_dir_consultardiretoriopastaSD(String dir) {
  String returndir = consultardiretoriopastaSD_texto(dir);
  char urldel[30];
  for (int i = 0; i <= returndir.length(); i++) {
    urldel[i] = returndir.charAt(i);
  }
  SD.rmdir(urldel);
}
void write_dir_consultardiretoriopastaSD(String dir) {
  String returndir = consultardiretoriopastaSD_texto(dir);
  char urldel[30];
  for (int i = 0; i <= returndir.length(); i++) {
    urldel[i] = returndir.charAt(i);
  }
  SD.mkdir(urldel);
}
boolean exists_consultardiretoriopastaSD(String dir) {
  String returndir = consultardiretoriopastaSD_texto(dir);
  char urldel[30];
  for (int i = 0; i <= returndir.length(); i++) {
    urldel[i] = returndir.charAt(i);
  }
  return SD.exists(urldel);
}
String consultardiretoriopastaSD_texto(String dir) {
  String texto = "";
  String texto2 = "";
  String returndir = dir;
  for (int i = 0; i < 7; i++) {
    texto += String(returndir.charAt(i));
  }
  for (int i = 7; i < returndir.length(); i++) {
    texto2 += String(returndir.charAt(i));
  }
  if (texto.equals("SD::SD1")) {
    (void)begin_consultardiretoriopastaSD(portadecartaosystem);
  } else if (texto.equals("SD::SD2")) {
    (void)begin_consultardiretoriopastaSD(13);
  }
  return texto2;
}
boolean begin_consultardiretoriopastaSD(int sd) {
  boolean retorno;
  if (SD.begin(sd)) {
    retorno = true;
  } else {
    retorno = false;
  }
  return retorno;
}
int freeram() {
  extern int _heap_start, *_brkval;
  int v;
  return (int) &v - (_brkval == 0 ? (int) &_heap_start : (int) _brkval);
}
String namefile(String url) {
  int textvalor = 0;
  String textretorna = "";
  while (true) {
    if (String(url.charAt(textvalor)).equals("+")) {
      break;
    }
    textvalor++;
  }
  for (int i = (textvalor + 1); i <= url.length(); i++ ) {
    textretorna += String(url.charAt(i));
  }
  return textretorna;
}
String nameformato(String url) {
  int textvalor = 0;
  String textretorna = "";
  while (true) {
    if (String(url.charAt(textvalor)).equals(".")) {
      break;
    }
    textvalor++;
  }
  for (int i = (textvalor + 1); i <= url.length(); i++ ) {
    textretorna += String(url.charAt(i));
  }
  return textretorna;
}
void colararquivo(String dirc, String dirp) {
  short buffern[1024];
  String texto1, texto2;
  for (int i = 0; i < 7; i++) {
    texto1 += String(dirc.charAt(i));
  }
  for (int i = 0; i < 7; i++) {
    texto2 += String(dirp.charAt(i));
  }
  if (texto1.equals(texto2)) {
    File myFile = consultardiretoriopastaSD(dirc);
    int quantidade1 = myFile.size();
    int quantidade2 = 0;
    File myFile2 = write_file_consultardiretoriopastaSD(dirp);
    for (int i = 0; i < quantidade1; i += sizeof(buffern)) {
      delay(1);
      myFile.seek(i);
      myFile.read(buffern, sizeof(buffern));
      if (((quantidade1 - i) > 0) && ((quantidade1 - i) <= 1024)) {
        myFile2.write((byte*)buffern, quantidade1 - i);
        i = quantidade1;
      } else {
        myFile2.write((byte*)buffern, sizeof(buffern));
      }
    }
    myFile.close();
    myFile2.close();
  } else {
    File myFile = consultardiretoriopastaSD(dirc);
    int quantidade1 = myFile.size();
    myFile.close();
    File myFile2;
    for (int i = 0; i < quantidade1; i += sizeof(buffern)) {
      delay(1);
      myFile = consultardiretoriopastaSD(dirc);
      myFile.seek(i);
      myFile.read(buffern, sizeof(buffern));
      myFile.close();
      if (((quantidade1 - i) > 0) && ((quantidade1 - i) <= 1024)) {
        myFile2 = write_file_consultardiretoriopastaSD(dirp);
        myFile2.write((byte*)buffern, quantidade1 - i);
        myFile2.flush();
        myFile2.close();
        i = quantidade1;
      } else {
        myFile2 = write_file_consultardiretoriopastaSD(dirp);
        myFile2.write((byte*)buffern, sizeof(buffern));
        myFile2.flush();
        myFile2.close();
      }
    }
  }
}
void colararquivo_dialogo(String dirc, String dirp) {
  short buffern[1024];
  String texto1, texto2;
  for (int i = 0; i < 7; i++) {
    texto1 += String(dirc.charAt(i));
  }
  for (int i = 0; i < 7; i++) {
    texto2 += String(dirp.charAt(i));
  }
  if (texto1.equals(texto2)) {
    int count = 0;
    File myFile = consultardiretoriopastaSD(dirc);
    int quantidade1 = myFile.size();
    int duracaocolararquivo =  String(myFile.size(), DEC).toInt() / (176879.8783783784);
    int duracaocolararquivo2 = 0;
    int contagemtempocolararquivo = 0;
    File myFile2 = write_file_consultardiretoriopastaSD(dirp);
    app_layout_carregamento_tempo("Colar", String(dirc + " -> " + dirp), map(int(contagemtempocolararquivo * (1.157787686771493)), 0, duracaocolararquivo, 0, 100), duracaocolararquivo);
    for (int i = 0; i < quantidade1; i += sizeof(buffern)) {
      delay(1);
      myFile.seek(i);
      myFile.read(buffern, sizeof(buffern));
      if (((quantidade1 - i) > 0) && ((quantidade1 - i) <= 1024)) {
        myFile2.write((byte*)buffern, quantidade1 - i);
        i = quantidade1;
      } else {
        myFile2.write((byte*)buffern, sizeof(buffern));
      }
      count++;
      if (count == 100) {
        count = 0;
        contagemtempocolararquivo++;
        duracaocolararquivo2 = duracaocolararquivo - int(contagemtempocolararquivo * (1.157787686771493));
        app_layout_carregamento_tempo("Colar", String(dirc + " -> " + dirp), map(int(contagemtempocolararquivo * (1.157787686771493)), 0, duracaocolararquivo, 0, 100), duracaocolararquivo2);
      }
    }
    myFile.close();
    myFile2.close();
  } else {
    int count = 0;
    File myFile = consultardiretoriopastaSD(dirc);
    int quantidade1 = myFile.size();
    int duracaocolararquivo =  String(myFile.size(), DEC).toInt() / (176879.8783783784);
    int duracaocolararquivo2 = 0;
    int contagemtempocolararquivo = 0;
    myFile.close();
    File myFile2;
    app_layout_carregamento_tempo("Colar", String(dirc + " -> " + dirp), map(int(contagemtempocolararquivo * (1.157787686771493)), 0, duracaocolararquivo, 0, 100), duracaocolararquivo);
    for (int i = 0; i < quantidade1; i += sizeof(buffern)) {
      delay(1);
      myFile = consultardiretoriopastaSD(dirc);
      myFile.seek(i);
      myFile.read(buffern, sizeof(buffern));
      myFile.close();
      if (((quantidade1 - i) > 0) && ((quantidade1 - i) <= 1024)) {
        myFile2 = write_file_consultardiretoriopastaSD(dirp);
        myFile2.write((byte*)buffern, quantidade1 - i);
        myFile2.flush();
        myFile2.close();
        i = quantidade1;
      } else {
        myFile2 = write_file_consultardiretoriopastaSD(dirp);
        myFile2.write((byte*)buffern, sizeof(buffern));
        myFile2.flush();
        myFile2.close();
      }
      count++;
      if (count == 100) {
        count = 0;
        contagemtempocolararquivo++;
        duracaocolararquivo2 = duracaocolararquivo - int(contagemtempocolararquivo * (1.157787686771493));
        app_layout_carregamento_tempo("Colar", String(dirc + " -> " + dirp), map(int(contagemtempocolararquivo * (1.157787686771493)), 0, duracaocolararquivo, 0, 100), duracaocolararquivo2);
      }
    }
  }
}
void colarpasta(File dir, int numTabs) {
  while (true) {
    delay(1);
    File entry =  dir.openNextFile();
    if (! entry) {
      break;
    }
    if (entry.isDirectory()) {
      String dira;
      dira += String(entry.name());
      dira += "/";
      memoriagerenciadorarquivo[numTabs] = dira;
      String dirb = areadetraferenciaurlcola;
      dirb += "/";
      int u = 0;
      while (!(memoriagerenciadorarquivo[u].equals(""))) {
        dirb += memoriagerenciadorarquivo[u];
        u++;
      }
      dirb.toLowerCase();
      gerardiretorio(dirb);
      colarpasta(entry, numTabs + 1);
    } else {
      String dirb = "/";
      int u = 0;
      while (!(memoriagerenciadorarquivo[u].equals(""))) {
        dirb += memoriagerenciadorarquivo[u];
        u++;
      }
      dirb += String(entry.name());
      dirb.toLowerCase();
      String urlcopia = areadetraferenciaurl;
      urlcopia.replace("+", "");
      urlcopia += dirb;
      String urlcolar = areadetraferenciaurlcola;
      urlcolar += dirb;
      colararquivo(urlcopia, urlcolar);
    }
    entry.close();
  }
}
String lerarquivo(String dir) {
  File dataFilememorialer;
  String textoler;
  dataFilememorialer = consultardiretoriopastaSD(dir);
  if (dataFilememorialer) {
    while (dataFilememorialer.available()) {
      char c = dataFilememorialer.read();
      textoler += String(c);
    }
    dataFilememorialer.close();
    return textoler;
  } else {
    return "1";
  }
}
void removerarquivopasta(File dir, int numTabs) {
  while (true) {
    delay(1);
    File entry =  dir.openNextFile();
    if (! entry) {
      break;
    }
    if (entry.isDirectory()) {
      String b1;
      b1 += String(entry.name());
      b1 += "/";
      memoriagerenciadorarquivo[numTabs] = b1;
      removerarquivopasta(entry, numTabs + 1);
    } else {
      String dirb = "/";
      int u = 0;
      while (!(memoriagerenciadorarquivo[u].equals(""))) {
        dirb += memoriagerenciadorarquivo[u];
        u++;
      }
      dirb += String(entry.name());
      dirb.toLowerCase();
      String pastaarquivo = areadetraferenciaurl;
      pastaarquivo += dirb;
      removearquivo(pastaarquivo);
    }
    entry.close();
  }
}
void removerpastapasta(File dir, int numTabs) {
  while (true) {
    delay(1);
    File entry =  dir.openNextFile();
    if (! entry) {
      break;
    }
    if (entry.isDirectory()) {
      String dira;
      dira += String(entry.name());
      dira += "/";
      memoriagerenciadorarquivo[numTabs] = dira;
      String dirb = areadetraferenciaurl;
      dirb += "/";
      int u = 0;
      while (!(memoriagerenciadorarquivo[u].equals(""))) {
        dirb += memoriagerenciadorarquivo[u];
        u++;
      }
      dirb.toLowerCase();
      removedir(dirb);
      removerpastapasta(entry, numTabs + 1);
    }
    entry.close();
  }
}
void removearquivo(String dir) {
  remove_file_consultardiretoriopastaSD(dir);
}
void removediretorio(String dir) {
  areadetraferenciaurl = dir;
  url1 = "";
  for (int i = 0; i <= 99; i++) {
    memoriagerenciadorarquivo[i] = "";
  }
  removerarquivopasta(consultardiretoriopastaSD(dir), 0);
  removerpastapasta(consultardiretoriopastaSD(dir), 0);
  removedir(dir);
}
void removedir(String dir) {
  remove_dir_consultardiretoriopastaSD(dir);
}
void gerardiretorio(String dir) {
  write_dir_consultardiretoriopastaSD(dir);
}
void gravararquivo(String dir, String texto) {
  File dataFilememoriagravar;
  dataFilememoriagravar = write_file_consultardiretoriopastaSD(dir);
  if (dataFilememoriagravar) {
    dataFilememoriagravar.println(texto);
    dataFilememoriagravar.close();
  }
}
void lerbancodedaos(String fileName) {
  limparbancodedados();
  String texto = lerarquivohex(fileName);
  if (texto.equals("1")) {
    String code = "database{";
    for (int j = 0; j < 10; j++) {
      for (int i = 0; i < 13; i++) {
        code += "id(((";
        code += i;
        code += "-";
        code += j;
        code += "~~~~";
        if (bancodedados[j][i] != "") {
          code +=  bancodedados[j][i];
        } else {
          code += "0";
        }
        code += ")));";
      }
    }
    code += "}";
    gravararquivohex(fileName, code);
    texto = lerarquivohex(fileName);
    interpretadorbancodedados(texto);
  } else {
    interpretadorbancodedados(texto);
  }
}

void salvarbancodedaos(String fileName) {
  String codegravarmemoria = "database{";
  for (int j = 0; j < 10; j++) {
    for (int i = 0; i < 13; i++) {
      codegravarmemoria += "id(((";
      codegravarmemoria += i;
      codegravarmemoria += "-";
      codegravarmemoria += j;
      codegravarmemoria += "~~~~";
      if (bancodedados[j][i] != "") {
        codegravarmemoria +=  bancodedados[j][i];
      } else {
        codegravarmemoria += "0";
      }
      codegravarmemoria += ")));";
    }
  }
  codegravarmemoria += "}";
  if (lerarquivohex(fileName).equals("1")) {
    gravararquivohex(fileName, codegravarmemoria);
  } else {
    removearquivo(fileName);
    gravararquivohex(fileName, codegravarmemoria);
  }
}
void interpretadorbancodedados(String pro) {
  String analisememoria_1;
  for (int contage = 0; contage < pro.length(); contage++) {
    if ((String(pro.charAt(contage)).equals(" ")) || (String(pro.charAt(contage)).equals("\n")) || (String(pro.charAt(contage)).equals("\t"))) {
    } else {
      analisememoria_1 += pro.charAt(contage);
    }
    int contageant = contage;
    contage = mainbancodedados(contage, analisememoria_1, pro);
    if (!(contageant == contage)) {
      analisememoria_1 = "";
    }
  }
}
int mainbancodedados(int contage, String analisememoria_1, String pro) {
  int cout_1 = 1;
  int cout_2 = 1;
  String analisememoria_2;
  if (analisememoria_1.equals("database")) {
    analisememoria_1 = "";
    while (cout_1 == 1) {
      contage++;
      analisememoria_1 = String(pro.charAt(contage));
      if (analisememoria_1.equals("{")) {
        analisememoria_1 = "";
        cout_1 = 2;
        while (cout_2 == 1) {
          delay(1);
          contage++;
          analisememoria_1 = String(pro.charAt(contage));
          if (analisememoria_1.equals("}")) {
            analisememoria_1 = "";
            cout_2 = 2;
          } else {
            if ((String(pro.charAt(contage)).equals(" ")) || (String(pro.charAt(contage)).equals("\n")) || (String(pro.charAt(contage)).equals("\t"))) {
            } else {
              analisememoria_2 += pro.charAt(contage);
            }
            int contageant = contage;
            contage = bancodedadosid(contage, analisememoria_2, pro);
            if (!(contageant == contage)) {
              analisememoria_2 = "";
            }
          }
        }
      }
    }
  }
  return contage;
}
int bancodedadosid(int contage, String analisememoria_2, String pro) {
  String text;
  String value;
  String consult;
  String valuer;
  if (analisememoria_2.equals("id")) {
    while (true) {
      contage++;
      analisememoria_2 = String(pro.charAt(contage));
      if (analisememoria_2.equals("(") && String(pro.charAt(contage + 1)).equals("(") && String(pro.charAt(contage + 2)).equals("(")) {
        analisememoria_2 = "";
        contage++;
        contage++;
        while (true) {
          contage++;
          analisememoria_2 = String(pro.charAt(contage));
          if (analisememoria_2.equals(")") && String(pro.charAt(contage + 1)).equals(")") && String(pro.charAt(contage + 2)).equals(")")) {
            text = valuer;
            valuer = "";
            analisememoria_2 = "";
            contage++;
            contage++;
            while (true) {
              contage++;
              analisememoria_2 = String(pro.charAt(contage));
              if (analisememoria_2.equals(";")) {
                analisememoria_2 = "";
                break;
              }
            }
            break;
          } else {
            if (analisememoria_2.equals("~") && String(pro.charAt(contage + 1)).equals("~") && String(pro.charAt(contage + 2)).equals("~") && String(pro.charAt(contage + 3)).equals("~")) {
              value = valuer;
              valuer = "";
              analisememoria_2 = "";
              contage += 3;
            } else {
              valuer += pro.charAt(contage);
            }
          }
        }

        break;
      }
    }
    String valor_x;
    String valor_y;
    boolean hifene = false;
    for (int i = 0; i < value.length(); i++) {
      if (String(value.charAt(i)).equals("-")) {
        hifene = true;
      } else {
        if (hifene) {
          valor_x += String(value.charAt(i));
        } else {
          valor_y += String(value.charAt(i));
        }
      }
    }
    bancodedados[valor_x.toInt()][valor_y.toInt()] = text;
  }
  return contage;
}
void limparbancodedados() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 13; j++) {
      bancodedados[i][j] = "";
    }
  }
}
String bancodedadosreadint(int x, int y) {
  return bancodedados[y][x];
}
void bancodedadoswriteint(int x, int y, String text) {
  bancodedados[y][x] = text;
}
void insertbancodedados(String texto[]) {
  for (int i = 0; i < bancodedadosreadint(1, 0).toInt(); i++) {
    bancodedadoswriteint(i, bancodedadosreadint(0, 0).toInt() + 1, texto[i]);
  }
  bancodedadoswriteint(0, 0, String(bancodedadosreadint(0, 0).toInt() + 1));
}
void updatebancodedados(String texto[], int posicao) {
  for (int i = 0; i < bancodedadosreadint(1, 0).toInt(); i++) {
    bancodedadoswriteint(i, posicao, texto[i]);
  }
}
void deletebancodedados(int posicao) {
  if (posicao < bancodedadosreadint(0, 0).toInt()) {
    for (int i = posicao; i < bancodedadosreadint(0, 0).toInt(); i++) {
      for (int j = 0; j < bancodedadosreadint(1, 0).toInt(); j++) {
        bancodedadoswriteint(j, i, bancodedadosreadint(j, i + 1));
      }
    }
  }
  bancodedadoswriteint(0, 0, String(bancodedadosreadint(0, 0).toInt() - 1));
}
//---------------------------------------------------------------------------------------
String memoriareadint(int value) {
  return memoria_do_sistema[value];
}
void memoriawriteint(int value, String text) {
  memoria_do_sistema[value] = text;
}
int hexatoint(char valor) {
  int valorsoma;
  if (valor == 'a') {
    valorsoma += 10;
  } else {
    if (valor == 'b') {
      valorsoma += 11;
    } else {
      if (valor == 'c') {
        valorsoma += 12;
      } else {
        if (valor == 'd') {
          valorsoma += 13;
        } else {
          if (valor == 'e') {
            valorsoma += 14;
          } else {
            if (valor == 'f') {
              valorsoma += 15;
            } else {
              valorsoma += String(valor).toInt();
            }
          }
        }
      }
    }
  }
  return valorsoma;
}
String stringconvertehex(String valor) {
  String texto;
  for (int i = 0; i < valor.length(); i++) {
    texto += String(valor.charAt(i), HEX);
  }
  return texto;
}
String hexconvertestring(String valor) {
  String texto;
  for (int i = 0; i < valor.length(); i += 2) {
    int a = hexatoint(valor.charAt(i)) * 16;
    a += hexatoint(valor.charAt(i + 1));
    texto += String((char)a);
  }
  return texto;
}
String lerarquivohex(String dir) {
  File dataFilememorialer;
  String textoler;
  dataFilememorialer = consultardiretoriopastaSD(dir);
  if (dataFilememorialer) {
    while (dataFilememorialer.available()) {
      char c = dataFilememorialer.read();
      textoler += String(c);
    }
    dataFilememorialer.close();
    return hexconvertestring(textoler);
  } else {
    return "1";
  }
}
void gravararquivohex(String dir, String texto) {
  File dataFilememoriagravar;
  dataFilememoriagravar = write_file_consultardiretoriopastaSD(dir);
  if (dataFilememoriagravar) {
    dataFilememoriagravar.println(stringconvertehex(texto));
    dataFilememoriagravar.close();
  }
}
void saveincard(String dir, int op) {
  String codegravarmemoria = "memoria{";
  for (int i = 0; i < 100; i++) {
    codegravarmemoria += "id(((";
    codegravarmemoria += i;
    codegravarmemoria += "~~~~";
    if (op == 1) {
      if (memoria_do_sistema[i] != "") {
        codegravarmemoria +=  memoria_do_sistema[i];
      } else {
        codegravarmemoria += "0";
      }
    }
    codegravarmemoria += ")));";
  }
  codegravarmemoria += "}";
  if (lerarquivohex(dir).equals("1")) {
    gravararquivohex(dir, codegravarmemoria);
  } else {
    removearquivo(dir);
    gravararquivohex(dir, codegravarmemoria);
  }
}
void leiaincard(String dir, int op) {
  String texto = lerarquivohex(dir);
  if (texto.equals("1")) {
    String code = "memoria{";
    for (int i = 0; i < 100; i++) {
      code += "id(((";
      code += i;
      code += "~~~~";
      if (op == 1) {
        if (memoria_do_sistema[i] != "") {
          code +=  memoria_do_sistema[i];
        } else {
          code += "0";
        }
      }
      code += ")));";
    }
    code += "}";
    gravararquivohex(dir, code);
    texto = lerarquivohex(dir);
    interpretador(texto, op);
  } else {
    interpretador(texto, op);
  }
}
void interpretador(String pro, int funcao) {
  String analisememoria_1;
  for (int contage = 0; contage < pro.length(); contage++) {
    if ((String(pro.charAt(contage)).equals(" ")) || (String(pro.charAt(contage)).equals("\n")) || (String(pro.charAt(contage)).equals("\t"))) {
    } else {
      analisememoria_1 += pro.charAt(contage);
    }
    int contageant = contage;
    contage = mainmemoria(contage, analisememoria_1, pro, funcao);
    if (!(contageant == contage)) {
      analisememoria_1 = "";
    }
  }
}
int mainmemoria(int contage, String analisememoria_1, String pro, int funcao) {
  int cout_1 = 1;
  int cout_2 = 1;
  String analisememoria_2;
  if (analisememoria_1.equals("memoria")) {
    analisememoria_1 = "";
    while (cout_1 == 1) {
      contage++;
      analisememoria_1 = String(pro.charAt(contage));
      if (analisememoria_1.equals("{")) {
        analisememoria_1 = "";
        cout_1 = 2;
        while (cout_2 == 1) {
          delay(1);
          contage++;
          analisememoria_1 = String(pro.charAt(contage));
          if (analisememoria_1.equals("}")) {
            analisememoria_1 = "";
            cout_2 = 2;
          } else {
            if ((String(pro.charAt(contage)).equals(" ")) || (String(pro.charAt(contage)).equals("\n")) || (String(pro.charAt(contage)).equals("\t"))) {
            } else {
              analisememoria_2 += pro.charAt(contage);
            }
            int contageant = contage;
            contage = memoriaid(contage, analisememoria_2, pro, funcao);
            if (!(contageant == contage)) {
              analisememoria_2 = "";
            }
          }
        }
      }
    }
  }
  return contage;
}
int memoriaid(int contage, String analisememoria_2, String pro, int funcao) {
  String text;
  int value;
  String consult;
  String valuer;
  if (analisememoria_2.equals("id")) {
    while (true) {
      contage++;
      analisememoria_2 = String(pro.charAt(contage));
      if (analisememoria_2.equals("(") && String(pro.charAt(contage + 1)).equals("(") && String(pro.charAt(contage + 2)).equals("(")) {
        analisememoria_2 = "";
        contage++;
        contage++;
        while (true) {
          contage++;
          analisememoria_2 = String(pro.charAt(contage));
          if (analisememoria_2.equals(")") && String(pro.charAt(contage + 1)).equals(")") && String(pro.charAt(contage + 2)).equals(")")) {
            text = valuer;
            valuer = "";
            analisememoria_2 = "";
            contage++;
            contage++;
            while (true) {
              contage++;
              analisememoria_2 = String(pro.charAt(contage));
              if (analisememoria_2.equals(";")) {
                analisememoria_2 = "";
                break;
              }
            }
            break;
          } else {
            if (analisememoria_2.equals("~") && String(pro.charAt(contage + 1)).equals("~") && String(pro.charAt(contage + 2)).equals("~") && String(pro.charAt(contage + 3)).equals("~")) {
              value = atoi(String(valuer).c_str());
              valuer = "";
              analisememoria_2 = "";
              contage += 3;
            } else {
              valuer += pro.charAt(contage);
            }
          }
        }

        break;
      }
    }
    if (funcao == 1) {
      memoria_do_sistema[value] = text;
    }
  }
  return contage;
}
//---------------------------------------------------------------------
//---------------------------CONVERSAO---------------------------------
String IntToStr(int valor) {
  return String(valor);
}
String trasegundoinhorainminuto(int tempo) {
  String retorna;
  int segundo = 0;
  int minuto = 0;
  int hora   = 0;
  for (int i = 0; i < tempo; i++) {
    segundo++;
    if (segundo == 60) {
      segundo = 0;
      minuto++;
      if (minuto == 60) {
        hora++;
        minuto = 0;
      }
    }
  }
  if (hora < 10) {
    retorna = "0";
  }
  retorna += String(hora);
  retorna += ":";
  if (minuto < 10) {
    retorna += "0";
  }
  retorna += String(minuto);
  retorna += ":";
  if (segundo < 10) {
    retorna += "0";
  }
  retorna += String(segundo);
  return retorna;
}
char* conversostrtochar(String str) {
  char str1[100];
  char* str2;
  int u = 0;
  while (str1[u] != '\0') {
    str1[u] = '\0';
    u++;
  }
  u = 0;
  while (str2[u] != '\0') {
    str2[u] = '\0';
    u++;
  }
  strcpy(str1, str.c_str());
  str2 = str1;
  return str2;
}
double convertestrtodouble(String str) {
  return atof(str.c_str());
}

String transfordoublecasadecimais1(double valor) {
  char str1[ensize];
  sprintf(str1, "%.15lf", valor);
  String valoresdou1 = String(str1);
  int comecodoszeros = 0;
  boolean encontrouponto = false;
  for (int i = 0; i < valoresdou1.length(); i++) {
    if (String(valoresdou1.charAt(i)).equals(".")) {
      encontrouponto = true;
    }
    if (encontrouponto) {
      if (String(valoresdou1.charAt(i)).toInt() == 0) {
        if (comecodoszeros == 0) {
          comecodoszeros = i;
        }
      } else {
        comecodoszeros = 0;
      }
    }
  }
  String valoresdou;
  if (comecodoszeros > 0) {
    for (int i = 0; i < comecodoszeros; i++) {
      valoresdou += String(String(str1).charAt(i));
    }
    if (String(valoresdou.charAt(valoresdou.length())).equals(".")) {
      valoresdou.replace(".", "");
    }
    return valoresdou;
  } else {
    return valoresdou1;
  }
}
String transfordoublecasadecimais2(double valor) {
  char str1[ensize];
  sprintf(str1, "%.15lf", valor);
  return String(str1);
}
String transfordoublecasadecimais4(double valor) {
  char str1[ensize];
  sprintf(str1, "%.2lf", valor);
  return String(str1);
}
String transfordoublecasadecimais3(double valor) {
  char str1[ensize];
  sprintf(str1, "%.7lf", valor);
  return String(str1);
}
//---------------------------------------------------------------------
//---------------------------BITMAP------------------------------------
void imagegaleria(String fileName, int x, int y, int x1, int y1) {
  File _bmpFile;
  TFTscreen.clrScr();
  TFTscreen.fillScr(0, 0, 0);
  if ((_bmpFile = consultardiretoriopastaSD(fileName))) {
    _bmpFile = consultardiretoriopastaSD(fileName);
    int  _bmpWidth, _bmpHeight;
    int  tftwidth = 480, tftheight = 320;
    uint8_t  _bmpDepth;
    uint32_t _bmpImageoffset;
    uint32_t _rowSize;
    bool     _flip;
    bool     _valid;
#define BUFFPIXEL 20
    (void)read16(_bmpFile);
    (void)read32(_bmpFile);
    (void)read32(_bmpFile);
    _bmpImageoffset = read32(_bmpFile);
    (void)read32(_bmpFile);
    _bmpWidth  = read32(_bmpFile);
    _bmpHeight = read32(_bmpFile);
    (void)read16(_bmpFile);
    _bmpDepth = read16(_bmpFile);
    (void)read32(_bmpFile);
    _rowSize = (_bmpWidth * 3 + 3) & ~3;
    if (_bmpHeight < 0) {
      _bmpHeight = - _bmpHeight;
      _flip      = false;
    }
    _flip      = true;
    int      w, h, row, col;
    uint8_t  r, g, b;
    uint32_t pos = 0;
    unsigned short color[x1 + 1];
    uint8_t  sdbuffer[3 * BUFFPIXEL];
    uint8_t  buffidx = sizeof(sdbuffer);
    if ((_bmpHeight > y1) || (_bmpWidth > x1)) {
      w = x1;
      h = y1;
    } else {
      w = _bmpWidth;
      h = _bmpHeight;
      x = (TFTscreen.getDisplayXSize() / 2) - (_bmpWidth / 2);
      y = (TFTscreen.getDisplayYSize() / 2) - (_bmpHeight / 2);
    }
    if ((x + w - 1) >= tftwidth)  w = tftwidth  - x;
    if ((y + h - 1) >= tftheight) h = tftheight - y;
    for (row = 0; row < h; row++) {
      if (_flip)
        pos = _bmpImageoffset + (_bmpHeight - 1 - (row * (_bmpHeight / h))) * _rowSize;
      else
        pos = _bmpImageoffset + (row * (_bmpHeight / h))   * _rowSize;
      if (_bmpFile.position() != pos) {
        _bmpFile.seek(pos);
        buffidx = sizeof(sdbuffer);
      }
      for (col = 0; col < w; col++) {
        if (buffidx >= sizeof(sdbuffer)) {
          _bmpFile.read(sdbuffer, sizeof(sdbuffer));
          buffidx = 0;
        }
        for (int i = 0; i < (_bmpWidth / w); i++) {
          b = sdbuffer[buffidx++];
          g = sdbuffer[buffidx++];
          r = sdbuffer[buffidx++];
        }
        color[col] = ((r & 248) << 8 | (g & 252) << 3 | (b & 248) >> 3);
      }
      TFTscreen.drawPixelLine(x, y + row, w, color);
    }
  }
}

void imagereduzir(String fileName, int x, int y, int x1, int y1) {
  File _bmpFile;
  if ((_bmpFile = consultardiretoriopastaSD(fileName))) {
    int  _bmpWidth, _bmpHeight;
    int  tftwidth = 480, tftheight = 320;
    uint8_t  _bmpDepth;
    uint32_t _bmpImageoffset;
    uint32_t _rowSize;
    bool     _flip;
    bool     _valid;
#define BUFFPIXEL 20
    (void)read16(_bmpFile);
    (void)read32(_bmpFile);
    (void)read32(_bmpFile);
    _bmpImageoffset = read32(_bmpFile);
    (void)read32(_bmpFile);
    _bmpWidth  = read32(_bmpFile);
    _bmpHeight = read32(_bmpFile);
    (void)read16(_bmpFile);
    _bmpDepth = read16(_bmpFile);
    (void)read32(_bmpFile);
    _rowSize = (_bmpWidth * 3 + 3) & ~3;
    if (_bmpHeight < 0) {
      _bmpHeight = - _bmpHeight;
      _flip      = false;
    }
    _flip      = true;
    int      w, h, row, col;
    uint8_t  r, g, b;
    uint32_t pos = 0;
    unsigned short color[x1 + 1];
    uint8_t  sdbuffer[3 * BUFFPIXEL];
    uint8_t  buffidx = sizeof(sdbuffer);
    w = x1;
    h = y1;
    if ((x + w - 1) >= tftwidth)  w = tftwidth  - x;
    if ((y + h - 1) >= tftheight) h = tftheight - y;
    if ((x1 <= _bmpWidth) && (y1 <= _bmpHeight)) {
      for (row = 0; row < h; row++) {
        if (_flip)
          pos = _bmpImageoffset + (_bmpHeight - 1 - (row * (_bmpHeight / h))) * _rowSize;
        else
          pos = _bmpImageoffset + (row * (_bmpHeight / h))   * _rowSize;
        if (_bmpFile.position() != pos) {
          _bmpFile.seek(pos);
          buffidx = sizeof(sdbuffer);
        }
        for (col = 0; col < w; col++) {
          if (buffidx >= sizeof(sdbuffer)) {
            _bmpFile.read(sdbuffer, sizeof(sdbuffer));
            buffidx = 0;
          }
          for (int i = 0; i < (_bmpWidth / w); i++) {
            b = sdbuffer[buffidx++];
            g = sdbuffer[buffidx++];
            r = sdbuffer[buffidx++];
          }
          color[col] = ((r & 248) << 8 | (g & 252) << 3 | (b & 248) >> 3);
        }
        TFTscreen.drawPixelLine(x, y + row, w, color);
      }
    } else {
      for (row = 0; row < _bmpHeight; row++) {
        if (_flip)
          pos = _bmpImageoffset + (_bmpHeight - 1 - row) * _rowSize;
        else
          pos = _bmpImageoffset + row   * _rowSize;
        if (_bmpFile.position() != pos) {
          _bmpFile.seek(pos);
          buffidx = sizeof(sdbuffer);
        }
        for (col = 0; col < _bmpWidth; col++) {
          if (buffidx >= sizeof(sdbuffer)) {
            _bmpFile.read(sdbuffer, sizeof(sdbuffer));
            buffidx = 0;
          }
          b = sdbuffer[buffidx++];
          g = sdbuffer[buffidx++];
          r = sdbuffer[buffidx++];
          TFTscreen.setColor(r, g, b);
          TFTscreen.fillRect(x + int(col * (w / _bmpWidth)), y + int(row * (h / _bmpHeight)), x + int((col - 1) * (w / _bmpWidth)), y + int((row - 1) * (h / _bmpHeight)));
        }
      }
    }
  }
}
uint16_t  read16(File f) {
  uint16_t result;
  ((uint8_t *)&result)[0] = f.read();
  ((uint8_t *)&result)[1] = f.read();
  return result;
}
uint32_t read32(File f) {
  uint32_t result;
  ((uint8_t *)&result)[0] = f.read();
  ((uint8_t *)&result)[1] = f.read();
  ((uint8_t *)&result)[2] = f.read();
  ((uint8_t *)&result)[3] = f.read();
  return result;
}
void printimageoriginal(String img, int x, int y) {
  TFTscreen.background(0, 0, 0);
  PImage logo;
  logo = consultardiretoriopastaSD_pimage(img);
  if (logo.isValid()) {
    TFTscreen.imageoriginal(logo, x, y);
  }
}
void printimagescala(String img, int x, int y, int x1, int y1) {
  TFTscreen.background(0, 0, 0);
  imagereduzir(img.c_str(), x, y, x1, y1);
}
void printimagescalatrans(String img, int x, int y, int x1, int y1) {
  imagereduzir(img.c_str(), x, y, x1, y1);
}
void printimagetransparente(String img, int x, int y) {
  PImage logo;
  logo = consultardiretoriopastaSD_pimage(img);
  if (logo.isValid()) {
    TFTscreen.imagetransparente(logo, x, y);
  }
}
void printimage(String img, int x, int y) {
  if (img.equals("0")) {
    TFTscreen.background(0, 0, 0);
  } else {
    PImage logo;
    logo = consultardiretoriopastaSD_pimage(img);
    if (logo.isValid()) {
      TFTscreen.image(logo, x, y);
    }
  }
}
void printimageeeprom(String img, int x, int y) {
  if (img.equals("0")) {
    TFTscreen.background(0, 0, 0);
  } else {
    PImage logo;
    logo = consultardiretoriopastaSD_pimage(img);
    if (logo.isValid()) {
      TFTscreen.image(logo, x, y);
    }
  }
}
void printimagpont(String img, int x, int y, int x1, int y1) {
  if (img.equals("0")) {
    TFTscreen.background(0, 0, 0);
  } else {
    PImage logo;
    logo = consultardiretoriopastaSD_pimage(img);
    if (logo.isValid()) {
      TFTscreen.imagepont(logo, x, y, x1, y1);
    }
  }
}
void printimagec(String img) {
  if (img.equals("0")) {
    TFTscreen.background(0, 0, 0);
  } else {
    PImage logo;
    logo = consultardiretoriopastaSD_pimage(img);
    if (TFTscreen.width() == logo.width() && TFTscreen.height() == logo.height()) {
    } else {
      TFTscreen.background(0, 0, 0);
    }
    if (logo.isValid()) {
      TFTscreen.image(logo, (TFTscreen.width() / 2) - (logo.width() / 2), (TFTscreen.height() / 2) - (logo.height() / 2));
    }
  }
}
long creatergb(byte r, byte g, byte b) {
  return ((r << 16) | (g << 8) | b);
}
//---------------------------------------------------------------------
//---------------------------AUDIO-------------------------------------
void som(String uri) {
  int count = 0;
  short buffern[1024];
  SPI.setClockDivider(4);
  Audio.begin(88200, 100);
  File myFile = consultardiretoriopastaSD(uri);
  int quantidade = myFile.size();
  while (myFile.available()) {
    delay(1);
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ESC) {
        break;
      }
    }
    myFile.read(buffern, sizeof(buffern));
    if (quantidade > sizeof(buffern)) {
      int volumen = (memoriareadint(22).toInt()) * 204.8;
      Audio.prepare(buffern, 1024, volumen);
      Audio.write(buffern, 1024);
      quantidade -= sizeof(buffern);
    } else {
      if (quantidade > 0) {
        int volumen = (memoriareadint(22).toInt()) * 204.8;
        Audio.prepare(buffern, 1024, volumen);
        Audio.write(buffern, quantidade );
        quantidade = 0;
      }
    }
    count++;
    if (count == 100) {
      count = 0;
    }
  }
  myFile.close();
  Audio.end();
}
void som1(String uri) {
  int count = 0;
  short buffern[1024];
  SPI.setClockDivider(4);
  Audio.begin(88200, 100);
  File myFile = consultardiretoriopastaSD(uri);
  int quantidade = myFile.size();
  while (myFile.available()) {
    delay(1);
    myFile.read(buffern, sizeof(buffern));
    if (quantidade > sizeof(buffern)) {
      int volumen = (memoriareadint(22).toInt()) * 204.8;
      Audio.prepare(buffern, 1024, volumen);
      Audio.write(buffern, 1024);
      quantidade -= sizeof(buffern);
    } else {
      if (quantidade > 0) {
        int volumen = (memoriareadint(22).toInt()) * 204.8;
        Audio.prepare(buffern, 1024, volumen);
        Audio.write(buffern, quantidade );
        quantidade = 0;
      }
    }
    count++;
    if (count == 100) {
      count = 0;
    }
  }
  myFile.close();
  Audio.end();
}
int som3(String uri) {
  short buffern[1024];
  int count = 0;
  int retornavalor = 0;
  SPI.setClockDivider(4);
  Audio.begin(88200, 100);
  File myFile = consultardiretoriopastaSD(uri);
  int quantidade = myFile.size();
  while (myFile.available()) {
    delay(1);
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ESC) {
        retornavalor = 1;
        break;
      }
    }
    myFile.read(buffern, sizeof(buffern));
    if (quantidade > sizeof(buffern)) {
      int volumen = (memoriareadint(22).toInt()) * 204.8;
      Audio.prepare(buffern, 1024, volumen);
      Audio.write(buffern, 1024);
      quantidade -= sizeof(buffern);
    } else {
      if (quantidade > 0) {
        int volumen = (memoriareadint(22).toInt()) * 204.8;
        Audio.prepare(buffern, 1024, volumen);
        Audio.write(buffern, quantidade );
        quantidade = 0;
      }
    }
    count++;
    if (count == 100) {
      count = 0;
    }
  }
  myFile.close();
  Audio.end();
  return retornavalor;
}
int som4(String uri) {
  short buffern[1024];
  int count = 0;
  int retornavalor = 0;
  SPI.setClockDivider(4);
  Audio.begin(88200, 100);
  File myFile = consultardiretoriopastaSD(uri);
  int quantidade = myFile.size();
  int hora = memoriareadint(3).toInt();
  int minuto = memoriareadint(2).toInt();
  while (myFile.available()) {
    delay(1);
    if ((minuto != memoriareadint(2).toInt()) || (hora != memoriareadint(3).toInt() )) {
      minuto = memoriareadint(2).toInt();
      hora = memoriareadint(3).toInt();
      printdataehora2();
    }
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ESC) {
        retornavalor = 1;
        break;
      }
    }
    myFile.read(buffern, sizeof(buffern));
    if (quantidade > sizeof(buffern)) {
      int volumen = (memoriareadint(22).toInt()) * 204.8;
      Audio.prepare(buffern, 1024, volumen);
      Audio.write(buffern, 1024);
      quantidade -= sizeof(buffern);
    } else {
      if (quantidade > 0) {
        int volumen = (memoriareadint(22).toInt()) * 204.8;
        Audio.prepare(buffern, 1024, volumen);
        Audio.write(buffern, quantidade );
        quantidade = 0;
      }
    }
    count++;
    if (count == 100) {
      count = 0;
    }
  }
  myFile.close();
  Audio.end();
  return retornavalor;
}
//---------------------------------------------------------------------
//---------------------------COMUNICACAO SERIAL------------------------
String comunicacaorx(int pin) {
  String text;
  int valor[2];
  while (true) {
    pinMode(pin, INPUT);
    if (digitalRead(pin) == 1) {
      if (int((millis() - valor[2])) > 500) {
        valor[1] = 0;
        break;
      }
      if (int((millis() - valor[2]) / 50) > 1) {
        valor[1]++;
        if ((valor[1] != 1) && (valor[1] != 2)) {
          text += (char)valor[0];
        }
        valor[0] = 0;
      }
      valor[0]++;
      valor[2] = millis();
      delayMicroseconds(998);
    }
  }
  return text;
}
void comunicacaotx(String str, int pin) {
  pinMode(pin, INPUT);
  for (int j = 0; j <= str.length(); j++) {
    char a = str.charAt(j);
    int valor = (int)a;
    for (int i = 1; i <= valor ; i++) {
      pinMode(pin, OUTPUT);
      digitalWrite(pin, HIGH);
      delay(1);
      digitalWrite(pin, LOW);
      delay(1);
    }
    delay(100);
  }
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delay(1);
  pinMode(pin, INPUT);
  delay(1);
  delay(100);
}
//---------------------------------------------------------------------
//---------------------------CONTROLE USB------------------------------
void controlusb() {
  app_layout_actionbar_barra_3("Controle USB", 0, 50, 0);
  app_layout_print_paragrafo(2, "Para sair aperte o botao reset :: MOUSE TECLADO", 30, 100, 450, 270, 255, 255, 255);
  while (true) {
    int data[2];
    mouse.report(data);
    int scala = 2;
    if (data[1] != 0 || data[2] != 0) {
      scala++;
      if (scala > 40) {
        scala = 40;
      }
    } else {
      scala--;
      if (scala < 3) {
        scala = 3;
      }
    }
    if (data[1] != 0 && data[1] > 100) {
      Mouse.move(-scala, 0, 0);
    }
    if (data[1] != 0 && data[1] < 100) {
      Mouse.move(scala, 0, 0);
    }
    if (data[2] != 0 && data[2] > 100) {
      Mouse.move(0, scala, 0);
    }
    if (data[2] != 0 && data[2] < 100) {
      Mouse.move(0, -scala, 0);
    }
    if (data[0] == 9) {
      if (!Mouse.isPressed(MOUSE_LEFT)) {
        Mouse.press(MOUSE_LEFT);
      }
    }
    else {
      if (Mouse.isPressed(MOUSE_LEFT)) {
        Mouse.release(MOUSE_LEFT);
      }
    }
    if (data[0] == 10) {
      if (!Mouse.isPressed(MOUSE_RIGHT)) {
        Mouse.press(MOUSE_RIGHT);
      }
    }
    else {
      if (Mouse.isPressed(MOUSE_RIGHT)) {
        Mouse.release(MOUSE_RIGHT);
      }
    }
    if (data[0] == 12) {
      if (!Mouse.isPressed(MOUSE_MIDDLE)) {
        Mouse.press(MOUSE_MIDDLE);
      }
    }
    else {
      if (Mouse.isPressed(MOUSE_MIDDLE)) {
        Mouse.release(MOUSE_MIDDLE);
      }
    }
    if (keyboard.available()) {
      char c = keyboard.read();
      if (c == PS2_ENTER) {
        Keyboard.press(KEY_RETURN);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_TAB) {
        Keyboard.press(KEY_TAB);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_ESC) {
        Keyboard.press(KEY_ESC);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_PAGEDOWN) {
        Keyboard.press(KEY_PAGE_DOWN);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_PAGEUP) {
        Keyboard.press(KEY_PAGE_UP);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_LEFTARROW) {
        Keyboard.press(KEY_LEFT_ARROW);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_RIGHTARROW) {
        Keyboard.press(KEY_RIGHT_ARROW);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_UPARROW) {
        Keyboard.press(KEY_UP_ARROW);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_DOWNARROW) {
        Keyboard.press(KEY_DOWN_ARROW);
        delay(100);
        Keyboard.releaseAll();
      } else if (c == PS2_DELETE) {
        Keyboard.press(KEY_BACKSPACE);
        delay(100);
        Keyboard.releaseAll();
      } else {
        Keyboard.write(c);
      }
    }
  }
}
//---------------------------------------------------------------------
//---------------------------SPEESH------------------------------------
void printspec(String valor) {
  for (int i = 0; i < valor.length(); i++) {
    String a = String(valor.charAt(i));
    a += ".wav";
    som1(a);
  }
}
//---------------------------------------------------------------------


