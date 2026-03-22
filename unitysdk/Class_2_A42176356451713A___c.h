#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B664C71B784890D;
class Class_1_D375C91CCE5D3999;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_A42176356451713A___C_METHOD_1_37B7F9F76E245F05_OFFSET UNITYSDK_OFFSET(0xA016530)
#define CLASS_2_A42176356451713A___C_METHOD_1_8E1F0E91FF6BA6E4_1_OFFSET UNITYSDK_OFFSET(0xA0166D0)
#define CLASS_2_A42176356451713A___C_METHOD_1_8E1F0E91FF6BA6E4_OFFSET UNITYSDK_OFFSET(0xA0164F0)
#define CLASS_2_A42176356451713A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0164A0)
#define CLASS_2_A42176356451713A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA0164E0)

inline static constexpr unsigned int Class_2_A42176356451713A___c_TypeDefinitionIndex = 39152;

class Class_2_A42176356451713A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_D375C91CCE5D3999*, ::System::Boolean>** StaticGet___9__30_0()
	{
		return (::System::Func_2<::Class_1_D375C91CCE5D3999*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A42176356451713A___c_TypeDefinitionIndex)->GetStaticField(0x27970);
	}
	static ::Class_2_A42176356451713A___c** StaticGet___9()
	{
		return (::Class_2_A42176356451713A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A42176356451713A___c_TypeDefinitionIndex)->GetStaticField(0x27978);
	}
	static ::System::Comparison_1<::Class_1_8B664C71B784890D*>** StaticGet___9__14_0()
	{
		return (::System::Comparison_1<::Class_1_8B664C71B784890D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A42176356451713A___c_TypeDefinitionIndex)->GetStaticField(0x27980);
	}
	static ::System::Func_2<::Class_1_D375C91CCE5D3999*, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Func_2<::Class_1_D375C91CCE5D3999*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A42176356451713A___c_TypeDefinitionIndex)->GetStaticField(0x27988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A42176356451713A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A42176356451713A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8E1F0E91FF6BA6E4(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_2_A42176356451713A___C_METHOD_1_8E1F0E91FF6BA6E4_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37B7F9F76E245F05(::Class_1_8B664C71B784890D* a1, ::Class_1_8B664C71B784890D* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_8B664C71B784890D*, ::Class_1_8B664C71B784890D*))((::PBYTE)hIl2Cpp + CLASS_2_A42176356451713A___C_METHOD_1_37B7F9F76E245F05_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8E1F0E91FF6BA6E4_1(::Class_1_D375C91CCE5D3999* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + CLASS_2_A42176356451713A___C_METHOD_1_8E1F0E91FF6BA6E4_1_OFFSET))(this, a1);
	}
};
