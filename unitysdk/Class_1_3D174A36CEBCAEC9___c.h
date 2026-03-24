#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_247;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3D174A36CEBCAEC9___C_METHOD_1_21A72E7EEEAA708C_OFFSET UNITYSDK_OFFSET(0x7C0C410)
#define CLASS_1_3D174A36CEBCAEC9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7C0C3C0)
#define CLASS_1_3D174A36CEBCAEC9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7C0C400)

inline static constexpr unsigned int Class_1_3D174A36CEBCAEC9___c_TypeDefinitionIndex = 42017;

class Class_1_3D174A36CEBCAEC9___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_247*, ::System::Boolean>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_247*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D174A36CEBCAEC9___c_TypeDefinitionIndex)->GetStaticField(0x39AA0);
	}
	static ::Class_1_3D174A36CEBCAEC9___c** StaticGet___9()
	{
		return (::Class_1_3D174A36CEBCAEC9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D174A36CEBCAEC9___c_TypeDefinitionIndex)->GetStaticField(0x39AA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D174A36CEBCAEC9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D174A36CEBCAEC9___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_21A72E7EEEAA708C(::Class_0_16E4307DCC419505_247* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_247*))((::PBYTE)hIl2Cpp + CLASS_1_3D174A36CEBCAEC9___C_METHOD_1_21A72E7EEEAA708C_OFFSET))(this, a1);
	}
};
