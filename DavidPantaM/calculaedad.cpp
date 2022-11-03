# incluir  < iostream >
utilizando el espacio de  nombres  estándar ;
int  principal ()
{
	int JDPM_aa,JDPM_ma,JDPM_da,JDPM_an,JDPM_mn,JDPM_dn,JDPM_a,JDPM_m,JDPM_d;
cout<< " Ingrese la fecha actual : " ;cin>>JDPM_aa>>JDPM_ma>>JDPM_da;
cout<< " Ingrese la fecha de nacimiento: " ;cin>>JDPM_an>>JDPM_mn>>JDPM_dn;

      	si (JDPM_da>JDPM_dn){

		JDPM_d=JDPM_da-JDPM_dn;

	} más {
		JDPM_da=JDPM_da+ 30 ;
		JDPM_ma=JDPM_ma- 1 ;
		JDPM_d=JDPM_da-JDPM_dn;
	}

      	si (JDPM_ma>JDPM_mn){
	
		JDPM_m=JDPM_ma-JDPM_mn;

	} más {

		JDPM_ma=JDPM_ma+ 12 ;
		JDPM_aa=JDPM_aa- 1 ;
		JDPM_m=JDPM_ma-JDPM_mn;
	}
                JDPM_a=JDPM_aa-JDPM_an;

	cout<< " Usted tiene " <<JDPM_a<< " años, " <<JDPM_m<< " meses, " <<JDPM_d<< " dias " <<endl;
	devolver  0 ;
	
}
