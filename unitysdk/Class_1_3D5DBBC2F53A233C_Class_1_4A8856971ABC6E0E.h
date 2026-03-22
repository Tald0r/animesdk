#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace System { class Action; }

#define CLASS_1_3D5DBBC2F53A233C_CLASS_1_4A8856971ABC6E0E_METHOD_1_7B08DA8EE49D2C3F_OFFSET UNITYSDK_OFFSET(0x84635E0)
#define CLASS_1_3D5DBBC2F53A233C_CLASS_1_4A8856971ABC6E0E__CTOR_OFFSET UNITYSDK_OFFSET(0x84635D0)

inline static constexpr unsigned int Class_1_3D5DBBC2F53A233C_Class_1_4A8856971ABC6E0E_TypeDefinitionIndex = 76485;

class Class_1_3D5DBBC2F53A233C_Class_1_4A8856971ABC6E0E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D5DBBC2F53A233C_CLASS_1_4A8856971ABC6E0E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7B08DA8EE49D2C3F(::MoleMole::Config::ConfigUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*))((::PBYTE)hIl2Cpp + CLASS_1_3D5DBBC2F53A233C_CLASS_1_4A8856971ABC6E0E_METHOD_1_7B08DA8EE49D2C3F_OFFSET))(this, a1);
	}
};
