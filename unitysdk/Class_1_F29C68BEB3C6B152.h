#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F29C68BEB3C6B152_Struct_2_2ADB82C91F78DF57.h"
#include "unitysdk/Class_1_F29C68BEB3C6B152_Struct_2_A64CA595A4DF2DEC.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Enum_3_3EEBD34AD102DD3A.h"
#include "unitysdk/Enum_3_A843FEC42C53F62F.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/Struct_2_3AC35AAFD3FB9098.h"
#include "unitysdk/Struct_2_55B1720D3ECF0A32.h"
#include "unitysdk/Struct_2_9E4D1804C70A9D58.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_211;
class Class_0_16E4307DCC419505_288;
class Class_0_16E4307DCC419505_99;
class Class_1_5A585DEB704A07E2;
class Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF;
class Class_1_D16CCEE747C194BE;
class Class_2_A6AB361087DA8B6A;
class Class_2_A8F5ABF31E066ED4;
class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2_InitScrollViewData;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace MoleMole { class UIInputFieldEx_Class_1_640B090AA43C41B2; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
template <typename T> class Class_2_117F4DB20E1B394A;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0C93750B85E3D535_OFFSET UNITYSDK_OFFSET(0x7E8AA00)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0F476594413A4962_OFFSET UNITYSDK_OFFSET(0x7E81D90)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_1_OFFSET UNITYSDK_OFFSET(0x7E82D80)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_2_OFFSET UNITYSDK_OFFSET(0x7E838E0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_3_OFFSET UNITYSDK_OFFSET(0x7E85A80)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_4_OFFSET UNITYSDK_OFFSET(0x7E883B0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_5_OFFSET UNITYSDK_OFFSET(0x7E8A400)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_OFFSET UNITYSDK_OFFSET(0x7E826E0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_1102741556AA2A1B_OFFSET UNITYSDK_OFFSET(0x7E8D5B0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_198F9F75279E3EDF_OFFSET UNITYSDK_OFFSET(0x7E80490)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_1B71138A96E81884_OFFSET UNITYSDK_OFFSET(0x7E87830)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_25C4B63EDA150051_1_OFFSET UNITYSDK_OFFSET(0x7E8D290)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_25C4B63EDA150051_OFFSET UNITYSDK_OFFSET(0x7E8A0E0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_2F5DC333BDF12337_OFFSET UNITYSDK_OFFSET(0x7E88100)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_3AEF07FF50F1AD0A_OFFSET UNITYSDK_OFFSET(0x7E8ACB0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_3C78A6B93CA5BB57_OFFSET UNITYSDK_OFFSET(0x7E8C2B0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_40A0AB1605E3568E_OFFSET UNITYSDK_OFFSET(0x7E89DC0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_476DC764D88E47CB_OFFSET UNITYSDK_OFFSET(0x7E87960)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_494DBEF9FBD50B93_OFFSET UNITYSDK_OFFSET(0x7E81AE0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_522021106F5B629C_OFFSET UNITYSDK_OFFSET(0x7E83630)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_524BA1DDEBFCFAF5_OFFSET UNITYSDK_OFFSET(0x7E80FC0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x7E80430)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5C9321002D74B098_OFFSET UNITYSDK_OFFSET(0x7E84830)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_1_OFFSET UNITYSDK_OFFSET(0x7E85DD0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_2_OFFSET UNITYSDK_OFFSET(0x7E86080)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_3_OFFSET UNITYSDK_OFFSET(0x7E87580)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_4_OFFSET UNITYSDK_OFFSET(0x7E88D00)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_5_OFFSET UNITYSDK_OFFSET(0x7E88FB0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_6_OFFSET UNITYSDK_OFFSET(0x7E8C000)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_OFFSET UNITYSDK_OFFSET(0x7E83380)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5EBBB852C2D80B8B_OFFSET UNITYSDK_OFFSET(0x7E80800)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_5F3DA773D3733FA8_OFFSET UNITYSDK_OFFSET(0x7E88700)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_677524FD792F026A_OFFSET UNITYSDK_OFFSET(0x7E84B80)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_7AD04416CC7E1E94_OFFSET UNITYSDK_OFFSET(0x7E81420)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_812FA057981B7E87_OFFSET UNITYSDK_OFFSET(0x7E850A0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_84ED1DDEB59C963F_OFFSET UNITYSDK_OFFSET(0x7E83C30)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_88871DEF3952DD7C_OFFSET UNITYSDK_OFFSET(0x7E8CE80)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_896CE86B8FE542DE_OFFSET UNITYSDK_OFFSET(0x7E85370)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_90FE57470150B3B0_OFFSET UNITYSDK_OFFSET(0x7E89510)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_A15CE8A5145A7CC3_OFFSET UNITYSDK_OFFSET(0x7E87C10)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_1_OFFSET UNITYSDK_OFFSET(0x7E86680)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_2_OFFSET UNITYSDK_OFFSET(0x7E89260)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_3_OFFSET UNITYSDK_OFFSET(0x7E8A750)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_OFFSET UNITYSDK_OFFSET(0x7E84230)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_ABEE570509D3D829_OFFSET UNITYSDK_OFFSET(0x7E830D0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B147FDDE1EEE60DF_OFFSET UNITYSDK_OFFSET(0x7E8B6A0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_1_OFFSET UNITYSDK_OFFSET(0x7E82A30)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_2_OFFSET UNITYSDK_OFFSET(0x7E86330)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_3_OFFSET UNITYSDK_OFFSET(0x7E889B0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_4_OFFSET UNITYSDK_OFFSET(0x7E8B0F0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_OFFSET UNITYSDK_OFFSET(0x7E82040)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B6E7E4C573CAB765_OFFSET UNITYSDK_OFFSET(0x7E8AD70)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B7D94CC0DBAF1B82_1_OFFSET UNITYSDK_OFFSET(0x7E8C830)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_B7D94CC0DBAF1B82_OFFSET UNITYSDK_OFFSET(0x7E82390)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_BADCC565D6756631_OFFSET UNITYSDK_OFFSET(0x7E8DB70)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_BB554B6853214D47_OFFSET UNITYSDK_OFFSET(0x7E86DB0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_BC728D9C6EADD8A3_OFFSET UNITYSDK_OFFSET(0x7E80D60)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_BDAEF4E897509ACF_OFFSET UNITYSDK_OFFSET(0x7E844E0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_C6529344E3C01C3E_OFFSET UNITYSDK_OFFSET(0x7E89E30)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_1_OFFSET UNITYSDK_OFFSET(0x7E83F80)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_2_OFFSET UNITYSDK_OFFSET(0x7E89B10)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_3_OFFSET UNITYSDK_OFFSET(0x7E8BD50)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_4_OFFSET UNITYSDK_OFFSET(0x7E8D8C0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_OFFSET UNITYSDK_OFFSET(0x7E81830)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_C899F5A069F96EC7_OFFSET UNITYSDK_OFFSET(0x7E8B9F0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_CB2F51C95C8B74A5_OFFSET UNITYSDK_OFFSET(0x7E8AEA0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_CDDD3C52CCBCDE4F_OFFSET UNITYSDK_OFFSET(0x7E8CB80)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_D1CB08B3D1B9609F_OFFSET UNITYSDK_OFFSET(0x7E897C0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_DB4578BA50B8EC6C_OFFSET UNITYSDK_OFFSET(0x7E85620)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_DC4AADDE4E00FB1B_OFFSET UNITYSDK_OFFSET(0x7E84E50)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_DEE1D8179099958D_OFFSET UNITYSDK_OFFSET(0x7E8B980)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_E04192750D8983DA_OFFSET UNITYSDK_OFFSET(0x7E80AB0)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_E6C369E44021033F_OFFSET UNITYSDK_OFFSET(0x7E8B440)
#define CLASS_1_F29C68BEB3C6B152_METHOD_1_E918AF165D5F7503_OFFSET UNITYSDK_OFFSET(0x7E86930)
#define CLASS_1_F29C68BEB3C6B152__CCTOR_OFFSET UNITYSDK_OFFSET(0x7E803D0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_TypeDefinitionIndex = 75405;

class Class_1_F29C68BEB3C6B152 : public ::System::Object
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_198F9F75279E3EDF(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::System::Func_1<::System::Boolean>* a4, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* a5, ::System::Func_1<::System::Boolean>* a6, ::Class_2_E87F1D15F1D4AC72* a7, ::System::Action_1<::System::Action*>* a8)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::System::Func_1<::System::Boolean>*, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback*, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_198F9F75279E3EDF_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_5EBBB852C2D80B8B(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::Foundation::AssetPath>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::Foundation::AssetPath>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5EBBB852C2D80B8B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E04192750D8983DA(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Object*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Object*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_E04192750D8983DA_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BC728D9C6EADD8A3(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Int64>* a3, ::Class_2_E87F1D15F1D4AC72* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Int64>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_BC728D9C6EADD8A3_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_1_524BA1DDEBFCFAF5(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_524BA1DDEBFCFAF5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_7AD04416CC7E1E94(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_7AD04416CC7E1E94_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_C6CA7A83C4F9D3DE(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Single>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Single>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_494DBEF9FBD50B93(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::TimeSpan>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::TimeSpan>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_494DBEF9FBD50B93_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0F476594413A4962(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0F476594413A4962_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B54F17EBB63F6F9E(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector3>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector3>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B7D94CC0DBAF1B82(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Quaternion>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Quaternion>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B7D94CC0DBAF1B82_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0F5DC1CD3AB7CA1B(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector2>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector2>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B54F17EBB63F6F9E_1(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector3>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector3>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0F5DC1CD3AB7CA1B_1(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector2>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector2>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_ABEE570509D3D829(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Int32>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Int32>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_ABEE570509D3D829_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E19A078A613B958(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_522021106F5B629C(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::Struct_2_55B1720D3ECF0A32>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::Struct_2_55B1720D3ECF0A32>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_522021106F5B629C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0F5DC1CD3AB7CA1B_2(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector2>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector2>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_84ED1DDEB59C963F(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_84ED1DDEB59C963F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_C6CA7A83C4F9D3DE_1(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Single>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Single>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AA12B15B8B10381B(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BDAEF4E897509ACF(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_BDAEF4E897509ACF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5C9321002D74B098(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Rect>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Rect>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5C9321002D74B098_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_677524FD792F026A(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Int32>* a3, ::System::Action_1<::System::Int32>* a4, ::Class_2_E87F1D15F1D4AC72* a5, ::System::Func_2<::System::Int32, ::System::Boolean>* a6, ::System::Boolean a7, ::System::Func_2<::System::Int32, ::System::String*>* a8, ::System::Func_1<::System::Int32>* a9, ::System::Func_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>* a10)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Int32>*, ::System::Action_1<::System::Int32>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Boolean, ::System::Func_2<::System::Int32, ::System::String*>*, ::System::Func_1<::System::Int32>*, ::System::Func_2<::System::Int32, ::Class_1_5A585DEB704A07E2*>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_677524FD792F026A_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_1_DC4AADDE4E00FB1B(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Int64>* a3, ::Class_2_E87F1D15F1D4AC72* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Int64>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_DC4AADDE4E00FB1B_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_812FA057981B7E87(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Int64>* a3, ::Class_2_E87F1D15F1D4AC72* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Int64>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_812FA057981B7E87_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_896CE86B8FE542DE(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::RenderTexture*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::RenderTexture*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_896CE86B8FE542DE_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_1_DB4578BA50B8EC6C(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_DB4578BA50B8EC6C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0F5DC1CD3AB7CA1B_3(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector2>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector2>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E19A078A613B958_1(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E19A078A613B958_2(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B54F17EBB63F6F9E_2(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector3>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector3>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AA12B15B8B10381B_1(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_1_E918AF165D5F7503(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Collections::IEnumerable*>* a3, ::System::Func_1<::MonoUITableScrollV2_InitScrollViewData*>* a4, ::Class_2_E87F1D15F1D4AC72* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Collections::IEnumerable*>*, ::System::Func_1<::MonoUITableScrollV2_InitScrollViewData*>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_E918AF165D5F7503_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_BB554B6853214D47(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Events::UnityAction*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Events::UnityAction*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_BB554B6853214D47_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E19A078A613B958_3(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_1_1B71138A96E81884(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_1B71138A96E81884_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_476DC764D88E47CB(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::Il2CppArray<::System::Object*>*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::Il2CppArray<::System::Object*>*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_476DC764D88E47CB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_A15CE8A5145A7CC3(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Single>* a3, ::UnityEngine::Events::UnityAction_1<::System::Single>* a4, ::Class_2_E87F1D15F1D4AC72* a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Single>*, ::UnityEngine::Events::UnityAction_1<::System::Single>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_A15CE8A5145A7CC3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_2F5DC333BDF12337(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector2>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector2>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_2F5DC333BDF12337_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0F5DC1CD3AB7CA1B_4(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector2>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector2>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5F3DA773D3733FA8(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5F3DA773D3733FA8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_B54F17EBB63F6F9E_3(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector3>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector3>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E19A078A613B958_4(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E19A078A613B958_5(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AA12B15B8B10381B_2(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_90FE57470150B3B0(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::ValueTuple_2<::System::Object*, ::System::Object*>>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::ValueTuple_2<::System::Object*, ::System::Object*>>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_90FE57470150B3B0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D1CB08B3D1B9609F(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::Class_1_5A585DEB704A07E2*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::Class_1_5A585DEB704A07E2*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_D1CB08B3D1B9609F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_C6CA7A83C4F9D3DE_2(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Single>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Single>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_2_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::System::Object*>* Method_1_40A0AB1605E3568E(::Class_0_16E4307DCC419505_288* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::Class_0_16E4307DCC419505_288*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_40A0AB1605E3568E_OFFSET))(a1, a2);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_1_C6529344E3C01C3E(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Int32 a3, ::System::Func_1<::System::Single>* a4, ::Class_2_E87F1D15F1D4AC72* a5)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Int32, ::System::Func_1<::System::Single>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_C6529344E3C01C3E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_25C4B63EDA150051(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_1_F29C68BEB3C6B152_Struct_2_2ADB82C91F78DF57<::Class_2_A8F5ABF31E066ED4*, ::System::String*> a4, ::Class_2_E87F1D15F1D4AC72* a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_1_F29C68BEB3C6B152_Struct_2_2ADB82C91F78DF57<::Class_2_A8F5ABF31E066ED4*, ::System::String*>, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_25C4B63EDA150051_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_0F5DC1CD3AB7CA1B_5(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector2>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector2>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0F5DC1CD3AB7CA1B_5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AA12B15B8B10381B_3(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Boolean>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_AA12B15B8B10381B_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0C93750B85E3D535(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Texture*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Texture*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_0C93750B85E3D535_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_3AEF07FF50F1AD0A(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_3AEF07FF50F1AD0A_OFFSET))(a1, a2);
	}

	static ::MonoUITableScrollV2_InitScrollViewData* Method_1_B6E7E4C573CAB765(::System::Func_1<::MonoUITableScrollV2_InitScrollViewData*>* a1)
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::System::Func_1<::MonoUITableScrollV2_InitScrollViewData*>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B6E7E4C573CAB765_OFFSET))(a1);
	}

	static ::System::Void Method_1_CB2F51C95C8B74A5(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::MoleMole::UIInputFieldEx_Class_1_640B090AA43C41B2* a4, ::Class_2_E87F1D15F1D4AC72* a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::MoleMole::UIInputFieldEx_Class_1_640B090AA43C41B2*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_CB2F51C95C8B74A5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_B54F17EBB63F6F9E_4(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Vector3>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Vector3>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B54F17EBB63F6F9E_4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_E6C369E44021033F(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::DateTime>* a3, ::Class_2_E87F1D15F1D4AC72* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::DateTime>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_E6C369E44021033F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_B147FDDE1EEE60DF(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::Class_1_D16CCEE747C194BE* a3, ::Foundation::Coroutine::CoroutineHandle a4, ::System::String* a5, ::System::String* a6, ::System::Func_1<::System::Boolean>* a7, ::Class_2_E87F1D15F1D4AC72* a8, ::System::Action* a9, ::System::Action* a10)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::Class_1_D16CCEE747C194BE*, ::Foundation::Coroutine::CoroutineHandle, ::System::String*, ::System::String*, ::System::Func_1<::System::Boolean>*, ::Class_2_E87F1D15F1D4AC72*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B147FDDE1EEE60DF_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_1_DEE1D8179099958D(::Class_0_16E4307DCC419505_99* a1, ::Class_0_16E4307DCC419505_288* a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_99*, ::Class_0_16E4307DCC419505_288*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_DEE1D8179099958D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C899F5A069F96EC7(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::Il2CppArray<::Struct_2_037D21AC29ED1130>*>* a3, ::Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF* a4, ::Class_2_E87F1D15F1D4AC72* a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::Il2CppArray<::Struct_2_037D21AC29ED1130>*>*, ::Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_C899F5A069F96EC7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_C6CA7A83C4F9D3DE_3(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Single>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Single>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_5E19A078A613B958_6(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_5E19A078A613B958_6_OFFSET))(a1, a2, a3, a4);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_1_3C78A6B93CA5BB57(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>* a3, ::System::Func_1<::UnityEngine::Color>* a4, ::Class_2_E87F1D15F1D4AC72* a5)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>*, ::System::Func_1<::UnityEngine::Color>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_3C78A6B93CA5BB57_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_B7D94CC0DBAF1B82_1(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Quaternion>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Quaternion>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_B7D94CC0DBAF1B82_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_CDDD3C52CCBCDE4F(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::Enum_3_A843FEC42C53F62F>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::Enum_3_A843FEC42C53F62F>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_CDDD3C52CCBCDE4F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_88871DEF3952DD7C(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::Color>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::Color>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_88871DEF3952DD7C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_25C4B63EDA150051_1(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::String*>* a3, ::Class_1_F29C68BEB3C6B152_Struct_2_2ADB82C91F78DF57<::Class_2_A8F5ABF31E066ED4*, ::System::String*> a4, ::Class_2_E87F1D15F1D4AC72* a5)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::String*>*, ::Class_1_F29C68BEB3C6B152_Struct_2_2ADB82C91F78DF57<::Class_2_A8F5ABF31E066ED4*, ::System::String*>, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_25C4B63EDA150051_1_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Struct_2_3AC35AAFD3FB9098 Method_1_1102741556AA2A1B(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::UnityEngine::RenderTexture*>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::Struct_2_3AC35AAFD3FB9098(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::UnityEngine::RenderTexture*>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_1102741556AA2A1B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_C6CA7A83C4F9D3DE_4(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Single>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Single>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_C6CA7A83C4F9D3DE_4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_BADCC565D6756631(::Class_0_16E4307DCC419505_288* a1, ::Struct_2_9E4D1804C70A9D58 a2, ::System::Func_1<::System::Int32>* a3, ::Class_2_E87F1D15F1D4AC72* a4)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_288*, ::Struct_2_9E4D1804C70A9D58, ::System::Func_1<::System::Int32>*, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_METHOD_1_BADCC565D6756631_OFFSET))(a1, a2, a3, a4);
	}
};
