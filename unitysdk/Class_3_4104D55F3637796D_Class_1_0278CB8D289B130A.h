#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CD3FBE690F475501;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_4104D55F3637796D_CLASS_1_0278CB8D289B130A_METHOD_1_DA96AFE4E937FD7F_OFFSET UNITYSDK_OFFSET(0x727ECB0)
#define CLASS_3_4104D55F3637796D_CLASS_1_0278CB8D289B130A__CTOR_OFFSET UNITYSDK_OFFSET(0x727CB10)

inline static constexpr unsigned int Class_3_4104D55F3637796D_Class_1_0278CB8D289B130A_TypeDefinitionIndex = 45923;

class Class_3_4104D55F3637796D_Class_1_0278CB8D289B130A : public ::System::Object
{
public:
	::Class_1_CD3FBE690F475501* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_CLASS_1_0278CB8D289B130A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DA96AFE4E937FD7F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_4104D55F3637796D_CLASS_1_0278CB8D289B130A_METHOD_1_DA96AFE4E937FD7F_OFFSET))(this, a1);
	}
};
