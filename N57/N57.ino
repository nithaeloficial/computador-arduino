#include <SD.h>
#include <DAC.h>
#include <SPI.h>
#include <UTFT.h>
#include <stdlib.h>
#include <Audio.h>
#include <PS2Mouse.h>
#include <Scheduler.h>
#include <PS2Keyboard.h>

String url1;
SdFile root;
Sd2Card card;
SdVolume volume;
#define ensize 100
#define ensize1 30
PS2Keyboard keyboard;
String arquivosger[7];
String tipodearquivo[7];
extern uint8_t BigFont[];
String atividades[10][7];
String namearquivosger[7];
boolean n5umativo = false;
String uriarquivosger[100];
boolean desligarn5 = false;
boolean suspenden5 = false;
extern uint8_t SmallFont[];
int posicaobuscaarquivo = 0;
String despertador[10][13];
int contagemdearquivos = 0;
String bancodedados[10][13];
String areadetraferenciaurl;
String arquivosencontrado[7];
int portadecartaosystem = 53;
int contagemdearquivosuri = 0;
String varnotificacao[ensize];
boolean teladebloqueio = true;
int arquivosencontradocntagem;
File myFile_app_galeria_musica;
String urlbuscaarquivo[100];
PS2Mouse mouse(3, 2, STREAM);
String areadetraferenciaurlcola;
String tipoareadetraferenciaurl;
int varquantdadenotificacao = 0;
extern uint8_t SevenSegNumFont[];
String urlbuscaarquivoencontrado;
boolean system01inaction = false;
boolean suspendermenuapp = false;
String arquivosencontradonome[7];
String memoria_do_sistema[ensize];
boolean suspenderpassword = false;
boolean alertanotificacao = false;
int contagemposicaobuscaarquivo = 1;
String tipoareadetraferenciaurlcola;
boolean suspenderpasswordapp = false;
String diretoriogerpasta = "/Usuario";
String urlbuscaarquivoencontradoformato;
boolean transferenciaatividades = false;
boolean transferenciadespertador = false;
String memoriagerenciadorarquivo[ensize];
UTFT TFTscreen = UTFT(HX8357B, 38, 39, 40, 41);
boolean transferenciacontagemregressiva = false;

void setup() {
  Serial.begin(9600);
  TFTscreen.InitLCD();
  keyboard.begin(4, 5);
  TFTscreen.background(0, 0, 0);
  TFTscreen.stroke(255, 255, 255);
  Scheduler.startLoop(segundoplano_processamento);
  Scheduler.startLoop(segundoplano_contagemdatahora);
  //0 0 100
  // 0 100 100
  // -30 -30 -30
  //-51 51 0
  // 0 51 0
  //127 127 127


  //app_layout_actionbar_barra_1("Bloco de Nota", "SD::SD1/SYS.H/IMAGEM/APLICA~1/M1.BMP", -51,51,0);
}
void loop() {
  boot_inicializaca();
}

