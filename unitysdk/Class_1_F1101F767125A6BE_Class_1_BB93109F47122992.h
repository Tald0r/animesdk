#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace System { class Action; }

#define CLASS_1_F1101F767125A6BE_CLASS_1_BB93109F47122992_METHOD_1_DB960EA54F45F686_OFFSET UNITYSDK_OFFSET(0x8137E60)
#define CLASS_1_F1101F767125A6BE_CLASS_1_BB93109F47122992__CTOR_OFFSET UNITYSDK_OFFSET(0x8137E50)

inline static constexpr unsigned int Class_1_F1101F767125A6BE_Class_1_BB93109F47122992_TypeDefinitionIndex = 38702;

class Class_1_F1101F767125A6BE_Class_1_BB93109F47122992 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_CLASS_1_BB93109F47122992__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DB960EA54F45F686(::MoleMole::Config::ConfigUITriDiceOracle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*))((::PBYTE)hIl2Cpp + CLASS_1_F1101F767125A6BE_CLASS_1_BB93109F47122992_METHOD_1_DB960EA54F45F686_OFFSET))(this, a1);
	}
};
