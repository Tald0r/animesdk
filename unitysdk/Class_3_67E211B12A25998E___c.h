#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AA3FB4F8297B1779;
class Class_3_F97B015544BE936B;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_67E211B12A25998E___C_METHOD_1_8738831578484598_OFFSET UNITYSDK_OFFSET(0x88D4670)
#define CLASS_3_67E211B12A25998E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x88D4620)
#define CLASS_3_67E211B12A25998E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x88D4660)

inline static constexpr unsigned int Class_3_67E211B12A25998E___c_TypeDefinitionIndex = 74810;

class Class_3_67E211B12A25998E___c : public ::System::Object
{
public:
	static ::Class_3_67E211B12A25998E___c** StaticGet___9()
	{
		return (::Class_3_67E211B12A25998E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_67E211B12A25998E___c_TypeDefinitionIndex)->GetStaticField(0x412E0);
	}
	static ::System::Action_2<::Class_3_F97B015544BE936B*, ::Class_3_AA3FB4F8297B1779*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_3_F97B015544BE936B*, ::Class_3_AA3FB4F8297B1779*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_67E211B12A25998E___c_TypeDefinitionIndex)->GetStaticField(0x412E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8738831578484598(::Class_3_F97B015544BE936B* a1, ::Class_3_AA3FB4F8297B1779* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::Class_3_AA3FB4F8297B1779*))((::PBYTE)hIl2Cpp + CLASS_3_67E211B12A25998E___C_METHOD_1_8738831578484598_OFFSET))(this, a1, a2);
	}
};
