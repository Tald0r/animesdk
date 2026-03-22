#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigExQTE; }
namespace System { class Action; }

#define CLASS_1_5984748FA9A4C212_CLASS_1_5556FC70C9D955D1_METHOD_1_78732EFAC4B09A91_OFFSET UNITYSDK_OFFSET(0x7AAF9E0)
#define CLASS_1_5984748FA9A4C212_CLASS_1_5556FC70C9D955D1__CTOR_OFFSET UNITYSDK_OFFSET(0x7AAF9D0)

inline static constexpr unsigned int Class_1_5984748FA9A4C212_Class_1_5556FC70C9D955D1_TypeDefinitionIndex = 39512;

class Class_1_5984748FA9A4C212_Class_1_5556FC70C9D955D1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5984748FA9A4C212_CLASS_1_5556FC70C9D955D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78732EFAC4B09A91(::MoleMole::Config::ConfigExQTE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigExQTE*))((::PBYTE)hIl2Cpp + CLASS_1_5984748FA9A4C212_CLASS_1_5556FC70C9D955D1_METHOD_1_78732EFAC4B09A91_OFFSET))(this, a1);
	}
};
