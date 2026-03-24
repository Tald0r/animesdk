#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB290140)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB290510)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB290570)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB290520)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB290130)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44__CTOR_OFFSET UNITYSDK_OFFSET(0xB290120)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController__ReverseNode_d__44_TypeDefinitionIndex = 60146;

	class UIDataFixNodeWidgetController__ReverseNode_d__44 : public ::System::Object
	{
	public:
		::MoleMole::UIDataFixNodeWidgetController* __4__this; // 0x10
		::UnityEngine::AnimationCurve* __rotateCurve_5__6; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single _time_5__3; // 0x24
		::System::Single _totalTime_5__7; // 0x28
		::System::Single _needRotation_5__2; // 0x2C
		::System::Single __rotateTime_5__5; // 0x30
		::System::Single _prevRate_5__4; // 0x34
		::System::Single __2__current; // 0x38

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER__REVERSENODE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
