#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::Extension { class UIImgText; }

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD613FB0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD614030)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD614090)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD614040)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD613FA0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36__CTOR_OFFSET UNITYSDK_OFFSET(0xD613F90)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgText__WaitForRebuildOver_d__36_TypeDefinitionIndex = 47259;

	class UIImgText__WaitForRebuildOver_d__36 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Extension::UIImgText* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__WAITFORREBUILDOVER_D__36_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
