#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ColorLookupBehaviour_Struct_2_DA0255BED8A7AC13_1.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x6B224D0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x6B23110)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x6B22A70)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x6B230E0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x6B23100)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x6B230F0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_CB4B5714D4DD6688_OFFSET UNITYSDK_OFFSET(0x6B22610)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x6B229C0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x6B22E50)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x6B22F80)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B230C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorLookupBehaviour_TypeDefinitionIndex = 73032;

	class ColorLookupBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ColorLookupBehaviour_Struct_2_DA0255BED8A7AC13_1 _methodParm; // 0x18
		::System::Boolean enabled; // 0x38
		::System::Boolean active_texture; // 0x39
		::System::Boolean use_texture; // 0x3A
		::UnityEngine::Texture* texture; // 0x40
		::System::Boolean active_contribution; // 0x48
		::System::Boolean use_contribution; // 0x49
		::System::Single contribution; // 0x4C
		::UnityEngine::Rendering::Universal::ColorLookup* _ColorLookup; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::ColorLookup* Method_4_CB4B5714D4DD6688(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ColorLookup*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_CB4B5714D4DD6688_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}
	};
}
