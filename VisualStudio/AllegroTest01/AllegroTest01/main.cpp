
#include <stdio.h>
#include <allegro5/allegro.h>

#include <allegro5/allegro_native_dialog.h>

 
int main(int argc, char **argv)
{
   ALLEGRO_DISPLAY *display = NULL;
 
   if(!al_init()) {
      fprintf(stderr, "failed to initialize allegro!\n");
      return -1;
   }
 
   display = al_create_display(640, 480);
   if(!display) {
      fprintf(stderr, "failed to create display!\n");
      return -1;
   }
 
   al_clear_to_color(al_map_rgb(0,0,0));
 
   al_flip_display();
 
   al_rest(10.0);
 
   al_destroy_display(display);

   al_show_native_message_box(NULL,                    //ALLEGRO_DISPLAY* pode ser NULL
                             "Primeiro Programa",     //Título
							 "Atencao",               //Cabeçalho
							 "Welcome to Allegro!",   //Texto
							 NULL,                    //Botões, pode ser NULL
							 0);                      //flags ALLEGRO_MESSAGEBOX_WARN
							                          //ALLEGRO_MESSAGEBOX_ERROR
													  //ALLEGRO_MESSAGEBOX_QUESTION
													  //ALLEGRO_MESSAGEBOX_OK_CANCEL
													  //ALLEGRO_MESSAGEBOX_YES_NO
													  //Retorna 0 se fechar a janela
													  //Retorna 1 se OK
													  //Retorna 2 se Cancel ou nenhum botão pressionado

	al_show_native_message_box(NULL,
                             "Primeiro Programa",
							 "Atencao",
							 "Welcome to Allegro!",
							 "acao",
							 ALLEGRO_MESSAGEBOX_WARN);

	al_show_native_message_box(NULL,
                             "Primeiro Programa",
							 "Atencao",
							 "Welcome to Allegro!",
							 "A | acao",
							 ALLEGRO_MESSAGEBOX_YES_NO);
 
   return 0;
}