#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9.h"
#include "unitysdk/Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIInLevelMonsterHudWidgetChildWindowController_HudFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_100;
class Class_1_15CCFE77B9E12299;
class Class_1_48D56DACBE4271BC;
class Class_1_534AF681CC2BD5FD_181_Class_2_28249A88E2D6FCE3;
class Class_1_5549A0E56E69A540_Class_1_7FA5C3A43CE694AB;
class Class_1_5549A0E56E69A540_Class_2_486B26F671E13405;
class Class_1_5549A0E56E69A540_Class_2_8D34C558483DC486;
class Class_1_5549A0E56E69A540_Class_2_D13D1846575A4975;
class Class_1_6DB015FE22A27672;
class Class_1_D3AFDFA22385B1B4;
class Class_1_DF78C8D1C5D55CEC;
class Class_2_05BFAB15000D9DD3;
class Class_2_3DB445A4752BD42A;
class Class_2_777A5D016ADC7368;
class Class_2_79AE422BA06F6D26_171;
class Class_3_7472FB6CC4015359;
class Class_3_F97B015544BE936B;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class UIStunDamageWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_5549A0E56E69A540_METHOD_1_0127349B4590106C_OFFSET UNITYSDK_OFFSET(0x9C0A940)
#define CLASS_1_5549A0E56E69A540_METHOD_1_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x9C0D2D0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_0404C765C41C7F23_OFFSET UNITYSDK_OFFSET(0x9C07EF0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x9C15AC0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_0956015EE7643124_OFFSET UNITYSDK_OFFSET(0x9C0AAD0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_0B56C626F5AC60EB_OFFSET UNITYSDK_OFFSET(0x9C0A4A0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_0D8B161FC097E741_OFFSET UNITYSDK_OFFSET(0x9C0C140)
#define CLASS_1_5549A0E56E69A540_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x9C0F860)
#define CLASS_1_5549A0E56E69A540_METHOD_1_11ABB7007D86D2F9_OFFSET UNITYSDK_OFFSET(0x9C0BF00)
#define CLASS_1_5549A0E56E69A540_METHOD_1_160348D02D4B4F5A_OFFSET UNITYSDK_OFFSET(0x9C15DE0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_1744F1C12067ADB3_OFFSET UNITYSDK_OFFSET(0x9C09830)
#define CLASS_1_5549A0E56E69A540_METHOD_1_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x9C0C720)
#define CLASS_1_5549A0E56E69A540_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x9C10110)
#define CLASS_1_5549A0E56E69A540_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x9C103C0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9C08F20)
#define CLASS_1_5549A0E56E69A540_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x9C0ADD0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_1E83AACA378B37AB_OFFSET UNITYSDK_OFFSET(0x9C17070)
#define CLASS_1_5549A0E56E69A540_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x9C0F6B0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x9C07150)
#define CLASS_1_5549A0E56E69A540_METHOD_1_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0x9C12230)
#define CLASS_1_5549A0E56E69A540_METHOD_1_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x9C08150)
#define CLASS_1_5549A0E56E69A540_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x9C10EF0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x9C14EC0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x9C10490)
#define CLASS_1_5549A0E56E69A540_METHOD_1_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x9C10800)
#define CLASS_1_5549A0E56E69A540_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x9C12670)
#define CLASS_1_5549A0E56E69A540_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x9C0EE50)
#define CLASS_1_5549A0E56E69A540_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x9C10E20)
#define CLASS_1_5549A0E56E69A540_METHOD_1_4658620FE9C84CD6_OFFSET UNITYSDK_OFFSET(0x9C12970)
#define CLASS_1_5549A0E56E69A540_METHOD_1_48307BDDDEB547D6_OFFSET UNITYSDK_OFFSET(0x9C17B10)
#define CLASS_1_5549A0E56E69A540_METHOD_1_4C1C6BDA70EF0410_OFFSET UNITYSDK_OFFSET(0x9C0FF40)
#define CLASS_1_5549A0E56E69A540_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x9C17BE0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_54B714E992A012F4_OFFSET UNITYSDK_OFFSET(0x9C0B950)
#define CLASS_1_5549A0E56E69A540_METHOD_1_55C0D9DABC8177F3_OFFSET UNITYSDK_OFFSET(0x9C13C70)
#define CLASS_1_5549A0E56E69A540_METHOD_1_56CE4AFC5339F746_1_OFFSET UNITYSDK_OFFSET(0x9C12BA0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x9C0D170)
#define CLASS_1_5549A0E56E69A540_METHOD_1_5A8B223EA7063738_OFFSET UNITYSDK_OFFSET(0x9C0E010)
#define CLASS_1_5549A0E56E69A540_METHOD_1_5F832E106216F7FB_OFFSET UNITYSDK_OFFSET(0x9C0BF80)
#define CLASS_1_5549A0E56E69A540_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x9C09C80)
#define CLASS_1_5549A0E56E69A540_METHOD_1_616435E7DE57062B_OFFSET UNITYSDK_OFFSET(0x9C13030)
#define CLASS_1_5549A0E56E69A540_METHOD_1_6192246143E6A40B_OFFSET UNITYSDK_OFFSET(0x9C17110)
#define CLASS_1_5549A0E56E69A540_METHOD_1_61C701B5E14F936D_OFFSET UNITYSDK_OFFSET(0x9C17ED0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_6345BF557E4E4E6A_OFFSET UNITYSDK_OFFSET(0x9C07C60)
#define CLASS_1_5549A0E56E69A540_METHOD_1_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x9C17F90)
#define CLASS_1_5549A0E56E69A540_METHOD_1_6A3D0D9049D7EDC2_OFFSET UNITYSDK_OFFSET(0x9C0D650)
#define CLASS_1_5549A0E56E69A540_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0x9C09160)
#define CLASS_1_5549A0E56E69A540_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x9C127C0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x9C13F00)
#define CLASS_1_5549A0E56E69A540_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x9C0C1C0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x9C13AE0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x9C11480)
#define CLASS_1_5549A0E56E69A540_METHOD_1_8A05DE1403363D53_OFFSET UNITYSDK_OFFSET(0x9C17410)
#define CLASS_1_5549A0E56E69A540_METHOD_1_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x9C136A0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_906510432EEA2C38_OFFSET UNITYSDK_OFFSET(0x9C126E0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x9C12CD0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_1_OFFSET UNITYSDK_OFFSET(0x9C13AF0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_2_OFFSET UNITYSDK_OFFSET(0x9C10500)
#define CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_3_OFFSET UNITYSDK_OFFSET(0x9C17DD0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x9C09590)
#define CLASS_1_5549A0E56E69A540_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x9C0FDF0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9C0FFC0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_9E2DCE81D5D10717_OFFSET UNITYSDK_OFFSET(0x9C147C0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0x9C0DED0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_A5585E9B4E5D2EE5_OFFSET UNITYSDK_OFFSET(0x9C0B4B0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x9C16E40)
#define CLASS_1_5549A0E56E69A540_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x9C099F0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x9C0A2D0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x9C0E1C0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_AF82526B82A7316A_OFFSET UNITYSDK_OFFSET(0x9C0AAC0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_B07EC1ACF82C9F2F_OFFSET UNITYSDK_OFFSET(0x9C0FA50)
#define CLASS_1_5549A0E56E69A540_METHOD_1_B176F3308ECD56F6_OFFSET UNITYSDK_OFFSET(0x9C0B8E0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x9C13A20)
#define CLASS_1_5549A0E56E69A540_METHOD_1_C2CDB8F6AD753AAC_OFFSET UNITYSDK_OFFSET(0x9C162D0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0x9C0FC80)
#define CLASS_1_5549A0E56E69A540_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9C17630)
#define CLASS_1_5549A0E56E69A540_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C0FC20)
#define CLASS_1_5549A0E56E69A540_METHOD_1_CD9B90D9200EC09E_OFFSET UNITYSDK_OFFSET(0x9C10B50)
#define CLASS_1_5549A0E56E69A540_METHOD_1_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x9C07220)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x9C17690)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D2C3E503AE36B9C3_OFFSET UNITYSDK_OFFSET(0x9C11380)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x9C10CE0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0x9C08950)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x9C0C3F0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D4935B3503555207_OFFSET UNITYSDK_OFFSET(0x9C0F620)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D62C8DE162EE4DA7_OFFSET UNITYSDK_OFFSET(0x9C0ADC0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D643BAC787BFCBDF_OFFSET UNITYSDK_OFFSET(0x9C16390)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0x9C10A20)
#define CLASS_1_5549A0E56E69A540_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x9C14CB0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_DA6216D3D356F9FE_OFFSET UNITYSDK_OFFSET(0x9C11410)
#define CLASS_1_5549A0E56E69A540_METHOD_1_DCEB9B8FD296459A_OFFSET UNITYSDK_OFFSET(0x9C0A7B0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_E0948EE27FFDA9C9_OFFSET UNITYSDK_OFFSET(0x9C0EEC0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_E4E28A03F241E0FE_OFFSET UNITYSDK_OFFSET(0x9C0BD90)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x9C17100)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F175213186032CF3_OFFSET UNITYSDK_OFFSET(0x9C094A0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0x9C0B270)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F5447CD65612575D_1_OFFSET UNITYSDK_OFFSET(0x9C16CD0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9C17A00)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_1_OFFSET UNITYSDK_OFFSET(0x9C0B090)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_2_OFFSET UNITYSDK_OFFSET(0x9C0B9E0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_3_OFFSET UNITYSDK_OFFSET(0x9C101F0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_4_OFFSET UNITYSDK_OFFSET(0x9C14AD0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_5_OFFSET UNITYSDK_OFFSET(0x9C16AF0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x9C08FA0)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F8D6E72D9B7F6305_OFFSET UNITYSDK_OFFSET(0x9C18670)
#define CLASS_1_5549A0E56E69A540_METHOD_1_F9A1C2ECBA97BE38_OFFSET UNITYSDK_OFFSET(0x9C17E40)
#define CLASS_1_5549A0E56E69A540_METHOD_1_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x9C09290)
#define CLASS_1_5549A0E56E69A540_METHOD_1_FE936CB8E8F44BDB_OFFSET UNITYSDK_OFFSET(0x9C0BE80)
#define CLASS_1_5549A0E56E69A540_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x9C07DE0)
#define CLASS_1_5549A0E56E69A540__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C07FC0)
#define CLASS_1_5549A0E56E69A540__CTOR_OFFSET UNITYSDK_OFFSET(0x9C06EF0)

