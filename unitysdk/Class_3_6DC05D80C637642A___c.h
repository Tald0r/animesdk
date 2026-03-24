#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_3_6DC05D80C637642A___C_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xBCC3150)
#define CLASS_3_6DC05D80C637642A___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBCC3140)
#define CLASS_3_6DC05D80C637642A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCC30F0)
#define CLASS_3_6DC05D80C637642A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBCC3130)

inline static constexpr unsigned int Class_3_6DC05D80C637642A___c_TypeDefinitionIndex = 56238;

class Class_3_6DC05D80C637642A___c : public ::System::Object
{
public:
	static ::Class_3_6DC05D80C637642A___c** StaticGet___9()
	{
		return (::Class_3_6DC05D80C637642A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6DC05D80C637642A___c_TypeDefinitionIndex)->GetStaticField(0x2F860);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__4_6()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6DC05D80C637642A___c_TypeDefinitionIndex)->GetStaticField(0x2F868);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_6DC05D80C637642A___c_TypeDefinitionIndex)->GetStaticField(0x2F870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6DC05D80C637642A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DC05D80C637642A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DC05D80C637642A___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6DC05D80C637642A___C_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
