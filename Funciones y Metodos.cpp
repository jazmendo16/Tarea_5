#include <iostream>
using namespace std;
 
main () {

    int fil =0, col,**pm_notas;
    cout<<"ingrese la cantidad de estudiantes:";
    cin>>fil;
    cout<<"ingrese la cantidad de notas por estudiante:";
    cin>>col;
    
    pm_notas =new int* [fil];
    for(int i=0;i<fil;i++)
        pm_notas[i]=new int[col];
        
    for (int i=0;i<fil;i++){
    	cout<<"_______Estudiante_____"<<i <<endl;
    	for (int ii=0;ii<col;ii++){
    		
    		cout<<"nota:" <<ii<<" :";
			cin>>*(*( pm_notas+i)+ii);
			
			}
		cout<<"__________________"<<endl;		

	}    
	cout <<"_____Mostrar notas____"<<endl;
	for (int i=0;i<fil;i++){
    	 
    	for (int ii=0;ii<col;ii++){
    		
		    cout<<*(*( pm_notas+i)+ii)<<endl;
			
			}
		cout<<"______________________"<<endl;
	}	
	for(int i=0;i<fil;i++){
		delete [] pm_notas[i];
	}
	delete[]pm_notas;
    system("pause");
    
    

}

