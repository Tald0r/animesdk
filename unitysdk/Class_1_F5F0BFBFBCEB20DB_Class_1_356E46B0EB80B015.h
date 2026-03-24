#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIPortrait; }
namespace System { class Action; }

#define CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_356E46B0EB80B015_METHOD_1_3CC1C401EE32EF37_OFFSET UNITYSDK_OFFSET(0x10BA97E0)
#define CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_356E46B0EB80B015__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA97D0)

inline static constexpr unsigned int Class_1_F5F0BFBFBCEB20DB_Class_1_356E46B0EB80B015_TypeDefinitionIndex = 59834;

class Class_1_F5F0BFBFBCEB20DB_Class_1_356E46B0EB80B015 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_356E46B0EB80B015__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3CC1C401EE32EF37(::MoleMole::Config::ConfigUIPortrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIPortrait*))((::PBYTE)hIl2Cpp + CLASS_1_F5F0BFBFBCEB20DB_CLASS_1_356E46B0EB80B015_METHOD_1_3CC1C401EE32EF37_OFFSET))(this, a1);
	}
};
