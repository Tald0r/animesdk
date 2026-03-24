#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/SplitToningBehaviour_Struct_2_2DFEB74E3D4B48CA.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xA554190)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xA555110)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xA555130)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_9D2640C77F24BA37_OFFSET UNITYSDK_OFFSET(0xA554320)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_AE828D899505A3B4_OFFSET UNITYSDK_OFFSET(0xA554790)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xA555120)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xA555100)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xA5546D0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xA554CB0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xA554DF0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xA5550E0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SplitToningBehaviour_TypeDefinitionIndex = 38129;

	class SplitToningBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::SplitToningBehaviour_Struct_2_2DFEB74E3D4B48CA _methodParm; // 0x18
		::System::Boolean enabled; // 0x4C
		::System::Boolean active_shadows; // 0x4D
		::System::Boolean use_shadows; // 0x4E
		::UnityEngine::Color shadows; // 0x50
		::System::Boolean active_highlights; // 0x60
		::System::Boolean use_highlights; // 0x61
		::UnityEngine::Color highlights; // 0x64
		::System::Boolean active_balance; // 0x74
		::System::Boolean use_balance; // 0x75
		::System::Single balance; // 0x78
		::UnityEngine::Rendering::Universal::SplitToning* _SplitToning; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::SplitToning* Method_4_9D2640C77F24BA37(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::SplitToning*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_9D2640C77F24BA37_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_AE828D899505A3B4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_METHOD_4_AE828D899505A3B4_OFFSET))(this);
		}
	};
}
