/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019-2020 Alain Dargelas

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
 * File:   vpi_listener.cpp
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */
#include <uhdm/vpi_listener.h>

#include <string.h>

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include <uhdm/sv_vpi_user.h>
#include <uhdm/vhpi_user.h>

#include <uhdm/Serializer.h>
#include <uhdm/containers.h>
#include <uhdm/uhdm.h>
#include <uhdm/uhdm_types.h>
#include <uhdm/vpi_uhdm.h>


using namespace UHDM;

<VPI_LISTENERS>
void UHDM::listen_any(vpiHandle handle, VpiListener* listener, UHDM::VisitedContainer* visited) {
  unsigned int type = ((const uhdm_handle*)handle)->type;
  switch (type) {
<VPI_ANY_LISTENERS>
  default: break;
  }
}

void UHDM::listen_designs(const std::vector<vpiHandle>& designs, VpiListener* listener) {
  for (auto design_h : designs) {
    UHDM::VisitedContainer visited;
    listen_design(design_h, listener, &visited);
  }
}
