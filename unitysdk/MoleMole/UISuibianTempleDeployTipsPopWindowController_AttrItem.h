#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F938359207CCDBD.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYTIPSPOPWINDOWCONTROLLER_ATTRITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAC41ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDeployTipsPopWindowController_AttrItem_TypeDefinitionIndex = 44056;

	class UISuibianTempleDeployTipsPopWindowController_AttrItem : public ::System::Object
	{
	public:
		::Enum_3_5F938359207CCDBD Ability; // 0x10
		::System::Boolean TriggerCritical; // 0x14
		::System::Int32 CurValue; // 0x18
		::System::Int32 PrvValue; // 0x1C
		::System::Int32 MaxValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYTIPSPOPWINDOWCONTROLLER_ATTRITEM__CTOR_OFFSET))(this);
		}
	};
}
