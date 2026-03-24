#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace System { class Action; }

#define CLASS_1_BEC6CF45E604A1D1_CLASS_1_50A954317672BCE4_METHOD_1_625DB072FABC6A62_OFFSET UNITYSDK_OFFSET(0x83E4F40)
#define CLASS_1_BEC6CF45E604A1D1_CLASS_1_50A954317672BCE4__CTOR_OFFSET UNITYSDK_OFFSET(0x83E4F30)

inline static constexpr unsigned int Class_1_BEC6CF45E604A1D1_Class_1_50A954317672BCE4_TypeDefinitionIndex = 56732;

class Class_1_BEC6CF45E604A1D1_Class_1_50A954317672BCE4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_CLASS_1_50A954317672BCE4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_625DB072FABC6A62(::MoleMole::Config::ConfigLinkZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_CLASS_1_50A954317672BCE4_METHOD_1_625DB072FABC6A62_OFFSET))(this, a1);
	}
};
