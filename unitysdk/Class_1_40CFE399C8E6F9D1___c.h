#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_025FF4981524A424_589;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_40CFE399C8E6F9D1___C_METHOD_1_2D340224619DD2EF_OFFSET UNITYSDK_OFFSET(0x7710900)
#define CLASS_1_40CFE399C8E6F9D1___C_METHOD_1_73E85B5D152C9204_OFFSET UNITYSDK_OFFSET(0x7710800)
#define CLASS_1_40CFE399C8E6F9D1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x77107B0)
#define CLASS_1_40CFE399C8E6F9D1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x77107F0)

inline static constexpr unsigned int Class_1_40CFE399C8E6F9D1___c_TypeDefinitionIndex = 75388;

class Class_1_40CFE399C8E6F9D1___c : public ::System::Object
{
public:
	static ::System::Action_3<::System::Int32, ::System::String*, ::System::String*>** StaticGet___9__4_0()
	{
		return (::System::Action_3<::System::Int32, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40CFE399C8E6F9D1___c_TypeDefinitionIndex)->GetStaticField(0x406F0);
	}
	static ::Class_1_40CFE399C8E6F9D1___c** StaticGet___9()
	{
		return (::Class_1_40CFE399C8E6F9D1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40CFE399C8E6F9D1___c_TypeDefinitionIndex)->GetStaticField(0x406F8);
	}
	static ::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_589*>** StaticGet___9__0_0()
	{
		return (::System::Action_2<::System::Boolean, ::Class_3_025FF4981524A424_589*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40CFE399C8E6F9D1___c_TypeDefinitionIndex)->GetStaticField(0x40700);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40CFE399C8E6F9D1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CFE399C8E6F9D1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73E85B5D152C9204(::System::Boolean a1, ::Class_3_025FF4981524A424_589* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_589*))((::PBYTE)hIl2Cpp + CLASS_1_40CFE399C8E6F9D1___C_METHOD_1_73E85B5D152C9204_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D340224619DD2EF(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_40CFE399C8E6F9D1___C_METHOD_1_2D340224619DD2EF_OFFSET))(this, a1, a2, a3);
	}
};
