#if defined(__PCM__)
#include <16f873A.h>
#fuses XT,NOWDT,NOPROTECT
#device *=16 ADC=10
#use delay(clock=4000000)
#endif

int time=50;
int16 lectura=0;

void inicializar() {
   output_low(PIN_B4);
   output_low(PIN_B5);
   output_low(PIN_B6);
   output_low(PIN_B7);
  
   setup_adc_ports(RA0_ANALOG);           //puerto A0 como entrada analoga
   setup_adc(adc_clock_internal);         //configura el clk interno para el muestreo analogo
   set_adc_channel( 0 );                  //activa el canal a0
   delay_us(30);                          //retardo de 30 micro segundos

}

void giro_derecha100() {
   output_high(PIN_B4);
   output_low(PIN_B5);
   output_low(PIN_B6);
   output_low(PIN_B7);
   delay_ms( time );  
   
   output_high(PIN_B4);
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4); 
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4);  
   output_high(PIN_B5); 
   output_high(PIN_B6); 
   output_low(PIN_B7);  
   delay_ms( time );    
   
   output_low(PIN_B4); 
   output_low(PIN_B5); 
   output_high(PIN_B6);
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_high(PIN_B6); 
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_low(PIN_B6);  
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_high(PIN_B4);  
   output_low(PIN_B5);   
   output_low(PIN_B6);   
   output_high(PIN_B7);  
   delay_ms( time ); 
}

void giro_derecha75() {
   output_high(PIN_B4);
   output_low(PIN_B5);
   output_low(PIN_B6);
   output_low(PIN_B7);
   delay_ms( time );  
   
   output_high(PIN_B4);
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4); 
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4);  
   output_high(PIN_B5); 
   output_high(PIN_B6); 
   output_low(PIN_B7);  
   delay_ms( time );    
   
   output_low(PIN_B4); 
   output_low(PIN_B5); 
   output_high(PIN_B6);
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_high(PIN_B6); 
   output_high(PIN_B7); 
   delay_ms( time );   
}

void giro_derecha50() {
   output_high(PIN_B4);
   output_low(PIN_B5);
   output_low(PIN_B6);
   output_low(PIN_B7);
   delay_ms( time );  
   
   output_high(PIN_B4);
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4); 
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4);  
   output_high(PIN_B5); 
   output_high(PIN_B6); 
   output_low(PIN_B7);  
   delay_ms( time );    
}

void giro_derecha25() {
   output_high(PIN_B4);
   output_low(PIN_B5);
   output_low(PIN_B6);
   output_low(PIN_B7);
   delay_ms( time );  
   
   output_high(PIN_B4);
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
}

void giro_izquierda100() {
   output_high(PIN_B4);  
   output_low(PIN_B5);   
   output_low(PIN_B6);   
   output_high(PIN_B7);  
   delay_ms( time ); 
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_low(PIN_B6);  
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_high(PIN_B6); 
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_low(PIN_B4); 
   output_low(PIN_B5); 
   output_high(PIN_B6);
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4);  
   output_high(PIN_B5); 
   output_high(PIN_B6); 
   output_low(PIN_B7);  
   delay_ms( time );    
   
   output_low(PIN_B4); 
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_high(PIN_B4);
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_high(PIN_B4);
   output_low(PIN_B5);
   output_low(PIN_B6);
   output_low(PIN_B7);
   delay_ms( time );  
}

void giro_izquierda75() {
   output_high(PIN_B4);  
   output_low(PIN_B5);   
   output_low(PIN_B6);   
   output_high(PIN_B7);  
   delay_ms( time ); 
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_low(PIN_B6);  
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_high(PIN_B6); 
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_low(PIN_B4); 
   output_low(PIN_B5); 
   output_high(PIN_B6);
   output_low(PIN_B7); 
   delay_ms( time );   
   
   output_low(PIN_B4);  
   output_high(PIN_B5); 
   output_high(PIN_B6); 
   output_low(PIN_B7);  
   delay_ms( time );    
   
   output_low(PIN_B4); 
   output_high(PIN_B5);
   output_low(PIN_B6); 
   output_low(PIN_B7); 
   delay_ms( time );   
}

void giro_izquierda50() {
   output_high(PIN_B4);  
   output_low(PIN_B5);   
   output_low(PIN_B6);   
   output_high(PIN_B7);  
   delay_ms( time ); 
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_low(PIN_B6);  
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_high(PIN_B6); 
   output_high(PIN_B7); 
   delay_ms( time );    
   
   output_low(PIN_B4); 
   output_low(PIN_B5); 
   output_high(PIN_B6);
   output_low(PIN_B7); 
   delay_ms( time );   
}

void giro_izquierda25() {
   output_high(PIN_B4);  
   output_low(PIN_B5);   
   output_low(PIN_B6);   
   output_high(PIN_B7);  
   delay_ms( time ); 
   
   output_low(PIN_B4);  
   output_low(PIN_B5);  
   output_low(PIN_B6);  
   output_high(PIN_B7); 
   delay_ms( time );    
}

void leer() {
   lectura=read_adc();
   delay_us(40);
}


main() {
/*
Vista frontal, motor detras de la barra

|------|------|------|------|------|------|------|------|
0     128    256    384    512    640    768    896   1024

*/

   SET_TRIS_A( 0xFF );
   SET_TRIS_B( 0x00 );
   SET_TRIS_C( 0x00 );

   inicializar();
   
   while(true) {
      leer();
      
      if(lectura < 128) {
         giro_derecha100();
      } else if(lectura < 256) {
         giro_derecha75();
      } else if(lectura < 384) {
         giro_derecha50();
      } else if(lectura < 512) {
         giro_derecha25();
      } else if(lectura < 640) {
         giro_izquierda25();
      } else if(lectura < 768) {
         giro_izquierda50();
      } else if(lectura < 896) {
         giro_izquierda75();
      } else if(lectura < 1024) {
         giro_izquierda100();
      }      
      
   }
}
