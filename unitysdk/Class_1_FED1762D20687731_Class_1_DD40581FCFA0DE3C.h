#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayerUI; }
namespace System { class Action; }

#define CLASS_1_FED1762D20687731_CLASS_1_DD40581FCFA0DE3C_METHOD_1_4C9D1F86769AC2FA_OFFSET UNITYSDK_OFFSET(0xD08D0E0)
#define CLASS_1_FED1762D20687731_CLASS_1_DD40581FCFA0DE3C__CTOR_OFFSET UNITYSDK_OFFSET(0xD08D0D0)

inline static constexpr unsigned int Class_1_FED1762D20687731_Class_1_DD40581FCFA0DE3C_TypeDefinitionIndex = 42113;

class Class_1_FED1762D20687731_Class_1_DD40581FCFA0DE3C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FED1762D20687731_CLASS_1_DD40581FCFA0DE3C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4C9D1F86769AC2FA(::MoleMole::Config::ConfigMultiplayerUI* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayerUI*))((::PBYTE)hIl2Cpp + CLASS_1_FED1762D20687731_CLASS_1_DD40581FCFA0DE3C_METHOD_1_4C9D1F86769AC2FA_OFFSET))(this, a1);
	}
};
