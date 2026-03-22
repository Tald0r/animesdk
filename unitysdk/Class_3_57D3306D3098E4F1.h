#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_B2B495D88845D500;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_57D3306D3098E4F1_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xAA595A0)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_0C494C063BCFC76F_OFFSET UNITYSDK_OFFSET(0xAA5BB70)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_3B622E06937472E4_OFFSET UNITYSDK_OFFSET(0xAA5B210)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_44C74197B1D1278B_OFFSET UNITYSDK_OFFSET(0xAA5C260)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_583B85DC6A6892AB_OFFSET UNITYSDK_OFFSET(0xAA5BC10)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_7B0937CF905FF793_OFFSET UNITYSDK_OFFSET(0xAA5A8C0)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_8BB9A36CBE13FB5B_OFFSET UNITYSDK_OFFSET(0xAA5BD80)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_8D55F8F8C4496242_1_OFFSET UNITYSDK_OFFSET(0xAA5B9A0)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_8D55F8F8C4496242_OFFSET UNITYSDK_OFFSET(0xAA598E0)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_9A2E4360D82CD91D_OFFSET UNITYSDK_OFFSET(0xAA59AB0)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_AACF3CA5ADA9346C_OFFSET UNITYSDK_OFFSET(0xAA5C070)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_BA7E00F897B97B16_OFFSET UNITYSDK_OFFSET(0xAA5C820)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xAA5B1A0)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_BEB43134AFD6140F_OFFSET UNITYSDK_OFFSET(0xAA5B730)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_DD497E9B26C52514_OFFSET UNITYSDK_OFFSET(0xAA5B5C0)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_E0C8DBD2A7378918_OFFSET UNITYSDK_OFFSET(0xAA5C560)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_F8CABA453114AB38_OFFSET UNITYSDK_OFFSET(0xAA5A250)
#define CLASS_3_57D3306D3098E4F1_METHOD_3_F9FAC6D943775CF9_OFFSET UNITYSDK_OFFSET(0xAA59F50)
#define CLASS_3_57D3306D3098E4F1__CTOR_OFFSET UNITYSDK_OFFSET(0xAA598C0)

inline static constexpr unsigned int Class_3_57D3306D3098E4F1_TypeDefinitionIndex = 51939;

class Class_3_57D3306D3098E4F1 : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_CREATEFILTERS_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8D55F8F8C4496242(::Class_3_B2B495D88845D500* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_8D55F8F8C4496242_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_F9FAC6D943775CF9(::Class_3_B2B495D88845D500* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::System::Int32>*& a4)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*, ::System::Boolean, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_F9FAC6D943775CF9_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_7B0937CF905FF793(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_7B0937CF905FF793_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_3B622E06937472E4(::Class_3_B2B495D88845D500* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_3B622E06937472E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_DD497E9B26C52514(::Class_3_B2B495D88845D500* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::Class_3_B2B495D88845D500*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_DD497E9B26C52514_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_BEB43134AFD6140F(::Class_3_B2B495D88845D500* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::Class_3_B2B495D88845D500*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_BEB43134AFD6140F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8D55F8F8C4496242_1(::Class_3_B2B495D88845D500* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_8D55F8F8C4496242_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_0C494C063BCFC76F(::Class_3_B2B495D88845D500* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_0C494C063BCFC76F_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_3_583B85DC6A6892AB(::Class_3_B2B495D88845D500* a1, ::System::Boolean a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::Class_3_B2B495D88845D500*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_583B85DC6A6892AB_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Collider* Method_3_8BB9A36CBE13FB5B(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Collider*(*)(::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_8BB9A36CBE13FB5B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AACF3CA5ADA9346C(::System::Boolean a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_AACF3CA5ADA9346C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F8CABA453114AB38(::Class_3_B2B495D88845D500* a1)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_F8CABA453114AB38_OFFSET))(a1);
	}

	static ::System::Void Method_3_44C74197B1D1278B(::Class_3_B2B495D88845D500* a1)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_44C74197B1D1278B_OFFSET))(a1);
	}

	static ::System::Void Method_3_9A2E4360D82CD91D(::Class_3_B2B495D88845D500* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_3_B2B495D88845D500*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_9A2E4360D82CD91D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_E0C8DBD2A7378918(::Class_3_B2B495D88845D500* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_B2B495D88845D500*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_E0C8DBD2A7378918_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BA7E00F897B97B16(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_57D3306D3098E4F1_METHOD_3_BA7E00F897B97B16_OFFSET))(this, a1);
	}
};
