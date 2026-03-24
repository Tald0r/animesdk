#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_1.h"
#include "unitysdk/Class_2_5DFC66413CB20B09.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_280;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_4C86592FFA881343;
class Class_3_5CB4F60E5FD4D81A;
class Class_3_A7F1CBF026E489C4_8;
class Class_3_B36CB1F1D5FEB799_3;
class Class_3_B9139BC69ED28078;
class Class_3_DB267E245CF41057;
class Class_3_E0C3A718B3D8D6A7;
class Class_3_F41D242A20F8FE06;
class Class_3_F62077FFA01035E9;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_3_F67472AB575CAD5E_METHOD_3_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x786B430)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x786A300)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x786A220)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_517385ECBBF41DC0_OFFSET UNITYSDK_OFFSET(0x786B1C0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_651BDCFF8B1FE0AF_OFFSET UNITYSDK_OFFSET(0x786C070)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_6814B5D29D8DF0AB_OFFSET UNITYSDK_OFFSET(0x786BB10)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_6DC66D057E618CD2_OFFSET UNITYSDK_OFFSET(0x786A3D0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x786BA80)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_A52CA9EE0D0335DB_OFFSET UNITYSDK_OFFSET(0x786CE30)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_AE892CB64AB1C650_OFFSET UNITYSDK_OFFSET(0x786B270)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_B59E07C9037FD889_OFFSET UNITYSDK_OFFSET(0x786A6D0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_BA937D14413CE9EE_OFFSET UNITYSDK_OFFSET(0x786AC00)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_BE7E97B21BBB69F5_OFFSET UNITYSDK_OFFSET(0x7869C10)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_C92ED015C048D2B8_OFFSET UNITYSDK_OFFSET(0x786A8A0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_E150FB2C9CE1779C_OFFSET UNITYSDK_OFFSET(0x786ACE0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_E561DA526F8AD83A_OFFSET UNITYSDK_OFFSET(0x786B330)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_F1207149A6D2D664_OFFSET UNITYSDK_OFFSET(0x786C130)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_F13C6980833632E4_OFFSET UNITYSDK_OFFSET(0x786BEC0)
#define CLASS_3_F67472AB575CAD5E__CTOR_OFFSET UNITYSDK_OFFSET(0x786A100)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_TypeDefinitionIndex = 40863;

class Class_3_F67472AB575CAD5E : public ::Class_2_5DFC66413CB20B09
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::Class_3_F41D242A20F8FE06*, ::Class_3_5CB4F60E5FD4D81A*>*>* Field_3_1; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>*>* Field_3_0; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_BE7E97B21BBB69F5(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_337A0D7142819EB2 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_1> a9, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_280*>* a10, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a11)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_1>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_280*>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_BE7E97B21BBB69F5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_6DC66D057E618CD2(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_3_4C86592FFA881343* a5)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_4C86592FFA881343*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_6DC66D057E618CD2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Battle::Entity* Method_3_B59E07C9037FD889(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_B59E07C9037FD889_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C92ED015C048D2B8(::MoleMole::Battle::Entity* a1, ::Class_1_4109B64C3CE1B638<::Class_3_F62077FFA01035E9*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_4109B64C3CE1B638<::Class_3_F62077FFA01035E9*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_C92ED015C048D2B8_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_BA937D14413CE9EE(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_BA937D14413CE9EE_OFFSET))(this, a1);
	}

	::System::Void Method_3_E150FB2C9CE1779C(::Class_3_DB267E245CF41057* a1, ::Class_3_A7F1CBF026E489C4_8* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DB267E245CF41057*, ::Class_3_A7F1CBF026E489C4_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_E150FB2C9CE1779C_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_517385ECBBF41DC0(::MoleMole::Battle::Entity* a1, ::Class_3_E0C3A718B3D8D6A7* a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_E0C3A718B3D8D6A7*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_517385ECBBF41DC0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_AE892CB64AB1C650(::Class_3_DB267E245CF41057* a1, ::Class_3_A7F1CBF026E489C4_8* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Class_3_DB267E245CF41057*, ::Class_3_A7F1CBF026E489C4_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_AE892CB64AB1C650_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_F67472AB575CAD5E* Method_3_E561DA526F8AD83A()
	{
		return ((::Class_3_F67472AB575CAD5E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_E561DA526F8AD83A_OFFSET))();
	}

	::System::Void Method_3_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_14AFBA2E8A242644_OFFSET))(this);
	}

	::System::Void Method_3_6814B5D29D8DF0AB(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_6814B5D29D8DF0AB_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*> Method_3_F13C6980833632E4(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_3_B36CB1F1D5FEB799_3* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_B36CB1F1D5FEB799_3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_F13C6980833632E4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_651BDCFF8B1FE0AF(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_337A0D7142819EB2 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_1> a9, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_280*>* a10, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a11)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_1>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_280*>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_651BDCFF8B1FE0AF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_3_F1207149A6D2D664(::MoleMole::Battle::Entity* a1, ::Class_3_07AAFA6F7F79BEB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_F1207149A6D2D664_OFFSET))(this, a1, a2);
	}

	::MoleMole::Battle::Entity* Method_3_A52CA9EE0D0335DB(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::MoleMole::Config::CampType a5, ::System::Boolean a6, ::Enum_3_65BB655811A73E3A a7, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a8, ::Class_3_B9139BC69ED28078* a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Boolean, ::Enum_3_65BB655811A73E3A, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_3_B9139BC69ED28078*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_A52CA9EE0D0335DB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}
};
