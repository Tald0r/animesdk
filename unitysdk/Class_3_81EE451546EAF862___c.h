#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7BF98046FA3EA064;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_81EE451546EAF862___C_METHOD_1_6065F24A36A6AF99_OFFSET UNITYSDK_OFFSET(0x8A31460)
#define CLASS_3_81EE451546EAF862___C_METHOD_1_91D97064765DCBF1_OFFSET UNITYSDK_OFFSET(0x8A31580)
#define CLASS_3_81EE451546EAF862___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A31410)
#define CLASS_3_81EE451546EAF862___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A31450)

inline static constexpr unsigned int Class_3_81EE451546EAF862___c_TypeDefinitionIndex = 74446;

class Class_3_81EE451546EAF862___c : public ::System::Object
{
public:
	static ::Class_3_81EE451546EAF862___c** StaticGet___9()
	{
		return (::Class_3_81EE451546EAF862___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_81EE451546EAF862___c_TypeDefinitionIndex)->GetStaticField(0x38040);
	}
	static ::System::Action_1<::Class_3_7BF98046FA3EA064*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::Class_3_7BF98046FA3EA064*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_81EE451546EAF862___c_TypeDefinitionIndex)->GetStaticField(0x38048);
	}
	static ::System::Action_1<::Class_3_7BF98046FA3EA064*>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::Class_3_7BF98046FA3EA064*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_81EE451546EAF862___c_TypeDefinitionIndex)->GetStaticField(0x38050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6065F24A36A6AF99(::Class_3_7BF98046FA3EA064* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7BF98046FA3EA064*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C_METHOD_1_6065F24A36A6AF99_OFFSET))(this, a1);
	}

	::System::Void Method_1_91D97064765DCBF1(::Class_3_7BF98046FA3EA064* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7BF98046FA3EA064*))((::PBYTE)hIl2Cpp + CLASS_3_81EE451546EAF862___C_METHOD_1_91D97064765DCBF1_OFFSET))(this, a1);
	}
};
