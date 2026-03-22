#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A8B97606E71328D6;

#define MOLEMOLE_UIHOLLOWEVENTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC072F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventWidgetContext_TypeDefinitionIndex = 71614;

	class UIHollowEventWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_A8B97606E71328D6* graph; // 0x28

		::System::Void _ctor(::Class_2_A8B97606E71328D6* graph)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A8B97606E71328D6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTWIDGETCONTEXT__CTOR_OFFSET))(this, graph);
		}
	};
}
