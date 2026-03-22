#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CA182B9B6890D069;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_37BD5F6DC4E86C7D___C_METHOD_1_611A54F187C56107_OFFSET UNITYSDK_OFFSET(0x606E260)
#define CLASS_2_37BD5F6DC4E86C7D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x606E210)
#define CLASS_2_37BD5F6DC4E86C7D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x606E250)

inline static constexpr unsigned int Class_2_37BD5F6DC4E86C7D___c_TypeDefinitionIndex = 42545;

class Class_2_37BD5F6DC4E86C7D___c : public ::System::Object
{
public:
	static ::Class_2_37BD5F6DC4E86C7D___c** StaticGet___9()
	{
		return (::Class_2_37BD5F6DC4E86C7D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37BD5F6DC4E86C7D___c_TypeDefinitionIndex)->GetStaticField(0x36DE0);
	}
	static ::System::Action_2<::Class_2_CA182B9B6890D069*, ::System::Int32>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_2_CA182B9B6890D069*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37BD5F6DC4E86C7D___c_TypeDefinitionIndex)->GetStaticField(0x36DE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37BD5F6DC4E86C7D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37BD5F6DC4E86C7D___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_611A54F187C56107(::Class_2_CA182B9B6890D069* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA182B9B6890D069*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_37BD5F6DC4E86C7D___C_METHOD_1_611A54F187C56107_OFFSET))(this, a1, a2);
	}
};
