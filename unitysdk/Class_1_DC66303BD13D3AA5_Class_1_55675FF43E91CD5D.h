#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace System { class Action; }

#define CLASS_1_DC66303BD13D3AA5_CLASS_1_55675FF43E91CD5D_METHOD_1_9A2F3AD35AB90E8E_OFFSET UNITYSDK_OFFSET(0x63C4530)
#define CLASS_1_DC66303BD13D3AA5_CLASS_1_55675FF43E91CD5D__CTOR_OFFSET UNITYSDK_OFFSET(0x63C4520)

inline static constexpr unsigned int Class_1_DC66303BD13D3AA5_Class_1_55675FF43E91CD5D_TypeDefinitionIndex = 67135;

class Class_1_DC66303BD13D3AA5_Class_1_55675FF43E91CD5D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_CLASS_1_55675FF43E91CD5D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A2F3AD35AB90E8E(::MoleMole::Config::ConfigEtherEyes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*))((::PBYTE)hIl2Cpp + CLASS_1_DC66303BD13D3AA5_CLASS_1_55675FF43E91CD5D_METHOD_1_9A2F3AD35AB90E8E_OFFSET))(this, a1);
	}
};