inline static constexpr unsigned int Class_1_5549A0E56E69A540_TypeDefinitionIndex = 52984;

class Class_1_5549A0E56E69A540 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_39()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE950);
	}
	static ::System::Int32* StaticGet_Field_1_31()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE954);
	}
	static ::System::Int32* StaticGet_Field_1_81()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE958);
	}
	static ::System::Int32* StaticGet_Field_1_38()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE95C);
	}
	static ::System::Int32* StaticGet_Field_1_55()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE960);
	}
	static ::System::Int32* StaticGet_Field_1_37()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE964);
	}
	static ::System::Int32* StaticGet_Field_1_32()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE968);
	}
	static ::System::Int32* StaticGet_Field_1_35()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE96C);
	}
	static ::System::Int32* StaticGet_Field_1_82()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE970);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_58()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE974);
	}
	static ::System::Single* StaticGet_Field_1_49()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE984);
	}
	static ::System::Int32* StaticGet_Field_1_36()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE988);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_44()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE98C);
	}
	static ::System::Single* StaticGet_Field_1_48()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE990);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_57()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE994);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_41()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9A4);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_45()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9A8);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_40()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9AC);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_42()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9B0);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_46()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9B4);
	}
	static ::System::Int32* StaticGet_Field_1_34()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9B8);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_47()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9BC);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9C0);
	}
	static ::UnityEngine::Color32* StaticGet_Field_1_43()
	{
		return (::UnityEngine::Color32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9C4);
	}
	static ::System::Int32* StaticGet_Field_1_79()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9C8);
	}
	static ::System::Int32* StaticGet_Field_1_80()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5549A0E56E69A540_TypeDefinitionIndex)->GetStaticField(0xE9CC);
	}
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_50; // 0x0
	// static const ::System::String* Field_1_51; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_76; // 0x0
	::Class_1_48D56DACBE4271BC* Field_1_18; // 0x10
	::UnityEngine::Material* Field_1_67; // 0x18
	::Class_1_D3AFDFA22385B1B4* Field_1_7; // 0x20
	::MoleMole::CharacterScriptConfig* Field_1_59; // 0x28
	::Class_1_48D56DACBE4271BC* Field_1_17; // 0x30
	::UnityEngine::Material* Field_1_61; // 0x38
	::Class_3_7472FB6CC4015359* Field_1_75; // 0x40
	::Class_1_5549A0E56E69A540_Class_2_D13D1846575A4975* Field_1_19; // 0x48
	::UnityEngine::Material* Field_1_64; // 0x50
	::Class_1_6DB015FE22A27672* Field_1_8; // 0x58
	::Class_1_5549A0E56E69A540_Class_2_486B26F671E13405* Field_1_20; // 0x60
	::UnityEngine::Material* Field_1_62; // 0x68
	::Class_1_5549A0E56E69A540_Class_2_8D34C558483DC486* Field_1_22; // 0x70
	::Class_1_DF78C8D1C5D55CEC* Field_1_83; // 0x78
	::Class_1_DF78C8D1C5D55CEC* Field_1_84; // 0x80
	::Class_0_16E4307DCC419505_100* Field_1_9; // 0x88
	::Class_1_15CCFE77B9E12299* Field_1_73; // 0x90
	::UnityEngine::Material* Field_1_69; // 0x98
	::UnityEngine::Material* Field_1_65; // 0xA0
	::UnityEngine::Material* Field_1_68; // 0xA8
	::Class_3_F97B015544BE936B* Field_1_74; // 0xB0
	::Class_2_777A5D016ADC7368* Field_1_10; // 0xB8
	::Class_2_3DB445A4752BD42A* Field_1_21; // 0xC0
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_86; // 0xC8
	::UnityEngine::Material* Field_1_70; // 0xD0
	::MoleMole::UIStunDamageWidgetController* Field_1_72; // 0xD8
	::Class_1_5549A0E56E69A540_Class_1_7FA5C3A43CE694AB* Field_1_23; // 0xE0
	::Class_2_79AE422BA06F6D26_171* Field_1_71; // 0xE8
	::UnityEngine::Material* Field_1_66; // 0xF0
	::UnityEngine::Material* Field_1_63; // 0xF8
	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag Field_1_56; // 0x100
	::System::Single Field_1_78; // 0x104
	::System::Boolean Field_1_0; // 0x108
	::System::Boolean Field_1_2; // 0x109
	::System::Boolean Field_1_30; // 0x10A
	::System::Boolean Field_1_27; // 0x10B
	::System::Boolean Field_1_16; // 0x10C
	::System::Boolean Field_1_3; // 0x10D
	::System::Boolean Field_1_11; // 0x10E
	::System::Boolean Field_1_77; // 0x10F
	::System::Boolean Field_1_87; // 0x110
	::System::Boolean Field_1_4; // 0x111
	::System::Boolean Field_1_29; // 0x112
	::System::Boolean Field_1_1; // 0x113
	::System::Boolean Field_1_28; // 0x114
	::Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9 Field_1_14; // 0x118
	::System::Single Field_1_5; // 0x128
	::System::Single Field_1_12; // 0x12C
	::UnityEngine::Color Field_1_60; // 0x130
	::Foundation::Coroutine::CoroutineHandle Field_1_15; // 0x140
	::System::Single Field_1_85; // 0x144
	::System::Single Field_1_6; // 0x148

	::System::Void _ctor(::Class_2_777A5D016ADC7368* a1, ::Class_2_79AE422BA06F6D26_171* a2, ::MoleMole::UIStunDamageWidgetController* a3, ::Class_0_16E4307DCC419505_100* a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::Class_2_79AE422BA06F6D26_171*, ::MoleMole::UIStunDamageWidgetController*, ::Class_0_16E4307DCC419505_100*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540__CCTOR_OFFSET))();
	}

	::System::Void OnFighter_PropertyValueChanged(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_1_D33218A492B26449()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D33218A492B26449_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}

	::System::Void Method_1_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_FA0119DD445A672F_OFFSET))(this);
	}

	::System::Void Method_1_F175213186032CF3(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F175213186032CF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::System::Void Method_1_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_1_DCEB9B8FD296459A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_DCEB9B8FD296459A_OFFSET))(this, a1);
	}

	::Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9 Method_1_AF82526B82A7316A()
	{
		return ((::Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_AF82526B82A7316A_OFFSET))(this);
	}

	::System::Void Method_1_0B56C626F5AC60EB(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_0B56C626F5AC60EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0956015EE7643124(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_0956015EE7643124_OFFSET))(this, a1);
	}

	::System::Void Method_1_D62C8DE162EE4DA7(::Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D62C8DE162EE4DA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_1_OFFSET))(this);
	}

	::System::Void Method_1_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F206290BA342BA13_OFFSET))(this);
	}

	::System::Boolean Method_1_A5585E9B4E5D2EE5(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_A5585E9B4E5D2EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_F79D5EC57FBF426E_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_2_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_E4E28A03F241E0FE(::UnityEngine::RectTransform* a1)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_E4E28A03F241E0FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE936CB8E8F44BDB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_FE936CB8E8F44BDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_11ABB7007D86D2F9(::Class_2_05BFAB15000D9DD3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_05BFAB15000D9DD3*))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_11ABB7007D86D2F9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0D8B161FC097E741(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_0D8B161FC097E741_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_CEBFF096B4C9D46B_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Void Method_1_6A3D0D9049D7EDC2(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_6A3D0D9049D7EDC2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_E0948EE27FFDA9C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_E0948EE27FFDA9C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_D4935B3503555207(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D4935B3503555207_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_B07EC1ACF82C9F2F(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_B07EC1ACF82C9F2F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C1C6BDA70EF0410(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_4C1C6BDA70EF0410_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5A8B223EA7063738(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_5A8B223EA7063738_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F79D5EC57FBF426E_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_3_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_D2C3E503AE36B9C3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D2C3E503AE36B9C3_OFFSET))(this, a1);
	}

	::Class_1_534AF681CC2BD5FD_181_Class_2_28249A88E2D6FCE3* Method_1_DA6216D3D356F9FE()
	{
		return ((::Class_1_534AF681CC2BD5FD_181_Class_2_28249A88E2D6FCE3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_DA6216D3D356F9FE_OFFSET))(this);
	}

	::System::Void Method_1_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_89EF21CA0414B145_OFFSET))(this);
	}

	::System::Void Method_1_31F1C58AB372DEB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_31F1C58AB372DEB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_1_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Void Method_1_4658620FE9C84CD6(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_4658620FE9C84CD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_56CE4AFC5339F746_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_56CE4AFC5339F746_1_OFFSET))(this);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_1_0127349B4590106C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_0127349B4590106C_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_921C3C3E09D59CD4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_1_OFFSET))(this);
	}

	::System::Void Method_1_0404C765C41C7F23(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Double a4, ::System::Double a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_0404C765C41C7F23_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_6345BF557E4E4E6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_6345BF557E4E4E6A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Boolean Method_1_B176F3308ECD56F6(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_B176F3308ECD56F6_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E2DCE81D5D10717(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_9E2DCE81D5D10717_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_906510432EEA2C38(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_906510432EEA2C38_OFFSET))(this, a1);
	}

	::System::Void Method_1_616435E7DE57062B(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_616435E7DE57062B_OFFSET))(this, a1);
	}

	::System::Void Method_1_55C0D9DABC8177F3(::System::UInt32 a1, ::MoleMole::Config::BaseProperty a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_55C0D9DABC8177F3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F79D5EC57FBF426E_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_4_OFFSET))(this);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_1_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::UnityEngine::Vector4 Method_1_C2CDB8F6AD753AAC(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_C2CDB8F6AD753AAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D643BAC787BFCBDF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D643BAC787BFCBDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_F79D5EC57FBF426E_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F79D5EC57FBF426E_5_OFFSET))(this);
	}

	::System::Void Method_1_1744F1C12067ADB3(::UnityEngine::Color a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_1744F1C12067ADB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_2_OFFSET))(this);
	}

	::System::Void Method_1_A5809AB80389F7DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_A5809AB80389F7DE_OFFSET))(this);
	}

	::System::Void Method_1_1E83AACA378B37AB(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_1E83AACA378B37AB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_6192246143E6A40B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_6192246143E6A40B_OFFSET))(this);
	}

	::System::Void Method_1_8A05DE1403363D53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_8A05DE1403363D53_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_1_5F832E106216F7FB(::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15880D2539860D46_Enum_3_9DBA21A6F4C405AF, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_5F832E106216F7FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_54B714E992A012F4(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_54B714E992A012F4_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_1_48307BDDDEB547D6(::UnityEngine::Rect a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_48307BDDDEB547D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_921C3C3E09D59CD4_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_921C3C3E09D59CD4_3_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_F9A1C2ECBA97BE38(::System::Int32 a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F9A1C2ECBA97BE38_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Void Method_1_61C701B5E14F936D(::System::Single a1, ::System::Int32 a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_61C701B5E14F936D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F5447CD65612575D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F5447CD65612575D_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_160348D02D4B4F5A(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_160348D02D4B4F5A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CD9B90D9200EC09E(::Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5549A0E56E69A540_Struct_2_9DB2523694EFCBD9))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_CD9B90D9200EC09E_OFFSET))(this, a1);
	}

	::System::Void Method_1_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_64F3965CE4C4DB47_OFFSET))(this);
	}

	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag Method_1_F8D6E72D9B7F6305()
	{
		return ((::MoleMole::UIInLevelMonsterHudWidgetChildWindowController_HudFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5549A0E56E69A540_METHOD_1_F8D6E72D9B7F6305_OFFSET))(this);
	}
};
