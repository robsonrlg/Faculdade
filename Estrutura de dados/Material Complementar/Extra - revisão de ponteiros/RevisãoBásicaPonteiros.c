int main(int argc, char *argv[]) {

	int a = 6;	/*solicitar 4 bytes de memória para armezar um inteiro e eu vou chamar
	este local de armazenamento de "a"
	*/
	printf("qtd de bytes de a: %d\n",sizeof(a));
	printf("conteudo armazenado em a: %d\n",a);
	printf("Posicao de memoria onde a estah armazenada: %d\n",&a);
	
	char b;	/*solicitar 1 byte de memória para armezar um char e eu vou chamar
	este local de armazenamento de "b"
	*/
	printf("%d\n",sizeof(b));
	
	float c = 4.4;
	printf("%d\n",sizeof(c));
	printf("%f\n",c);
	
	double d = 5.6;
	printf("%d\n",sizeof(d));
	printf("%lf\n",d);	
	
	
	int vet[5];
	vet[0] = 2;
	vet[1] = 5;
	vet[2] = 7;
	vet[3] = 1;
	vet[4] = 4;
		
	printf("%d\n",sizeof(vet));
	printf("%d\n",vet);	
	printf("%d\n",&vet[1]);
	printf("%d\n",&vet[2]);
	
	
	
	
	


	return 0;
}
