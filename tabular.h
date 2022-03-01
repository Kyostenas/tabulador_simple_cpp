//
// Created by Mentalselfthink on 23/2/2022.
//

#ifndef TABLAS_TABULAR_H
#define TABLAS_TABULAR_H

#include <string>
#include <vector>

using namespace std;

vector<int> encontrar_tams_cols(const vector<string> & encabezados, const vector<vector<string>> & filas);
string formatear_encabezados(const vector<string> & encabezados, const vector<int> & tams_cols);
string formatear_filas(const vector<vector<string>> & filas, const vector<int> & tams_cols);
string tabular_datos(const vector<string> & encabezados, const vector<vector<string>> & filas);

#endif //TABLAS_TABULAR_H
