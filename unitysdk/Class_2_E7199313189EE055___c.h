#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A93187421020321F;
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_E7199313189EE055___C_METHOD_1_59A910F7C9C2C757_OFFSET UNITYSDK_OFFSET(0x74A7320)
#define CLASS_2_E7199313189EE055___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x74A7310)
#define CLASS_2_E7199313189EE055___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x74A72C0)
#define CLASS_2_E7199313189EE055___C__CTOR_OFFSET UNITYSDK_OFFSET(0x74A7300)

inline static constexpr unsigned int Class_2_E7199313189EE055___c_TypeDefinitionIndex = 76223;

class Class_2_E7199313189EE055___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__60_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7199313189EE055___c_TypeDefinitionIndex)->GetStaticField(0x302F0);
	}
	static ::System::Comparison_1<::Class_1_A93187421020321F*>** StaticGet___9__185_0()
	{
		return (::System::Comparison_1<::Class_1_A93187421020321F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7199313189EE055___c_TypeDefinitionIndex)->GetStaticField(0x302F8);
	}
	static ::Class_2_E7199313189EE055___c** StaticGet___9()
	{
		return (::Class_2_E7199313189EE055___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E7199313189EE055___c_TypeDefinitionIndex)->GetStaticField(0x30300);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_59A910F7C9C2C757(::Class_1_A93187421020321F* a1, ::Class_1_A93187421020321F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A93187421020321F*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055___C_METHOD_1_59A910F7C9C2C757_OFFSET))(this, a1, a2);
	}
};
