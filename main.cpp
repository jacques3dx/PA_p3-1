#include <iostream>
#include "tCircuito.cpp"

using namespace  std;

int main(){
    
    tCircuito circuito;
    ///define R1,R2,V
    circuito.R1 = 50;
    circuito.R2 = 20;
    circuito.V = 150;

    cout<<"Para dados os valores:"<<endl;
    cout<<endl;
    cout<<"R1="<<circuito.R1<<"\tR2="<<circuito.R2<<"\tV="<<circuito.V<<endl;
    cout<<endl;
    ////Calculo de Req em serie
    float RinSeries = circuito.CalcRInSerie();
    cout<<"A Req em série é: "<<RinSeries<<"Ω"<<endl;

    ///Calculo de Req em paralelo
    float RinParalel= circuito.CalcRinParalel();           
    cout<<"A Req em paralelo é: "<<RinParalel<<"Ω"<<endl;

    ///Calculo de i com Req em série
    circuito.i = circuito.CalcITotal(RinSeries);
    cout<<"A corrente i com resistências em série é: "<<circuito.i<<"A"<<endl;
    
    ///Calculo de i com Req em Paralelo
    circuito.i = circuito.CalcITotal(RinParalel);
    cout<<"A corrente i com resistências em Paralelo é: "<<circuito.i<<"A"<<endl;

    ///Calculo da potência com R em serie
    float power = circuito.PowerCalc(RinSeries);
    cout<<"A potência com resistências em séire é: "<<power<<"W"<<endl;

    ///Calculo da potência com R em paralelo
    power = circuito.PowerCalc(RinParalel);
    cout<<"A potência com resistências em paralelo é: "<<power<<"W"<<endl;

}
