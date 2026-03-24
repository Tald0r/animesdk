#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40.h"
#include "unitysdk/Class_2_881F44A56E8F619F_Struct_2_DD67BB6E8718D56B.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_6AB58C5477BF48DC.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_170;
class Class_1_546C6222FBEA4460;
class Class_1_9F79166E94E6BD41;
class Class_1_A93187421020321F;
class Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384;
class Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8;
class Class_2_9F4F3B1678689337;
class Class_2_E87F1D15F1D4AC72;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class Mono2dMapData; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITwoDMapElement_Data; }
namespace MoleMole { class UITwoDMapElement_UIController; }
namespace MoleMole { class UIUrbanMap3DModelContext; }
namespace MoleMole { class UIUrbanMap3DModelController; }
namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace MoleMole { class UIUrbanMapLeftTastListRow01Context; }
namespace MoleMole { class UIUrbanMapLeftTastListRow03Context; }
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPlayerMoveChildWindowController; }
namespace MoleMole { class UIUrbanMapPointGroupWidgetContext; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole { class UIUrbanMapRightTastListWidget01Context; }
namespace MoleMole { class UIUrbanMapRightTastListWidget01WidgetController; }
namespace MoleMole { class UIUrbanMapRightTastListWidget02WidgetContext; }
namespace MoleMole { class UIUrbanMapRightWidgetController; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
template <typename T> class Class_0_16E4307DCC41950C_15;
template <typename T> class Class_1_859934EE40ACBAD7;
template <typename T> class Class_1_A599CE44492C337E;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_2BD3078077E999CE;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_881F44A56E8F619F_METHOD_2_014328CA0342BEDB_OFFSET UNITYSDK_OFFSET(0x7773DF0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_0341222A0A38D423_OFFSET UNITYSDK_OFFSET(0xBC97E60)
#define CLASS_2_881F44A56E8F619F_METHOD_2_0DCB6C51FF28DD4F_OFFSET UNITYSDK_OFFSET(0xBCAF770)
#define CLASS_2_881F44A56E8F619F_METHOD_2_0E6FB3BEA5214C04_OFFSET UNITYSDK_OFFSET(0xBCABCB0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_0E8CF60D9B875D7C_OFFSET UNITYSDK_OFFSET(0x777A5A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_10475D7EAA1757C7_OFFSET UNITYSDK_OFFSET(0xBCAE1E0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_13016C9261D97AA7_1_OFFSET UNITYSDK_OFFSET(0x7777200)
#define CLASS_2_881F44A56E8F619F_METHOD_2_13016C9261D97AA7_OFFSET UNITYSDK_OFFSET(0xBCA6390)
#define CLASS_2_881F44A56E8F619F_METHOD_2_1D99764F6C04B184_1_OFFSET UNITYSDK_OFFSET(0xBCA2F20)
#define CLASS_2_881F44A56E8F619F_METHOD_2_1D99764F6C04B184_2_OFFSET UNITYSDK_OFFSET(0xBC9C740)
#define CLASS_2_881F44A56E8F619F_METHOD_2_1D99764F6C04B184_OFFSET UNITYSDK_OFFSET(0xBCA1DE0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_1E272429750EB125_OFFSET UNITYSDK_OFFSET(0xBC9F500)
#define CLASS_2_881F44A56E8F619F_METHOD_2_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0xBC9C250)
#define CLASS_2_881F44A56E8F619F_METHOD_2_24100673428B8A0D_OFFSET UNITYSDK_OFFSET(0xBCA0EB0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_2A79FEEA1B27A363_OFFSET UNITYSDK_OFFSET(0x7777500)
#define CLASS_2_881F44A56E8F619F_METHOD_2_2D99C5C12FED3D73_OFFSET UNITYSDK_OFFSET(0xBC9B4D0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_2E460FE07C629FEA_OFFSET UNITYSDK_OFFSET(0xBC98F80)
#define CLASS_2_881F44A56E8F619F_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x77772A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_34C0DD5A89B19ED2_OFFSET UNITYSDK_OFFSET(0xBCA82E0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_37791546E860A1D8_OFFSET UNITYSDK_OFFSET(0xBC9F1D0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_3A2C6E86C0517B01_OFFSET UNITYSDK_OFFSET(0xBCACB40)
#define CLASS_2_881F44A56E8F619F_METHOD_2_3C538C351D0A471D_OFFSET UNITYSDK_OFFSET(0xBC9EBB0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xBCA2000)
#define CLASS_2_881F44A56E8F619F_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBCA1C10)
#define CLASS_2_881F44A56E8F619F_METHOD_2_44D8069865A4CD22_1_OFFSET UNITYSDK_OFFSET(0xBCAF5E0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_44D8069865A4CD22_OFFSET UNITYSDK_OFFSET(0xBC9D010)
#define CLASS_2_881F44A56E8F619F_METHOD_2_45E3A8DB3F6EE47B_OFFSET UNITYSDK_OFFSET(0xBCAED60)
#define CLASS_2_881F44A56E8F619F_METHOD_2_47E64F3744791F19_OFFSET UNITYSDK_OFFSET(0xBC9D580)
#define CLASS_2_881F44A56E8F619F_METHOD_2_47F503D7F0768C4A_OFFSET UNITYSDK_OFFSET(0x7775790)
#define CLASS_2_881F44A56E8F619F_METHOD_2_49C57EA4FD3E5C80_OFFSET UNITYSDK_OFFSET(0xBC9B350)
#define CLASS_2_881F44A56E8F619F_METHOD_2_4DA6D4A624E42CAB_1_OFFSET UNITYSDK_OFFSET(0xBCAFD30)
#define CLASS_2_881F44A56E8F619F_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xBCA4260)
#define CLASS_2_881F44A56E8F619F_METHOD_2_53633B6535FE4F62_OFFSET UNITYSDK_OFFSET(0xBC999E0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_58C2EFBCAA3C9FFD_OFFSET UNITYSDK_OFFSET(0x7779260)
#define CLASS_2_881F44A56E8F619F_METHOD_2_5B192DA69AC0ACDA_OFFSET UNITYSDK_OFFSET(0xBC9F810)
#define CLASS_2_881F44A56E8F619F_METHOD_2_5F768FD8CA5AF7F9_OFFSET UNITYSDK_OFFSET(0xBCA22A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_60411334F2747BF8_OFFSET UNITYSDK_OFFSET(0xBCB05E0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_6235B20BF4A8F299_OFFSET UNITYSDK_OFFSET(0xBCA3750)
#define CLASS_2_881F44A56E8F619F_METHOD_2_67219AB7711999CA_OFFSET UNITYSDK_OFFSET(0xBCA21C0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x7778D10)
#define CLASS_2_881F44A56E8F619F_METHOD_2_6CDDFD3936DE35AA_OFFSET UNITYSDK_OFFSET(0xBCA5F20)
#define CLASS_2_881F44A56E8F619F_METHOD_2_6DBE07BCCBC6F2CF_1_OFFSET UNITYSDK_OFFSET(0xBCAA390)
#define CLASS_2_881F44A56E8F619F_METHOD_2_6DBE07BCCBC6F2CF_OFFSET UNITYSDK_OFFSET(0xBCA2D10)
#define CLASS_2_881F44A56E8F619F_METHOD_2_6E7C84F913D48CF7_OFFSET UNITYSDK_OFFSET(0xBCAEAF0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_736362F4F36A44A7_OFFSET UNITYSDK_OFFSET(0xBCA7300)
#define CLASS_2_881F44A56E8F619F_METHOD_2_73953AB34B431D62_OFFSET UNITYSDK_OFFSET(0xBCA1040)
#define CLASS_2_881F44A56E8F619F_METHOD_2_7696135D95A34F47_OFFSET UNITYSDK_OFFSET(0xBCAABE0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_797A7CE8281E1976_OFFSET UNITYSDK_OFFSET(0xBCB0370)
#define CLASS_2_881F44A56E8F619F_METHOD_2_7B92D63F2BEA38FC_OFFSET UNITYSDK_OFFSET(0xBCA6430)
#define CLASS_2_881F44A56E8F619F_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xBCAA5A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0xBCAD1A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_834D1C50D973C59C_OFFSET UNITYSDK_OFFSET(0xBCA3F90)
#define CLASS_2_881F44A56E8F619F_METHOD_2_837976D92C81C74C_OFFSET UNITYSDK_OFFSET(0xBCABEF0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_852A36CBE5D70842_OFFSET UNITYSDK_OFFSET(0xBCA38A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0xBCAB870)
#define CLASS_2_881F44A56E8F619F_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0xBCA3C00)
#define CLASS_2_881F44A56E8F619F_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xBCA6300)
#define CLASS_2_881F44A56E8F619F_METHOD_2_8BF266E7CFD5BC19_OFFSET UNITYSDK_OFFSET(0xBCA42F0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_8DA707673BB09B6A_OFFSET UNITYSDK_OFFSET(0xBCA3140)
#define CLASS_2_881F44A56E8F619F_METHOD_2_8E6FC3766CFF4E9E_OFFSET UNITYSDK_OFFSET(0xBC9AA60)
#define CLASS_2_881F44A56E8F619F_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x77796E0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_94EE22257429FF24_OFFSET UNITYSDK_OFFSET(0xBC9DF60)
#define CLASS_2_881F44A56E8F619F_METHOD_2_95D5F1592312589E_OFFSET UNITYSDK_OFFSET(0xBCA2B50)
#define CLASS_2_881F44A56E8F619F_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xBCA9480)
#define CLASS_2_881F44A56E8F619F_METHOD_2_99939C8D3855E987_OFFSET UNITYSDK_OFFSET(0xBCAAD60)
#define CLASS_2_881F44A56E8F619F_METHOD_2_9E2A1EAEBFBC7871_OFFSET UNITYSDK_OFFSET(0xBC96740)
#define CLASS_2_881F44A56E8F619F_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xBC98B00)
#define CLASS_2_881F44A56E8F619F_METHOD_2_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0xBCA4130)
#define CLASS_2_881F44A56E8F619F_METHOD_2_AD3A6C243B51AD05_OFFSET UNITYSDK_OFFSET(0xBCA3CF0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_AE3B87739FE6D901_OFFSET UNITYSDK_OFFSET(0xBCA4CE0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xBC9B560)
#define CLASS_2_881F44A56E8F619F_METHOD_2_B5FD8662765D140F_OFFSET UNITYSDK_OFFSET(0x77791A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_B9748B16F2E543C1_OFFSET UNITYSDK_OFFSET(0xBC9BC40)
#define CLASS_2_881F44A56E8F619F_METHOD_2_BA98C475E2FD9660_OFFSET UNITYSDK_OFFSET(0xBCAE350)
#define CLASS_2_881F44A56E8F619F_METHOD_2_BEF684C9363FC83B_OFFSET UNITYSDK_OFFSET(0xBCA4070)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C089034AC02380A3_OFFSET UNITYSDK_OFFSET(0xBC9D340)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C1CE295D2C495A54_OFFSET UNITYSDK_OFFSET(0xBCAF820)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C5029A2F6A384D50_OFFSET UNITYSDK_OFFSET(0xBCAC420)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C654F44054D893AC_OFFSET UNITYSDK_OFFSET(0xBCA12B0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C76BF5BAC5D300F5_OFFSET UNITYSDK_OFFSET(0xBC9C960)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xBC99370)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C8C47A356EEBDCE0_1_OFFSET UNITYSDK_OFFSET(0x7777190)
#define CLASS_2_881F44A56E8F619F_METHOD_2_C8C47A356EEBDCE0_OFFSET UNITYSDK_OFFSET(0xBCAEA80)
#define CLASS_2_881F44A56E8F619F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBC9D2E0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x777A3A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_CBF8576A97CDDEB5_OFFSET UNITYSDK_OFFSET(0x77773D0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_CCDE6E71175E3E0E_OFFSET UNITYSDK_OFFSET(0xBCA3AD0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0xBCA59F0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_D2C7F0F5BC3D561C_OFFSET UNITYSDK_OFFSET(0xBC9B030)
#define CLASS_2_881F44A56E8F619F_METHOD_2_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xBCA5000)
#define CLASS_2_881F44A56E8F619F_METHOD_2_D55E22B028E08338_OFFSET UNITYSDK_OFFSET(0xBCAEF20)
#define CLASS_2_881F44A56E8F619F_METHOD_2_D9E4A42D6E51DCBA_1_OFFSET UNITYSDK_OFFSET(0xBCADD10)
#define CLASS_2_881F44A56E8F619F_METHOD_2_D9E4A42D6E51DCBA_OFFSET UNITYSDK_OFFSET(0xBC9AB60)
#define CLASS_2_881F44A56E8F619F_METHOD_2_DC93D8012F033E4A_OFFSET UNITYSDK_OFFSET(0xBCA8C60)
#define CLASS_2_881F44A56E8F619F_METHOD_2_DCD84BDC86D8F607_OFFSET UNITYSDK_OFFSET(0xBCA6820)
#define CLASS_2_881F44A56E8F619F_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xBC9D1A0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_E42BE6F59486195A_OFFSET UNITYSDK_OFFSET(0xBCA3910)
#define CLASS_2_881F44A56E8F619F_METHOD_2_E46D49E0836330FA_OFFSET UNITYSDK_OFFSET(0xBC9EF20)
#define CLASS_2_881F44A56E8F619F_METHOD_2_E5CFFC0E233AAD53_OFFSET UNITYSDK_OFFSET(0xBC9C400)
#define CLASS_2_881F44A56E8F619F_METHOD_2_E73957A113BD2CB0_OFFSET UNITYSDK_OFFSET(0xBCAFDC0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_E89B5E85E1E3F103_OFFSET UNITYSDK_OFFSET(0xBCACB80)
#define CLASS_2_881F44A56E8F619F_METHOD_2_ED83F00C1402B097_OFFSET UNITYSDK_OFFSET(0xBCAF130)
#define CLASS_2_881F44A56E8F619F_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xBCAFBE0)
#define CLASS_2_881F44A56E8F619F_METHOD_2_F7DCD8B273F3BFA7_OFFSET UNITYSDK_OFFSET(0xBCA2850)
#define CLASS_2_881F44A56E8F619F_METHOD_2_FD80199633EC9CA1_OFFSET UNITYSDK_OFFSET(0xBCA3670)
#define CLASS_2_881F44A56E8F619F_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBC99940)
#define CLASS_2_881F44A56E8F619F__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC9A930)
#define CLASS_2_881F44A56E8F619F__CTOR_OFFSET UNITYSDK_OFFSET(0xBC99EE0)

inline static constexpr unsigned int Class_2_881F44A56E8F619F_TypeDefinitionIndex = 48962;

class Class_2_881F44A56E8F619F : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	static ::System::String** StaticGet_Field_2_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FB70);
	}
	static ::System::String** StaticGet_Field_2_47()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FB78);
	}
	static ::System::String** StaticGet_Field_2_49()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FB80);
	}
	static ::System::String** StaticGet_Field_2_50()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FB88);
	}
	static ::System::String** StaticGet_Field_2_55()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FB90);
	}
	static ::System::String** StaticGet_Field_2_45()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FB98);
	}
	static ::System::String** StaticGet_Field_2_54()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBA0);
	}
	static ::System::String** StaticGet_Field_2_56()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBA8);
	}
	static ::System::String** StaticGet_Field_2_46()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBB0);
	}
	static ::System::String** StaticGet_Field_2_53()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBB8);
	}
	static ::System::String** StaticGet_Field_2_44()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBC0);
	}
	static ::System::String** StaticGet_Field_2_52()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBC8);
	}
	static ::System::String** StaticGet_Field_2_27()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBD0);
	}
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBD8);
	}
	static ::System::String** StaticGet_Field_2_48()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBE0);
	}
	static ::System::String** StaticGet_Field_2_51()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0x2FBE8);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_24()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0xBA10);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_23()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0xBA18);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_2_25()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_2_881F44A56E8F619F_TypeDefinitionIndex)->GetStaticField(0xBA20);
	}
	::System::Collections::Generic::List_1<::MoleMole::UITwoDMapElement_Data*>* Field_2_40; // 0x50
	::MoleMole::UIUrbanMapPlayerMoveChildWindowController* Field_2_60; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_26; // 0x60
	::Class_2_75527B5277EE1A90<::Class_2_881F44A56E8F619F_Struct_2_DD67BB6E8718D56B>* Field_2_67; // 0x68
	::System::Collections::Generic::List_1<::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40>* Field_2_70; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::MoleMole::UITwoDMapElement_UIController*>*>* Field_2_41; // 0x78
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_13; // 0x80
	::Class_2_000597E145D7A42A<::UnityEngine::Events::UnityAction*>* Field_2_3; // 0x88
	::UnityEngine::RectTransform* Field_2_7; // 0x90
	::DG::Tweening::Sequence* Field_2_31; // 0x98
	::Class_1_A599CE44492C337E<::UnityEngine::GameObject*>* Field_2_33; // 0xA0
	::Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384* Field_2_6; // 0xA8
	::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8* Field_2_5; // 0xB0
	::Class_1_546C6222FBEA4460* Field_2_62; // 0xB8
	::System::Collections::Generic::HashSet_1<::System::Type*>* Field_2_15; // 0xC0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapRightTastListWidget01Context*>* Field_2_12; // 0xC8
	::Class_1_546C6222FBEA4460* Field_2_63; // 0xD0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPageContext*>* Field_2_2; // 0xD8
	::Class_2_75527B5277EE1A90<::System::Int32>* Field_2_39; // 0xE0
	::Class_1_9F79166E94E6BD41* Field_2_64; // 0xE8
	::Class_2_2BD3078077E999CE<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_66; // 0xF0
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMap3DModelController*>* Field_2_4; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector2>* Field_2_43; // 0x100
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_11; // 0x108
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_36; // 0x110
	::UnityEngine::GameObject* Field_2_34; // 0x118
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::UITwoDMapElement_UIController*>*>* Field_2_42; // 0x120
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Class_2_881F44A56E8F619F_Struct_2_AF2E1D815DB2CF40>*>* Field_2_71; // 0x128
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_2_37; // 0x130
	::System::Threading::CancellationTokenSource* Field_2_61; // 0x138
	::Il2CppArray<::Class_0_16E4307DCC41950C_15<::MoleMole::UIUrbanMapPointWidgetContext*>*>* Field_2_65; // 0x140
	::Class_2_75527B5277EE1A90<::System::Single>* Field_2_38; // 0x148
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_10; // 0x150
	::Class_2_75527B5277EE1A90<::System::Int32>* Field_2_68; // 0x158
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapPointWidgetContext*>* Field_2_14; // 0x160
	::System::Int32 Field_2_58; // 0x168
	::System::Single Field_2_59; // 0x16C
	::System::Single Field_2_57; // 0x170
	::System::Boolean Field_2_69; // 0x174
	::System::Boolean Field_2_8; // 0x175
	::System::Boolean Field_2_21; // 0x176
	::UnityEngine::Vector2 Field_2_29; // 0x178
	::System::Boolean Field_2_32; // 0x180
	::System::Boolean Field_2_18; // 0x181
	::UnityEngine::Vector2 Field_2_35; // 0x184
	::System::Boolean Field_2_22; // 0x18C
	::System::Boolean Field_2_20; // 0x18D
	::System::Boolean Field_2_9; // 0x18E
	::System::Boolean Field_2_16; // 0x18F
	::Foundation::Coroutine::CoroutineHandle Field_2_19; // 0x190
	::UnityEngine::Vector2 Field_2_28; // 0x194
	::Foundation::Coroutine::CoroutineHandle Field_2_17; // 0x19C
	::System::Single Field_2_30; // 0x1A0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9E2A1EAEBFBC7871(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_9E2A1EAEBFBC7871_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_ONDRAG_OFFSET))(this, a1);
	}

	::System::ValueTuple_2<::Class_1_859934EE40ACBAD7<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*> Method_2_8E6FC3766CFF4E9E()
	{
		return ((::System::ValueTuple_2<::Class_1_859934EE40ACBAD7<::MoleMole::UIUrbanMapPointWidgetContext*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_8E6FC3766CFF4E9E_OFFSET))(this);
	}

	::System::Void Method_2_D9E4A42D6E51DCBA(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_D9E4A42D6E51DCBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2C7F0F5BC3D561C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_D2C7F0F5BC3D561C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_49C57EA4FD3E5C80(::Class_2_9F4F3B1678689337* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_49C57EA4FD3E5C80_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIControllerContextBase* Method_2_2D99C5C12FED3D73()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_2D99C5C12FED3D73_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::MoleMole::UIUrbanMapRightTastListWidget01Context* Method_2_B9748B16F2E543C1()
	{
		return ((::MoleMole::UIUrbanMapRightTastListWidget01Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_B9748B16F2E543C1_OFFSET))(this);
	}

	::System::Void Method_2_2368DFE07F28F7DA(::Class_2_9F4F3B1678689337* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5CFFC0E233AAD53(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_E5CFFC0E233AAD53_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetPath Method_2_44D8069865A4CD22(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_44D8069865A4CD22_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C089034AC02380A3(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C089034AC02380A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_94EE22257429FF24(::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_94EE22257429FF24_OFFSET))(this, a1);
	}

	::System::Void Method_2_E46D49E0836330FA(::MoleMole::UIUrbanMapRightTastListWidget01WidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget01WidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_E46D49E0836330FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C76BF5BAC5D300F5(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C76BF5BAC5D300F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_37791546E860A1D8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_37791546E860A1D8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1E272429750EB125(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_1E272429750EB125_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5B192DA69AC0ACDA(::Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_5B192DA69AC0ACDA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24100673428B8A0D(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_24100673428B8A0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_73953AB34B431D62(::Class_2_9F4F3B1678689337* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_73953AB34B431D62_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C654F44054D893AC(::MoleMole::UITwoDMapElement_Data* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C654F44054D893AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1D99764F6C04B184(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_1D99764F6C04B184_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_67219AB7711999CA(::MoleMole::UIUrbanMapLeftTastListRow03Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow03Context*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_67219AB7711999CA_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F768FD8CA5AF7F9(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_5F768FD8CA5AF7F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_95D5F1592312589E(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_95D5F1592312589E_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DBE07BCCBC6F2CF(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_6DBE07BCCBC6F2CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D99764F6C04B184_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_1D99764F6C04B184_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_8DA707673BB09B6A(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_8DA707673BB09B6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_6235B20BF4A8F299(::MoleMole::UIUrbanMapRightTastListWidget01WidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget01WidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_6235B20BF4A8F299_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_852A36CBE5D70842(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_852A36CBE5D70842_OFFSET))(this, a1);
	}

	::System::Void Method_2_E42BE6F59486195A(::Class_2_9F4F3B1678689337* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9F4F3B1678689337*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_E42BE6F59486195A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCDE6E71175E3E0E(::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_CCDE6E71175E3E0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_2_AD3A6C243B51AD05(::Class_0_16E4307DCC419505_170* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_170*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_AD3A6C243B51AD05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_834D1C50D973C59C(::MoleMole::UIUrbanMapLeftTastListRow01Context* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow01Context*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_834D1C50D973C59C_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_BEF684C9363FC83B(::MoleMole::UIUrbanMapLeftLocationRowContext* a1, ::MoleMole::UIUrbanMapLeftLocationRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_BEF684C9363FC83B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_A5809AB80389F7DE_OFFSET))(this);
	}

	::System::Void Method_2_2E460FE07C629FEA(::Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_881F44A56E8F619F_Class_3_6A34D50D546B2384*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_2E460FE07C629FEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_2_F7DCD8B273F3BFA7(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_F7DCD8B273F3BFA7_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_AE3B87739FE6D901(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_AE3B87739FE6D901_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_D308836DB54415C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_D308836DB54415C3_OFFSET))(this);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Int32 Method_2_6CDDFD3936DE35AA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_6CDDFD3936DE35AA_OFFSET))(this);
	}

	::System::Void Method_2_13016C9261D97AA7(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_13016C9261D97AA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_DCD84BDC86D8F607(::System::Boolean a1, ::System::Boolean a2, ::System::Action_2<::System::Boolean, ::System::Boolean>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action_2<::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_DCD84BDC86D8F607_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_736362F4F36A44A7(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_736362F4F36A44A7_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DBE07BCCBC6F2CF_1(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_6DBE07BCCBC6F2CF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C538C351D0A471D(::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_3C538C351D0A471D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0341222A0A38D423(::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_0341222A0A38D423_OFFSET))(this, a1);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_7696135D95A34F47(::MoleMole::UITwoDMapElement_Data* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_7696135D95A34F47_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99939C8D3855E987(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_99939C8D3855E987_OFFSET))(this, a1);
	}

	::System::Void Method_2_FD80199633EC9CA1(::MoleMole::UIUrbanMapPointGroupWidgetContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_FD80199633EC9CA1_OFFSET))(this, a1);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::String* Method_2_0E6FB3BEA5214C04(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_0E6FB3BEA5214C04_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D99764F6C04B184_2(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_1D99764F6C04B184_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_837976D92C81C74C(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_837976D92C81C74C_OFFSET))(this, a1);
	}

	::MoleMole::UIUrbanMapRightTastListWidget01Context* Method_2_C5029A2F6A384D50()
	{
		return ((::MoleMole::UIUrbanMapRightTastListWidget01Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C5029A2F6A384D50_OFFSET))(this);
	}

	::System::Single Method_2_3A2C6E86C0517B01()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_3A2C6E86C0517B01_OFFSET))(this);
	}

	::System::Void Method_2_E89B5E85E1E3F103(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_E89B5E85E1E3F103_OFFSET))(this, a1);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_2_D9E4A42D6E51DCBA_1(::MoleMole::UIUrbanMapRightWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapRightWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_D9E4A42D6E51DCBA_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* Method_2_10475D7EAA1757C7(::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_10475D7EAA1757C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA98C475E2FD9660(::MoleMole::Mono2dMapData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Mono2dMapData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_BA98C475E2FD9660_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8C47A356EEBDCE0(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C8C47A356EEBDCE0_OFFSET))(this, a1);
	}

	::System::Single Method_2_DC93D8012F033E4A(::MoleMole::UITwoDMapElement_Data* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_DC93D8012F033E4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E7C84F913D48CF7(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_6E7C84F913D48CF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_47E64F3744791F19(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_47E64F3744791F19_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_45E3A8DB3F6EE47B(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_45E3A8DB3F6EE47B_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_2_D55E22B028E08338()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_D55E22B028E08338_OFFSET))(this);
	}

	::System::Single Method_2_8BF266E7CFD5BC19(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_8BF266E7CFD5BC19_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_ED83F00C1402B097(::UnityEngine::Vector3 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_ED83F00C1402B097_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_2_44D8069865A4CD22_1(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_44D8069865A4CD22_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_53633B6535FE4F62(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_53633B6535FE4F62_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7B92D63F2BEA38FC(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_7B92D63F2BEA38FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DCB6C51FF28DD4F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_0DCB6C51FF28DD4F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_2_C1CE295D2C495A54(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C1CE295D2C495A54_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_34C0DD5A89B19ED2(::MoleMole::UITwoDMapElement_Data* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UITwoDMapElement_Data*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_34C0DD5A89B19ED2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_4DA6D4A624E42CAB_1_OFFSET))(this);
	}

	::System::Void Method_2_E73957A113BD2CB0(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_E73957A113BD2CB0_OFFSET))(this, a1);
	}

	::System::Void Method_2_797A7CE8281E1976(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_797A7CE8281E1976_OFFSET))(this, a1);
	}

	::Foundation::AssetPath Method_2_60411334F2747BF8()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_60411334F2747BF8_OFFSET))(this);
	}

	::System::Void Method_2_014328CA0342BEDB(::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_881F44A56E8F619F_Class_3_ADC6989BD9EC52D8*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_014328CA0342BEDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_47F503D7F0768C4A(::MoleMole::UIUrbanMapPageContext* a1, ::UnityEngine::Events::UnityAction* a2, ::System::Func_2<::MoleMole::UIUrbanMap3DModelContext*, ::MoleMole::UIUrbanMap3DModelController*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPageContext*, ::UnityEngine::Events::UnityAction*, ::System::Func_2<::MoleMole::UIUrbanMap3DModelContext*, ::MoleMole::UIUrbanMap3DModelController*>*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_47F503D7F0768C4A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C8C47A356EEBDCE0_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_C8C47A356EEBDCE0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_13016C9261D97AA7_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_13016C9261D97AA7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_CBF8576A97CDDEB5(::MoleMole::UIUrbanMapLeftLocationRowContext* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_CBF8576A97CDDEB5_OFFSET))(this, a1);
	}

	::Il2CppArray<::Struct_2_037D21AC29ED1130>* Method_2_2A79FEEA1B27A363(::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>* a1)
	{
		return ((::Il2CppArray<::Struct_2_037D21AC29ED1130>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A93187421020321F*>*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_2A79FEEA1B27A363_OFFSET))(this, a1);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_B5FD8662765D140F(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_B5FD8662765D140F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_58C2EFBCAA3C9FFD(::MoleMole::UIUrbanMapLeftLocationRowContext* a1, ::MoleMole::UIUrbanMapLeftLocationRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_58C2EFBCAA3C9FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::MoleMole::UIUrbanMapLeftTastListRow03Context* Method_2_0E8CF60D9B875D7C()
	{
		return ((::MoleMole::UIUrbanMapLeftTastListRow03Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_881F44A56E8F619F_METHOD_2_0E8CF60D9B875D7C_OFFSET))(this);
	}
};
