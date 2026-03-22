#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_84CEDCEF739506C1_2;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_261F4FECCB294B14___C_METHOD_1_302D18EE1CA1801A_OFFSET UNITYSDK_OFFSET(0xB029D30)
#define CLASS_1_261F4FECCB294B14___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB029CE0)
#define CLASS_1_261F4FECCB294B14___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB029D20)

inline static constexpr unsigned int Class_1_261F4FECCB294B14___c_TypeDefinitionIndex = 56391;

class Class_1_261F4FECCB294B14___c : public ::System::Object
{
public:
	static ::Class_1_261F4FECCB294B14___c** StaticGet___9()
	{
		return (::Class_1_261F4FECCB294B14___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_261F4FECCB294B14___c_TypeDefinitionIndex)->GetStaticField(0x40930);
	}
	static ::System::Func_2<::Class_2_84CEDCEF739506C1_2*, ::System::String*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Class_2_84CEDCEF739506C1_2*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_261F4FECCB294B14___c_TypeDefinitionIndex)->GetStaticField(0x40938);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_261F4FECCB294B14___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_261F4FECCB294B14___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_302D18EE1CA1801A(::Class_2_84CEDCEF739506C1_2* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_84CEDCEF739506C1_2*))((::PBYTE)hIl2Cpp + CLASS_1_261F4FECCB294B14___C_METHOD_1_302D18EE1CA1801A_OFFSET))(this, a1);
	}
};
