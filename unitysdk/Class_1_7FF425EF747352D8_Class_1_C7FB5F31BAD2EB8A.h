#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBulletTracingData; }
namespace System { class Action; }

#define CLASS_1_7FF425EF747352D8_CLASS_1_C7FB5F31BAD2EB8A_METHOD_1_60172ADB4C82A03A_OFFSET UNITYSDK_OFFSET(0x73B0940)
#define CLASS_1_7FF425EF747352D8_CLASS_1_C7FB5F31BAD2EB8A__CTOR_OFFSET UNITYSDK_OFFSET(0x73B0930)

inline static constexpr unsigned int Class_1_7FF425EF747352D8_Class_1_C7FB5F31BAD2EB8A_TypeDefinitionIndex = 41898;

class Class_1_7FF425EF747352D8_Class_1_C7FB5F31BAD2EB8A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_C7FB5F31BAD2EB8A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60172ADB4C82A03A(::MoleMole::ConfigBulletTracingData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBulletTracingData*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_C7FB5F31BAD2EB8A_METHOD_1_60172ADB4C82A03A_OFFSET))(this, a1);
	}
};
