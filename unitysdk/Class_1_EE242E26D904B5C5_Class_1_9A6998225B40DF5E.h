#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCityHollowMap; }
namespace System { class Action; }

#define CLASS_1_EE242E26D904B5C5_CLASS_1_9A6998225B40DF5E_METHOD_1_D934F836F08C92F6_OFFSET UNITYSDK_OFFSET(0x90AFA60)
#define CLASS_1_EE242E26D904B5C5_CLASS_1_9A6998225B40DF5E__CTOR_OFFSET UNITYSDK_OFFSET(0x90AFA50)

inline static constexpr unsigned int Class_1_EE242E26D904B5C5_Class_1_9A6998225B40DF5E_TypeDefinitionIndex = 54294;

class Class_1_EE242E26D904B5C5_Class_1_9A6998225B40DF5E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE242E26D904B5C5_CLASS_1_9A6998225B40DF5E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D934F836F08C92F6(::MoleMole::Config::ConfigCityHollowMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCityHollowMap*))((::PBYTE)hIl2Cpp + CLASS_1_EE242E26D904B5C5_CLASS_1_9A6998225B40DF5E_METHOD_1_D934F836F08C92F6_OFFSET))(this, a1);
	}
};
