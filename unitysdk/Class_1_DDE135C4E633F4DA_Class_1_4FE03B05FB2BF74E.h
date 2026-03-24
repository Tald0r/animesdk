#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHackerDrone; }
namespace System { class Action; }

#define CLASS_1_DDE135C4E633F4DA_CLASS_1_4FE03B05FB2BF74E_METHOD_1_11E0D4763690329C_OFFSET UNITYSDK_OFFSET(0x7C039D0)
#define CLASS_1_DDE135C4E633F4DA_CLASS_1_4FE03B05FB2BF74E__CTOR_OFFSET UNITYSDK_OFFSET(0x7C039C0)

inline static constexpr unsigned int Class_1_DDE135C4E633F4DA_Class_1_4FE03B05FB2BF74E_TypeDefinitionIndex = 55443;

class Class_1_DDE135C4E633F4DA_Class_1_4FE03B05FB2BF74E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_CLASS_1_4FE03B05FB2BF74E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_11E0D4763690329C(::MoleMole::Config::ConfigHackerDrone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHackerDrone*))((::PBYTE)hIl2Cpp + CLASS_1_DDE135C4E633F4DA_CLASS_1_4FE03B05FB2BF74E_METHOD_1_11E0D4763690329C_OFFSET))(this, a1);
	}
};
