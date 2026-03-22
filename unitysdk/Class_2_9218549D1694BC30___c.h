#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A93187421020321F;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_9218549D1694BC30___C_METHOD_1_59A910F7C9C2C757_OFFSET UNITYSDK_OFFSET(0xBC1DAD0)
#define CLASS_2_9218549D1694BC30___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0xBC1DAC0)
#define CLASS_2_9218549D1694BC30___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC1DA70)
#define CLASS_2_9218549D1694BC30___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBC1DAB0)

inline static constexpr unsigned int Class_2_9218549D1694BC30___c_TypeDefinitionIndex = 40441;

class Class_2_9218549D1694BC30___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__60_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9218549D1694BC30___c_TypeDefinitionIndex)->GetStaticField(0x41E00);
	}
	static ::System::Comparison_1<::Class_1_A93187421020321F*>** StaticGet___9__185_0()
	{
		return (::System::Comparison_1<::Class_1_A93187421020321F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9218549D1694BC30___c_TypeDefinitionIndex)->GetStaticField(0x41E08);
	}
	static ::Class_2_9218549D1694BC30___c** StaticGet___9()
	{
		return (::Class_2_9218549D1694BC30___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9218549D1694BC30___c_TypeDefinitionIndex)->GetStaticField(0x41E10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_59A910F7C9C2C757(::Class_1_A93187421020321F* a1, ::Class_1_A93187421020321F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A93187421020321F*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30___C_METHOD_1_59A910F7C9C2C757_OFFSET))(this, a1, a2);
	}
};
