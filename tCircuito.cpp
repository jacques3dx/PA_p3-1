#include <stdio.h>
struct tCircuito
{
    float R1,R2,V,i;
    /////Calculo Resistencia em
    /// serie
    float CalcRInSerie(){
        return R1 + R2;
    }
    /////Calculo Resistencia em 
    ///paralelo
    float CalcRinParalell(){
        return R1*R2/(R1+R2);
    }
    /////Calculo i total
    float CalcITotal(float Req){
        return V/Req;
    }
    /////Calculo Potência
    float PowerCalc(float Req){
        return V*V/Req;
    }
};
