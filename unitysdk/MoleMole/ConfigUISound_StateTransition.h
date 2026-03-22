#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define MOLEMOLE_CONFIGUISOUND_STATETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xF18B260)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_StateTransition_TypeDefinitionIndex = 69990;

	class ConfigUISound_StateTransition : public ::System::Object
	{
	public:
		::System::String* fromState; // 0x10
		::System::String* toState; // 0x18
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_STATETRANSITION__CTOR_OFFSET))(this);
		}
	};
}
