#include <stdio.h>

int main(void){
    char NombreE1[50],NombreE2[50],NombreE3[50];

    int DiasTrabajadosE1,DiasTrabajadosE2,DiasTrabajadosE3;

    float HorasTrabajadasE1,HorasTrabajadasE2,HorasTrabajadasE3,TarifaHoraE1,TarifaHoraE2,TarifaHoraE3,BonoFijoE1,BonoFijoE2,BonoFijoE3,
    ValesComidaE1,ValesComidaE2,ValesComidaE3,DescuentoPorcentajeE1,DescuentoPorcentajeE2,DescuentoPorcentajeE3,AportacionPatronalPorcentajeE1,AportacionPatronalPorcentajeE2,AportacionPatronalPorcentajeE3;

    float sueldoBaseE1,sueldoBaseE2,sueldoBaseE3,valesTotalesE1,valesTotalesE2,valesTotalesE3,ingresoBrutoE1,ingresoBrutoE2,ingresoBrutoE3,
    descuentosE1,descuentosE2,descuentosE3,ingresoNetoE1,ingresoNetoE2,ingresoNetoE3,aportacionPatronalE1,aportacionPatronalE2,aportacionPatronalE3,costoEmpresaE1,costoEmpresaE2,costoEmpresaE3;

    float TotalSueldosBase,TotalIngresosBruto,TotalDescuentos,TotalIngresosNetos,TotalAportacionesPatronales,CostoTotalEmpresa,
    PromedioIngresoNeto,PromedioHorasTrabajadas;


    /* ===== Empleado 1 ===== */
printf("Ingrese el nombre del empleado 1: ");
scanf(" %49[^\n]", NombreE1);
printf("Procesado Nombre\n");

printf("Ingrese las horas trabajadas por el empleado 1: ");
scanf(" %f", &HorasTrabajadasE1);
printf("Procesado HorasTrabajadas\n");

printf("Ingrese la tarifa por hora para el empleado 1: ");
scanf(" %f", &TarifaHoraE1);
printf("Procesado TarifaHora\n");

printf("Ingrese el Bono Fijo para el empleado 1: ");
scanf(" %f", &BonoFijoE1);
printf("Procesado BonoFijo\n");

printf("Ingrese los vales de comida por dia para el empleado 1: ");
scanf(" %f", &ValesComidaE1);
printf("Procesado ValesComida\n");

printf("Ingrese los dias trabajados por el empleado 1: ");
scanf(" %d", &DiasTrabajadosE1);
printf("Procesado DiasTrabajados\n");

printf("Ingrese el porcentaje de descuento para el empleado 1: ");
scanf(" %f", &DescuentoPorcentajeE1);
printf("Procesado Porcentaje de descuentos\n");

printf("Ingrese el porcentaje de aportacion patronal para el empleado 1: ");
scanf(" %f", &AportacionPatronalPorcentajeE1);
printf("Procesado porcentaje de aportacion patronal\n");

sueldoBaseE1 = HorasTrabajadasE1 * TarifaHoraE1;
valesTotalesE1 = ValesComidaE1 * DiasTrabajadosE1;
ingresoBrutoE1 = sueldoBaseE1 + BonoFijoE1 + valesTotalesE1;
descuentosE1 = ingresoBrutoE1 * (DescuentoPorcentajeE1 / 100.0f);
ingresoNetoE1 = ingresoBrutoE1 - descuentosE1;
aportacionPatronalE1 = sueldoBaseE1 * (AportacionPatronalPorcentajeE1 / 100.0f);
costoEmpresaE1 = ingresoBrutoE1 + aportacionPatronalE1;

printf("===== Resumen Empleado: %s\n", NombreE1);
printf("Horas trabajadas: %.2f\n", HorasTrabajadasE1);
printf("Tarifa por hora: %.2f\n", TarifaHoraE1);
printf("Sueldo base: %.2f\n", sueldoBaseE1);
printf("Bono fijo: %.2f\n", BonoFijoE1);
printf("Vales totales: %.2f\n", valesTotalesE1);
printf("Ingreso bruto: %.2f\n", ingresoBrutoE1);
printf("Descuentos: %.2f\n", descuentosE1);
printf("Ingreso neto: %.2f\n", ingresoNetoE1);
printf("Aportacion Patronal: %.2f\n", aportacionPatronalE1);
printf("Costo total empresa: %.2f\n", costoEmpresaE1);

/* ===== Empleado 2 ===== */
printf("Ingrese el nombre del empleado 2: ");
scanf(" %49[^\n]", NombreE2);
printf("Procesado Nombre\n");

printf("Ingrese las horas trabajadas por el empleado 2: ");
scanf(" %f", &HorasTrabajadasE2);
printf("Procesado HorasTrabajadas\n");

printf("Ingrese la tarifa por hora para el empleado 2: ");
scanf(" %f", &TarifaHoraE2);
printf("Procesado TarifaHora\n");

printf("Ingrese el Bono Fijo para el empleado 2: ");
scanf(" %f", &BonoFijoE2);
printf("Procesado BonoFijo\n");

printf("Ingrese los vales de comida por dia para el empleado 2: ");
scanf(" %f", &ValesComidaE2);
printf("Procesado ValesComida\n");

printf("Ingrese los dias trabajados por el empleado 2: ");
scanf(" %d", &DiasTrabajadosE2);
printf("Procesado DiasTrabajados\n");

printf("Ingrese el porcentaje de descuento para el empleado 2: ");
scanf(" %f", &DescuentoPorcentajeE2);
printf("Procesado Porcentaje de descuentos\n");

printf("Ingrese el porcentaje de aportacion patronal para el empleado 2: ");
scanf(" %f", &AportacionPatronalPorcentajeE2);
printf("Procesado porcentaje de aportacion patronal\n");

sueldoBaseE2 = HorasTrabajadasE2 * TarifaHoraE2;
valesTotalesE2 = ValesComidaE2 * DiasTrabajadosE2;
ingresoBrutoE2 = sueldoBaseE2 + BonoFijoE2 + valesTotalesE2;
descuentosE2 = ingresoBrutoE2 * (DescuentoPorcentajeE2 / 100.0f);
ingresoNetoE2 = ingresoBrutoE2 - descuentosE2;
aportacionPatronalE2 = sueldoBaseE2 * (AportacionPatronalPorcentajeE2 / 100.0f);
costoEmpresaE2 = ingresoBrutoE2 + aportacionPatronalE2;

printf("===== Resumen Empleado: %s\n", NombreE2);
printf("Horas trabajadas: %.2f\n", HorasTrabajadasE2);
printf("Tarifa por hora: %.2f\n", TarifaHoraE2);
printf("Sueldo base: %.2f\n", sueldoBaseE2);
printf("Bono fijo: %.2f\n", BonoFijoE2);
printf("Vales totales: %.2f\n", valesTotalesE2);
printf("Ingreso bruto: %.2f\n", ingresoBrutoE2);
printf("Descuentos: %.2f\n", descuentosE2);
printf("Ingreso neto: %.2f\n", ingresoNetoE2);
printf("Aportacion Patronal: %.2f\n", aportacionPatronalE2);
printf("Costo total empresa: %.2f\n", costoEmpresaE2);

/* ===== Empleado 3 ===== */
printf("Ingrese el nombre del empleado 3: ");
scanf(" %49[^\n]", NombreE3);
printf("Procesado Nombre\n");

printf("Ingrese las horas trabajadas por el empleado 3: ");
scanf(" %f", &HorasTrabajadasE3);
printf("Procesado HorasTrabajadas\n");

printf("Ingrese la tarifa por hora para el empleado 3: ");
scanf(" %f", &TarifaHoraE3);
printf("Procesado TarifaHora\n");

printf("Ingrese el Bono Fijo para el empleado 3: ");
scanf(" %f", &BonoFijoE3);
printf("Procesado BonoFijo\n");

printf("Ingrese los vales de comida por dia para el empleado 3: ");
scanf(" %f", &ValesComidaE3);
printf("Procesado ValesComida\n");

printf("Ingrese los dias trabajados por el empleado 3: ");
scanf(" %d", &DiasTrabajadosE3);
printf("Procesado DiasTrabajados\n");

printf("Ingrese el porcentaje de descuento para el empleado 3: ");
scanf(" %f", &DescuentoPorcentajeE3);
printf("Procesado Porcentaje de descuentos\n");

printf("Ingrese el porcentaje de aportacion patronal para el empleado 3: ");
scanf(" %f", &AportacionPatronalPorcentajeE3);
printf("Procesado porcentaje de aportacion patronal\n");

sueldoBaseE3 = HorasTrabajadasE3 * TarifaHoraE3;
valesTotalesE3 = ValesComidaE3 * DiasTrabajadosE3;
ingresoBrutoE3 = sueldoBaseE3 + BonoFijoE3 + valesTotalesE3;
descuentosE3 = ingresoBrutoE3 * (DescuentoPorcentajeE3 / 100.0f);
ingresoNetoE3 = ingresoBrutoE3 - descuentosE3;
aportacionPatronalE3 = sueldoBaseE3 * (AportacionPatronalPorcentajeE3 / 100.0f);
costoEmpresaE3 = ingresoBrutoE3 + aportacionPatronalE3;

printf("===== Resumen Empleado: %s\n", NombreE3);
printf("Horas trabajadas: %.2f\n", HorasTrabajadasE3);
printf("Tarifa por hora: %.2f\n", TarifaHoraE3);
printf("Sueldo base: %.2f\n", sueldoBaseE3);
printf("Bono fijo: %.2f\n", BonoFijoE3);
printf("Vales totales: %.2f\n", valesTotalesE3);
printf("Ingreso bruto: %.2f\n", ingresoBrutoE3);
printf("Descuentos: %.2f\n", descuentosE3);
printf("Ingreso neto: %.2f\n", ingresoNetoE3);
printf("Aportacion Patronal: %.2f\n", aportacionPatronalE3);
printf("Costo total empresa: %.2f\n", costoEmpresaE3);


TotalSueldosBase = sueldoBaseE1 + sueldoBaseE2 + sueldoBaseE3;
TotalIngresosBruto = ingresoBrutoE1 + ingresoBrutoE2 + ingresoBrutoE3;
TotalDescuentos = descuentosE1 + descuentosE2 + descuentosE3;
TotalIngresosNetos = ingresoNetoE1 + ingresoNetoE2 + ingresoNetoE3;
TotalAportacionesPatronales = aportacionPatronalE1 + aportacionPatronalE2 + aportacionPatronalE3;
CostoTotalEmpresa = costoEmpresaE1 + costoEmpresaE2 + costoEmpresaE3;
PromedioIngresoNeto = (TotalIngresosNetos)/3;
PromedioHorasTrabajadas = (HorasTrabajadasE1 + HorasTrabajadasE2 + HorasTrabajadasE3) / 3;

printf("========= RESUMEN GENERAL ========= \n");
printf("Total sueldos base: %.2f\n", TotalSueldosBase);
printf("Total ingresos bruto: %.2f\n", TotalIngresosBruto);
printf("Total descuentos: %.2f\n", TotalDescuentos);
printf("Total ingresos netos: %.2f\n", TotalIngresosNetos);
printf("Total aportaciones patronales: %.2f\n", TotalAportacionesPatronales);
printf("Costo Total empresa: %.2f\n", CostoTotalEmpresa);
printf("---------------------------------------- \n");
printf("Promedio ingreso neto: %.2f\n", PromedioIngresoNeto);
printf("Promedio horas trabajadas: %.2f\n", PromedioHorasTrabajadas);
printf("==============================");

}
