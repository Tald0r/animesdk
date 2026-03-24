#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30.h"
#include "unitysdk/Class_2_B4E98DED3FBEAE53_Struct_2_C3D22550BC75786F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/MoleMole/UIUrbanMapPageContext_SDefaultFocusInfo.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/Struct_2_38078B764F71A088.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobThreadDelegate.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_269;
class Class_0_16E4307DCC419505_5;
class Class_1_4607478F1715A9C5;
class Class_1_A93187421020321F;
class Class_1_EF79B9ABDA480CB0;
class Class_1_FCCAFAFEDD17B2C1;
class Class_2_B4E98DED3FBEAE53_Class_3_039EC88CFCC653F3_3;
class Class_2_E87F1D15F1D4AC72;
class Map3DFogItem;
class MonoSceneMap3DConfig;
namespace DG::Tweening { class Tween; }
namespace DG::Tweening { class Tweener; }
namespace MoleMole { class ConfigUIUrbanMap; }
namespace MoleMole { class MapGroupMemberStateConfig; }
namespace MoleMole { class SphereCameraConfig; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIUrbanMap3DModelContext; }
namespace MoleMole { class UIUrbanMapPointWidgetContext; }
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect; }
namespace UnityEngine::Rendering::Universal::Internal { class Nap3DMapDecalEffect_DecalAreaData; }
template <typename T> class Class_1_634159F7561ADAA0;
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_75527B5277EE1A90;

