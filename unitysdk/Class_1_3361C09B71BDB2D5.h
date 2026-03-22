#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3361C09B71BDB2D5_Enum_3_0A25083308CFA7F5.h"
#include "unitysdk/Class_1_3361C09B71BDB2D5_Struct_2_15A3FA519D8875C2.h"
#include "unitysdk/Class_1_3361C09B71BDB2D5_Struct_2_87FF019AA8F8935A.h"
#include "unitysdk/Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Enum_3_5430DDABF48F9EFB.h"
#include "unitysdk/Enum_3_FAE144EE9510F878.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/OverrideScenePerformDelayConfig.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_446;
class Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F;
class Class_1_449B1BB2E3AA2D13;
class Class_1_46FECA8E1D551D46_59;
class Class_1_663AFC2250EC21C9;
class Class_1_8C28E085C991E9A7;
class Class_2_131E282CCAEB876E;
class Class_2_208CC9941471731A_667;
class Class_2_DB627EC47B0F0B11;
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_3361C09B71BDB2D5_METHOD_1_03DF2F822416454D_OFFSET UNITYSDK_OFFSET(0x7C862C0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_07905DF18E34A6CC_OFFSET UNITYSDK_OFFSET(0x7C81890)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_0AA7D45824F9789D_OFFSET UNITYSDK_OFFSET(0x7C81C20)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_0DBA10B99702F726_OFFSET UNITYSDK_OFFSET(0x7C7E7E0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_10967FECA145C9BA_OFFSET UNITYSDK_OFFSET(0x7C7A3A0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_14553DD20FA83DC6_OFFSET UNITYSDK_OFFSET(0x7C79E60)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x7C7A8C0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_1832E29FF208A65E_OFFSET UNITYSDK_OFFSET(0x7C7CBA0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x7C7A810)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_2050A5829272D58F_OFFSET UNITYSDK_OFFSET(0x7C844E0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_29CBB29A5323CADA_OFFSET UNITYSDK_OFFSET(0x7C7ADD0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_2B2BF62F2A301B46_OFFSET UNITYSDK_OFFSET(0x7C81A70)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_2F045917300CBCEB_OFFSET UNITYSDK_OFFSET(0x7C79D80)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_2F5AF86AF3904C2F_OFFSET UNITYSDK_OFFSET(0x7C82F80)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_30DE355FB41B6A3E_OFFSET UNITYSDK_OFFSET(0x7C7C610)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_34B74973E2FF3F92_OFFSET UNITYSDK_OFFSET(0x7C7E420)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_351A4C4D39156075_OFFSET UNITYSDK_OFFSET(0x7C7B320)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_3E606C14B0000AFA_OFFSET UNITYSDK_OFFSET(0x7C7DA60)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_461D232A2E5A75CF_OFFSET UNITYSDK_OFFSET(0x7C86AF0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_46FFE084A15C0C9E_OFFSET UNITYSDK_OFFSET(0x7C85600)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x7C82250)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_4FB755E597E7E869_OFFSET UNITYSDK_OFFSET(0x7C7E980)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_537A827D67D6BC8C_OFFSET UNITYSDK_OFFSET(0x7C7B670)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_565AA3EF89C82663_OFFSET UNITYSDK_OFFSET(0x7C80650)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_590662BA0A0EF3EC_OFFSET UNITYSDK_OFFSET(0x7C805B0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_5BAA4DE3DC40C57A_OFFSET UNITYSDK_OFFSET(0x7C80390)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_5D4975ACF7DFCF63_OFFSET UNITYSDK_OFFSET(0x7C84C20)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_5E2660F5FB3903C2_OFFSET UNITYSDK_OFFSET(0x7C85770)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_61BE273A1DF4ABA4_OFFSET UNITYSDK_OFFSET(0x7C7FE90)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_6284C5E2519D98CF_OFFSET UNITYSDK_OFFSET(0x7C78590)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_641329226D92B5B9_OFFSET UNITYSDK_OFFSET(0x7C7F2F0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_67011414F1571CD0_OFFSET UNITYSDK_OFFSET(0x7C848B0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_67886CD69FA03EA1_OFFSET UNITYSDK_OFFSET(0x7C782C0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_6BE7F2D0E26AB78D_OFFSET UNITYSDK_OFFSET(0x7C84B70)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_6C4480FF0EF892B6_OFFSET UNITYSDK_OFFSET(0x7C851B0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_6D1A13494426F371_OFFSET UNITYSDK_OFFSET(0x7C7CDA0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_6E3B47F8C443B00F_OFFSET UNITYSDK_OFFSET(0x7C7E170)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_6E8208462322B8CB_OFFSET UNITYSDK_OFFSET(0x7C7C050)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_7052FA2A4BCDA198_OFFSET UNITYSDK_OFFSET(0x7C7F760)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_77683EB4B430433F_OFFSET UNITYSDK_OFFSET(0x7C832B0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_81065543FC4015DF_OFFSET UNITYSDK_OFFSET(0x7C7FC30)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x7C787B0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_8920C9E338EDC657_OFFSET UNITYSDK_OFFSET(0x7C7BD40)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_8E71AE88E1D8BCD2_OFFSET UNITYSDK_OFFSET(0x7C78A40)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_92213E3DB09159E7_OFFSET UNITYSDK_OFFSET(0x7C80330)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_96CF8F91C9C6A4A2_OFFSET UNITYSDK_OFFSET(0x7C80270)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_9FF15493113A7B0C_OFFSET UNITYSDK_OFFSET(0x7C86F00)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_A152E4019DFC6B03_OFFSET UNITYSDK_OFFSET(0x7C77E30)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_A26FE467ACC99817_OFFSET UNITYSDK_OFFSET(0x7C86DD0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_A2733B4DBACFA5E8_OFFSET UNITYSDK_OFFSET(0x7C84160)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_A3CAAD00B71BFB18_OFFSET UNITYSDK_OFFSET(0x7C7A190)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x7C7BB60)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_A6EDAFC4AECAD138_OFFSET UNITYSDK_OFFSET(0x7C79310)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_AAD69C1FDF90A82C_OFFSET UNITYSDK_OFFSET(0x7C85BF0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x7C7AA30)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_AE168033B0E27C74_OFFSET UNITYSDK_OFFSET(0x7C7C800)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_B1438E750EBD53E1_OFFSET UNITYSDK_OFFSET(0x7C7AC50)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_B76E5FE3CE9BDF93_1_OFFSET UNITYSDK_OFFSET(0x7C86C60)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_B76E5FE3CE9BDF93_OFFSET UNITYSDK_OFFSET(0x7C85040)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_BEAE0A093C62A95B_OFFSET UNITYSDK_OFFSET(0x7C85EC0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_C16CB82DBE82BC4E_OFFSET UNITYSDK_OFFSET(0x7C843A0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_C1C2E943EE21761C_OFFSET UNITYSDK_OFFSET(0x7C86820)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_C2B5819477F73B7E_OFFSET UNITYSDK_OFFSET(0x7C83AD0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_C66F8C38FE9A0ADF_OFFSET UNITYSDK_OFFSET(0x7C85A60)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_CE3357F99AC5D697_OFFSET UNITYSDK_OFFSET(0x7C77DC0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0x7C80030)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_D6A7F05AEC159B79_OFFSET UNITYSDK_OFFSET(0x7C83710)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x7C7F4E0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_D7BC689FCBF85139_OFFSET UNITYSDK_OFFSET(0x7C80890)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_DCB41335CC9E7FBD_OFFSET UNITYSDK_OFFSET(0x7C7B1A0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_DCCCC0BCA742D290_OFFSET UNITYSDK_OFFSET(0x7C78B10)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x7C7C9D0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_DFE2F213AF3F696D_OFFSET UNITYSDK_OFFSET(0x7C86960)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_E0078F6C95D82674_OFFSET UNITYSDK_OFFSET(0x7C79030)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_E83F7689AC5B7231_OFFSET UNITYSDK_OFFSET(0x7C7C3E0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x7C78C00)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_EC923E76BE2DB794_OFFSET UNITYSDK_OFFSET(0x7C7F250)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_EE8E5F15C4E5FB20_OFFSET UNITYSDK_OFFSET(0x7C82B20)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_F1C870D01294DAF7_1_OFFSET UNITYSDK_OFFSET(0x7C846E0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0x7C79BB0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_F4A90CF2D1AD2D99_OFFSET UNITYSDK_OFFSET(0x7C83EA0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x7C83CA0)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_F67DB855542DD4C2_OFFSET UNITYSDK_OFFSET(0x7C85370)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_F88DB2783BB43746_OFFSET UNITYSDK_OFFSET(0x7C78120)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x7C7A780)
#define CLASS_1_3361C09B71BDB2D5_METHOD_1_FCD65F1D31C688F9_OFFSET UNITYSDK_OFFSET(0x7C83550)
#define CLASS_1_3361C09B71BDB2D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x7C77D20)

inline static constexpr unsigned int Class_1_3361C09B71BDB2D5_TypeDefinitionIndex = 57823;

class Class_1_3361C09B71BDB2D5 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3361C09B71BDB2D5_TypeDefinitionIndex)->GetStaticField(0x43730);
	}
	static ::Foundation::Coroutine::CoroutineHandle* StaticGet_Field_1_2()
	{
		return (::Foundation::Coroutine::CoroutineHandle*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3361C09B71BDB2D5_TypeDefinitionIndex)->GetStaticField(0x10D10);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3361C09B71BDB2D5_TypeDefinitionIndex)->GetStaticField(0x10D14);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x1; // 0x0
	// static const ::System::Boolean Field_1_5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_CE3357F99AC5D697(::System::String* a1, ::UnityEngine::LogType a2)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_CE3357F99AC5D697_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A152E4019DFC6B03()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_A152E4019DFC6B03_OFFSET))();
	}

	static ::System::Void Method_1_67886CD69FA03EA1(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Void(*)(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_67886CD69FA03EA1_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_446* Method_1_6284C5E2519D98CF(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_446*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_6284C5E2519D98CF_OFFSET))(a1);
	}

	static ::System::Void Method_1_8594010D6A57C9BB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_8594010D6A57C9BB_OFFSET))();
	}

	static ::System::String* Method_1_DCCCC0BCA742D290()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_DCCCC0BCA742D290_OFFSET))();
	}

	static ::System::Void Method_1_EB7282B6745B4611()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_EB7282B6745B4611_OFFSET))();
	}

	static ::System::Void Method_1_E0078F6C95D82674(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_E0078F6C95D82674_OFFSET))(a1);
	}

	static ::System::Void Method_1_A6EDAFC4AECAD138(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_A6EDAFC4AECAD138_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F1C870D01294DAF7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_F1C870D01294DAF7_OFFSET))();
	}

	static ::System::Void Method_1_2F045917300CBCEB(::System::String* a1, ::UnityEngine::LogType a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_2F045917300CBCEB_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_14553DD20FA83DC6(::System::Type* a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_14553DD20FA83DC6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_A3CAAD00B71BFB18(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::Enum_3_5430DDABF48F9EFB a3, ::System::Collections::Generic::HashSet_1<::System::String*>* a4, ::System::Collections::Generic::HashSet_1<::System::String*>* a5)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_A3CAAD00B71BFB18_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::Class_1_449B1BB2E3AA2D13* Method_1_1561BFA77991A03A()
	{
		return ((::Class_1_449B1BB2E3AA2D13*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_1561BFA77991A03A_OFFSET))();
	}

	static ::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_ACE888BF6F5BC5FD_OFFSET))();
	}

	static ::Class_2_208CC9941471731A_667* Method_1_8E71AE88E1D8BCD2()
	{
		return ((::Class_2_208CC9941471731A_667*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_8E71AE88E1D8BCD2_OFFSET))();
	}

	static ::System::Boolean Method_1_B1438E750EBD53E1(::System::Collections::Generic::List_1<::System::String*>* a1, ::Enum_3_5430DDABF48F9EFB a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::Enum_3_5430DDABF48F9EFB))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_B1438E750EBD53E1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_29CBB29A5323CADA(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Boolean(*)(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_29CBB29A5323CADA_OFFSET))(a1);
	}

	static ::System::Single Method_1_DCB41335CC9E7FBD()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_DCB41335CC9E7FBD_OFFSET))();
	}

	static ::System::Boolean Method_1_351A4C4D39156075(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_351A4C4D39156075_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_A6CE5DAA2387E1E2_OFFSET))();
	}

	static ::System::Boolean Method_1_8920C9E338EDC657(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_8920C9E338EDC657_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6E8208462322B8CB(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_6E8208462322B8CB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F88DB2783BB43746(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_F88DB2783BB43746_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_DD1EE3A48E307831_OFFSET))();
	}

	static ::System::Void Method_1_1832E29FF208A65E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_1832E29FF208A65E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6D1A13494426F371(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::MonoSpawnPoint*& a3, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::MonoSpawnPoint*&, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_6D1A13494426F371_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_34B74973E2FF3F92()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_34B74973E2FF3F92_OFFSET))();
	}

	static ::System::Boolean Method_1_10967FECA145C9BA(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::Class_1_3361C09B71BDB2D5_Struct_2_15A3FA519D8875C2& a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::Class_1_3361C09B71BDB2D5_Struct_2_15A3FA519D8875C2&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_10967FECA145C9BA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0DBA10B99702F726(::System::Type*& a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType& a2)
	{
		return ((::System::Boolean(*)(::System::Type*&, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_0DBA10B99702F726_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4FB755E597E7E869(::UnityEngine::GameObject* a1, ::Class_1_8C28E085C991E9A7* a2, ::Class_1_46FECA8E1D551D46_59* a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46_59*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_4FB755E597E7E869_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_537A827D67D6BC8C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_537A827D67D6BC8C_OFFSET))();
	}

	static ::System::Void Method_1_EC923E76BE2DB794(::Enum_3_FAE144EE9510F878 a1, ::System::String*& a2, ::System::String*& a3)
	{
		return ((::System::Void(*)(::Enum_3_FAE144EE9510F878, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_EC923E76BE2DB794_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_641329226D92B5B9(::System::UInt32 a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_641329226D92B5B9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_D7852DE078ACC1F1_OFFSET))();
	}

	static ::System::Void Method_1_7052FA2A4BCDA198(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Void(*)(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_7052FA2A4BCDA198_OFFSET))(a1);
	}

	static ::MoleMole::Battle::Entity* Method_1_81065543FC4015DF()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_81065543FC4015DF_OFFSET))();
	}

	static ::System::Void Method_1_61BE273A1DF4ABA4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_61BE273A1DF4ABA4_OFFSET))(a1);
	}

	static ::System::Void Method_1_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_D675670EA8F43CD1_OFFSET))(a1);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_96CF8F91C9C6A4A2(::System::Single a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_96CF8F91C9C6A4A2_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_92213E3DB09159E7(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_92213E3DB09159E7_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_5BAA4DE3DC40C57A(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_5BAA4DE3DC40C57A_OFFSET))(a1);
	}

	static ::System::Void Method_1_565AA3EF89C82663(::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F* a1)
	{
		return ((::System::Void(*)(::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_565AA3EF89C82663_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_07905DF18E34A6CC(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_07905DF18E34A6CC_OFFSET))(a1);
	}

	static ::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66 Method_1_2B2BF62F2A301B46()
	{
		return ((::Class_3_EA02B975BED3466B_Struct_2_B69C0DBD20A3CE66(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_2B2BF62F2A301B46_OFFSET))();
	}

	static ::System::Void Method_1_0AA7D45824F9789D(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA& a1)
	{
		return ((::System::Void(*)(::Class_1_3361C09B71BDB2D5_Struct_2_BF5E10E205D219DA&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_0AA7D45824F9789D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_EE8E5F15C4E5FB20(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_EE8E5F15C4E5FB20_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_3E606C14B0000AFA(::MoleMole::Config::SceneConfigRuntimeDataArea& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_3E606C14B0000AFA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_590662BA0A0EF3EC(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_590662BA0A0EF3EC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2F5AF86AF3904C2F(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_2F5AF86AF3904C2F_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_77683EB4B430433F(::Class_0_16E4307DCC419505_446* a1)
	{
		return ((::System::Int32(*)(::Class_0_16E4307DCC419505_446*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_77683EB4B430433F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6E3B47F8C443B00F(::MoleMole::MonoSpawnPoint* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_6E3B47F8C443B00F_OFFSET))(a1);
	}

	static ::System::Single Method_1_FCD65F1D31C688F9(::System::Boolean a1)
	{
		return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_FCD65F1D31C688F9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D6A7F05AEC159B79(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_D6A7F05AEC159B79_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C2B5819477F73B7E(::System::Int32 a1, ::Class_1_663AFC2250EC21C9* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Class_1_663AFC2250EC21C9*, ::System::Action_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_C2B5819477F73B7E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_F4DD08A31BA3F883_OFFSET))();
	}

	static ::MoleMole::Vector2Int Method_1_F4A90CF2D1AD2D99(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::MoleMole::Vector2Int(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_F4A90CF2D1AD2D99_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AE168033B0E27C74(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_AE168033B0E27C74_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A2733B4DBACFA5E8(::System::String* a1, ::System::UInt32 a2, ::MoleMole::Config::StageEntry* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_A2733B4DBACFA5E8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_2050A5829272D58F(::Class_1_3361C09B71BDB2D5_Enum_3_0A25083308CFA7F5& a1)
	{
		return ((::System::Boolean(*)(::Class_1_3361C09B71BDB2D5_Enum_3_0A25083308CFA7F5&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_2050A5829272D58F_OFFSET))(a1);
	}

	static ::System::Void Method_1_F1C870D01294DAF7_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_F1C870D01294DAF7_1_OFFSET))();
	}

	static ::System::Int32 Method_1_67011414F1571CD0(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_67011414F1571CD0_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_6BE7F2D0E26AB78D()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_6BE7F2D0E26AB78D_OFFSET))();
	}

	static ::System::Void Method_1_5D4975ACF7DFCF63(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_5D4975ACF7DFCF63_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B76E5FE3CE9BDF93(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_B76E5FE3CE9BDF93_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A41C63BFE58D26F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_4A41C63BFE58D26F_OFFSET))();
	}

	static ::System::Void Method_1_6C4480FF0EF892B6(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_6C4480FF0EF892B6_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_30DE355FB41B6A3E(::System::Int32 a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_30DE355FB41B6A3E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F67DB855542DD4C2(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_F67DB855542DD4C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_46FFE084A15C0C9E(::MoleMole::Config::InputGroup a1, ::Class_1_3361C09B71BDB2D5_Struct_2_87FF019AA8F8935A& a2)
	{
		return ((::System::Void(*)(::MoleMole::Config::InputGroup, ::Class_1_3361C09B71BDB2D5_Struct_2_87FF019AA8F8935A&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_46FFE084A15C0C9E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_5E2660F5FB3903C2(::MoleMole::Level::OverrideScenePerformDelayConfig& a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Level::OverrideScenePerformDelayConfig&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_5E2660F5FB3903C2_OFFSET))(a1);
	}

	static ::System::Void Method_1_C66F8C38FE9A0ADF(::System::Type* a1, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType a2)
	{
		return ((::System::Void(*)(::System::Type*, ::MoleMole::FlowCanvas::Nodes::EntityDieCheckType))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_C66F8C38FE9A0ADF_OFFSET))(a1, a2);
	}

	static ::Class_2_DB627EC47B0F0B11* Method_1_AAD69C1FDF90A82C()
	{
		return ((::Class_2_DB627EC47B0F0B11*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_AAD69C1FDF90A82C_OFFSET))();
	}

	static ::System::Int32 Method_1_BEAE0A093C62A95B(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_BEAE0A093C62A95B_OFFSET))(a1);
	}

	static ::System::Void Method_1_C16CB82DBE82BC4E(::UnityEngine::GameObject* a1, ::Class_1_8C28E085C991E9A7* a2, ::Class_1_46FECA8E1D551D46_59* a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_1_8C28E085C991E9A7*, ::Class_1_46FECA8E1D551D46_59*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_C16CB82DBE82BC4E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D7BC689FCBF85139(::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F* a1, ::System::String*& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::Class_1_3361C09B71BDB2D5_Class_1_51CA10D8796CFF9F*, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_D7BC689FCBF85139_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E83F7689AC5B7231(::System::Boolean a1, ::System::String* a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputGroup>*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_E83F7689AC5B7231_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_03DF2F822416454D(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::String*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_03DF2F822416454D_OFFSET))(a1, a2, a3);
	}

	static ::Foundation::Coroutine::CoroutineHandle Method_1_C1C2E943EE21761C(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_C1C2E943EE21761C_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_DFE2F213AF3F696D(::Class_2_131E282CCAEB876E* a1)
	{
		return ((::System::Void(*)(::Class_2_131E282CCAEB876E*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_DFE2F213AF3F696D_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_461D232A2E5A75CF(::UnityEngine::Vector3 a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_461D232A2E5A75CF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B76E5FE3CE9BDF93_1(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_B76E5FE3CE9BDF93_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_A26FE467ACC99817(::MoleMole::EntityHandle a1)
	{
		return ((::System::String*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_A26FE467ACC99817_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FF15493113A7B0C(::System::UInt32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3361C09B71BDB2D5_METHOD_1_9FF15493113A7B0C_OFFSET))(a1, a2, a3);
	}
};
