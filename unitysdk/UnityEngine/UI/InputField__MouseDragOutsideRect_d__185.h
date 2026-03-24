#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class InputField; }

#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A9F9F00)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A9FA2A0)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A9FA300)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A9FA2B0)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9F9EF0)
#define UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9F9EE0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField__MouseDragOutsideRect_d__185_TypeDefinitionIndex = 8373;

	class InputField__MouseDragOutsideRect_d__185 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x20
		::UnityEngine::UI::InputField* __4__this; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD__MOUSEDRAGOUTSIDERECT_D__185_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
