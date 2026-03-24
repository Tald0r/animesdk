#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Enum_3_AEB18F409410ABC4_1.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_206;
class Class_1_7C0A11AE63A21AA0;
class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_D89CCC627A66D0AD;
class Class_2_E87F1D15F1D4AC72;
class Class_2_F51BBF303F6FB2C0;
class Class_3_CA6834E3B431337F;
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
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_1_537E8DBEE9291CD8;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_7681E34099AFEF1E_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0xA0D1480)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_0DB70F0CB223BDCA_OFFSET UNITYSDK_OFFSET(0xA0D1270)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_182A6A76FFAC079F_OFFSET UNITYSDK_OFFSET(0xA0CFF60)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xA0D1A10)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_1B0EFE11633192E3_OFFSET UNITYSDK_OFFSET(0xA0D1FF0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0xA0D0A20)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_1DAEFE1176C07C47_OFFSET UNITYSDK_OFFSET(0xA0D43D0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA0D1EC0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xA0D1870)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0xA0D3340)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_37A495F5554C4F7A_OFFSET UNITYSDK_OFFSET(0xA0D2E70)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0xA0D0410)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA0D2B80)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_41F329F901906F10_OFFSET UNITYSDK_OFFSET(0xA0D30A0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA0D11A0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0xA0D0320)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xA0D1770)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA0D3D70)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_56420FBF78F0AFE1_OFFSET UNITYSDK_OFFSET(0xA0D40E0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_56DB3F4F37AFFBE8_OFFSET UNITYSDK_OFFSET(0xA0D3A90)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_5EBB567B46C61864_OFFSET UNITYSDK_OFFSET(0xA0CF630)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0xA0CFA80)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_6ABB01DFDE2F44D1_OFFSET UNITYSDK_OFFSET(0xA0D37C0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_73C0BC5ADF48BF5C_OFFSET UNITYSDK_OFFSET(0xA0D37B0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xA0D3F10)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_8E3F72A790769551_OFFSET UNITYSDK_OFFSET(0xA0D2310)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0xA0D1CF0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xA0D0A80)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_A50E06D67A506F1E_OFFSET UNITYSDK_OFFSET(0xA0D0C70)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_ADA05A93E00A659E_OFFSET UNITYSDK_OFFSET(0xA0D3490)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0xA0D4360)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xA0D0CF0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA0D43E0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA0D2D50)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_CA7A09234980495B_OFFSET UNITYSDK_OFFSET(0xA0D0000)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_E2CFE21492926DBB_OFFSET UNITYSDK_OFFSET(0xA0CEAC0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_E41AC0E17BE4B813_OFFSET UNITYSDK_OFFSET(0xA0D2DB0)
#define CLASS_2_7681E34099AFEF1E_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xA0D1650)
#define CLASS_2_7681E34099AFEF1E__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D09D0)

inline static constexpr unsigned int Class_2_7681E34099AFEF1E_TypeDefinitionIndex = 73792;

class Class_2_7681E34099AFEF1E : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::UIWidgetGroup* Field_2_22; // 0x50
	::System::Collections::Generic::List_1<::Class_3_CA6834E3B431337F*>* Field_2_38; // 0x58
	::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* Field_2_29; // 0x60
	::Class_1_7C0A11AE63A21AA0* Field_2_30; // 0x68
	::UnityEngine::GameObject* Field_2_1; // 0x70
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_28; // 0x78
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x80
	::UnityEngine::RectTransform* Field_2_9; // 0x88
	::MonoUITableScrollV2* Field_2_6; // 0x90
	::Class_2_60DDD9C206686F44* Field_2_11; // 0x98
	::MonoUITableScrollV2* Field_2_7; // 0xA0
	::UnityEngine::RectTransform* Field_2_10; // 0xA8
	::UnityEngine::RectTransform* Field_2_4; // 0xB0
	::UIWidgetGroup* Field_2_20; // 0xB8
	::UnityEngine::RectTransform* Field_2_31; // 0xC0
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_27; // 0xC8
	::UnityEngine::GameObject* Field_2_2; // 0xD0
	::UnityEngine::RectTransform* Field_2_3; // 0xD8
	::Class_0_16E4307DCC41950C_13<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* Field_2_39; // 0xE0
	::Class_2_60DDD9C206686F44* Field_2_5; // 0xE8
	::UnityEngine::RectTransform* Field_2_8; // 0xF0
	::Class_2_1F76884FC39FD584* Field_2_0; // 0xF8
	::Class_0_16E4307DCC419505_206* Field_2_33; // 0x100
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_37; // 0x108
	::MoleMole::MonoGamepadSpaceList* Field_2_18; // 0x110
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralSortWidgetController*>* Field_2_13; // 0x118
	::Class_1_537E8DBEE9291CD8<::Class_2_D89CCC627A66D0AD*>* Field_2_14; // 0x120
	::UIWidgetGroup* Field_2_21; // 0x128
	::MoleMole::MonoGamepadNavigatableList* Field_2_19; // 0x130
	::System::Int32 Field_2_15; // 0x138
	::System::Boolean Field_2_24; // 0x13C
	::System::Boolean Field_2_23; // 0x13D
	::System::Boolean Field_2_26; // 0x13E
	::System::Boolean Field_2_36; // 0x13F
	::System::Boolean Field_2_34; // 0x140
	::System::Boolean Field_2_25; // 0x141
	::System::Boolean Field_2_35; // 0x142
	::System::Int32 Field_2_17; // 0x144
	::Enum_3_AEB18F409410ABC4_1 Field_2_32; // 0x148
	::System::Int32 Field_2_16; // 0x14C

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

	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Method_2_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_1B1602B46CB3FF5C_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_A50E06D67A506F1E(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_A50E06D67A506F1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_0DB70F0CB223BDCA(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_0DB70F0CB223BDCA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_CA7A09234980495B(::Enum_3_AEB18F409410ABC4_1 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_CA7A09234980495B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E41AC0E17BE4B813(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_E41AC0E17BE4B813_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_41F329F901906F10(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_41F329F901906F10_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B0EFE11633192E3(::Enum_3_AEB18F409410ABC4_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_1B0EFE11633192E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_36F46336ADA62D13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_36F46336ADA62D13_OFFSET))(this);
	}

	::System::Void Method_2_ADA05A93E00A659E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_ADA05A93E00A659E_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC41950C_13<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* Method_2_73C0BC5ADF48BF5C()
	{
		return ((::Class_0_16E4307DCC41950C_13<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_73C0BC5ADF48BF5C_OFFSET))(this);
	}

	::System::Void Method_2_6ABB01DFDE2F44D1(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_6ABB01DFDE2F44D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_56DB3F4F37AFFBE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_56DB3F4F37AFFBE8_OFFSET))(this);
	}

	::System::Void Method_2_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_56420FBF78F0AFE1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_56420FBF78F0AFE1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_1DAEFE1176C07C47(::Class_0_16E4307DCC41950C_13<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::MoleMole::UIGeneralRoleSelectListWidgetController_Context*>*))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_1DAEFE1176C07C47_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_97D83E4CB3B11935_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Int32 Method_2_37A495F5554C4F7A(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_37A495F5554C4F7A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_182A6A76FFAC079F(::Enum_3_AEB18F409410ABC4_1 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_182A6A76FFAC079F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_8E3F72A790769551(::Enum_3_AEB18F409410ABC4_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_AEB18F409410ABC4_1))((::PBYTE)hIl2Cpp + CLASS_2_7681E34099AFEF1E_METHOD_2_8E3F72A790769551_OFFSET))(this, a1);
	}
};
