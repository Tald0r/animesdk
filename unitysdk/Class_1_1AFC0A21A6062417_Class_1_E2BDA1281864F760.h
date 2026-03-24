#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessoryEffect; }
namespace System { class Action; }

#define CLASS_1_1AFC0A21A6062417_CLASS_1_E2BDA1281864F760_METHOD_1_5B2BD0BDAD1244B0_OFFSET UNITYSDK_OFFSET(0x9C497C0)
#define CLASS_1_1AFC0A21A6062417_CLASS_1_E2BDA1281864F760__CTOR_OFFSET UNITYSDK_OFFSET(0x9C497B0)

inline static constexpr unsigned int Class_1_1AFC0A21A6062417_Class_1_E2BDA1281864F760_TypeDefinitionIndex = 48068;

class Class_1_1AFC0A21A6062417_Class_1_E2BDA1281864F760 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_CLASS_1_E2BDA1281864F760__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B2BD0BDAD1244B0(::MoleMole::Config::ConfigPlayerAccessoryEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayerAccessoryEffect*))((::PBYTE)hIl2Cpp + CLASS_1_1AFC0A21A6062417_CLASS_1_E2BDA1281864F760_METHOD_1_5B2BD0BDAD1244B0_OFFSET))(this, a1);
	}
};
