#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_1DEA7AD9123A324A_1_PanelData;
class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class Class_2_D89CCC627A66D0AD;
class Class_2_E87F1D15F1D4AC72;
class Class_2_F51BBF303F6FB2C0;
class Class_3_CA6834E3B431337F;
class MonoUITableScrollV2;
class UIWidgetGroup;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_1_537E8DBEE9291CD8;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x6615370)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x6611850)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1B1602B46CB3FF5C_1_OFFSET UNITYSDK_OFFSET(0x66115F0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1B1602B46CB3FF5C_2_OFFSET UNITYSDK_OFFSET(0x6615980)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x6611590)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1E99C879178FD180_OFFSET UNITYSDK_OFFSET(0x6614820)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_267A749209583C85_OFFSET UNITYSDK_OFFSET(0x6611520)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_303D4700A8627BD6_OFFSET UNITYSDK_OFFSET(0x6615520)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x66117E0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_3F7231A1A77A2A9D_OFFSET UNITYSDK_OFFSET(0x6613F90)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x66150A0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x6615170)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_55DEA14F136766A3_OFFSET UNITYSDK_OFFSET(0x6613040)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x66131C0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x6613DC0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7FFB013D7F6DBD1B_1_OFFSET UNITYSDK_OFFSET(0x6611440)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7FFB013D7F6DBD1B_2_OFFSET UNITYSDK_OFFSET(0x66114B0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7FFB013D7F6DBD1B_OFFSET UNITYSDK_OFFSET(0x66113D0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_82E61DC8A9BB74CC_OFFSET UNITYSDK_OFFSET(0x6614E40)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_8F76A1BE4980F40F_OFFSET UNITYSDK_OFFSET(0x66118E0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x66145B0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_A50E06D67A506F1E_OFFSET UNITYSDK_OFFSET(0x6614910)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x66155C0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x6614990)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_BE230A687294A288_OFFSET UNITYSDK_OFFSET(0x6613960)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x6613AA0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6611720)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x6611780)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x6613860)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x6615310)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x66116C0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x6613270)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x6612EA0)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_F17676F976AEF1D8_OFFSET UNITYSDK_OFFSET(0x6615630)
#define CLASS_2_1DEA7AD9123A324A_1_METHOD_2_F92BB6226D81148D_OFFSET UNITYSDK_OFFSET(0x6611650)
#define CLASS_2_1DEA7AD9123A324A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x66138C0)

inline static constexpr unsigned int Class_2_1DEA7AD9123A324A_1_TypeDefinitionIndex = 50442;

class Class_2_1DEA7AD9123A324A_1 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x50
	::UnityEngine::RectTransform* Field_2_10; // 0x58
	::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* Field_2_31; // 0x60
	::Class_2_9E3E3CDA608A4F58* Field_2_18; // 0x68
	::MoleMole::MonoGamepadSpaceList* Field_2_20; // 0x70
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x78
	::UnityEngine::GameObject* Field_2_6; // 0x80
	::UnityEngine::GameObject* Field_2_5; // 0x88
	::MoleMole::MonoGamepadCustomList* Field_2_19; // 0x90
	::Class_2_A8F5ABF31E066ED4* Field_2_17; // 0x98
	::UnityEngine::RectTransform* Field_2_1; // 0xA0
	::UIWidgetGroup* Field_2_24; // 0xA8
	::Class_2_60DDD9C206686F44* Field_2_13; // 0xB0
	::UIWidgetGroup* Field_2_25; // 0xB8
	::UnityEngine::RectTransform* Field_2_16; // 0xC0
	::Class_2_60DDD9C206686F44* Field_2_14; // 0xC8
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_29; // 0xD0
	::Class_2_1F76884FC39FD584* Field_2_3; // 0xD8
	::System::Collections::Generic::List_1<::Class_3_CA6834E3B431337F*>* Field_2_32; // 0xE0
	::MonoUITableScrollV2* Field_2_8; // 0xE8
	::MoleMole::MonoGamepadNavigatableList* Field_2_21; // 0xF0
	::UIWidgetGroup* Field_2_27; // 0xF8
	::MonoUITableScrollV2* Field_2_0; // 0x100
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_2_30; // 0x108
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralSortWidgetController*>* Field_2_22; // 0x110
	::MonoUITableScrollV2* Field_2_7; // 0x118
	::UnityEngine::RectTransform* Field_2_15; // 0x120
	::UIWidgetGroup* Field_2_26; // 0x128
	::Class_1_537E8DBEE9291CD8<::Class_2_D89CCC627A66D0AD*>* Field_2_23; // 0x130
	::Class_2_60DDD9C206686F44* Field_2_11; // 0x138
	::Class_2_1DEA7AD9123A324A_1_PanelData* Field_2_28; // 0x140
	::UnityEngine::RectTransform* Field_2_9; // 0x148
	::UnityEngine::RectTransform* Field_2_2; // 0x150
	::System::Int32 Field_2_36; // 0x158
	::System::Boolean Field_2_34; // 0x15C
	::System::Boolean Field_2_33; // 0x15D
	::System::Boolean Field_2_35; // 0x15E
	::System::Int32 Field_2_37; // 0x160

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1__CTOR_OFFSET))(this);
	}

	::UIWidgetGroup* Method_2_7FFB013D7F6DBD1B(::UnityEngine::RectTransform* a1)
	{
		return ((::UIWidgetGroup*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7FFB013D7F6DBD1B_OFFSET))(this, a1);
	}

	::UIWidgetGroup* Method_2_7FFB013D7F6DBD1B_1(::UnityEngine::RectTransform* a1)
	{
		return ((::UIWidgetGroup*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7FFB013D7F6DBD1B_1_OFFSET))(this, a1);
	}

	::UIWidgetGroup* Method_2_7FFB013D7F6DBD1B_2(::UnityEngine::RectTransform* a1)
	{
		return ((::UIWidgetGroup*(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7FFB013D7F6DBD1B_2_OFFSET))(this, a1);
	}

	::UIWidgetGroup* Method_2_267A749209583C85(::MonoUITableScrollV2* a1)
	{
		return ((::UIWidgetGroup*(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_267A749209583C85_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Method_2_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1B1602B46CB3FF5C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>* Method_2_1B1602B46CB3FF5C_1()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_F51BBF303F6FB2C0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1B1602B46CB3FF5C_1_OFFSET))(this);
	}

	::System::Void Method_2_F92BB6226D81148D(::UIWidgetGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UIWidgetGroup*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_F92BB6226D81148D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F76A1BE4980F40F(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_8F76A1BE4980F40F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_55DEA14F136766A3(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_55DEA14F136766A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_BE230A687294A288(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_BE230A687294A288_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_3F7231A1A77A2A9D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_3F7231A1A77A2A9D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_A50E06D67A506F1E(::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_A50E06D67A506F1E_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E61DC8A9BB74CC(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_82E61DC8A9BB74CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_2_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Void Method_2_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Int32 Method_2_303D4700A8627BD6(::Class_3_CA6834E3B431337F* a1, ::Class_3_CA6834E3B431337F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_CA6834E3B431337F*, ::Class_3_CA6834E3B431337F*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_303D4700A8627BD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::Void Method_2_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1E99C879178FD180(::Class_3_CA6834E3B431337F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_CA6834E3B431337F*))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1E99C879178FD180_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_F17676F976AEF1D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_F17676F976AEF1D8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Method_2_1B1602B46CB3FF5C_2()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DEA7AD9123A324A_1_METHOD_2_1B1602B46CB3FF5C_2_OFFSET))(this);
	}
};
