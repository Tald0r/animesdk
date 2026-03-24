#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_2_208CC9941471731A_776;
namespace System { class Action; }

#define MOLEMOLE_UICHALLENGEPOP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xD0F60C0)
#define MOLEMOLE_UICHALLENGEPOP_ONPROCESS_OFFSET UNITYSDK_OFFSET(0xD0F6120)
#define MOLEMOLE_UICHALLENGEPOP__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F60D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChallengePop_TypeDefinitionIndex = 42563;

	class UIChallengePop : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_2_208CC9941471731A_776* template_; // 0x28
		::System::Action* callback; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_776* template_, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_776*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP__CTOR_OFFSET))(this, template_, callback);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHALLENGEPOP_ONPROCESS_OFFSET))(this);
		}
	};
}
