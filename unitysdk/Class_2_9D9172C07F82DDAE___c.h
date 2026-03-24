#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_D89CCC627A66D0AD;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_9D9172C07F82DDAE___C_METHOD_1_A81F220B43434F40_OFFSET UNITYSDK_OFFSET(0x91C20D0)
#define CLASS_2_9D9172C07F82DDAE___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x91C20E0)
#define CLASS_2_9D9172C07F82DDAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x91C2080)
#define CLASS_2_9D9172C07F82DDAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91C20C0)

inline static constexpr unsigned int Class_2_9D9172C07F82DDAE___c_TypeDefinitionIndex = 54999;

class Class_2_9D9172C07F82DDAE___c : public ::System::Object
{
public:
	static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__150_0()
	{
		return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D9172C07F82DDAE___c_TypeDefinitionIndex)->GetStaticField(0x2CDA0);
	}
	static ::System::Converter_2<::Class_2_D89CCC627A66D0AD*, ::Class_1_0D6706375CDAAE8C*>** StaticGet___9__159_0()
	{
		return (::System::Converter_2<::Class_2_D89CCC627A66D0AD*, ::Class_1_0D6706375CDAAE8C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D9172C07F82DDAE___c_TypeDefinitionIndex)->GetStaticField(0x2CDA8);
	}
	static ::Class_2_9D9172C07F82DDAE___c** StaticGet___9()
	{
		return (::Class_2_9D9172C07F82DDAE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9D9172C07F82DDAE___c_TypeDefinitionIndex)->GetStaticField(0x2CDB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE___C__CTOR_OFFSET))(this);
	}

	::Class_1_0D6706375CDAAE8C* Method_1_A81F220B43434F40(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE___C_METHOD_1_A81F220B43434F40_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
