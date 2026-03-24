#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FilmGrainBehaviour_Struct_2_FFFE9480B3B5BA7A_1.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xB939520)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_31B5808817E29B14_OFFSET UNITYSDK_OFFSET(0xB9396A0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB93A4C0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0xB939B20)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xB93A4D0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xB93A4F0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xB93A4E0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB939A50)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB93A150)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xB93A290)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB93A4A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FilmGrainBehaviour_TypeDefinitionIndex = 60643;

	class FilmGrainBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FilmGrainBehaviour_Struct_2_FFFE9480B3B5BA7A_1 _methodParm; // 0x18
		::System::Boolean enabled; // 0x48
		::System::Boolean active_type; // 0x49
		::System::Boolean use_type; // 0x4A
		::UnityEngine::Rendering::Universal::FilmGrainLookup type; // 0x4C
		::System::Boolean active_intensity; // 0x50
		::System::Boolean use_intensity; // 0x51
		::System::Single intensity; // 0x54
		::System::Boolean active_response; // 0x58
		::System::Boolean use_response; // 0x59
		::System::Single response; // 0x5C
		::System::Boolean active_texture; // 0x60
		::System::Boolean use_texture; // 0x61
		::UnityEngine::Texture* texture; // 0x68
		::UnityEngine::Rendering::Universal::FilmGrain* _FilmGrain; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_6112A1276899AF0F_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::FilmGrain* Method_4_31B5808817E29B14(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::FilmGrain*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_31B5808817E29B14_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
