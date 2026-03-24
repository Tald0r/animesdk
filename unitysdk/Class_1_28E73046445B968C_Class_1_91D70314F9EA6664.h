#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace System { class Action; }

#define CLASS_1_28E73046445B968C_CLASS_1_91D70314F9EA6664_METHOD_1_72DCF94F5CC08447_OFFSET UNITYSDK_OFFSET(0x9302160)
#define CLASS_1_28E73046445B968C_CLASS_1_91D70314F9EA6664__CTOR_OFFSET UNITYSDK_OFFSET(0x9302150)

inline static constexpr unsigned int Class_1_28E73046445B968C_Class_1_91D70314F9EA6664_TypeDefinitionIndex = 39421;

class Class_1_28E73046445B968C_Class_1_91D70314F9EA6664 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_28E73046445B968C_CLASS_1_91D70314F9EA6664__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_72DCF94F5CC08447(::MoleMole::Config::ConfigGachaPerformanceLights* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*))((::PBYTE)hIl2Cpp + CLASS_1_28E73046445B968C_CLASS_1_91D70314F9EA6664_METHOD_1_72DCF94F5CC08447_OFFSET))(this, a1);
	}
};
