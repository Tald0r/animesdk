#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/WhiteBalanceBehaviour_Struct_2_E658502528B7C034_6.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class WhiteBalance; }

#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xD1AE140)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xD1AEDA0)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0xD1AE6E0)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xD1AED90)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xD1AED80)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xD1AED70)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_C7F9A4E0E67F6797_OFFSET UNITYSDK_OFFSET(0xD1AE280)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD1AE630)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xD1AEAC0)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xD1AEBF0)
#define MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD1AED60)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WhiteBalanceBehaviour_TypeDefinitionIndex = 77837;

	class WhiteBalanceBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::WhiteBalanceBehaviour_Struct_2_E658502528B7C034_6 _methodParm; // 0x18
		::System::Boolean enabled; // 0x2C
		::System::Boolean active_temperature; // 0x2D
		::System::Boolean use_temperature; // 0x2E
		::System::Single temperature; // 0x30
		::System::Boolean active_tint; // 0x34
		::System::Boolean use_tint; // 0x35
		::System::Single tint; // 0x38
		::UnityEngine::Rendering::Universal::WhiteBalance* _WhiteBalance; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::WhiteBalance* Method_4_C7F9A4E0E67F6797(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::WhiteBalance*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_C7F9A4E0E67F6797_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WHITEBALANCEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
