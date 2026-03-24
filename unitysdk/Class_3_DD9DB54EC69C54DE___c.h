#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_7DE03FFC38B69B91;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_DD9DB54EC69C54DE___C_METHOD_1_0B2B57A6B29D3A56_OFFSET UNITYSDK_OFFSET(0x798B260)
#define CLASS_3_DD9DB54EC69C54DE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x798B210)
#define CLASS_3_DD9DB54EC69C54DE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x798B250)

inline static constexpr unsigned int Class_3_DD9DB54EC69C54DE___c_TypeDefinitionIndex = 77592;

class Class_3_DD9DB54EC69C54DE___c : public ::System::Object
{
public:
	static ::Class_3_DD9DB54EC69C54DE___c** StaticGet___9()
	{
		return (::Class_3_DD9DB54EC69C54DE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DD9DB54EC69C54DE___c_TypeDefinitionIndex)->GetStaticField(0x3A0C0);
	}
	static ::System::Action_1<::Class_5_7DE03FFC38B69B91*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_5_7DE03FFC38B69B91*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DD9DB54EC69C54DE___c_TypeDefinitionIndex)->GetStaticField(0x3A0C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B2B57A6B29D3A56(::Class_5_7DE03FFC38B69B91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_7DE03FFC38B69B91*))((::PBYTE)hIl2Cpp + CLASS_3_DD9DB54EC69C54DE___C_METHOD_1_0B2B57A6B29D3A56_OFFSET))(this, a1);
	}
};
