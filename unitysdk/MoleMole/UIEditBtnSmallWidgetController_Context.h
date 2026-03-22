#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F3C7D4EFC74D485_Enum_3_029408495C2E6B49.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA355230)

namespace MoleMole
{
	inline static constexpr unsigned int UIEditBtnSmallWidgetController_Context_TypeDefinitionIndex = 65451;

	class UIEditBtnSmallWidgetController_Context : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::System::Action* OnClick; // 0x18
		::Class_2_2F3C7D4EFC74D485_Enum_3_029408495C2E6B49 RedDotType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEDITBTNSMALLWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
