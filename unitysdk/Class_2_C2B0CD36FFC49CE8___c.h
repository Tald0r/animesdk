#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9D6E7E76075C6E2_1;
class Class_1_F1B93E9ABCA6C70F;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_C2B0CD36FFC49CE8___C_METHOD_1_3A1914832315DB57_OFFSET UNITYSDK_OFFSET(0xA035A50)
#define CLASS_2_C2B0CD36FFC49CE8___C_METHOD_1_80B972D9CB000300_OFFSET UNITYSDK_OFFSET(0xA035A30)
#define CLASS_2_C2B0CD36FFC49CE8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0359E0)
#define CLASS_2_C2B0CD36FFC49CE8___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA035A20)

inline static constexpr unsigned int Class_2_C2B0CD36FFC49CE8___c_TypeDefinitionIndex = 56302;

class Class_2_C2B0CD36FFC49CE8___c : public ::System::Object
{
public:
	static ::Class_2_C2B0CD36FFC49CE8___c** StaticGet___9()
	{
		return (::Class_2_C2B0CD36FFC49CE8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C2B0CD36FFC49CE8___c_TypeDefinitionIndex)->GetStaticField(0x2EA50);
	}
	static ::System::Func_2<::Class_1_B9D6E7E76075C6E2_1*, ::System::Collections::Generic::IEnumerable_1<::Class_1_F1B93E9ABCA6C70F*>*>** StaticGet___9__93_0()
	{
		return (::System::Func_2<::Class_1_B9D6E7E76075C6E2_1*, ::System::Collections::Generic::IEnumerable_1<::Class_1_F1B93E9ABCA6C70F*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C2B0CD36FFC49CE8___c_TypeDefinitionIndex)->GetStaticField(0x2EA58);
	}
	static ::System::Func_2<::Class_1_F1B93E9ABCA6C70F*, ::System::Single>** StaticGet___9__93_1()
	{
		return (::System::Func_2<::Class_1_F1B93E9ABCA6C70F*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C2B0CD36FFC49CE8___c_TypeDefinitionIndex)->GetStaticField(0x2EA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C2B0CD36FFC49CE8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2B0CD36FFC49CE8___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_F1B93E9ABCA6C70F*>* Method_1_80B972D9CB000300(::Class_1_B9D6E7E76075C6E2_1* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_F1B93E9ABCA6C70F*>*(*)(::PVOID, ::Class_1_B9D6E7E76075C6E2_1*))((::PBYTE)hIl2Cpp + CLASS_2_C2B0CD36FFC49CE8___C_METHOD_1_80B972D9CB000300_OFFSET))(this, a1);
	}

	::System::Single Method_1_3A1914832315DB57(::Class_1_F1B93E9ABCA6C70F* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_F1B93E9ABCA6C70F*))((::PBYTE)hIl2Cpp + CLASS_2_C2B0CD36FFC49CE8___C_METHOD_1_3A1914832315DB57_OFFSET))(this, a1);
	}
};
