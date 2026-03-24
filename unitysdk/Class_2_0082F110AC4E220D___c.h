#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D375C91CCE5D3999;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_0082F110AC4E220D___C_METHOD_1_59A910F7C9C2C757_OFFSET UNITYSDK_OFFSET(0x72141F0)
#define CLASS_2_0082F110AC4E220D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x72141A0)
#define CLASS_2_0082F110AC4E220D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x72141E0)

inline static constexpr unsigned int Class_2_0082F110AC4E220D___c_TypeDefinitionIndex = 59138;

class Class_2_0082F110AC4E220D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_D375C91CCE5D3999*>** StaticGet___9__28_0()
	{
		return (::System::Comparison_1<::Class_1_D375C91CCE5D3999*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0082F110AC4E220D___c_TypeDefinitionIndex)->GetStaticField(0x332B0);
	}
	static ::Class_2_0082F110AC4E220D___c** StaticGet___9()
	{
		return (::Class_2_0082F110AC4E220D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0082F110AC4E220D___c_TypeDefinitionIndex)->GetStaticField(0x332B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0082F110AC4E220D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0082F110AC4E220D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_59A910F7C9C2C757(::Class_1_D375C91CCE5D3999* a1, ::Class_1_D375C91CCE5D3999* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_D375C91CCE5D3999*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_2_0082F110AC4E220D___C_METHOD_1_59A910F7C9C2C757_OFFSET))(this, a1, a2);
	}
};
