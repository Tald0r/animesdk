#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_CONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x6227050)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ConfigBase_TypeDefinitionIndex = 70775;

	class ConfigBase : public ::System::Object
	{
	public:
		::System::String* smId; // 0x10
		::System::String* name; // 0x18
		::System::String* guid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CONFIGBASE__CTOR_OFFSET))(this);
		}
	};
}
