#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689.h"
#include "unitysdk/System/Object.h"

#define CLASS_5_A53BB84C10BA182D___C_METHOD_1_A7FF35CD671FC0D8_OFFSET UNITYSDK_OFFSET(0xE7240D0)
#define CLASS_5_A53BB84C10BA182D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE724080)
#define CLASS_5_A53BB84C10BA182D___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE7240C0)

inline static constexpr unsigned int Class_5_A53BB84C10BA182D___c_TypeDefinitionIndex = 69502;

class Class_5_A53BB84C10BA182D___c : public ::System::Object
{
public:
	static ::Class_5_A53BB84C10BA182D___c** StaticGet___9()
	{
		return (::Class_5_A53BB84C10BA182D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_A53BB84C10BA182D___c_TypeDefinitionIndex)->GetStaticField(0x2AC30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7FF35CD671FC0D8(::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_86A85CB5038B7046_Struct_2_B2F7666479C25689&))((::PBYTE)hIl2Cpp + CLASS_5_A53BB84C10BA182D___C_METHOD_1_A7FF35CD671FC0D8_OFFSET))(this, a1);
	}
};