#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_0660942ADA7DE0BE_OFFSET UNITYSDK_OFFSET(0x87957F0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_06958CE60C1441F7_OFFSET UNITYSDK_OFFSET(0x879C750)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_099C229CF1BB9083_OFFSET UNITYSDK_OFFSET(0x87A5220)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_0EC9AEC5DC94C3DD_OFFSET UNITYSDK_OFFSET(0x87991D0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_0FDB0E69F1536C8F_OFFSET UNITYSDK_OFFSET(0x87A68E0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x878D6F0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_1F9A70C43C1F4952_OFFSET UNITYSDK_OFFSET(0x878C5B0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_26866BD401080475_OFFSET UNITYSDK_OFFSET(0x87A6620)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_2C2639B227511C01_OFFSET UNITYSDK_OFFSET(0x8797530)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_2CA291E507C0B3AE_OFFSET UNITYSDK_OFFSET(0x87A2CB0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_2CE0A7F0F313E006_OFFSET UNITYSDK_OFFSET(0x8798240)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_2DB7BD0E1FDB92E5_OFFSET UNITYSDK_OFFSET(0x878EF10)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x879DB00)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_33531F86B1000CF5_OFFSET UNITYSDK_OFFSET(0x87A5C20)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_3416FD11DD9200F8_OFFSET UNITYSDK_OFFSET(0x87A1910)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x878C640)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_3D20D7AE71286204_OFFSET UNITYSDK_OFFSET(0x8794540)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x87978B0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_4155E433CDAD6311_OFFSET UNITYSDK_OFFSET(0x8799300)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_45138DD0E82F085A_OFFSET UNITYSDK_OFFSET(0x879EB00)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_476FB9FF55840901_OFFSET UNITYSDK_OFFSET(0x878BB40)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_4A9BD1EB45E99E66_OFFSET UNITYSDK_OFFSET(0x878EFF0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_4D8104A69A540D47_OFFSET UNITYSDK_OFFSET(0x8789E20)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x87A13E0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_5079926AF5084948_OFFSET UNITYSDK_OFFSET(0x87A4B60)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x8797740)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_596FD8239C601ED8_OFFSET UNITYSDK_OFFSET(0x878AFD0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x878B5F0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_5FBF6E7648E7DF88_OFFSET UNITYSDK_OFFSET(0x87A5BA0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_61CCDF0985B5AB4B_1_OFFSET UNITYSDK_OFFSET(0x879B5A0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_61CCDF0985B5AB4B_OFFSET UNITYSDK_OFFSET(0x878D120)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_6639F817E8CD951C_OFFSET UNITYSDK_OFFSET(0x879C3E0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_6B31C14884677E35_OFFSET UNITYSDK_OFFSET(0x87A15E0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_6BCD5A3244F82B46_OFFSET UNITYSDK_OFFSET(0x87887C0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x87943D0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_716ED9319A48E3C5_OFFSET UNITYSDK_OFFSET(0x8798F90)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x8795E30)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_793067EE61114591_OFFSET UNITYSDK_OFFSET(0x87A0570)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x8797150)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_7E529A1C6FF4894B_OFFSET UNITYSDK_OFFSET(0x87A6040)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_7E7D69606AD477D5_OFFSET UNITYSDK_OFFSET(0x8786E60)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_814BA9CBC3CE3017_OFFSET UNITYSDK_OFFSET(0x8787320)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x87A3030)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x879CBE0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x8797920)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_867AC1DF55896004_OFFSET UNITYSDK_OFFSET(0x878C6F0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_89DD45DBE5CED3C0_OFFSET UNITYSDK_OFFSET(0x8787B10)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x87A18A0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x87995A0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8795270)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x8794530)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_97AC7E8AAD04E3B8_OFFSET UNITYSDK_OFFSET(0x87942C0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x878D7A0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0x8794120)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_9DD93B5650D84A57_OFFSET UNITYSDK_OFFSET(0x878FB70)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_A0BF43535BC66CFB_OFFSET UNITYSDK_OFFSET(0x8793390)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_A32D4D2A62D1D5E1_OFFSET UNITYSDK_OFFSET(0x879D7F0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_A4C871AE6EC1E9A7_OFFSET UNITYSDK_OFFSET(0x87A0670)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_A748899C000E8888_1_OFFSET UNITYSDK_OFFSET(0x879D500)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_A748899C000E8888_OFFSET UNITYSDK_OFFSET(0x87941F0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_A970B20EE075836F_OFFSET UNITYSDK_OFFSET(0x8798C10)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_AC6DB33AFD9B14BA_OFFSET UNITYSDK_OFFSET(0x878E570)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_AEE46E2B9342276F_OFFSET UNITYSDK_OFFSET(0x8797A40)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_AF85E6FF2B91E341_OFFSET UNITYSDK_OFFSET(0x8795450)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_B4A7D60FA29C73DF_OFFSET UNITYSDK_OFFSET(0x87897B0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_B636E03EDDD07C9D_OFFSET UNITYSDK_OFFSET(0x8787AA0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_BC57AC7782B8F238_OFFSET UNITYSDK_OFFSET(0x87A4270)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_BE2EE925885B2971_OFFSET UNITYSDK_OFFSET(0x8796C80)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_C1B25D3B3F94E126_OFFSET UNITYSDK_OFFSET(0x8789CF0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x878E1A0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_C3C968BBAB739965_OFFSET UNITYSDK_OFFSET(0x879D5D0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_C485DD4925F82638_OFFSET UNITYSDK_OFFSET(0x87A4940)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_C7121136545C2E23_OFFSET UNITYSDK_OFFSET(0x878DB50)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_C729650C28B76232_OFFSET UNITYSDK_OFFSET(0x879BA40)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87981E0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_CBF37BF0E34F9A1B_OFFSET UNITYSDK_OFFSET(0x87987C0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_D10500E903D99418_OFFSET UNITYSDK_OFFSET(0x87A3510)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_D1544CB496D3A79C_OFFSET UNITYSDK_OFFSET(0x87A5D20)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x8793700)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_D70C8B847AF08ADE_OFFSET UNITYSDK_OFFSET(0x878D2F0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_D98C144B1A58F253_OFFSET UNITYSDK_OFFSET(0x879DBD0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_DAAF2880478C42FF_OFFSET UNITYSDK_OFFSET(0x8798EE0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_DBAD97D008F5B376_OFFSET UNITYSDK_OFFSET(0x878F000)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_DE8F70CD9F0EFA17_OFFSET UNITYSDK_OFFSET(0x87A5800)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_E2C06BA7AE9466BD_OFFSET UNITYSDK_OFFSET(0x878CEC0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_E4AAF2D01919140A_OFFSET UNITYSDK_OFFSET(0x87A67A0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_E69265148B895E7A_OFFSET UNITYSDK_OFFSET(0x8795FF0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_F1BE2B3245CBB744_OFFSET UNITYSDK_OFFSET(0x878CB80)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_F4D59994912E9CCF_OFFSET UNITYSDK_OFFSET(0x8795EF0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_F68BA5110A64A2BA_OFFSET UNITYSDK_OFFSET(0x879B770)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_F7936250AB9ED6D9_OFFSET UNITYSDK_OFFSET(0x87962E0)
#define CLASS_2_B4E98DED3FBEAE53_METHOD_2_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x87972F0)
#define CLASS_2_B4E98DED3FBEAE53_ONCLICK_OFFSET UNITYSDK_OFFSET(0x87885F0)
#define CLASS_2_B4E98DED3FBEAE53_ONDRAG_OFFSET UNITYSDK_OFFSET(0x87892B0)
#define CLASS_2_B4E98DED3FBEAE53_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x87891E0)
#define CLASS_2_B4E98DED3FBEAE53__CCTOR_OFFSET UNITYSDK_OFFSET(0x8789750)
#define CLASS_2_B4E98DED3FBEAE53__CTOR_OFFSET UNITYSDK_OFFSET(0x8789380)

