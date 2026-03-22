#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceEffects; }
namespace System { class Action; }

#define CLASS_1_5893027ACC0762C1_CLASS_1_8EAF63B515BD6959_METHOD_1_48E99D6F9435DBF6_OFFSET UNITYSDK_OFFSET(0x7136000)
#define CLASS_1_5893027ACC0762C1_CLASS_1_8EAF63B515BD6959__CTOR_OFFSET UNITYSDK_OFFSET(0x7135FF0)

inline static constexpr unsigned int Class_1_5893027ACC0762C1_Class_1_8EAF63B515BD6959_TypeDefinitionIndex = 70761;

class Class_1_5893027ACC0762C1_Class_1_8EAF63B515BD6959 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_CLASS_1_8EAF63B515BD6959__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_48E99D6F9435DBF6(::MoleMole::Config::ConfigGachaPerformanceEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5893027ACC0762C1_CLASS_1_8EAF63B515BD6959_METHOD_1_48E99D6F9435DBF6_OFFSET))(this, a1);
	}
};
