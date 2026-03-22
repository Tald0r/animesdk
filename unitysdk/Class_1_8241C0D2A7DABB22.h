#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8241C0D2A7DABB22_Enum_3_B64E3E24F3BDCBBC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_172;
class Class_0_16E4307DCC419505_399;
class Class_0_16E4307DCC419505_400;
class Class_1_3B91E8B5FF29338A;
class Class_1_6DA7B27D0F38CD4F;
class Class_2_208CC9941471731A_149;
class Class_3_621E396E538604DB;
namespace MoleMole { class InteractionPoint; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_8241C0D2A7DABB22_METHOD_1_1F8698FEAB6990A0_OFFSET UNITYSDK_OFFSET(0x62EF740)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_52E8B13D94CC94AE_OFFSET UNITYSDK_OFFSET(0x62E8000)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_5F77F8482A7DFE76_OFFSET UNITYSDK_OFFSET(0x62E7D90)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_6E5E3940FB0450C3_OFFSET UNITYSDK_OFFSET(0x62EEAD0)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_7592CF536F8F5DA3_OFFSET UNITYSDK_OFFSET(0x62E6890)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_854E4F41C6457F22_OFFSET UNITYSDK_OFFSET(0x62E6490)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_9297AB91A02F8083_OFFSET UNITYSDK_OFFSET(0x62EFF50)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_99042179565F3D54_OFFSET UNITYSDK_OFFSET(0x62E84D0)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_9A6ECC92B1D83812_OFFSET UNITYSDK_OFFSET(0x62E6080)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_AFC4242440B0B88F_OFFSET UNITYSDK_OFFSET(0x62E5FD0)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_B051176E7144BC58_OFFSET UNITYSDK_OFFSET(0x62ECA90)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_E4D422DD274C36BD_OFFSET UNITYSDK_OFFSET(0x62EECE0)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_E92FE4DCEAF46A48_OFFSET UNITYSDK_OFFSET(0x62EDFE0)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_F2EADE85DDBEA95B_OFFSET UNITYSDK_OFFSET(0x62F1070)
#define CLASS_1_8241C0D2A7DABB22_METHOD_1_F527D85D41C4A535_OFFSET UNITYSDK_OFFSET(0x62E7720)
#define CLASS_1_8241C0D2A7DABB22__CCTOR_OFFSET UNITYSDK_OFFSET(0x62E5F80)

inline static constexpr unsigned int Class_1_8241C0D2A7DABB22_TypeDefinitionIndex = 45533;

class Class_1_8241C0D2A7DABB22 : public ::System::Object
{
public:
	static ::UnityEngine::AI::NavMeshPath** StaticGet_Field_1_0()
	{
		return (::UnityEngine::AI::NavMeshPath**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8241C0D2A7DABB22_TypeDefinitionIndex)->GetStaticField(0x33680);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8241C0D2A7DABB22_TypeDefinitionIndex)->GetStaticField(0x33688);
	}
	// static const ::System::Single Field_1_2; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_AFC4242440B0B88F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_AFC4242440B0B88F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9A6ECC92B1D83812(::Class_0_16E4307DCC419505_399* a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_399*, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_9A6ECC92B1D83812_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_854E4F41C6457F22(::Class_0_16E4307DCC419505_400* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_400*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_854E4F41C6457F22_OFFSET))(a1);
	}

	static ::System::Void Method_1_7592CF536F8F5DA3(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_399* a3, ::MoleMole::InteractionPoint* a4, ::Class_2_208CC9941471731A_149* a5, ::System::Action* a6, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a7)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_0_16E4307DCC419505_399*, ::MoleMole::InteractionPoint*, ::Class_2_208CC9941471731A_149*, ::System::Action*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_7592CF536F8F5DA3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_52E8B13D94CC94AE(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_399* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::Class_2_208CC9941471731A_149* a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::Class_0_16E4307DCC419505_399*, ::System::Collections::Generic::List_1<::System::String*>*, ::Class_2_208CC9941471731A_149*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_52E8B13D94CC94AE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_5F77F8482A7DFE76(::MoleMole::Battle::Entity* a1, ::Class_0_16E4307DCC419505_399* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_0_16E4307DCC419505_399*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_5F77F8482A7DFE76_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Battle::Entity* Method_1_B051176E7144BC58(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::Class_3_621E396E538604DB* a3, ::Class_1_6DA7B27D0F38CD4F* a4, ::Class_1_3B91E8B5FF29338A* a5, ::System::Action_1<::UnityEngine::Collider*>* a6, ::System::Action_1<::UnityEngine::Collider*>* a7, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* a8, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::Class_3_621E396E538604DB*, ::Class_1_6DA7B27D0F38CD4F*, ::Class_1_3B91E8B5FF29338A*, ::System::Action_1<::UnityEngine::Collider*>*, ::System::Action_1<::UnityEngine::Collider*>*, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_B051176E7144BC58_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Boolean Method_1_E92FE4DCEAF46A48(::Class_1_8241C0D2A7DABB22_Enum_3_B64E3E24F3BDCBBC a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a5)
	{
		return ((::System::Boolean(*)(::Class_1_8241C0D2A7DABB22_Enum_3_B64E3E24F3BDCBBC, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_E92FE4DCEAF46A48_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_E4D422DD274C36BD(::Class_0_16E4307DCC419505_399* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_399*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_E4D422DD274C36BD_OFFSET))(a1);
	}

	static ::System::Void Method_1_1F8698FEAB6990A0(::Class_0_16E4307DCC419505_399* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_399*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_1F8698FEAB6990A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F527D85D41C4A535(::Class_0_16E4307DCC419505_399* a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_399*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_F527D85D41C4A535_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_99042179565F3D54(::MoleMole::Battle::Entity* a1, ::Class_0_16E4307DCC419505_400* a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_0_16E4307DCC419505_400*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_99042179565F3D54_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_6E5E3940FB0450C3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_6E5E3940FB0450C3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9297AB91A02F8083(::Class_0_16E4307DCC419505_172* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_172*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_9297AB91A02F8083_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_F2EADE85DDBEA95B(::Class_2_208CC9941471731A_149* a1, ::System::UInt64 a2, ::System::Int32 a3, ::Class_0_16E4307DCC419505_399* a4)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_149*, ::System::UInt64, ::System::Int32, ::Class_0_16E4307DCC419505_399*))((::PBYTE)hIl2Cpp + CLASS_1_8241C0D2A7DABB22_METHOD_1_F2EADE85DDBEA95B_OFFSET))(a1, a2, a3, a4);
	}
};
