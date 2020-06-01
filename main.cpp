#include <stdio.h>

int main(){
	int op;
	
	printf("\nARBOL GENEALOGICO\n");
	printf("\n1.-GENERACION 1\n");
	printf("\n2.-GENERACION 2\n");
	printf("\n2.-GENERACION 3\n");
	printf("\n2.-GENERACION 4\n");
	printf("\n2.-GENERACION 5\n");
	scanf("\n%d",&op);
	switch(op){
	
	case 1:
	printf("\nConcepcion Hernandez y Jesus Dorantes son mis bisabuelos por parte de mi abuela materna\n");
	printf("\nMaría de Jesús y Enrique Aguilar son mis bisabuelos por parte de mi abuelo materno\n");
	printf("\n");
	printf("\nConcepcion y Jose son mis bisabuelos por parte de mi abuela paterna\n");
	printf("\nEnrique y Josefina son mis bisabuelos por parte de mi abuelo paterno\n");
	break;
	
	case 2:
	printf("\nCosme Aguilar y Elvia Dorantes son mis abuelos maternos\n");
	printf("\nTimoteo Reyes y Celia Mejia son mis abuelos paternos\n");
	break;
	
	case 3:
	printf("\nMyrna Angelica Aguilar Dorantes es mi madre\n");
	printf("\Isaac Reyes Mejía es mi padre\n");
	break;
	
	case 4:
	printf("\nEdgar Alberto Reyes Aguilar mi hermano\n");
	printf("\nIsaac Daniel Reyes Aguilar soy yo merengues\n");
	break;
	
	case 5:
	printf("\nMaria Fernanda, Maximiliano, jose son mis sobrinos...tengo 11 tios y como 60 primos muchos de ellos ya casados y con hijos, solo le puse algunos de mis sobrinos como ejemplo\n");
	break;
		
}
	return 0;
}
