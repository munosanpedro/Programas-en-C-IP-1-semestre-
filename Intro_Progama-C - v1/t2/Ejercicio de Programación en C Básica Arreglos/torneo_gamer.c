#include <stdio.h> 
int main() {
    // Arreglo que almacenará los puntajes   
	 int puntajes[5];    
	 // Variable para ciclos
	     int i;    
		 // Variable acumuladora 
		    int suma = 0;    
			// Variable para guardar el mayor puntaje    
			int mayor; 
			//Controla el ciclo Acumula todos los puntajes Guarda el puntaje más alto    
			printf("=== FESTIVAL GAMER ESCOLAR ===\n\n");    
			// Captura de puntajes    
			for(i = 0; i < 5; i++) {        
			printf("Ingresa el puntaje del jugador %d: ", i + 1);  
			      scanf("%d", &puntajes[i]);
				      }    
					  // El primer valor será considerado inicialmente como el mayor
					      mayor = puntajes[0];
						      printf("\n--- PUNTAJES REGISTRADOS ---\n");
							      // Mostrar puntajes y realizar operaciones
								      for(i = 0; i < 5; i++) {
									          // Mostrar cada posición del arreglo 
											         printf("Jugador %d -> %d puntos\n", i + 1, puntajes[i]); 
													        // Acumular suma
															        suma = suma + puntajes[i]; 
																	       // Verificar si existe un puntaje mayor 
																		          if(puntajes[i] > mayor) { 
																				             mayor = puntajes[i]; 
																							        }
																									    } 
																										   // Mostrar resultados finales
																										       printf("\nTotal acumulado: %d puntos\n", suma);
																											       printf("Puntaje mas alto: %d puntos\n", mayor); 
																												      printf("\nPrograma finalizado correctamente."); 
																													     return 0; }