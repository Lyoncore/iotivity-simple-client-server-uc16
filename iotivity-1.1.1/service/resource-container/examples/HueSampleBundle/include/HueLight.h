//******************************************************************
//
// Copyright 2015 Samsung Electronics All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#ifndef HUELIGHT_H_
#define HUELIGHT_H_

#include "ProtocolBridgeResource.h"
#include "HueConnector.h"

using namespace OIC::Service;

namespace OIC
{
    namespace Service
    {
        class HueLight: public ProtocolBridgeResource
        {

            public:
                HueLight();
                HueLight(HueConnector *connector, std::string address);
                virtual ~HueLight();

                virtual void initAttributes();

                virtual void handleSetAttributesRequest(const RCSResourceAttributes &attrs);

                virtual RCSResourceAttributes handleGetAttributesRequest();


            private:
                std::string m_address;
                HueConnector *m_connector;
        };
    }
}

#endif /* HUEGATEWAYCLIENT_H_ */
