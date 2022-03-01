//
// Created by Mentalselfthink on 23/2/2022.
//

#include <iomanip>
#include <iostream>
#include "tabular.h"

using namespace std;

vector<int> encontrar_tams_cols(const vector<string> & encabezados, const vector<vector<string>> & filas){
    vector<int> tams_columnas;
    int nuevo_tam{};

    for (const auto & enc : encabezados){
        nuevo_tam = enc.size();
        tams_columnas.push_back(nuevo_tam);
    }

    for (const auto & fila : filas){
        for (int i_col{}; i_col < fila.size(); ++i_col){
            if (fila.at(i_col).size() > tams_columnas.at(i_col))
                tams_columnas.at(i_col) = fila.at(i_col).size();
        }
    }

    return tams_columnas;
}

string formatear_encabezados(const vector<string> & encabezados, const vector<int> & tams_cols){
    string encabezados_completos;
    int tam_espacio{};

    for (int i_col{}; i_col < encabezados.size(); ++i_col){
        tam_espacio = tams_cols.at(i_col) - encabezados.at(i_col).size() + 3;
        string espacio(tam_espacio, ' ');
        encabezados_completos += espacio + encabezados.at(i_col) + ' ';
    }
    encabezados_completos += '\n';
    for (int i_col{}; i_col < encabezados.size(); ++i_col){
        tam_espacio = tams_cols.at(i_col) + 2;
        string barra(tam_espacio, '-');
        encabezados_completos += "  " + barra;
    }
    encabezados_completos += '\n';

    return encabezados_completos;
}

string formatear_filas(const vector<vector<string>> & filas, const vector<int> & tams_cols){
    string filas_completas;
    int tam_espacio{};

    for (auto fila: filas){
        for (int i_col{}; i_col < fila.size(); ++i_col){
            tam_espacio = tams_cols.at(i_col) - fila.at(i_col).size() + 3;
            string espacio(tam_espacio, ' ');
            filas_completas += espacio + fila.at(i_col) + ' ';
        }
        filas_completas += '\n';
    }
    filas_completas += '\n';

    return filas_completas;
}


string tabular_datos(const vector<string> & encabezados, const vector<vector<string>> & filas){
    vector<int> tams_cols = encontrar_tams_cols(encabezados, filas);
    string encabezados_formados = formatear_encabezados(encabezados, tams_cols);
    string cuerpo = formatear_filas(filas, tams_cols);
    string tabla_formada = encabezados_formados + cuerpo;

    return tabla_formada;
}