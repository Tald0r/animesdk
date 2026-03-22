#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_44299E4126D86924___C_METHOD_1_5FD8A1C32402353A_OFFSET UNITYSDK_OFFSET(0xD421850)
#define CLASS_1_44299E4126D86924___C_METHOD_1_740CA6813B67F8F2_OFFSET UNITYSDK_OFFSET(0xD421820)
#define CLASS_1_44299E4126D86924___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4217D0)
#define CLASS_1_44299E4126D86924___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD421810)

inline static constexpr unsigned int Class_1_44299E4126D86924___c_TypeDefinitionIndex = 65678;

class Class_1_44299E4126D86924___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_D89CCC627A66D0AD*, ::System::Int32>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::Class_2_D89CCC627A66D0AD*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44299E4126D86924___c_TypeDefinitionIndex)->GetStaticField(0x2BC80);
	}
	static ::Class_1_44299E4126D86924___c** StaticGet___9()
	{
		return (::Class_1_44299E4126D86924___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44299E4126D86924___c_TypeDefinitionIndex)->GetStaticField(0x2BC88);
	}
	static ::System::Func_2<::Class_2_D89CCC627A66D0AD*, ::System::Boolean>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::Class_2_D89CCC627A66D0AD*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44299E4126D86924___c_TypeDefinitionIndex)->GetStaticField(0x2BC90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44299E4126D86924___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44299E4126D86924___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_740CA6813B67F8F2(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_1_44299E4126D86924___C_METHOD_1_740CA6813B67F8F2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5FD8A1C32402353A(::Class_2_D89CCC627A66D0AD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D89CCC627A66D0AD*))((::PBYTE)hIl2Cpp + CLASS_1_44299E4126D86924___C_METHOD_1_5FD8A1C32402353A_OFFSET))(this, a1);
	}
};
