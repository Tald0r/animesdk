#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_55B1720D3ECF0A32.h"
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

class Class_1_79526D80B8F6897C;
class Class_1_A01CE0B13E11F09E;
class Class_2_60DDD9C206686F44;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class ScaledContentSizeFitter; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIInputFieldEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class AspectRatioFitter; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI::Extension { class ISetArg; }
namespace UnityEngine::UI::Extension { class ISetKey; }
namespace UnityEngine::UI::Extension { class ISetText; }
namespace UnityEngine::UI::Extension { class PathGuide; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITextureOffsetModifier; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET UNITYSDK_OFFSET(0x9401580)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_OFFSET UNITYSDK_OFFSET(0x9401190)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_033982E7E38F8283_OFFSET UNITYSDK_OFFSET(0x93FF6E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0C55E47FC986DAE3_OFFSET UNITYSDK_OFFSET(0x93FE9A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0E718C6537ACC52B_1_OFFSET UNITYSDK_OFFSET(0x93FEBA0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0E718C6537ACC52B_OFFSET UNITYSDK_OFFSET(0x93FE7F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14DE3BA1DADA14A2_OFFSET UNITYSDK_OFFSET(0x93FF670)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14E5ADC595ACA31E_OFFSET UNITYSDK_OFFSET(0x93FE8D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_15FBD89DDFD94138_OFFSET UNITYSDK_OFFSET(0x93FECC0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_281422FB6736FA13_OFFSET UNITYSDK_OFFSET(0x93FE440)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A4AC01439701532_OFFSET UNITYSDK_OFFSET(0x93FE760)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_309BC38B52E6E30B_OFFSET UNITYSDK_OFFSET(0x93FEED0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_318BC565AAB92D03_OFFSET UNITYSDK_OFFSET(0x93FFD60)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_31A6C780DD9DCC94_OFFSET UNITYSDK_OFFSET(0x93FE490)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3918CD07E93F7C4C_OFFSET UNITYSDK_OFFSET(0x94007E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET UNITYSDK_OFFSET(0x9400320)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3D0C710459EC7E0A_OFFSET UNITYSDK_OFFSET(0x9401160)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E52E17783104D59_OFFSET UNITYSDK_OFFSET(0x9401140)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET UNITYSDK_OFFSET(0x9400FB0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E985F67685BEDDE_OFFSET UNITYSDK_OFFSET(0x9400590)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3F7A838ECD7838A8_OFFSET UNITYSDK_OFFSET(0x93FE470)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_437A374C2FFC4F2B_OFFSET UNITYSDK_OFFSET(0x93FEFF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_4530CD192CF2498E_OFFSET UNITYSDK_OFFSET(0x93FFE70)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_483608963BE393FB_OFFSET UNITYSDK_OFFSET(0x94014A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_48824AEE2BF00A61_OFFSET UNITYSDK_OFFSET(0x93FF580)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_4993A4548CE26905_OFFSET UNITYSDK_OFFSET(0x93FF610)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_553780A2AC829D20_OFFSET UNITYSDK_OFFSET(0x93FFD40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_5E1DB17054DA32A0_OFFSET UNITYSDK_OFFSET(0x9401090)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_629A5CC56DC7764C_OFFSET UNITYSDK_OFFSET(0x93FE6C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_62AF9D579A98BF9B_OFFSET UNITYSDK_OFFSET(0x93FFC20)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6A0B489BA1A51EE8_OFFSET UNITYSDK_OFFSET(0x93FFCA0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_1_OFFSET UNITYSDK_OFFSET(0x9400630)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_OFFSET UNITYSDK_OFFSET(0x93FEF60)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7254AC96FAA1BBAC_OFFSET UNITYSDK_OFFSET(0x93FF1D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7942E347FED008A8_OFFSET UNITYSDK_OFFSET(0x9400360)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7A8128F06F4FBF60_1_OFFSET UNITYSDK_OFFSET(0x9400DF0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7A8128F06F4FBF60_OFFSET UNITYSDK_OFFSET(0x93FE520)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_84633CD65E651BB6_OFFSET UNITYSDK_OFFSET(0x94011E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_85D1261F4A7EE5D7_OFFSET UNITYSDK_OFFSET(0x9400390)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_8604BE9BE5DFC959_OFFSET UNITYSDK_OFFSET(0x93FF1A0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_868FAFEA157C2D70_OFFSET UNITYSDK_OFFSET(0x94013F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_924D9180ADA787AC_OFFSET UNITYSDK_OFFSET(0x93FF810)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93E497FEF4A2D816_OFFSET UNITYSDK_OFFSET(0x93FF880)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93F2F4F866DDF3A0_OFFSET UNITYSDK_OFFSET(0x93FECA0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9720E80E62E45A0D_OFFSET UNITYSDK_OFFSET(0x93FF0C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_999C8D603BB5B4F3_OFFSET UNITYSDK_OFFSET(0x93FF200)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_1_OFFSET UNITYSDK_OFFSET(0x94010C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_OFFSET UNITYSDK_OFFSET(0x9400510)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET UNITYSDK_OFFSET(0x93FF6F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET UNITYSDK_OFFSET(0x93FF5D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D88605FD3035F75_OFFSET UNITYSDK_OFFSET(0x93FFB70)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_ABA959575FF89EA6_OFFSET UNITYSDK_OFFSET(0x93FF730)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AF547DE4F5D0D9A3_1_OFFSET UNITYSDK_OFFSET(0x9400770)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AF547DE4F5D0D9A3_OFFSET UNITYSDK_OFFSET(0x93FFE00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B086E59C939189BD_1_OFFSET UNITYSDK_OFFSET(0x9400BE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B086E59C939189BD_2_OFFSET UNITYSDK_OFFSET(0x9401410)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B086E59C939189BD_OFFSET UNITYSDK_OFFSET(0x93FFCE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B08C2D073862D705_OFFSET UNITYSDK_OFFSET(0x93FE9E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B49BE3AD1D19BBC6_OFFSET UNITYSDK_OFFSET(0x93FFC40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B5D5F50392C85719_OFFSET UNITYSDK_OFFSET(0x93FEA70)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA02159EFC077A36_OFFSET UNITYSDK_OFFSET(0x9401470)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BB4F510B404DB080_OFFSET UNITYSDK_OFFSET(0x94006C0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BC2E2338BF8AE934_OFFSET UNITYSDK_OFFSET(0x93FE640)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_C96E8ACB93CD0F64_OFFSET UNITYSDK_OFFSET(0x94009F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CD7570A0CC71AFED_1_OFFSET UNITYSDK_OFFSET(0x9400C40)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CD7570A0CC71AFED_OFFSET UNITYSDK_OFFSET(0x9400440)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET UNITYSDK_OFFSET(0x93FF070)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D25364DDE235DE76_OFFSET UNITYSDK_OFFSET(0x9400F00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DC7B012B1FEF4C59_OFFSET UNITYSDK_OFFSET(0x93FE2E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DCF86428810E9F1D_OFFSET UNITYSDK_OFFSET(0x9400FE0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DEBCC704E24ADAF8_OFFSET UNITYSDK_OFFSET(0x9400E50)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E08633A5339F89FD_1_OFFSET UNITYSDK_OFFSET(0x94009D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E08633A5339F89FD_OFFSET UNITYSDK_OFFSET(0x93FEC80)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E1906D0440EAD4AF_OFFSET UNITYSDK_OFFSET(0x93FFF00)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E2D561F21E1CC608_OFFSET UNITYSDK_OFFSET(0x9401010)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E41AF25AF4B805C4_OFFSET UNITYSDK_OFFSET(0x94014E0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E533570C4924A466_OFFSET UNITYSDK_OFFSET(0x9400D10)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_EF36C7236D8C878B_OFFSET UNITYSDK_OFFSET(0x93FE580)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_EF3F45175F3CD6F5_OFFSET UNITYSDK_OFFSET(0x93FEB10)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F1783AF5E3284BB3_OFFSET UNITYSDK_OFFSET(0x9400910)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET UNITYSDK_OFFSET(0x94015D0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET UNITYSDK_OFFSET(0x93FF0F0)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F4DA24BEF9CF1A34_OFFSET UNITYSDK_OFFSET(0x9400F90)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_FAA67E0B47993166_1_OFFSET UNITYSDK_OFFSET(0x93FF830)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_FAA67E0B47993166_2_OFFSET UNITYSDK_OFFSET(0x9401040)
#define CLASS_1_F29C68BEB3C6B152___C_METHOD_1_FAA67E0B47993166_OFFSET UNITYSDK_OFFSET(0x93FE7A0)
#define CLASS_1_F29C68BEB3C6B152___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93FE290)
#define CLASS_1_F29C68BEB3C6B152___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93FE2D0)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex = 74273;

class Class_1_F29C68BEB3C6B152___c : public ::System::Object
{
public:
	static ::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>** StaticGet___9__52_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Slider*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D50);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__60_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D58);
	}
	static ::System::Action_2<::Class_2_60DDD9C206686F44*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__23_0()
	{
		return (::System::Action_2<::Class_2_60DDD9C206686F44*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D60);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D68);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__68_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D70);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__69_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D78);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D80);
	}
	static ::Class_1_F29C68BEB3C6B152___c** StaticGet___9()
	{
		return (::Class_1_F29C68BEB3C6B152___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D88);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Single>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D90);
	}
	static ::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>** StaticGet___9__79_0()
	{
		return (::System::Action_2<::UnityEngine::Camera*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37D98);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DA0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__48_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DA8);
	}
	static ::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>** StaticGet___9__73_0()
	{
		return (::System::Action_2<::UnityEngine::UI::AspectRatioFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DB0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>** StaticGet___9__64_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DB8);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::Boolean>** StaticGet___9__16_0()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DC0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__59_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DC8);
	}
	static ::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_79526D80B8F6897C*>** StaticGet___9__77_0()
	{
		return (::System::Action_2<::MoleMole::NotificationBadgeEx*, ::Class_1_79526D80B8F6897C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DD0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__61_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DD8);
	}
	static ::System::Action_2<::Class_2_9E3E3CDA608A4F58*, ::System::Boolean>** StaticGet___9__80_0()
	{
		return (::System::Action_2<::Class_2_9E3E3CDA608A4F58*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DE0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__58_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DE8);
	}
	static ::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_79526D80B8F6897C*>** StaticGet___9__77_1()
	{
		return (::System::Action_2<::MoleMole::NotificationBadge*, ::Class_1_79526D80B8F6897C*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DF0);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>** StaticGet___9__25_0()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37DF8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__63_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E00);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::String*>** StaticGet___9__18_0()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E08);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>** StaticGet___9__27_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E10);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>** StaticGet___9__61_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E18);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__69_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E20);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetText*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E28);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__70_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E30);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__57_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E38);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>** StaticGet___9__23_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E40);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>** StaticGet___9__45_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E48);
	}
	static ::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>** StaticGet___9__56_0()
	{
		return (::System::Action_2<::MoleMole::ScaledContentSizeFitter*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E50);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__54_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E58);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__64_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E60);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetKey*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E68);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__59_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E70);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::String*>** StaticGet___9__21_0()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E78);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__66_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E80);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>** StaticGet___9__12_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E88);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__62_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E90);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__57_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37E98);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>** StaticGet___9__70_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EA0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__62_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EA8);
	}
	static ::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>** StaticGet___9__28_1()
	{
		return (::System::Action_2<::UnityEngine::MonoBehaviour*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EB0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EB8);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>** StaticGet___9__65_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EC0);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::Boolean>** StaticGet___9__31_0()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EC8);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>** StaticGet___9__20_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37ED0);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::String*>** StaticGet___9__34_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37ED8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__67_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EE0);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>** StaticGet___9__22_0()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EE8);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>** StaticGet___9__34_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EF0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>** StaticGet___9__29_0()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37EF8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__14_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F00);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>** StaticGet___9__46_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F08);
	}
	static ::System::Action_2<::MoleMole::UIGeneralButtonController*, ::System::Boolean>** StaticGet___9__32_1()
	{
		return (::System::Action_2<::MoleMole::UIGeneralButtonController*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F10);
	}
	static ::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::Boolean>** StaticGet___9__32_2()
	{
		return (::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F18);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::String*>** StaticGet___9__34_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F20);
	}
	static ::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>** StaticGet___9__27_2()
	{
		return (::System::Action_2<::UnityEngine::GameObject*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F28);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__55_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F30);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__54_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F38);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>** StaticGet___9__65_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F40);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__63_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F48);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::Single>** StaticGet___9__53_0()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F50);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__55_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F58);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>** StaticGet___9__71_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F60);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::Color>** StaticGet___9__4_2()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F68);
	}
	static ::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>** StaticGet___9__72_0()
	{
		return (::System::Action_2<::UnityEngine::UI::LayoutElement*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F70);
	}
	static ::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>** StaticGet___9__33_0()
	{
		return (::System::Action_2<::UnityEngine::CanvasGroup*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F78);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>** StaticGet___9__68_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F80);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Int32>** StaticGet___9__29_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F88);
	}
	static ::System::Action_2<::Class_2_9E3E3CDA608A4F58*, ::System::String*>** StaticGet___9__81_0()
	{
		return (::System::Action_2<::Class_2_9E3E3CDA608A4F58*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F90);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::String*>** StaticGet___9__19_0()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37F98);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>** StaticGet___9__49_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FA0);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>** StaticGet___9__64_1()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FA8);
	}
	static ::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::Foundation::AssetPath>** StaticGet___9__17_0()
	{
		return (::System::Action_2<::Class_2_A8F5ABF31E066ED4*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FB0);
	}
	static ::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>** StaticGet___9__9_0()
	{
		return (::System::Action_2<::MoleMole::UIInputFieldEx*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FB8);
	}
	static ::System::Action_2<::Class_2_60DDD9C206686F44*, ::System::Boolean>** StaticGet___9__32_0()
	{
		return (::System::Action_2<::Class_2_60DDD9C206686F44*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FC0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::System::Boolean>** StaticGet___9__27_1()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FC8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>** StaticGet___9__15_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FD0);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>** StaticGet___9__67_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FD8);
	}
	static ::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>** StaticGet___9__58_0()
	{
		return (::System::Action_2<::UnityEngine::Component*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FE0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>** StaticGet___9__60_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FE8);
	}
	static ::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>** StaticGet___9__13_0()
	{
		return (::System::Action_2<::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FF0);
	}
	static ::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>** StaticGet___9__66_1()
	{
		return (::System::Action_2<::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x37FF8);
	}
	static ::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F29C68BEB3C6B152___c_TypeDefinitionIndex)->GetStaticField(0x38000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC7B012B1FEF4C59(::UnityEngine::UI::Extension::ISetArg* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DC7B012B1FEF4C59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_281422FB6736FA13(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_281422FB6736FA13_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F7A838ECD7838A8(::Class_2_A8F5ABF31E066ED4* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3F7A838ECD7838A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_31A6C780DD9DCC94(::Class_2_A8F5ABF31E066ED4* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_31A6C780DD9DCC94_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A8128F06F4FBF60(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7A8128F06F4FBF60_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EF36C7236D8C878B(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_EF36C7236D8C878B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC2E2338BF8AE934(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BC2E2338BF8AE934_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_629A5CC56DC7764C(::UnityEngine::Component* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_629A5CC56DC7764C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2A4AC01439701532(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_2A4AC01439701532_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FAA67E0B47993166(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_FAA67E0B47993166_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0E718C6537ACC52B(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0E718C6537ACC52B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_14E5ADC595ACA31E(::MoleMole::UIInputFieldEx* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14E5ADC595ACA31E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C55E47FC986DAE3(::UnityEngine::UI::Extension::PathGuide* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0C55E47FC986DAE3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B08C2D073862D705(::MoleMole::ScaledContentSizeFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ScaledContentSizeFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B08C2D073862D705_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B5D5F50392C85719(::MoleMole::NotificationBadge* a1, ::Class_1_79526D80B8F6897C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*, ::Class_1_79526D80B8F6897C*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B5D5F50392C85719_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EF3F45175F3CD6F5(::UnityEngine::Component* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_EF3F45175F3CD6F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0E718C6537ACC52B_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0E718C6537ACC52B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E08633A5339F89FD(::Class_2_A8F5ABF31E066ED4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E08633A5339F89FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93F2F4F866DDF3A0(::Class_2_60DDD9C206686F44* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_60DDD9C206686F44*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93F2F4F866DDF3A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15FBD89DDFD94138(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_15FBD89DDFD94138_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_309BC38B52E6E30B(::UnityEngine::UI::Slider* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Slider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_309BC38B52E6E30B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_437A374C2FFC4F2B(::UnityEngine::MonoBehaviour* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_437A374C2FFC4F2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEE0CB10BF5ABCF1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CEE0CB10BF5ABCF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9720E80E62E45A0D(::UnityEngine::UI::Extension::PathGuide* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::PathGuide*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9720E80E62E45A0D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC(::Class_2_A8F5ABF31E066ED4* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8604BE9BE5DFC959(::UnityEngine::UI::Extension::UIDynamicNumberLabel* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_8604BE9BE5DFC959_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7254AC96FAA1BBAC(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7254AC96FAA1BBAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_999C8D603BB5B4F3(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_3<::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_999C8D603BB5B4F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48824AEE2BF00A61(::UnityEngine::UI::LayoutElement* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_48824AEE2BF00A61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4993A4548CE26905(::MoleMole::UIGeneralButtonController* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_4993A4548CE26905_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_14DE3BA1DADA14A2(::UnityEngine::UI::Extension::UILocalizationText* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_14DE3BA1DADA14A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_033982E7E38F8283(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_033982E7E38F8283_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D3191CFBF5EF6BE_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D3191CFBF5EF6BE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ABA959575FF89EA6(::UnityEngine::UI::Extension::ISetText* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetText*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_ABA959575FF89EA6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_924D9180ADA787AC(::MoleMole::UIInputFieldEx* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInputFieldEx*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_924D9180ADA787AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FAA67E0B47993166_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_FAA67E0B47993166_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93E497FEF4A2D816(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_2<::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_2<::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_93E497FEF4A2D816_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D88605FD3035F75(::Class_2_A8F5ABF31E066ED4* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9D88605FD3035F75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_62AF9D579A98BF9B(::MoleMole::UIGeneralButtonController* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_62AF9D579A98BF9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B49BE3AD1D19BBC6(::Class_2_A8F5ABF31E066ED4* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B49BE3AD1D19BBC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A0B489BA1A51EE8(::MoleMole::UIGeneralButtonController* a1, ::Struct_2_55B1720D3ECF0A32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*, ::Struct_2_55B1720D3ECF0A32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6A0B489BA1A51EE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B086E59C939189BD(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B086E59C939189BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_553780A2AC829D20(::UnityEngine::UI::AspectRatioFitter* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::AspectRatioFitter*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_553780A2AC829D20_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_318BC565AAB92D03(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_318BC565AAB92D03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AF547DE4F5D0D9A3(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AF547DE4F5D0D9A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4530CD192CF2498E(::UnityEngine::Component* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_4530CD192CF2498E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E1906D0440EAD4AF(::UnityEngine::UI::Extension::ISetArg* a1, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::System::ValueTuple_4<::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E1906D0440EAD4AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3B8E9BBEFC88D3BE(::MoleMole::NotificationBadgeEx* a1, ::Class_1_79526D80B8F6897C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_79526D80B8F6897C*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3B8E9BBEFC88D3BE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7942E347FED008A8(::UnityEngine::CanvasGroup* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7942E347FED008A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85D1261F4A7EE5D7(::UnityEngine::Component* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_85D1261F4A7EE5D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD7570A0CC71AFED(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CD7570A0CC71AFED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E985F67685BEDDE(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E985F67685BEDDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6C59F653D71D55E2_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_6C59F653D71D55E2_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BB4F510B404DB080(::Class_2_A8F5ABF31E066ED4* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BB4F510B404DB080_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AF547DE4F5D0D9A3_1(::UnityEngine::Component* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_AF547DE4F5D0D9A3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3918CD07E93F7C4C(::Class_2_60DDD9C206686F44* a1, ::UnityEngine::Events::UnityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_60DDD9C206686F44*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3918CD07E93F7C4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F1783AF5E3284BB3(::Class_1_A01CE0B13E11F09E* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F1783AF5E3284BB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E08633A5339F89FD_1(::Class_2_A8F5ABF31E066ED4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E08633A5339F89FD_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C96E8ACB93CD0F64(::UnityEngine::UI::Extension::ISetKey* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetKey*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_C96E8ACB93CD0F64_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B086E59C939189BD_1(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B086E59C939189BD_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD7570A0CC71AFED_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_CD7570A0CC71AFED_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E533570C4924A466(::UnityEngine::UI::Extension::ISetArg* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::ISetArg*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E533570C4924A466_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A8128F06F4FBF60_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_7A8128F06F4FBF60_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DEBCC704E24ADAF8(::Class_2_9E3E3CDA608A4F58* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DEBCC704E24ADAF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D25364DDE235DE76(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_D25364DDE235DE76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4DA24BEF9CF1A34(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F4DA24BEF9CF1A34_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E6674EF2AE6AD0A(::UnityEngine::Camera* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E6674EF2AE6AD0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCF86428810E9F1D(::Class_1_A01CE0B13E11F09E* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_DCF86428810E9F1D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2D561F21E1CC608(::Class_1_A01CE0B13E11F09E* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E2D561F21E1CC608_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FAA67E0B47993166_2(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_FAA67E0B47993166_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5E1DB17054DA32A0(::UnityEngine::UI::Extension::UIDynamicNumberLabel* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UIDynamicNumberLabel*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_5E1DB17054DA32A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9A082094D383B5AF_1(::Class_1_A01CE0B13E11F09E* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_9A082094D383B5AF_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E52E17783104D59(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3E52E17783104D59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D0C710459EC7E0A(::UnityEngine::UI::LayoutElement* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_3D0C710459EC7E0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_84633CD65E651BB6(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_84633CD65E651BB6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_868FAFEA157C2D70(::UnityEngine::UI::Extension::UITimeWidget* a1, ::System::TimeSpan a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_868FAFEA157C2D70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B086E59C939189BD_2(::UnityEngine::Component* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_B086E59C939189BD_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA02159EFC077A36(::UnityEngine::UI::Extension::UITextureOffsetModifier* a1, ::UnityEngine::Rect a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITextureOffsetModifier*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_BA02159EFC077A36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_483608963BE393FB(::Class_2_9E3E3CDA608A4F58* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9E3E3CDA608A4F58*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_483608963BE393FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E41AF25AF4B805C4(::Class_1_A01CE0B13E11F09E* a1, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A01CE0B13E11F09E*, ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_E41AF25AF4B805C4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0030BBB9CB7501A7_1(::UnityEngine::Component* a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_0030BBB9CB7501A7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3CCD480DFEA6CDC_1(::Class_2_CA67A9CEB871FFD3* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152___C_METHOD_1_F3CCD480DFEA6CDC_1_OFFSET))(this, a1, a2);
	}
};
