#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_4845C6520B34C725;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_8DEED67EBA66D5AC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xB06EBE0)
#define CLASS_3_8DEED67EBA66D5AC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB06EEB0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_00117A41DE15B19B_OFFSET UNITYSDK_OFFSET(0xB06F900)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_17391011FD9B1ECE_OFFSET UNITYSDK_OFFSET(0xB071190)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_203EF495D7683C86_OFFSET UNITYSDK_OFFSET(0xB0716B0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_450857CD60EF4E85_OFFSET UNITYSDK_OFFSET(0xB06FAB0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_4FC412AC83892514_OFFSET UNITYSDK_OFFSET(0xB06F190)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_66CD3567BE0596D5_OFFSET UNITYSDK_OFFSET(0xB070FD0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_7645FC9BCCC8257F_OFFSET UNITYSDK_OFFSET(0xB06F050)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0xB070F70)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_99AC64DE92152797_OFFSET UNITYSDK_OFFSET(0xB06F570)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xB072210)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_C92A156731335895_OFFSET UNITYSDK_OFFSET(0xB06F640)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB072290)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_D129990F844B33D3_OFFSET UNITYSDK_OFFSET(0xB071EF0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_E4BF5E0E1E925BB8_OFFSET UNITYSDK_OFFSET(0xB070EA0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_F7F49600522ABF51_OFFSET UNITYSDK_OFFSET(0xB071BE0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_F8CABA453114AB38_OFFSET UNITYSDK_OFFSET(0xB070360)
#define CLASS_3_8DEED67EBA66D5AC__CTOR_OFFSET UNITYSDK_OFFSET(0xB06F030)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC_TypeDefinitionIndex = 47329;

class Class_3_8DEED67EBA66D5AC : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Single Method_3_7645FC9BCCC8257F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_7645FC9BCCC8257F_OFFSET))(a1);
	}

	static ::System::Void Method_3_99AC64DE92152797(::Class_3_4845C6520B34C725* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::Class_3_4845C6520B34C725*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_99AC64DE92152797_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_450857CD60EF4E85(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_450857CD60EF4E85_OFFSET))(a1);
	}

	static ::System::Void Method_3_F8CABA453114AB38(::Class_3_4845C6520B34C725* a1)
	{
		return ((::System::Void(*)(::Class_3_4845C6520B34C725*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_F8CABA453114AB38_OFFSET))(a1);
	}

	static ::System::Void Method_3_E4BF5E0E1E925BB8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_E4BF5E0E1E925BB8_OFFSET))(a1);
	}

	static ::System::Void Method_3_66CD3567BE0596D5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_66CD3567BE0596D5_OFFSET))(a1);
	}

	static ::System::Void Method_3_203EF495D7683C86(::UnityEngine::Transform* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_203EF495D7683C86_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_F7F49600522ABF51(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_F7F49600522ABF51_OFFSET))(a1);
	}

	static ::System::Void Method_3_17391011FD9B1ECE(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_17391011FD9B1ECE_OFFSET))(a1);
	}

	static ::System::Void Method_3_D129990F844B33D3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_D129990F844B33D3_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_00117A41DE15B19B(::Class_3_4845C6520B34C725* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::Class_3_4845C6520B34C725*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_00117A41DE15B19B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_C92A156731335895(::Class_3_4845C6520B34C725*& a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::System::Void(*)(::Class_3_4845C6520B34C725*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_C92A156731335895_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Single Method_3_4FC412AC83892514(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_4FC412AC83892514_OFFSET))(a1);
	}
};
