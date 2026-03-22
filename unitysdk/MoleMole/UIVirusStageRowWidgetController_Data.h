#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_97;

#define MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A327B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusStageRowWidgetController_Data_TypeDefinitionIndex = 45432;

	class UIVirusStageRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_97* hollowEntranceTemplate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSTAGEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
