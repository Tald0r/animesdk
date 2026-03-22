#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIExpProgressWidgetWidgetController___c__DisplayClass33_0; }
namespace System { class Action; }

#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF7F610)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF7FAF0)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF7FB50)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBF7FB00)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF7F600)
#define MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D__CTOR_OFFSET UNITYSDK_OFFSET(0xBF7F5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpProgressWidgetWidgetController___c__DisplayClass33_0___StartExpProgress_g____Fill_Exp_0_d_TypeDefinitionIndex = 42443;

	class UIExpProgressWidgetWidgetController___c__DisplayClass33_0___StartExpProgress_g____Fill_Exp_0_d : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::UIExpProgressWidgetWidgetController___c__DisplayClass33_0* __4__this; // 0x18
		::System::Action* _fillDone; // 0x20
		::System::Single _lastTimeProg_5__3; // 0x28
		::System::Single _curTargetDuration_5__2; // 0x2C
		::System::Int32 __1__state; // 0x30
		::System::Int32 targetExpCount; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPPROGRESSWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS33_0___STARTEXPPROGRESS_G____FILL_EXP_0_D_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
