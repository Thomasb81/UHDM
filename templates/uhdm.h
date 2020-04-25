/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   uhdm.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#include <string>
#include <vector>
#ifndef UHDM_H
#define UHDM_H

// Missing defines from vpi_user.h, sv_vpi_user.h
#define vpiDesign 3000
#define vpiInterfaceTypespec 3001
#define vpiNets 3002
#define vpiSimpleExpr 3003
#define vpiParameters 3004
#define vpiSequenceExpr 3005

// These define where orinally aliased in sv_vpi_user.h
// Aliasing makes it hard to distinguish in automatic generated code, assigning unique values.
#define vpiVarBit    3006
#define vpiLogicVar  3007
#define vpiArrayVar  3008

#include "headers/uhdm_types.h"
#include "include/sv_vpi_user.h"
#include "include/vhpi_user.h"
#include "headers/vpi_uhdm.h"
#include "headers/containers.h"

<INCLUDE_FILES>

#include "headers/Serializer.h"

#endif
