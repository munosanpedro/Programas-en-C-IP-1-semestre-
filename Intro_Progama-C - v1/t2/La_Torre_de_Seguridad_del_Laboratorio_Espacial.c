//La_Torre_de_Seguridad_del_Laboratorio_Espacial
#include <stdio.h>
int main() {
	int credencial, codigo, autorizacion, casco;
	int energia, emergencia, temperatura;
	int robot, entrenamiento, intrusos;
		printf("=== SISTEMA DE SEGURIDAD NOVATECH ===\n");
		printf("Credencial valida? (1=SI 0=NO): ");
		scanf("%d", &credencial);
			if(credencial == 1){
				printf("Codigo secreto correcto? ");
				scanf("%d", &codigo);
					if(codigo == 1){
						printf("Autorizacion del supervisor? ");
						scanf("%d", &autorizacion);
							if(autorizacion == 1){
								printf("Trae casco de seguridad? ");
								scanf("%d", &casco);
								if(casco == 1){
									printf("Energia estable? ");
									scanf("%d", &energia);
									if(energia == 1){
										printf("Modo emergencia activo? ");
										scanf("%d", &emergencia);
										if(emergencia == 0){
											printf("Temperatura segura? ");
											scanf("%d", &temperatura);
												if(temperatura == 1){
													printf("Robot guardian activo? ");
													scanf("%d", &robot);
														if(robot == 1){
															printf("Entrenamiento completo? ");
															scanf("%d", &entrenamiento);
																if(entrenamiento == 1){
																	printf("Intrusos detectados? ");
																	scanf("%d", &intrusos);
																		if(intrusos == 0){
																			printf("\nACCESO TOTAL PERMITIDO\n");
																		}
																		else{
																			printf("\nALERTA: INTRUSOS DETECTADOS\n");
																			}
																					}
																						else{
																							printf("\nFALTA ENTRENAMIENTO\n");
																							}
																		}
																			else{
																				printf("\nROBOT GUARDIAN INACTIVO\n");
																				}
																	}
																		else{
																			printf("\nTEMPERATURA PELIGROSA\n");
																			}
															}
																else{
																	printf("\nLABORATORIO EN EMERGENCIA\n");
																	}
													}
														else{
															printf("\nFALLA DE ENERGIA\n");
															}
											}
												else{
													printf("\nNO TRAE CASCO\n");
													}
													}
														else{
															printf("\nSIN AUTORIZACION\n");
															}
									}
										else{
											printf("\nCODIGO INCORRECTO\n");
											}
							}
								else{
									printf("\nCREDENCIAL INVALIDA\n");
									}
									return 0;
}