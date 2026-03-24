#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_2_031458C3E21EC5F8___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x77E1D90)
#define CLASS_2_031458C3E21EC5F8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x77E1D40)
#define CLASS_2_031458C3E21EC5F8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x77E1D80)

inline static constexpr unsigned int Class_2_031458C3E21EC5F8___c_TypeDefinitionIndex = 72099;

class Class_2_031458C3E21EC5F8___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__3_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_031458C3E21EC5F8___c_TypeDefinitionIndex)->GetStaticField(0x32420);
	}
	static ::Class_2_031458C3E21EC5F8___c** StaticGet___9()
	{
		return (::Class_2_031458C3E21EC5F8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_031458C3E21EC5F8___c_TypeDefinitionIndex)->GetStaticField(0x32428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_031458C3E21EC5F8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031458C3E21EC5F8___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_031458C3E21EC5F8___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