inline static constexpr unsigned int Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex = 76363;

class Class_2_B4E98DED3FBEAE53 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	static ::System::Int32* StaticGet_Field_2_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA30);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_8()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA38);
	}
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA48);
	}
	static ::System::Single* StaticGet_Field_2_19()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA4C);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>* StaticGet_Field_2_7()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA50);
	}
	static ::Unity::Collections::NativeArray_1<::System::Int32>* StaticGet_Field_2_10()
	{
		return (::Unity::Collections::NativeArray_1<::System::Int32>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA60);
	}
	static ::UnityEngine::PhysicsScene* StaticGet_Field_2_12()
	{
		return (::UnityEngine::PhysicsScene*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA70);
	}
	static ::System::Boolean* StaticGet_Field_2_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA74);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA75);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA76);
	}
	static ::System::Int32* StaticGet_Field_2_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA78);
	}
	static ::System::Single* StaticGet_Field_2_20()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA7C);
	}
	static ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>* StaticGet_Field_2_11()
	{
		return (::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA80);
	}
	static ::Unity::Collections::NativeArray_1<::System::Single>* StaticGet_Field_2_9()
	{
		return (::Unity::Collections::NativeArray_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0xBA90);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_2_6()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B4E98DED3FBEAE53_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Int32 Field_2_15 = 0x8; // 0x0
	::MoleMole::Cameras::CameraTrackBlending* Field_2_65; // 0x50
	::UnityEngine::Rendering::Volume* Field_2_36; // 0x58
	::MoleMole::ConfigUIUrbanMap* Field_2_60; // 0x60
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_69; // 0x68
	::MonoSceneMap3DConfig* Field_2_58; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::SphereCameraConfig*>* Field_2_59; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>* Field_2_26; // 0x80
	::DG::Tweening::Tweener* Field_2_33; // 0x88
	::Class_2_B4E98DED3FBEAE53_Class_3_039EC88CFCC653F3_3* Field_2_16; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Queue_1<::Class_0_16E4307DCC419505_269*>*>* Field_2_51; // 0x98
	::Class_2_000597E145D7A42A<::UnityEngine::NAPRenderPipeline0::RTHandle*>* Field_2_23; // 0xA0
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_68; // 0xA8
	::UnityEngine::RectTransform* Field_2_54; // 0xB0
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_34; // 0xB8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_269*>* Field_2_50; // 0xC0
	::Class_1_FCCAFAFEDD17B2C1* Field_2_47; // 0xC8
	::Class_1_EF79B9ABDA480CB0* Field_2_41; // 0xD0
	::UnityEngine::RectTransform* Field_2_53; // 0xD8
	::MoleMole::UIBaseController* Field_2_52; // 0xE0
	::UnityEngine::RectTransform* Field_2_55; // 0xE8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_269*>* Field_2_67; // 0xF0
	::Class_1_4607478F1715A9C5* Field_2_29; // 0xF8
	::DG::Tweening::Tweener* Field_2_32; // 0x100
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::DG::Tweening::Tween*>* Field_2_49; // 0x108
	::UnityEngine::RectTransform* Field_2_56; // 0x110
	::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect* Field_2_48; // 0x118
	::Il2CppArray<::MoleMole::MapGroupMemberStateConfig*>* Field_2_40; // 0x120
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMap3DModelContext*>* Field_2_22; // 0x128
	::Class_1_634159F7561ADAA0<::Class_1_634159F7561ADAA0<::Class_2_B4E98DED3FBEAE53_Struct_2_C3D22550BC75786F>*>* Field_2_25; // 0x130
	::UnityEngine::Transform* Field_2_57; // 0x138
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_269*>* Field_2_27; // 0x140
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_42; // 0x148
	::Class_2_000597E145D7A42A<::Class_1_EF79B9ABDA480CB0_Struct_2_08F066FEBA3BBA30>* Field_2_24; // 0x150
	::Unity::Collections::NativeArray_1<::System::Int32> Field_2_4; // 0x158
	::System::UInt64 Field_2_1; // 0x168
	::System::Single Field_2_62; // 0x170
	::UnityEngine::Vector2 Field_2_43; // 0x174
	::Unity::Collections::NativeArray_1<::System::IntPtr> Field_2_3; // 0x180
	::Unity::Jobs::LowLevel::Unsafe::JobThreadDelegate Field_2_2; // 0x190
	::System::Boolean Field_2_31; // 0x1B0
	::System::Boolean Field_2_38; // 0x1B1
	::System::Boolean Field_2_30; // 0x1B2
	::System::Boolean Field_2_63; // 0x1B3
	::UnityEngine::Vector2 Field_2_44; // 0x1B4
	::UnityEngine::Vector2 Field_2_45; // 0x1BC
	::System::Single Field_2_66; // 0x1C4
	::System::Single Field_2_64; // 0x1C8
	::System::Single Field_2_61; // 0x1CC
	::System::Boolean Field_2_46; // 0x1D0
	::System::Boolean Field_2_28; // 0x1D1
	::System::Boolean Field_2_37; // 0x1D2
	::System::Single Field_2_14; // 0x1D4
	::System::Boolean Field_2_39; // 0x1D8
	::System::Boolean Field_2_35; // 0x1D9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53__CCTOR_OFFSET))();
	}

	::System::Void Method_2_814BA9CBC3CE3017(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_814BA9CBC3CE3017_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B636E03EDDD07C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_B636E03EDDD07C9D_OFFSET))(this);
	}

	::System::Void OnClick(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_ONCLICK_OFFSET))(this, a1, a2);
	}

	::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_ONSCROLL_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_ONDRAG_OFFSET))(this, a1);
	}

	::Map3DFogItem* Method_2_B4A7D60FA29C73DF(::System::String* a1)
	{
		return ((::Map3DFogItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_B4A7D60FA29C73DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D8104A69A540D47(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_4D8104A69A540D47_OFFSET))(this, a1);
	}

	::System::Void Method_2_596FD8239C601ED8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_596FD8239C601ED8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C1B25D3B3F94E126(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_C1B25D3B3F94E126_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Boolean Method_2_476FB9FF55840901(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_476FB9FF55840901_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_1F9A70C43C1F4952()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_1F9A70C43C1F4952_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Int32 Method_2_F1BE2B3245CBB744(::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_A93187421020321F*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_F1BE2B3245CBB744_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_61CCDF0985B5AB4B(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_61CCDF0985B5AB4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D70C8B847AF08ADE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_D70C8B847AF08ADE_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_269* Method_2_6BCD5A3244F82B46(::UnityEngine::Vector2 a1)
	{
		return ((::Class_0_16E4307DCC419505_269*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_6BCD5A3244F82B46_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_AC6DB33AFD9B14BA(::System::Nullable_1<::UnityEngine::Vector3> a1, ::MoleMole::SphereCameraConfig* a2, ::Class_1_A93187421020321F* a3)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>, ::MoleMole::SphereCameraConfig*, ::Class_1_A93187421020321F*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_AC6DB33AFD9B14BA_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_4A9BD1EB45E99E66_OFFSET))(this);
	}

	::System::Boolean Method_2_DBAD97D008F5B376(::Class_0_16E4307DCC419505_269* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_269*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_DBAD97D008F5B376_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3> Method_2_A0BF43535BC66CFB(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::ValueTuple_4<::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_A0BF43535BC66CFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D68547FF19A170E2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_D68547FF19A170E2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A748899C000E8888(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_A748899C000E8888_OFFSET))(this, a1);
	}

	::Class_2_75527B5277EE1A90<::Struct_2_38078B764F71A088>* Method_2_97AC7E8AAD04E3B8(::Class_0_16E4307DCC419505_269* a1)
	{
		return ((::Class_2_75527B5277EE1A90<::Struct_2_38078B764F71A088>*(*)(::PVOID, ::Class_0_16E4307DCC419505_269*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_97AC7E8AAD04E3B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9DD93B5650D84A57(::Class_0_16E4307DCC419505_269* a1, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_269*, ::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapPointWidgetContext*>*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_9DD93B5650D84A57_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_269*>* Method_2_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_269*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_969D9516A75501DE_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_3D20D7AE71286204(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_3D20D7AE71286204_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_89DD45DBE5CED3C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_89DD45DBE5CED3C0_OFFSET))(this);
	}

	::System::Void Method_2_AF85E6FF2B91E341(::Class_0_16E4307DCC419505_269* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_269*, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_AF85E6FF2B91E341_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0660942ADA7DE0BE(::Class_1_A93187421020321F* a1, ::UnityEngine::Vector3 a2, ::MoleMole::SphereCameraConfig* a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Bounds a7, ::System::Single a8, ::System::Single a9, ::UnityEngine::Rect a10, ::UnityEngine::Vector2 a11, ::System::Boolean a12)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A93187421020321F*, ::UnityEngine::Vector3, ::MoleMole::SphereCameraConfig*, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::System::Single, ::System::Single, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_0660942ADA7DE0BE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_2_C7121136545C2E23(::System::Int32 a1)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_C7121136545C2E23_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_2_F4D59994912E9CCF(::System::Int32 a1, ::System::Threading::CancellationToken a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_F4D59994912E9CCF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E69265148B895E7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_E69265148B895E7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F7936250AB9ED6D9(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_F7936250AB9ED6D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_BE2EE925885B2971(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_BE2EE925885B2971_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2C2639B227511C01(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_2C2639B227511C01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Method_2_AEE46E2B9342276F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_AEE46E2B9342276F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2CE0A7F0F313E006(::System::Int32 a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3, ::MoleMole::UIBaseController* a4, ::UnityEngine::RectTransform* a5, ::UnityEngine::RectTransform* a6, ::UnityEngine::RectTransform* a7, ::UnityEngine::RectTransform* a8, ::System::Action* a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::UnityEngine::Camera*, ::MoleMole::UIBaseController*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_2CE0A7F0F313E006_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Single Method_2_CBF37BF0E34F9A1B(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_CBF37BF0E34F9A1B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_2_A970B20EE075836F(::UnityEngine::Bounds a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_A970B20EE075836F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAAF2880478C42FF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_DAAF2880478C42FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_716ED9319A48E3C5(::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::Nap3DMapDecalEffect_DecalAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_716ED9319A48E3C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_0EC9AEC5DC94C3DD(::System::Single a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_0EC9AEC5DC94C3DD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E2C06BA7AE9466BD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_E2C06BA7AE9466BD_OFFSET))(this);
	}

	::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo Method_2_2DB7BD0E1FDB92E5()
	{
		return ((::MoleMole::UIUrbanMapPageContext_SDefaultFocusInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_2DB7BD0E1FDB92E5_OFFSET))(this);
	}

	::System::Void Method_2_4155E433CDAD6311(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_4155E433CDAD6311_OFFSET))(this, a1);
	}

	::System::Void Method_2_61CCDF0985B5AB4B_1(::UnityEngine::EventSystems::BaseEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_61CCDF0985B5AB4B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F68BA5110A64A2BA(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_F68BA5110A64A2BA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_C729650C28B76232(::UnityEngine::Vector2 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_C729650C28B76232_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6639F817E8CD951C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_6639F817E8CD951C_OFFSET))(this, a1);
	}

	::System::Void Method_2_06958CE60C1441F7(::MoleMole::UIUrbanMap3DModelContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMap3DModelContext*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_06958CE60C1441F7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A748899C000E8888_1(::UnityEngine::EventSystems::PointerEventData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_A748899C000E8888_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3C968BBAB739965(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_C3C968BBAB739965_OFFSET))(this, a1);
	}

	::System::Void Method_2_A32D4D2A62D1D5E1(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_A32D4D2A62D1D5E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_D98C144B1A58F253(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_D98C144B1A58F253_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_FD1A8012013ED9C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_45138DD0E82F085A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_45138DD0E82F085A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4C871AE6EC1E9A7(::Class_0_16E4307DCC419505_269* a1, ::Struct_2_032E3093F309FC91 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_269*, ::Struct_2_032E3093F309FC91))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_A4C871AE6EC1E9A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_793067EE61114591(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_793067EE61114591_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_2_6B31C14884677E35(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_6B31C14884677E35_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	static ::System::Void Method_2_7E7D69606AD477D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_7E7D69606AD477D5_OFFSET))(a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_3416FD11DD9200F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_3416FD11DD9200F8_OFFSET))(this);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_2_2CA291E507C0B3AE(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_2CA291E507C0B3AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_816ED7FC0A7FCCD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_816ED7FC0A7FCCD1_OFFSET))(this);
	}

	::System::Boolean Method_2_D10500E903D99418(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_D10500E903D99418_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Int32 Method_2_BC57AC7782B8F238(::Class_0_16E4307DCC419505_269* a1, ::Class_0_16E4307DCC419505_269* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_269*, ::Class_0_16E4307DCC419505_269*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_BC57AC7782B8F238_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C485DD4925F82638(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_C485DD4925F82638_OFFSET))(this, a1);
	}

	::System::Void Method_2_5079926AF5084948(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_5079926AF5084948_OFFSET))(this, a1);
	}

	::System::Void Method_2_099C229CF1BB9083()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_099C229CF1BB9083_OFFSET))(this);
	}

	::System::Void Method_2_867AC1DF55896004(::System::Single a1, ::System::Single a2, ::System::Single a3, ::MoleMole::Cameras::CameraTrackBlending* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_867AC1DF55896004_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DE8F70CD9F0EFA17(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_DE8F70CD9F0EFA17_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBF6E7648E7DF88(::Map3DFogItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Map3DFogItem*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_5FBF6E7648E7DF88_OFFSET))(this, a1);
	}

	::System::Void Method_2_33531F86B1000CF5(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_33531F86B1000CF5_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_D1544CB496D3A79C(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_D1544CB496D3A79C_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_2_7E529A1C6FF4894B(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Vector2 a7)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_7E529A1C6FF4894B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_26866BD401080475(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_26866BD401080475_OFFSET))(this, a1);
	}

	::System::Single Method_2_E4AAF2D01919140A(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_E4AAF2D01919140A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0FDB0E69F1536C8F(::Class_1_A93187421020321F* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A93187421020321F*, ::System::Boolean, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_METHOD_2_0FDB0E69F1536C8F_OFFSET))(this, a1, a2, a3, a4);
	}
};
