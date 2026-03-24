#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_104C7FF74440A413.h"
#include "unitysdk/Enum_3_4D23D4D1211777E9.h"
#include "unitysdk/Enum_3_9427751BE2A593AE.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_25;
class Class_0_16E4307DCC419505_329;
class Class_1_26EB854F1FFF3DBE;
class Class_1_2E4E5AFB9A71CC38;
class Class_1_876922B6C2DFE338;
class Class_1_997A61FC149EE531;
class Class_3_A26677E63C832BEF;
class Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E;
namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class InteractiveNavigateContainer; }
namespace NodeGraph::MainCity { class NavigateContainer; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_3_BB5878006B9D19EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x86C20D0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_0033F6AF6D84EBD3_OFFSET UNITYSDK_OFFSET(0x86CA150)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_01ACC9B513C5E7F7_OFFSET UNITYSDK_OFFSET(0x86C6C80)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_04C5CE6A51925CD2_OFFSET UNITYSDK_OFFSET(0x86C43B0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_04EF989F9335D26D_OFFSET UNITYSDK_OFFSET(0x86CE950)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_052FFC6EB001CD0C_OFFSET UNITYSDK_OFFSET(0x86C9640)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_0730F45B4EF3517F_OFFSET UNITYSDK_OFFSET(0x86C9DA0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_0C9B47BEED372D62_OFFSET UNITYSDK_OFFSET(0x86CAB50)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_1376ADE26816B7E0_OFFSET UNITYSDK_OFFSET(0x86CB150)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x86C0C30)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_1CDD311E5352F8DF_OFFSET UNITYSDK_OFFSET(0x86C8050)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_2357B4F0DA911D40_OFFSET UNITYSDK_OFFSET(0x86CDD10)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_258B30823AB8BC65_1_OFFSET UNITYSDK_OFFSET(0x86CCED0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_258B30823AB8BC65_OFFSET UNITYSDK_OFFSET(0x86C8CE0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_2A091364A11B8C1F_OFFSET UNITYSDK_OFFSET(0x86C51F0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_2C3B2AF8D1ACF43A_OFFSET UNITYSDK_OFFSET(0x86CEB40)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_2E276967CCB28384_OFFSET UNITYSDK_OFFSET(0x86C38F0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_10_OFFSET UNITYSDK_OFFSET(0x86CE410)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_11_OFFSET UNITYSDK_OFFSET(0x86CEAC0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_1_OFFSET UNITYSDK_OFFSET(0x86C6940)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_2_OFFSET UNITYSDK_OFFSET(0x86C7640)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_3_OFFSET UNITYSDK_OFFSET(0x86C7FD0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_4_OFFSET UNITYSDK_OFFSET(0x86C95C0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_5_OFFSET UNITYSDK_OFFSET(0x86C9D20)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_6_OFFSET UNITYSDK_OFFSET(0x86CA330)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_7_OFFSET UNITYSDK_OFFSET(0x86CBDC0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_8_OFFSET UNITYSDK_OFFSET(0x86CD760)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_9_OFFSET UNITYSDK_OFFSET(0x86CE390)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_OFFSET UNITYSDK_OFFSET(0x86C3050)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_39DED3120ABC87FA_OFFSET UNITYSDK_OFFSET(0x86C4E60)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_3B2F8E82206108BA_OFFSET UNITYSDK_OFFSET(0x86C7060)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_3CA1FD51FB2197A9_OFFSET UNITYSDK_OFFSET(0x86CBE40)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_3F662FD119B85D3A_1_OFFSET UNITYSDK_OFFSET(0x86CA600)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_3F662FD119B85D3A_OFFSET UNITYSDK_OFFSET(0x86C5340)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_410DD37938D07AB8_OFFSET UNITYSDK_OFFSET(0x86CE7F0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_48047BDFB4674C8C_OFFSET UNITYSDK_OFFSET(0x86CC480)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_48278047645E0369_OFFSET UNITYSDK_OFFSET(0x86C7A70)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_482C7D93D181273A_OFFSET UNITYSDK_OFFSET(0x86C8740)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_55C7DC91964EA0D3_OFFSET UNITYSDK_OFFSET(0x86C3A80)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_569EF5B19C46837D_OFFSET UNITYSDK_OFFSET(0x86CE490)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x86C2B20)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_611A4C3EDF686400_OFFSET UNITYSDK_OFFSET(0x86C6BA0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_6DC37033BBE0C893_1_OFFSET UNITYSDK_OFFSET(0x86C48A0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_6DC37033BBE0C893_OFFSET UNITYSDK_OFFSET(0x86C3F70)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x86C2150)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_919B6C5967564C65_1_OFFSET UNITYSDK_OFFSET(0x86CE8A0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_919B6C5967564C65_OFFSET UNITYSDK_OFFSET(0x86C6A60)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_94519F734F3D21DF_OFFSET UNITYSDK_OFFSET(0x86C5C90)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x86C2440)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x86C2910)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_9F3AA33041047CD7_OFFSET UNITYSDK_OFFSET(0x86C55C0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0x86CA740)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_1_OFFSET UNITYSDK_OFFSET(0x86C88C0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_2_OFFSET UNITYSDK_OFFSET(0x86C9530)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_3_OFFSET UNITYSDK_OFFSET(0x86CA6B0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x86C6B10)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_AA20D66933384854_OFFSET UNITYSDK_OFFSET(0x86C69C0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x86C1D80)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_B398A0CD4E90F689_OFFSET UNITYSDK_OFFSET(0x86C53F0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_B7134C26B1FFD30D_OFFSET UNITYSDK_OFFSET(0x86CD7E0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_BFAA9473251832BF_OFFSET UNITYSDK_OFFSET(0x86C76C0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_C0CF220EA2E34B64_OFFSET UNITYSDK_OFFSET(0x86C5D20)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_C60EE00E822B8C27_OFFSET UNITYSDK_OFFSET(0x86C58C0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_D1CDB2FF551302FA_OFFSET UNITYSDK_OFFSET(0x86C8950)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_D4E1A96C8B2DA7E3_1_OFFSET UNITYSDK_OFFSET(0x86CA530)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_D4E1A96C8B2DA7E3_OFFSET UNITYSDK_OFFSET(0x86C6850)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_D521144BE7ACB388_OFFSET UNITYSDK_OFFSET(0x86C30D0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_DC13DCFA502E580F_OFFSET UNITYSDK_OFFSET(0x86CA3B0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_E2A7EAAB713D5833_OFFSET UNITYSDK_OFFSET(0x86C7DB0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_E835B81063493D42_OFFSET UNITYSDK_OFFSET(0x86CE1F0)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_EEC44F9DBB6CA7AB_OFFSET UNITYSDK_OFFSET(0x86CA050)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_EEDA689EA8F65823_OFFSET UNITYSDK_OFFSET(0x86C6380)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_F6DA862EBE90EAFF_OFFSET UNITYSDK_OFFSET(0x86CB720)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_F847C6005E9241FF_OFFSET UNITYSDK_OFFSET(0x86C6040)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_FEA110052E9ADC61_OFFSET UNITYSDK_OFFSET(0x86CE100)
#define CLASS_3_BB5878006B9D19EE_METHOD_3_FF11A67BA40DDA5A_OFFSET UNITYSDK_OFFSET(0x86C8250)
#define CLASS_3_BB5878006B9D19EE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x86C0BC0)
#define CLASS_3_BB5878006B9D19EE_ONSTART_OFFSET UNITYSDK_OFFSET(0x86C2070)
#define CLASS_3_BB5878006B9D19EE__CTOR_OFFSET UNITYSDK_OFFSET(0x86C2D10)

inline static constexpr unsigned int Class_3_BB5878006B9D19EE_TypeDefinitionIndex = 43614;

class Class_3_BB5878006B9D19EE : public ::Foundation::GameManager_1<::Class_3_BB5878006B9D19EE*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::Class_1_2E4E5AFB9A71CC38*>*>* Field_3_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_2E4E5AFB9A71CC38*>*>* Field_3_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::Class_1_2E4E5AFB9A71CC38*>*>* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E*>* Field_3_5; // 0x28
	::System::Collections::Generic::List_1<::Class_1_2E4E5AFB9A71CC38*>* Field_3_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*>* Field_3_0; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_393D5190AFB36B9A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_OFFSET))(this, a1);
	}

	::System::Void Method_3_2E276967CCB28384(::System::Int32 a1, ::System::Single a2, ::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Action_1<::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF>*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_2E276967CCB28384_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6DC37033BBE0C893(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_6DC37033BBE0C893_OFFSET))(this, a1);
	}

	::System::Void Method_3_6DC37033BBE0C893_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_6DC37033BBE0C893_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_39DED3120ABC87FA(::System::Int32 a1, ::Class_0_16E4307DCC419505_329* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::String* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_329*, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_39DED3120ABC87FA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_3_2A091364A11B8C1F(::System::Int32 a1, ::MoleMole::EntityHandle a2, ::Enum_3_104C7FF74440A413 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::Enum_3_104C7FF74440A413, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_2A091364A11B8C1F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_3F662FD119B85D3A(::System::Int32 a1, ::NodeGraph::MainCity::InteractiveNavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::InteractiveNavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_3F662FD119B85D3A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B398A0CD4E90F689(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_B398A0CD4E90F689_OFFSET))(this, a1);
	}

	::System::Void Method_3_9F3AA33041047CD7(::System::Int32 a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_9F3AA33041047CD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C60EE00E822B8C27(::Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_C60EE00E822B8C27_OFFSET))(this, a1);
	}

	::System::Void Method_3_04C5CE6A51925CD2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_04C5CE6A51925CD2_OFFSET))(this, a1);
	}

	::Foundation::ViewObject::ViewObjectHandle Method_3_94519F734F3D21DF(::System::Int32 a1)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_94519F734F3D21DF_OFFSET))(this, a1);
	}

	::System::Void Method_3_F847C6005E9241FF(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::String* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_F847C6005E9241FF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_EEDA689EA8F65823(::System::Int32 a1, ::Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_EEDA689EA8F65823_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_393D5190AFB36B9A_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA20D66933384854(::System::Int32 a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_AA20D66933384854_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_919B6C5967564C65(::System::Int32 a1, ::Class_1_26EB854F1FFF3DBE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_26EB854F1FFF3DBE*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_919B6C5967564C65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E* Method_3_C0CF220EA2E34B64(::System::Int32 a1)
	{
		return ((::Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_C0CF220EA2E34B64_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Void Method_3_611A4C3EDF686400(::System::String* a1, ::MoleMole::EntityHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_611A4C3EDF686400_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3B2F8E82206108BA(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_3B2F8E82206108BA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_393D5190AFB36B9A_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_2_OFFSET))(this, a1);
	}

	::MoleMole::EntityHandle Method_3_BFAA9473251832BF(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_BFAA9473251832BF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_48278047645E0369(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_48278047645E0369_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E2A7EAAB713D5833(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_E2A7EAAB713D5833_OFFSET))(this, a1);
	}

	::System::Void Method_3_393D5190AFB36B9A_3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_1CDD311E5352F8DF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_1CDD311E5352F8DF_OFFSET))(this, a1, a2);
	}

	::MoleMole::EntityHandle Method_3_FF11A67BA40DDA5A(::System::Int32 a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::System::String* a4)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::System::Int32, ::System::String*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_FF11A67BA40DDA5A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_D521144BE7ACB388(::System::Int32 a1, ::Enum_3_4D23D4D1211777E9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_4D23D4D1211777E9))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_D521144BE7ACB388_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_3_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_3_482C7D93D181273A(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_482C7D93D181273A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3E94568D5184024_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_01ACC9B513C5E7F7(::Class_0_16E4307DCC419505_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_01ACC9B513C5E7F7_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_3_D4E1A96C8B2DA7E3(::Class_1_876922B6C2DFE338* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::Class_1_876922B6C2DFE338*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_D4E1A96C8B2DA7E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_55C7DC91964EA0D3(::System::Int32 a1, ::Enum_3_4D23D4D1211777E9 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_4D23D4D1211777E9))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_55C7DC91964EA0D3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D1CDB2FF551302FA(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_D1CDB2FF551302FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_258B30823AB8BC65(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_258B30823AB8BC65_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3E94568D5184024_2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_393D5190AFB36B9A_4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_4_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_3_052FFC6EB001CD0C(::System::Int32 a1, ::Enum_3_9427751BE2A593AE a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_9427751BE2A593AE))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_052FFC6EB001CD0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_393D5190AFB36B9A_5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_5_OFFSET))(this, a1);
	}

	::System::Void Method_3_0730F45B4EF3517F(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_0730F45B4EF3517F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_EEC44F9DBB6CA7AB(::System::Int32 a1, ::MoleMole::EntityHandle a2, ::Foundation::AssetRequestHandle a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_EEC44F9DBB6CA7AB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_0033F6AF6D84EBD3(::Class_0_16E4307DCC419505_25* a1, ::Class_3_A26677E63C832BEF* a2, ::Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83 a3, ::Foundation::ViewObject::ViewObjectHandle a4, ::Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_3_A26677E63C832BEF*, ::Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83, ::Foundation::ViewObject::ViewObjectHandle, ::Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_0033F6AF6D84EBD3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_393D5190AFB36B9A_6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_6_OFFSET))(this, a1);
	}

	::System::Void Method_3_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_3_DC13DCFA502E580F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_DC13DCFA502E580F_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> Method_3_D4E1A96C8B2DA7E3_1(::Class_1_876922B6C2DFE338* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::Class_1_876922B6C2DFE338*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_D4E1A96C8B2DA7E3_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_3F662FD119B85D3A_1(::System::Int32 a1, ::NodeGraph::MainCity::InteractiveNavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::InteractiveNavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_3F662FD119B85D3A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A3E94568D5184024_3(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_A3E94568D5184024_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A134E903C4692403(::Class_1_997A61FC149EE531* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_997A61FC149EE531*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Void Method_3_1376ADE26816B7E0(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_1376ADE26816B7E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F6DA862EBE90EAFF(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_F6DA862EBE90EAFF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_393D5190AFB36B9A_7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_7_OFFSET))(this, a1);
	}

	::System::Void Method_3_3CA1FD51FB2197A9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_3CA1FD51FB2197A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_48047BDFB4674C8C(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_48047BDFB4674C8C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_3_258B30823AB8BC65_1(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_258B30823AB8BC65_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_393D5190AFB36B9A_8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_8_OFFSET))(this, a1);
	}

	::System::Void Method_3_B7134C26B1FFD30D(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_B7134C26B1FFD30D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_2357B4F0DA911D40(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::String* a10, ::System::Single a11, ::System::Single a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_2357B4F0DA911D40_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_3_0C9B47BEED372D62(::Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_0C9B47BEED372D62_OFFSET))(this, a1);
	}

	::System::Void Method_3_FEA110052E9ADC61(::System::Int32 a1, ::MoleMole::EntityHandle a2, ::Enum_3_104C7FF74440A413 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::EntityHandle, ::Enum_3_104C7FF74440A413))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_FEA110052E9ADC61_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E835B81063493D42(::System::Int32 a1, ::NodeGraph::MainCity::NavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::NavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_E835B81063493D42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_393D5190AFB36B9A_9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_9_OFFSET))(this, a1);
	}

	::System::Void Method_3_393D5190AFB36B9A_10(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_10_OFFSET))(this, a1);
	}

	::System::Void Method_3_569EF5B19C46837D(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::String* a6, ::System::Single a7, ::System::Single a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_569EF5B19C46837D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_410DD37938D07AB8(::System::Int32 a1, ::NodeGraph::MainCity::NavigateContainer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NodeGraph::MainCity::NavigateContainer*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_410DD37938D07AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_919B6C5967564C65_1(::System::Int32 a1, ::Class_1_26EB854F1FFF3DBE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_26EB854F1FFF3DBE*))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_919B6C5967564C65_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_04EF989F9335D26D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_04EF989F9335D26D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_393D5190AFB36B9A_11(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_393D5190AFB36B9A_11_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_2C3B2AF8D1ACF43A(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_METHOD_3_2C3B2AF8D1ACF43A_OFFSET))(this, a1, a2, a3);
	}
};
