#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIStoreCamera; }
namespace System { class Action; }

#define CLASS_1_10AB0EF45AADD1CF_CLASS_1_6C98E13B7498E9B4_METHOD_1_0C5C0679DDD9DC48_OFFSET UNITYSDK_OFFSET(0x9B78B80)
#define CLASS_1_10AB0EF45AADD1CF_CLASS_1_6C98E13B7498E9B4__CTOR_OFFSET UNITYSDK_OFFSET(0x9B78B70)

inline static constexpr unsigned int Class_1_10AB0EF45AADD1CF_Class_1_6C98E13B7498E9B4_TypeDefinitionIndex = 47237;

class Class_1_10AB0EF45AADD1CF_Class_1_6C98E13B7498E9B4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_CLASS_1_6C98E13B7498E9B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C5C0679DDD9DC48(::MoleMole::ConfigUIStoreCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIStoreCamera*))((::PBYTE)hIl2Cpp + CLASS_1_10AB0EF45AADD1CF_CLASS_1_6C98E13B7498E9B4_METHOD_1_0C5C0679DDD9DC48_OFFSET))(this, a1);
	}
};
