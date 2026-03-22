#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9BF81AE22E7B99D1.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_A8B97606E71328D6;
class Class_3_DF51DE504C82D3C3;
class Class_6_A8BCD8ACC39B5611;

#define MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET UNITYSDK_OFFSET(0xA36ED60)
#define MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA36EFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowEventOptionsDialogContext_TypeDefinitionIndex = 42922;

	class UIHollowEventOptionsDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_A8B97606E71328D6* graph; // 0x28
		::Class_6_A8BCD8ACC39B5611* ChoiceNode; // 0x30
		::Class_3_DF51DE504C82D3C3* Config; // 0x38
		::Enum_3_9BF81AE22E7B99D1 showMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean ContainsChoice(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEVENTOPTIONSDIALOGCONTEXT_CONTAINSCHOICE_OFFSET))(this, index);
		}
	};
}
