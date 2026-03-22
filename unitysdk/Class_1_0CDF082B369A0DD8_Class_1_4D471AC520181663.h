#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierBatchLoad; }
namespace System { class Action; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_4D471AC520181663_METHOD_1_F61A9CEA34AA2E79_OFFSET UNITYSDK_OFFSET(0x68794D0)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_4D471AC520181663__CTOR_OFFSET UNITYSDK_OFFSET(0x68794C0)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_4D471AC520181663_TypeDefinitionIndex = 55196;

class Class_1_0CDF082B369A0DD8_Class_1_4D471AC520181663 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_4D471AC520181663__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F61A9CEA34AA2E79(::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_4D471AC520181663_METHOD_1_F61A9CEA34AA2E79_OFFSET))(this, a1);
	}
};
