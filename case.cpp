#include"Days.hpp"
int cas (int mounth,int daye){

switch(mounth){
	case 1:
		assert(daye<=31);
		return 1;
   	case 2:
		assert(daye<=29);
		return 4;
       	case 3:
		assert(daye<=31);
           	return 4;
   	case 4:
		assert(daye<=30);
       		return 0;
	case 5:
		assert(daye<=31);
        	return 2;
	case 6:	
		assert(daye<=30);
     		return 5;
   	case 7:	
		assert(daye<=31);
           	return 0;
   	case 8: 		
		assert(daye<=31);
		return 3;
	case 9:
		assert(daye<=30);
		return 6;
	case 10:
		assert(daye<=31);
		return 1;
	case 11:
		assert(daye<=30);
		return 4;
	case 12:      		
		assert(daye<=31);
		return 6;
      	default:
                cout<<"error data";
           	break;

}return 111;
}
