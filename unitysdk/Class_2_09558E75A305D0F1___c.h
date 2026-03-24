#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_88D140F5E09465E1_1;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_09558E75A305D0F1___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x92CA330)
#define CLASS_2_09558E75A305D0F1___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x92CA100)
#define CLASS_2_09558E75A305D0F1___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x92CA110)
#define CLASS_2_09558E75A305D0F1___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x92CA320)
#define CLASS_2_09558E75A305D0F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92CA0B0)
#define CLASS_2_09558E75A305D0F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92CA0F0)

inline static constexpr unsigned int Class_2_09558E75A305D0F1___c_TypeDefinitionIndex = 56168;

class Class_2_09558E75A305D0F1___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__42_17()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BFE0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__42_14()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BFE8);
	}
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__41_9()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BFF0);
	}
	static ::Class_2_09558E75A305D0F1___c** StaticGet___9()
	{
		return (::Class_2_09558E75A305D0F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3BFF8);
	}
	static ::System::Action_1<::Class_3_88D140F5E09465E1_1*>** StaticGet___9__42_23()
	{
		return (::System::Action_1<::Class_3_88D140F5E09465E1_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_09558E75A305D0F1___c_TypeDefinitionIndex)->GetStaticField(0x3C000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_88D140F5E09465E1_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_88D140F5E09465E1_1*))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09558E75A305D0F1___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
