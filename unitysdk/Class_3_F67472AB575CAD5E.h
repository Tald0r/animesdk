#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7.h"
#include "unitysdk/Class_2_5DFC66413CB20B09.h"
#include "unitysdk/Class_2_5DFC66413CB20B09_Struct_2_7EDAB25A0BFDE97D.h"
#include "unitysdk/Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/Enum_3_B7509C442BD17507.h"
#include "unitysdk/Enum_3_E3AEF86448F7462E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_287;
class Class_1_15CCFE77B9E12299;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_01A7586A01B0C0DE;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_2127CDDC3AA65AFF;
class Class_3_262697C3A62B6F91_6;
class Class_3_38A40C4340880ABC_1;
class Class_3_4C86592FFA881343;
class Class_3_4C86592FFA881343_1;
class Class_3_4D6C2C1711991DC5;
class Class_3_514273462AB8F0D3;
class Class_3_5CB4F60E5FD4D81A;
class Class_3_66CDEA99020D1AC1;
class Class_3_68019D615481F900;
class Class_3_7DFECBD13D559515;
class Class_3_837D2683E51789C1;
class Class_3_A7F1CBF026E489C4_5;
class Class_3_B36CB1F1D5FEB799_1;
class Class_3_E0C3A718B3D8D6A7;
class Class_3_F41D242A20F8FE06;
class Class_3_F62077FFA01035E9_1;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_1_B81AB3851AD916CA;

#define CLASS_3_F67472AB575CAD5E_METHOD_3_1192BDF8FF0D8F9C_OFFSET UNITYSDK_OFFSET(0x9E48BD0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x9E4D870)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_1CA38D7DFCB4F559_OFFSET UNITYSDK_OFFSET(0x9E4C400)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_301A4381937EF40A_OFFSET UNITYSDK_OFFSET(0x9E4DFD0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9E4F860)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_4375DD8EFF9CBBAE_OFFSET UNITYSDK_OFFSET(0x9E48260)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_4B1D93483286EFD1_OFFSET UNITYSDK_OFFSET(0x9E4AC10)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x9E4F210)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_517385ECBBF41DC0_OFFSET UNITYSDK_OFFSET(0x9E4EEA0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_651BDCFF8B1FE0AF_OFFSET UNITYSDK_OFFSET(0x9E4F4A0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_6814B5D29D8DF0AB_OFFSET UNITYSDK_OFFSET(0x9E48820)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_6ADCB151D714431A_OFFSET UNITYSDK_OFFSET(0x9E47EF0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_6DC66D057E618CD2_OFFSET UNITYSDK_OFFSET(0x9E4F560)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_6FD801E40526694E_OFFSET UNITYSDK_OFFSET(0x9E4A250)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_761009521CBDD6A4_OFFSET UNITYSDK_OFFSET(0x9E4B4A0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_950BF4D5F0FC9437_OFFSET UNITYSDK_OFFSET(0x9E4CA70)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9E48740)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_997DB69E122FF7ED_OFFSET UNITYSDK_OFFSET(0x9E4C120)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_9F442640551E898E_OFFSET UNITYSDK_OFFSET(0x9E4B780)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_A52CA9EE0D0335DB_OFFSET UNITYSDK_OFFSET(0x9E4CFC0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_AE892CB64AB1C650_OFFSET UNITYSDK_OFFSET(0x9E4EA80)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_B59E07C9037FD889_OFFSET UNITYSDK_OFFSET(0x9E4F040)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_BA937D14413CE9EE_OFFSET UNITYSDK_OFFSET(0x9E4EF50)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_BE7E97B21BBB69F5_OFFSET UNITYSDK_OFFSET(0x9E47A00)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_C16C33262C474F00_OFFSET UNITYSDK_OFFSET(0x9E4A8D0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_C70183E288C1B496_OFFSET UNITYSDK_OFFSET(0x9E4BC30)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_C92ED015C048D2B8_OFFSET UNITYSDK_OFFSET(0x9E4EB40)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_CCA93FEA44E10957_OFFSET UNITYSDK_OFFSET(0x9E49610)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_E150FB2C9CE1779C_OFFSET UNITYSDK_OFFSET(0x9E4CAE0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_E561DA526F8AD83A_OFFSET UNITYSDK_OFFSET(0x9E4DED0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_F13C6980833632E4_OFFSET UNITYSDK_OFFSET(0x9E4F2F0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_F2F071EECC9742ED_OFFSET UNITYSDK_OFFSET(0x9E4E0B0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_F4F0EFAAF650DA37_OFFSET UNITYSDK_OFFSET(0x9E487D0)
#define CLASS_3_F67472AB575CAD5E__CTOR_OFFSET UNITYSDK_OFFSET(0x9E48620)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_TypeDefinitionIndex = 52051;

