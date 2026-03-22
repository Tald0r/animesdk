#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PartialBlurBehaviour_Struct_2_AA4EE15A8D4DB005_5.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xBD629D0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_290F00BC692CC660_OFFSET UNITYSDK_OFFSET(0xBD62B50)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xBD63B10)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0xBD62FD0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xBD63AE0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xBD63B00)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xBD63AF0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xBD62F00)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xBD63740)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xBD63880)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xBD63AC0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PartialBlurBehaviour_TypeDefinitionIndex = 78911;

	class PartialBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::PartialBlurBehaviour_Struct_2_AA4EE15A8D4DB005_5 _methodParm; // 0x18
		::System::Boolean enabled; // 0x3C
		::System::Boolean active_downScaleFactor; // 0x3D
		::System::Boolean use_downScaleFactor; // 0x3E
		::System::Int32 downScaleFactor; // 0x40
		::System::Boolean active_radius; // 0x44
		::System::Boolean use_radius; // 0x45
		::System::Single radius; // 0x48
		::System::Boolean active_sampleCount; // 0x4C
		::System::Boolean use_sampleCount; // 0x4D
		::System::Int32 sampleCount; // 0x50
		::System::Boolean active_standardDeviation; // 0x54
		::System::Boolean use_standardDeviation; // 0x55
		::System::Single standardDeviation; // 0x58
		::UnityEngine::Rendering::Universal::PartialBlur* _PartialBlur; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::PartialBlur* Method_4_290F00BC692CC660(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::PartialBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_290F00BC692CC660_OFFSET))(this, a1);
		}

		::System::Void Method_4_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
