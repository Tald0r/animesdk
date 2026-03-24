#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CampTypeConfig; }
namespace System { class Action; }

#define CLASS_1_2C215BDE991B1B92_CLASS_1_67DF0A245F4ABBEC_METHOD_1_A1954102CB3B169B_OFFSET UNITYSDK_OFFSET(0x66F8590)
#define CLASS_1_2C215BDE991B1B92_CLASS_1_67DF0A245F4ABBEC__CTOR_OFFSET UNITYSDK_OFFSET(0x66F8580)

inline static constexpr unsigned int Class_1_2C215BDE991B1B92_Class_1_67DF0A245F4ABBEC_TypeDefinitionIndex = 65660;

class Class_1_2C215BDE991B1B92_Class_1_67DF0A245F4ABBEC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C215BDE991B1B92_CLASS_1_67DF0A245F4ABBEC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A1954102CB3B169B(::MoleMole::Config::CampTypeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampTypeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2C215BDE991B1B92_CLASS_1_67DF0A245F4ABBEC_METHOD_1_A1954102CB3B169B_OFFSET))(this, a1);
	}
};
