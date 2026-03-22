#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_09524B3A0F449846_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_4609359B80F29981___C_METHOD_1_5DC57180DE8EA128_OFFSET UNITYSDK_OFFSET(0x72D2FA0)
#define CLASS_3_4609359B80F29981___C_METHOD_1_7B0DB2A5CB2107CF_OFFSET UNITYSDK_OFFSET(0x72D2F40)
#define CLASS_3_4609359B80F29981___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x72D2EF0)
#define CLASS_3_4609359B80F29981___C__CTOR_OFFSET UNITYSDK_OFFSET(0x72D2F30)

inline static constexpr unsigned int Class_3_4609359B80F29981___c_TypeDefinitionIndex = 48756;

class Class_3_4609359B80F29981___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_3_09524B3A0F449846_1*, ::System::Boolean>** StaticGet___9__25_1()
	{
		return (::System::Func_2<::Class_3_09524B3A0F449846_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x37440);
	}
	static ::Class_3_4609359B80F29981___c** StaticGet___9()
	{
		return (::Class_3_4609359B80F29981___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x37448);
	}
	static ::System::Func_2<::Class_3_09524B3A0F449846_1*, ::System::Boolean>** StaticGet___9__25_0()
	{
		return (::System::Func_2<::Class_3_09524B3A0F449846_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4609359B80F29981___c_TypeDefinitionIndex)->GetStaticField(0x37450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7B0DB2A5CB2107CF(::Class_3_09524B3A0F449846_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_09524B3A0F449846_1*))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C_METHOD_1_7B0DB2A5CB2107CF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5DC57180DE8EA128(::Class_3_09524B3A0F449846_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_09524B3A0F449846_1*))((::PBYTE)hIl2Cpp + CLASS_3_4609359B80F29981___C_METHOD_1_5DC57180DE8EA128_OFFSET))(this, a1);
	}
};
