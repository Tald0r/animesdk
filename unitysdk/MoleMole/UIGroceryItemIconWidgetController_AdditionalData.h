#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_133;
class Class_0_16E4307DCC419505_415;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIGROCERYITEMICONWIDGETCONTROLLER_ADDITIONALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD57CB80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryItemIconWidgetController_AdditionalData_TypeDefinitionIndex = 47879;

	class UIGroceryItemIconWidgetController_AdditionalData : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_133*>* AdditionalRefreshItemMethod; // 0x10
		::Class_0_16E4307DCC419505_415* IconStyle; // 0x18
		::System::Boolean IsShowRedSign; // 0x20
		::System::Boolean IsSetRefreshTimeToText; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYITEMICONWIDGETCONTROLLER_ADDITIONALDATA__CTOR_OFFSET))(this);
		}
	};
}
