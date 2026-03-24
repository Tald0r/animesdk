#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/EntityPlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x8B8DBF0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8B8D890)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_885FFDF82166B31E_OFFSET UNITYSDK_OFFSET(0x8B8D6B0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_C5373F1C0C4425FC_OFFSET UNITYSDK_OFFSET(0x8B8D9A0)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8B8DC60)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8B8DC00)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x8B8D930)
#define MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x8B8DBE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int WwiseSwitchBehaviour_TypeDefinitionIndex = 77422;

	class WwiseSwitchBehaviour : public ::MoleMole::Timeline::EntityPlayableBehaviour
	{
	public:
		::System::String* groupName; // 0x28
		::System::String* switchName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_885FFDF82166B31E(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_885FFDF82166B31E_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void Method_3_C5373F1C0C4425FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_C5373F1C0C4425FC_OFFSET))(this);
		}

		::System::Void Method_3_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_WWISESWITCHBEHAVIOUR_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
