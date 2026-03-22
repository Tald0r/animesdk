#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_785FDC7D0DA58280___C_METHOD_1_826B01041FA05327_OFFSET UNITYSDK_OFFSET(0x1ABFA010)
#define CLASS_2_785FDC7D0DA58280___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABF9FC0)
#define CLASS_2_785FDC7D0DA58280___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABFA000)

inline static constexpr unsigned int Class_2_785FDC7D0DA58280___c_TypeDefinitionIndex = 24971;

class Class_2_785FDC7D0DA58280___c : public ::System::Object
{
public:
	static ::Class_2_785FDC7D0DA58280___c** StaticGet___9()
	{
		return (::Class_2_785FDC7D0DA58280___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_785FDC7D0DA58280___c_TypeDefinitionIndex)->GetStaticField(0x1E1E0);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int64>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_785FDC7D0DA58280___c_TypeDefinitionIndex)->GetStaticField(0x1E1E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_785FDC7D0DA58280___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_785FDC7D0DA58280___C__CTOR_OFFSET))(this);
	}

	::System::Int64 Method_1_826B01041FA05327(::System::UInt32 a1)
	{
		return ((::System::Int64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_785FDC7D0DA58280___C_METHOD_1_826B01041FA05327_OFFSET))(this, a1);
	}
};