class Class_3_F67472AB575CAD5E : public ::Class_2_5DFC66413CB20B09
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::Class_3_F41D242A20F8FE06*, ::Class_3_5CB4F60E5FD4D81A*>*>* Field_3_1; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>*>* Field_3_0; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_BE7E97B21BBB69F5(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_337A0D7142819EB2 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7> a9, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_287*>* a10, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a11)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_287*>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_BE7E97B21BBB69F5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::MoleMole::Battle::Entity* Method_3_6ADCB151D714431A(::UnityEngine::GameObject* a1, ::Class_1_15CCFE77B9E12299* a2, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC a3, ::Enum_3_E3AEF86448F7462E a4, ::System::Single a5, ::Enum_3_B7509C442BD17507 a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_15CCFE77B9E12299*, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC, ::Enum_3_E3AEF86448F7462E, ::System::Single, ::Enum_3_B7509C442BD17507))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_6ADCB151D714431A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Battle::Entity* Method_3_4375DD8EFF9CBBAE(::System::Int32 a1, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC a2, ::Class_2_5DFC66413CB20B09_Struct_2_7EDAB25A0BFDE97D a3, ::UnityEngine::GameObject* a4, ::Enum_3_B7509C442BD17507 a5, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC, ::Class_2_5DFC66413CB20B09_Struct_2_7EDAB25A0BFDE97D, ::UnityEngine::GameObject*, ::Enum_3_B7509C442BD17507, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_4375DD8EFF9CBBAE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_F4F0EFAAF650DA37(::UnityEngine::GameObject* a1, ::Class_1_15CCFE77B9E12299* a2, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC a3, ::Enum_3_E3AEF86448F7462E a4, ::System::Single a5, ::Enum_3_B7509C442BD17507 a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_15CCFE77B9E12299*, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC, ::Enum_3_E3AEF86448F7462E, ::System::Single, ::Enum_3_B7509C442BD17507))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_F4F0EFAAF650DA37_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_6814B5D29D8DF0AB(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_6814B5D29D8DF0AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_1192BDF8FF0D8F9C(::Class_3_66CDEA99020D1AC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_66CDEA99020D1AC1*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_1192BDF8FF0D8F9C_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_1CA38D7DFCB4F559(::System::Int32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Foundation::AssetPath>* a5)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_1CA38D7DFCB4F559_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Battle::Entity* Method_3_9F442640551E898E(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_3_4D6C2C1711991DC5* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_4D6C2C1711991DC5*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_9F442640551E898E_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Battle::Entity* Method_3_950BF4D5F0FC9437(::System::Int32 a1, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC a2, ::Class_2_5DFC66413CB20B09_Struct_2_7EDAB25A0BFDE97D a3, ::UnityEngine::GameObject* a4, ::Enum_3_B7509C442BD17507 a5, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::Class_2_5DFC66413CB20B09_Struct_2_A602DCC36FECA5FC, ::Class_2_5DFC66413CB20B09_Struct_2_7EDAB25A0BFDE97D, ::UnityEngine::GameObject*, ::Enum_3_B7509C442BD17507, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_950BF4D5F0FC9437_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_E150FB2C9CE1779C(::Class_3_514273462AB8F0D3* a1, ::Class_3_A7F1CBF026E489C4_5* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_514273462AB8F0D3*, ::Class_3_A7F1CBF026E489C4_5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_E150FB2C9CE1779C_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Battle::Entity* Method_3_A52CA9EE0D0335DB(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::MoleMole::Config::CampType a5, ::System::Boolean a6, ::Enum_3_65BB655811A73E3A a7, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a8, ::Class_3_38A40C4340880ABC_1* a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Boolean, ::Enum_3_65BB655811A73E3A, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_3_38A40C4340880ABC_1*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_A52CA9EE0D0335DB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::MoleMole::Battle::Entity* Method_3_4B1D93483286EFD1(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Enum_3_65BB655811A73E3A a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::Class_3_837D2683E51789C1* a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Enum_3_65BB655811A73E3A, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_3_837D2683E51789C1*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_4B1D93483286EFD1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_3_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_14AFBA2E8A242644_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_CCA93FEA44E10957(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Enum_3_65BB655811A73E3A a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::System::Boolean a6, ::Class_3_7DFECBD13D559515* a7)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Enum_3_65BB655811A73E3A, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Boolean, ::Class_3_7DFECBD13D559515*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_CCA93FEA44E10957_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_F67472AB575CAD5E* Method_3_E561DA526F8AD83A()
	{
		return ((::Class_3_F67472AB575CAD5E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_E561DA526F8AD83A_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_3_997DB69E122FF7ED(::System::UInt32 a1, ::Class_3_01A7586A01B0C0DE* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::Class_3_01A7586A01B0C0DE*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_997DB69E122FF7ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_301A4381937EF40A(::Class_3_66CDEA99020D1AC1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_66CDEA99020D1AC1*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_301A4381937EF40A_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_C16C33262C474F00(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_3_262697C3A62B6F91_6* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_262697C3A62B6F91_6*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_C16C33262C474F00_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_F2F071EECC9742ED(::MoleMole::Battle::Entity* a1, ::Class_3_07AAFA6F7F79BEB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_F2F071EECC9742ED_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_BA937D14413CE9EE(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_BA937D14413CE9EE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_517385ECBBF41DC0(::MoleMole::Battle::Entity* a1, ::Class_3_E0C3A718B3D8D6A7* a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_E0C3A718B3D8D6A7*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_517385ECBBF41DC0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_AE892CB64AB1C650(::Class_3_514273462AB8F0D3* a1, ::Class_3_A7F1CBF026E489C4_5* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Class_3_514273462AB8F0D3*, ::Class_3_A7F1CBF026E489C4_5*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_AE892CB64AB1C650_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Battle::Entity* Method_3_6FD801E40526694E(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Enum_3_65BB655811A73E3A a4, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a5, ::Class_3_2127CDDC3AA65AFF* a6)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Enum_3_65BB655811A73E3A, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_3_2127CDDC3AA65AFF*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_6FD801E40526694E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Battle::Entity* Method_3_B59E07C9037FD889(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_B59E07C9037FD889_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*> Method_3_F13C6980833632E4(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_3_B36CB1F1D5FEB799_1* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_B36CB1F1D5FEB799_1*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_F13C6980833632E4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_C92ED015C048D2B8(::MoleMole::Battle::Entity* a1, ::Class_1_B81AB3851AD916CA<::Class_3_F62077FFA01035E9_1*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_B81AB3851AD916CA<::Class_3_F62077FFA01035E9_1*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_C92ED015C048D2B8_OFFSET))(this, a1, a2);
	}

	::MoleMole::Battle::Entity* Method_3_761009521CBDD6A4(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Class_3_4C86592FFA881343_1* a4)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_4C86592FFA881343_1*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_761009521CBDD6A4_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Battle::Entity* Method_3_651BDCFF8B1FE0AF(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_337A0D7142819EB2 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7> a9, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_287*>* a10, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a11)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_287*>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_651BDCFF8B1FE0AF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::MoleMole::Battle::Entity* Method_3_6DC66D057E618CD2(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_3_4C86592FFA881343* a5)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_4C86592FFA881343*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_6DC66D057E618CD2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_C70183E288C1B496(::System::UInt32 a1, ::Class_3_68019D615481F900* a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::Class_3_68019D615481F900*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_C70183E288C1B496_OFFSET))(this, a1, a2);
	}
};
