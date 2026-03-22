#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2A0117F72708B5DF;
namespace System { class Action; }

#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x7D53570)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalEditPopWindowController_Context_TypeDefinitionIndex = 66353;

	class UIMedalEditPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* triggerWhenCloseAfterClickOK; // 0x28
		::Class_1_2A0117F72708B5DF* editableMedalData; // 0x30
		::System::Int32 currSelectedMedalID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
