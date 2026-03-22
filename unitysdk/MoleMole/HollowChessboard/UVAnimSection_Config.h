#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xE10F190)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int UVAnimSection_Config_TypeDefinitionIndex = 76569;

	class UVAnimSection_Config : public ::System::Object
	{
	public:
		::System::String* uvAnimKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_UVANIMSECTION_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
