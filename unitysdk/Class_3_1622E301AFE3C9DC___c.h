#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_246;
class Class_3_922AE223FA96C022;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_1622E301AFE3C9DC___C_METHOD_1_73A2AC30F69BBB76_OFFSET UNITYSDK_OFFSET(0x8D75110)
#define CLASS_3_1622E301AFE3C9DC___C_METHOD_1_B8F643DBEA874C7F_OFFSET UNITYSDK_OFFSET(0x8D75180)
#define CLASS_3_1622E301AFE3C9DC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D750C0)
#define CLASS_3_1622E301AFE3C9DC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8D75100)

inline static constexpr unsigned int Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex = 66969;

class Class_3_1622E301AFE3C9DC___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_922AE223FA96C022*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_922AE223FA96C022*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex)->GetStaticField(0x3C6E0);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_246*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_246*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex)->GetStaticField(0x3C6E8);
	}
	static ::Class_3_1622E301AFE3C9DC___c** StaticGet___9()
	{
		return (::Class_3_1622E301AFE3C9DC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex)->GetStaticField(0x3C6F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73A2AC30F69BBB76(::Class_3_922AE223FA96C022* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_922AE223FA96C022*))((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C_METHOD_1_73A2AC30F69BBB76_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B8F643DBEA874C7F(::Class_0_16E4307DCC419505_246* a1, ::Class_0_16E4307DCC419505_246* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_246*, ::Class_0_16E4307DCC419505_246*))((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C_METHOD_1_B8F643DBEA874C7F_OFFSET))(this, a1, a2);
	}
};
