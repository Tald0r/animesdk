#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelMainPageController; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6C9F6F0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6C9FBA0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x6C9FC00)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x6C9FBB0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6C9F6E0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297__CTOR_OFFSET UNITYSDK_OFFSET(0x6C9F6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMainPageController__LatePlayItemAnim_d__297_TypeDefinitionIndex = 39634;

	class UIInLevelMainPageController__LatePlayItemAnim_d__297 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* go; // 0x10
		::System::String* animName; // 0x18
		::MoleMole::UIInLevelMainPageController* __4__this; // 0x20
		::UnityEngine::Animation* _anim_5__2; // 0x28
		::System::Single delay; // 0x30
		::System::Single __2__current; // 0x34
		::System::Int32 __1__state; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__LATEPLAYITEMANIM_D__297_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
