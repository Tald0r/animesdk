#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_53C4A418F34F74D8.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_123875B2534320A6.h"
#include "unitysdk/Struct_2_123875B2534320A6_1.h"
#include "unitysdk/Struct_2_481F6D7AAA863B81.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_A3F7BC7FD0AC1E07.h"
#include "unitysdk/Struct_2_D33D0AE8392D3507.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4607478F1715A9C5;
class Class_2_208CC9941471731A_589;
class Class_2_9218549D1694BC30;
class Class_2_E87F1D15F1D4AC72;
class Class_3_741584FEDFF5626E;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapTipsWidgetContext; }
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace MoleMole { class UIUrbanMapTrackLineWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
template <typename T> class Class_1_A599CE44492C337E;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_176E5E1390CC2238;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_07C3B4CD746D0094_OFFSET UNITYSDK_OFFSET(0xD402650)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xD3FDF40)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_09A10F5CD917CB8F_OFFSET UNITYSDK_OFFSET(0xD403010)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_16B488170D32AF97_OFFSET UNITYSDK_OFFSET(0xD4052B0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_175035196F449D0A_OFFSET UNITYSDK_OFFSET(0xD4058F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_1FC523838C3A74E5_OFFSET UNITYSDK_OFFSET(0xD405F50)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_205FCFCBFB3098E1_OFFSET UNITYSDK_OFFSET(0xD406450)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xD403620)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_218124418542E081_1_OFFSET UNITYSDK_OFFSET(0xD3FD730)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xD3FE620)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_231271F13D143870_OFFSET UNITYSDK_OFFSET(0xD4016F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_28CDE848BF95DAB3_OFFSET UNITYSDK_OFFSET(0xD408B80)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_2E9EFD1763526B05_OFFSET UNITYSDK_OFFSET(0xD407040)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_2FA8AE0519AC7829_OFFSET UNITYSDK_OFFSET(0xD3FFA40)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0xD407930)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xD405E90)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_359A6F5C494EC4E5_OFFSET UNITYSDK_OFFSET(0xD400F40)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_3FA063706A9B5149_OFFSET UNITYSDK_OFFSET(0xD401C80)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_46E464B1FA51D940_OFFSET UNITYSDK_OFFSET(0xD406190)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_46FFE04A5E846C9B_OFFSET UNITYSDK_OFFSET(0xD3FFAD0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_4CC5BAAA778833CF_OFFSET UNITYSDK_OFFSET(0xD406470)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xD4050E0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_56BA5CEFEEB68B8A_OFFSET UNITYSDK_OFFSET(0xD4079F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_598C6DD2D3DB23F2_OFFSET UNITYSDK_OFFSET(0xD401D20)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_5FBC2977DD78869F_OFFSET UNITYSDK_OFFSET(0xD408730)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_63D78E6C7F375280_OFFSET UNITYSDK_OFFSET(0xD405BD0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_6CFD22B968B0A2E3_OFFSET UNITYSDK_OFFSET(0xD4041B0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_755965B27CDB8C90_OFFSET UNITYSDK_OFFSET(0xD405690)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_77EAEB3D581FD7E6_1_OFFSET UNITYSDK_OFFSET(0xD408EB0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_77EAEB3D581FD7E6_OFFSET UNITYSDK_OFFSET(0xD407D60)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0xD3FE0D0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_80BBB1FFBF365A2A_OFFSET UNITYSDK_OFFSET(0xD3FF7F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_81A65754D2A235D3_1_OFFSET UNITYSDK_OFFSET(0xD407300)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_81A65754D2A235D3_2_OFFSET UNITYSDK_OFFSET(0xD4073F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_81A65754D2A235D3_OFFSET UNITYSDK_OFFSET(0xD404030)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_835758B171E01A6B_OFFSET UNITYSDK_OFFSET(0xD400D70)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0xD407CB0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_8BA81D51FB5D5B30_OFFSET UNITYSDK_OFFSET(0xD407DF0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_929DC6D8504DF87F_OFFSET UNITYSDK_OFFSET(0xD405380)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xD405870)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_9B8236C527B615FB_OFFSET UNITYSDK_OFFSET(0xD407750)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_9C25FD4285D1083E_OFFSET UNITYSDK_OFFSET(0xD406F10)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_A02C76FFB23049FF_OFFSET UNITYSDK_OFFSET(0xD401FC0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_A7C25C16DAF12EC1_OFFSET UNITYSDK_OFFSET(0xD403FE0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_AA8842B4A0F4BF24_OFFSET UNITYSDK_OFFSET(0xD3FB670)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0xD406580)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0xD401FE0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0xD408920)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD408C40)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0xD3FF200)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_B323CF4F69346A00_OFFSET UNITYSDK_OFFSET(0xD400600)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_BA730A19C3B8592B_OFFSET UNITYSDK_OFFSET(0xD401A90)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_BA937D14413CE9EE_OFFSET UNITYSDK_OFFSET(0xD4075F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0xD4075B0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_C33F9406BD4BFD80_OFFSET UNITYSDK_OFFSET(0xD407430)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_C3E26052CEADC154_OFFSET UNITYSDK_OFFSET(0xD404550)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0xD4043A0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD4076F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_D2DA768232E640DF_1_OFFSET UNITYSDK_OFFSET(0xD408AF0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_D2DA768232E640DF_2_OFFSET UNITYSDK_OFFSET(0xD408E20)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_D2DA768232E640DF_OFFSET UNITYSDK_OFFSET(0xD405A80)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_D3EF145E4576EB1F_OFFSET UNITYSDK_OFFSET(0xD407C10)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_D4AEDB417940881D_OFFSET UNITYSDK_OFFSET(0xD4081D0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_D5F78A2C54C5CA9E_OFFSET UNITYSDK_OFFSET(0xD406B40)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0xD404940)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_1_OFFSET UNITYSDK_OFFSET(0xD404120)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_2_OFFSET UNITYSDK_OFFSET(0xD406AB0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_3_OFFSET UNITYSDK_OFFSET(0xD408BB0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_OFFSET UNITYSDK_OFFSET(0xD3FF5C0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0xD3FDE70)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_F0D278B2857F2749_OFFSET UNITYSDK_OFFSET(0xD3FF650)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xD404370)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_F8A71B377ABC5C71_OFFSET UNITYSDK_OFFSET(0xD4049F0)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_FCE335EF021BB35D_OFFSET UNITYSDK_OFFSET(0xD405860)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0xD405B10)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET UNITYSDK_OFFSET(0xD407340)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET UNITYSDK_OFFSET(0xD408830)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET UNITYSDK_OFFSET(0xD408D50)
#define CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0xD404070)
#define CLASS_2_CA5AE22C0A4482A2__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3FF1B0)
#define CLASS_2_CA5AE22C0A4482A2__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FED60)

inline static constexpr unsigned int Class_2_CA5AE22C0A4482A2_TypeDefinitionIndex = 55446;

class Class_2_CA5AE22C0A4482A2 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	static ::System::String** StaticGet_Field_2_23()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA5AE22C0A4482A2_TypeDefinitionIndex)->GetStaticField(0x291C0);
	}
	static ::System::String** StaticGet_Field_2_22()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA5AE22C0A4482A2_TypeDefinitionIndex)->GetStaticField(0x291C8);
	}
	// static const ::System::Single Field_2_34; // 0x0
	::Class_2_75527B5277EE1A90<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*>* Field_2_18; // 0x50
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_27; // 0x58
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_29; // 0x60
	::Class_2_75527B5277EE1A90<::Struct_2_123875B2534320A6>* Field_2_11; // 0x68
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_30; // 0x70
	::Struct_2_49ABC235CB23B56F Field_2_36; // 0x78
	::System::Collections::Generic::List_1<::Struct_2_123875B2534320A6_1>* Field_2_31; // 0x88
	::System::Threading::CancellationTokenSource* Field_2_6; // 0x90
	::Class_2_75527B5277EE1A90<::Foundation::AssetPath>* Field_2_10; // 0x98
	::Class_2_75527B5277EE1A90<::Struct_2_481F6D7AAA863B81>* Field_2_12; // 0xA0
	::Class_1_4607478F1715A9C5* Field_2_20; // 0xA8
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapTipsWidgetContext*>* Field_2_9; // 0xB0
	::Class_2_75527B5277EE1A90<::UnityEngine::Vector2>* Field_2_14; // 0xB8
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_2_16; // 0xC0
	::Class_2_75527B5277EE1A90<::Struct_2_A3F7BC7FD0AC1E07>* Field_2_13; // 0xC8
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_2; // 0xD0
	::Class_2_75527B5277EE1A90<::UnityEngine::Rect>* Field_2_15; // 0xD8
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_8; // 0xE0
	::System::Comparison_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_26; // 0xE8
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_32; // 0xF0
	::System::Collections::Generic::List_1<::Enum_3_53C4A418F34F74D8>* Field_2_0; // 0xF8
	::Class_1_A599CE44492C337E<::UnityEngine::Texture2D*>* Field_2_21; // 0x100
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_7; // 0x108
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetController*>* Field_2_4; // 0x110
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_28; // 0x118
	::Class_2_176E5E1390CC2238<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_19; // 0x120
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_33; // 0x128
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x130
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Field_2_5; // 0x138
	::UnityEngine::Vector2 Field_2_24; // 0x140
	::System::Boolean Field_2_17; // 0x148
	::System::Boolean Field_2_3; // 0x149
	::System::Single Field_2_35; // 0x14C
	::UnityEngine::Vector2 Field_2_25; // 0x150

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2__CCTOR_OFFSET))();
	}

	::System::Void Method_2_AA8842B4A0F4BF24(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_AA8842B4A0F4BF24_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F0D278B2857F2749()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_F0D278B2857F2749_OFFSET))(this);
	}

	::System::Void Method_2_DBAB84A34989917E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_OFFSET))(this, a1);
	}

	::System::Void Method_2_80BBB1FFBF365A2A(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_80BBB1FFBF365A2A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_46FFE04A5E846C9B()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_46FFE04A5E846C9B_OFFSET))(this);
	}

	::Class_2_9218549D1694BC30* Method_2_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_9218549D1694BC30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_E97AC7B8F06B8C3E_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_2_2FA8AE0519AC7829()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_2FA8AE0519AC7829_OFFSET))(this);
	}

	::System::Void Method_2_BA730A19C3B8592B(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_BA730A19C3B8592B_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_2_3FA063706A9B5149()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_3FA063706A9B5149_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Method_2_598C6DD2D3DB23F2()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_598C6DD2D3DB23F2_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_A7C25C16DAF12EC1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_A7C25C16DAF12EC1_OFFSET))(this);
	}

	::UnityEngine::Rect Method_2_81A65754D2A235D3()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_81A65754D2A235D3_OFFSET))(this);
	}

	::System::Void Method_2_218124418542E081_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_218124418542E081_1_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_2_DBAB84A34989917E_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CFD22B968B0A2E3(::MoleMole::UIUrbanMapTipsWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapTipsWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_6CFD22B968B0A2E3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_231271F13D143870(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_231271F13D143870_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::Struct_2_123875B2534320A6 Method_2_C3E26052CEADC154()
	{
		return ((::Struct_2_123875B2534320A6(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_C3E26052CEADC154_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Method_2_16B488170D32AF97()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_16B488170D32AF97_OFFSET))(this);
	}

	::System::Void Method_2_09A10F5CD917CB8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_09A10F5CD917CB8F_OFFSET))(this);
	}

	::System::Void Method_2_755965B27CDB8C90(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_755965B27CDB8C90_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>* Method_2_FCE335EF021BB35D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_FCE335EF021BB35D_OFFSET))(this);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_175035196F449D0A()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_175035196F449D0A_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_2_D2DA768232E640DF()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_D2DA768232E640DF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_63D78E6C7F375280()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_63D78E6C7F375280_OFFSET))(this);
	}

	::System::Boolean Method_2_A02C76FFB23049FF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_A02C76FFB23049FF_OFFSET))(this);
	}

	::System::Boolean Method_2_835758B171E01A6B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_835758B171E01A6B_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_2157CED3CDDF8996_OFFSET))(this);
	}

	static ::System::Int32 Method_2_46E464B1FA51D940(::MoleMole::UIUrbanMapPointWidgetContext* a1, ::MoleMole::UIUrbanMapPointWidgetContext* a2)
	{
		return ((::System::Int32(*)(::MoleMole::UIUrbanMapPointWidgetContext*, ::MoleMole::UIUrbanMapPointWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_46E464B1FA51D940_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_205FCFCBFB3098E1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_205FCFCBFB3098E1_OFFSET))(this);
	}

	::System::Void Method_2_07C3B4CD746D0094(::Class_3_741584FEDFF5626E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_741584FEDFF5626E*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_07C3B4CD746D0094_OFFSET))(this, a1);
	}

	::System::Void Method_2_4CC5BAAA778833CF(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_4CC5BAAA778833CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_F8A71B377ABC5C71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_F8A71B377ABC5C71_OFFSET))(this, a1);
	}

	::System::Void Method_2_DBAB84A34989917E_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_2_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_589* Method_2_929DC6D8504DF87F(::Struct_2_D33D0AE8392D3507 a1)
	{
		return ((::Class_2_208CC9941471731A_589*(*)(::PVOID, ::Struct_2_D33D0AE8392D3507))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_929DC6D8504DF87F_OFFSET))(this, a1);
	}

	::Struct_2_A3F7BC7FD0AC1E07 Method_2_D5F78A2C54C5CA9E()
	{
		return ((::Struct_2_A3F7BC7FD0AC1E07(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_D5F78A2C54C5CA9E_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_2_9C25FD4285D1083E()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_9C25FD4285D1083E_OFFSET))(this);
	}

	::System::Boolean Method_2_2E9EFD1763526B05(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_2E9EFD1763526B05_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_81A65754D2A235D3_1()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_81A65754D2A235D3_1_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_589* Method_2_1FC523838C3A74E5(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_589*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_1FC523838C3A74E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_2()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_2_OFFSET))(this);
	}

	::UnityEngine::Rect Method_2_81A65754D2A235D3_2()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_81A65754D2A235D3_2_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C33F9406BD4BFD80()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_C33F9406BD4BFD80_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_BA937D14413CE9EE(::Class_3_741584FEDFF5626E* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_3_741584FEDFF5626E*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_BA937D14413CE9EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_9B8236C527B615FB()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_9B8236C527B615FB_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_30D1209326FA87FC_1_OFFSET))(this);
	}

	::UnityEngine::Rect Method_2_56BA5CEFEEB68B8A()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_56BA5CEFEEB68B8A_OFFSET))(this);
	}

	::System::Void Method_2_D3EF145E4576EB1F(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_D3EF145E4576EB1F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_2_77EAEB3D581FD7E6(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_77EAEB3D581FD7E6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8BA81D51FB5D5B30()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_8BA81D51FB5D5B30_OFFSET))(this);
	}

	::Struct_2_481F6D7AAA863B81 Method_2_D4AEDB417940881D()
	{
		return ((::Struct_2_481F6D7AAA863B81(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_D4AEDB417940881D_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*> Method_2_5FBC2977DD78869F()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_5FBC2977DD78869F_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_3()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_3_OFFSET))(this);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_2_D2DA768232E640DF_1()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_D2DA768232E640DF_1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_2_28CDE848BF95DAB3()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_28CDE848BF95DAB3_OFFSET))(this);
	}

	::System::Void Method_2_DBAB84A34989917E_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_DBAB84A34989917E_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_FE4FFF99CBDC5C59_4()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_FE4FFF99CBDC5C59_4_OFFSET))(this);
	}

	::System::Boolean Method_2_B323CF4F69346A00(::MoleMole::UIUrbanMapPointWidgetContext* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapPointWidgetContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_B323CF4F69346A00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_359A6F5C494EC4E5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_359A6F5C494EC4E5_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_2_D2DA768232E640DF_2()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_D2DA768232E640DF_2_OFFSET))(this);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}

	::System::Void Method_2_77EAEB3D581FD7E6_1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_CA5AE22C0A4482A2_METHOD_2_77EAEB3D581FD7E6_1_OFFSET))(this, a1);
	}
};
