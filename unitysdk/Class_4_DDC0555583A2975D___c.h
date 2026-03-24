#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3BC6FFBFA6077E08;
class Class_1_997A61FC149EE531;
class Class_1_B7E341C5F1A6F199;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_4_DDC0555583A2975D___C_METHOD_1_0C679A091108BBB0_OFFSET UNITYSDK_OFFSET(0x6C3A260)
#define CLASS_4_DDC0555583A2975D___C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x6C3A1F0)
#define CLASS_4_DDC0555583A2975D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6C3A1A0)
#define CLASS_4_DDC0555583A2975D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6C3A1E0)

inline static constexpr unsigned int Class_4_DDC0555583A2975D___c_TypeDefinitionIndex = 51079;

class Class_4_DDC0555583A2975D___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_DDC0555583A2975D___c_TypeDefinitionIndex)->GetStaticField(0x383A0);
	}
	static ::Class_4_DDC0555583A2975D___c** StaticGet___9()
	{
		return (::Class_4_DDC0555583A2975D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_DDC0555583A2975D___c_TypeDefinitionIndex)->GetStaticField(0x383A8);
	}
	static ::System::Action_1<::Class_1_997A61FC149EE531*>** StaticGet___9__1_0()
	{
		return (::System::Action_1<::Class_1_997A61FC149EE531*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_DDC0555583A2975D___c_TypeDefinitionIndex)->GetStaticField(0x383B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_DDC0555583A2975D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DDC0555583A2975D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C7CBCE710B3F112(::Class_1_997A61FC149EE531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_997A61FC149EE531*))((::PBYTE)hIl2Cpp + CLASS_4_DDC0555583A2975D___C_METHOD_1_0C7CBCE710B3F112_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C679A091108BBB0(::Class_1_3BC6FFBFA6077E08* a1, ::Class_1_B7E341C5F1A6F199* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BC6FFBFA6077E08*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_4_DDC0555583A2975D___C_METHOD_1_0C679A091108BBB0_OFFSET))(this, a1, a2);
	}
};
