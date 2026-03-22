#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Enum_3_AEB18F409410ABC4_1.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_403;
class Class_1_96623587C8430E5E;
class Class_2_0495AF03A29D7705;
class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_D89CCC627A66D0AD;
class Class_2_E87F1D15F1D4AC72;
class Class_3_DA14B6788FB0E99C;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralRoleSelectListWidgetController_Context; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_0_16E4307DCC419505_103;
template <typename T> class Class_1_B21635644D20A130;
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_7681E34099AFEF1E_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x8B2C200)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_0DB70F0CB223BDCA_OFFSET UNITYSDK_OFFSET(0x8B2D5B0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_182A6A76FFAC079F_OFFSET UNITYSDK_OFFSET(0x8B29BC0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x8B2ACA0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_1B0EFE11633192E3_OFFSET UNITYSDK_OFFSET(0x8B2A6E0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x8B2C1A0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_1DAEFE1176C07C47_OFFSET UNITYSDK_OFFSET(0x8B2BEC0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_1DFCC636FF29BCBA_OFFSET UNITYSDK_OFFSET(0x8B2C3E0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8B2CE00)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x8B2B730)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x8B2BD80)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_37A495F5554C4F7A_OFFSET UNITYSDK_OFFSET(0x8B2B400)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x8B2A070)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x8B2BBA0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_41F329F901906F10_OFFSET UNITYSDK_OFFSET(0x8B2AA00)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8B2B8E0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x8B2D100)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x8B29F80)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x8B2B630)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8B2CC60)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_56420FBF78F0AFE1_OFFSET UNITYSDK_OFFSET(0x8B2DB70)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_56DB3F4F37AFFBE8_OFFSET UNITYSDK_OFFSET(0x8B2DDF0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_5EBB567B46C61864_OFFSET UNITYSDK_OFFSET(0x8B29280)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x8B296D0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_6ABB01DFDE2F44D1_OFFSET UNITYSDK_OFFSET(0x8B2BED0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_73C0BC5ADF48BF5C_OFFSET UNITYSDK_OFFSET(0x8B2B8D0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x8B2AF80)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0x8B2CF30)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x8B2B150)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_A50E06D67A506F1E_OFFSET UNITYSDK_OFFSET(0x8B2DB00)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_ADA05A93E00A659E_OFFSET UNITYSDK_OFFSET(0x8B2D7C0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x8B2BA10)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8B2B9B0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8B2A680)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_CA7A09234980495B_OFFSET UNITYSDK_OFFSET(0x8B29C60)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_E2CFE21492926DBB_OFFSET UNITYSDK_OFFSET(0x6D9C210)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_E41AC0E17BE4B813_OFFSET UNITYSDK_OFFSET(0x8B2B340)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x8B2BA80)
#define CLASS_2_7681E34099AFEF1E__CTOR_OFFSET UNITYSDK_OFFSET(0x8B2A630)

inline static constexpr unsigned int Class_2_7681E34099AFEF1E_TypeDefinitionIndex = 58348;

class Class_2_7681E34099AFEF1E : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::UnityEngine::RectTransform* Field_2_8; // 0x50
	::UnityEngine::GameObject* Field_2_2; // 0x58
	::UnityEngine::GameObject* Field_2_1; // 0x60
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_28; // 0x68
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralSortWidgetController*>* Field_2_13; // 0x70
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_27; // 0x78
	::UnityEngine::RectTransform* Field_2_3; // 0x80
	::UIWidgetGroup* Field_2_21; // 0x88
	::Class_0_16E4307DCC419505_403* Field_2_33; // 0x90
	::Class_1_B21635644D20A130<::Class_2_D89CCC627A66D0AD*>* Field_2_14; // 0x98
	::UnityEngine::RectTransform* Field_2_9; // 0xA0
	::Class_2_60DDD9C206686F44* Field_2_5; // 0xA8
	::UIWidgetGroup* Field_2_22; // 0xB0
	::UnityEngine::RectTransform* Field_2_31; // 0xB8
	::Class_2_60DDD9C206686F44* Field_2_12; // 0xC0
	::Class_2_60DDD9C206686F44* Field_2_11; // 0xC8
	::MoleMole::MonoGamepadSpaceList* Field_2_18; // 0xD0
	::MoleMole::MonoGamepadNavigatableList* Field_2_19; // 0xD8
	::MonoUITableScrollV2* Field_2_7; // 0xE0
	::Class_0_16E4307DCC419505_103<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* Field_2_39; // 0xE8
	::System::Collections::Generic::List_1<::Class_2_0495AF03A29D7705*>* Field_2_29; // 0xF0
	::UIWidgetGroup* Field_2_20; // 0xF8
	::Class_2_1F76884FC39FD584* Field_2_0; // 0x100
	::UnityEngine::RectTransform* Field_2_4; // 0x108
	::System::Collections::Generic::List_1<::Class_3_DA14B6788FB0E99C*>* Field_2_38; // 0x110
	::Class_1_96623587C8430E5E* Field_2_30; // 0x118
	::MonoUITableScrollV2* Field_2_6; // 0x120
	::UnityEngine::RectTransform* Field_2_10; // 0x128
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_37; // 0x130
	::Enum_3_AEB18F409410ABC4_1 Field_2_32; // 0x138
	::System::Int32 Field_2_17; // 0x13C
	::System::Boolean Field_2_35; // 0x140
	::System::Boolean Field_2_23; // 0x141
	::System::Boolean Field_2_34; // 0x142
	::System::Int32 Field_2_16; // 0x144
	::System::Int32 Field_2_15; // 0x148
	::System::Boolean Field_2_26; // 0x14C
	::System::Boolean Field_2_25; // 0x14D
	::System::Boolean Field_2_24; // 0x14E
	::System::Boolean Field_2_36; // 0x14F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E2CFE21492926DBB(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_E2CFE21492926DBB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5EBB567B46C61864(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_5EBB567B46C61864_OFFSET))(this, a1);
	}

	::System::Void Method_2_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1B0EFE11633192E3(::Enum_3_AEB18F409410ABC4_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_1B0EFE11633192E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_41F329F901906F10(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_41F329F901906F10_OFFSET))(this, a1);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_E41AC0E17BE4B813(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_E41AC0E17BE4B813_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_182A6A76FFAC079F(::Enum_3_AEB18F409410ABC4_1 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_182A6A76FFAC079F_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_103<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* Method_2_73C0BC5ADF48BF5C()
	{
		return ((::Class_0_16E4307DCC419505_103<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_73C0BC5ADF48BF5C_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_1DAEFE1176C07C47(::Class_0_16E4307DCC419505_103<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_1DAEFE1176C07C47_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_37A495F5554C4F7A(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_37A495F5554C4F7A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6ABB01DFDE2F44D1(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_6ABB01DFDE2F44D1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Method_2_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_1B1602B46CB3FF5C_OFFSET))(this);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_1DFCC636FF29BCBA(::Enum_3_AEB18F409410ABC4_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_1DFCC636FF29BCBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_36F46336ADA62D13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_36F46336ADA62D13_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_1_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_0DB70F0CB223BDCA(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_0DB70F0CB223BDCA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_2_ADA05A93E00A659E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_ADA05A93E00A659E_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_CA7A09234980495B(::Enum_3_AEB18F409410ABC4_1 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_CA7A09234980495B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A50E06D67A506F1E(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_A50E06D67A506F1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_56420FBF78F0AFE1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_56420FBF78F0AFE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_56DB3F4F37AFFBE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_56DB3F4F37AFFBE8_OFFSET))(this);
	}
};
