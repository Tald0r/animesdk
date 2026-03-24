#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_CAEEAA35AEFBBCB4;
class Class_2_D29143E5EB25A314;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C2CF07E92698C538_METHOD_1_1665F4830A5B97A1_OFFSET UNITYSDK_OFFSET(0xC4A13F0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_3658BD3488A73B2E_OFFSET UNITYSDK_OFFSET(0xC4A2370)
#define CLASS_1_C2CF07E92698C538_METHOD_1_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0xC4A0ED0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_4CB981FB169BC7A4_OFFSET UNITYSDK_OFFSET(0xC4A1BE0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_4CE875183485F023_OFFSET UNITYSDK_OFFSET(0xC4A1080)
#define CLASS_1_C2CF07E92698C538_METHOD_1_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xC4A11D0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_5CB62CD209998E83_OFFSET UNITYSDK_OFFSET(0xC4A1250)
#define CLASS_1_C2CF07E92698C538_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xC4A26E0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_674F73509924BD16_OFFSET UNITYSDK_OFFSET(0xC4A2270)
#define CLASS_1_C2CF07E92698C538_METHOD_1_844CAD07D9FF3DDE_1_OFFSET UNITYSDK_OFFSET(0xC4A11C0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_844CAD07D9FF3DDE_OFFSET UNITYSDK_OFFSET(0xC4A11A0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_8AD5708EF113F9D4_OFFSET UNITYSDK_OFFSET(0xC4A1790)
#define CLASS_1_C2CF07E92698C538_METHOD_1_8F53C61BF23AF094_OFFSET UNITYSDK_OFFSET(0xC4A1DC0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_96980C17A8BB1F06_OFFSET UNITYSDK_OFFSET(0xC4A22F0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_A3D116BA5AD8FBEF_OFFSET UNITYSDK_OFFSET(0xC4A24B0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET UNITYSDK_OFFSET(0xC4A2620)
#define CLASS_1_C2CF07E92698C538_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xC4A23F0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_AD630BCF5806A7B4_OFFSET UNITYSDK_OFFSET(0xC4A0B50)
#define CLASS_1_C2CF07E92698C538_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xC4A0DF0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC4A0D30)
#define CLASS_1_C2CF07E92698C538_METHOD_1_B5B02B5673074626_OFFSET UNITYSDK_OFFSET(0xC4A0F50)
#define CLASS_1_C2CF07E92698C538_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xC4A1910)
#define CLASS_1_C2CF07E92698C538_METHOD_1_B7E8ADB6D58C96FE_OFFSET UNITYSDK_OFFSET(0xC4A2050)
#define CLASS_1_C2CF07E92698C538_METHOD_1_CE60E2830B4FF112_OFFSET UNITYSDK_OFFSET(0xC4A0BD0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_D2DA3920D701428C_OFFSET UNITYSDK_OFFSET(0xC4A1C70)
#define CLASS_1_C2CF07E92698C538_METHOD_1_E1EF622ABB9EF4AC_OFFSET UNITYSDK_OFFSET(0xC4A1320)
#define CLASS_1_C2CF07E92698C538_METHOD_1_E568AA326EE34343_1_OFFSET UNITYSDK_OFFSET(0xC4A11B0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_E568AA326EE34343_OFFSET UNITYSDK_OFFSET(0xC4A1190)
#define CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_1_OFFSET UNITYSDK_OFFSET(0xC4A16D0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_2_OFFSET UNITYSDK_OFFSET(0xC4A19A0)
#define CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_3_OFFSET UNITYSDK_OFFSET(0xC4A1A60)
#define CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_4_OFFSET UNITYSDK_OFFSET(0xC4A1B20)
#define CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0xC4A1610)
#define CLASS_1_C2CF07E92698C538_METHOD_1_EDC14BF43D2DE2A9_OFFSET UNITYSDK_OFFSET(0xC4A1C00)
#define CLASS_1_C2CF07E92698C538_METHOD_1_EEE30B8B3EAFCE24_OFFSET UNITYSDK_OFFSET(0xC4A1540)
#define CLASS_1_C2CF07E92698C538_METHOD_1_F1B848332C932E9F_OFFSET UNITYSDK_OFFSET(0xC4A1C90)
#define CLASS_1_C2CF07E92698C538_METHOD_1_FC7B189C457FDFE4_OFFSET UNITYSDK_OFFSET(0xC4A1860)
#define CLASS_1_C2CF07E92698C538_METHOD_1_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0xC4A0C50)
#define CLASS_1_C2CF07E92698C538__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A0AD0)

inline static constexpr unsigned int Class_1_C2CF07E92698C538_TypeDefinitionIndex = 64146;

class Class_1_C2CF07E92698C538 : public ::System::Object
{
public:
	::Class_2_CAEEAA35AEFBBCB4* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_3; // 0x18
	::Class_2_D29143E5EB25A314* Field_1_1; // 0x20
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_2; // 0x28

	::System::Void _ctor(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD630BCF5806A7B4(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_AD630BCF5806A7B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE60E2830B4FF112(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_CE60E2830B4FF112_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_43A478BA01FE29B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_43A478BA01FE29B7_OFFSET))(this);
	}

	::MoleMole::UIBaseController* Method_1_B5B02B5673074626(::Foundation::AssetPath a1)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_B5B02B5673074626_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_4CE875183485F023(::System::String* a1)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_4CE875183485F023_OFFSET))(this, a1);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* Method_1_E568AA326EE34343()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_E568AA326EE34343_OFFSET))(this);
	}

	::System::Void Method_1_844CAD07D9FF3DDE(::System::Action_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_844CAD07D9FF3DDE_OFFSET))(this, a1);
	}

	::System::Action_1<::MoleMole::UIBaseController*>* Method_1_E568AA326EE34343_1()
	{
		return ((::System::Action_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_E568AA326EE34343_1_OFFSET))(this);
	}

	::System::Void Method_1_844CAD07D9FF3DDE_1(::System::Action_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_844CAD07D9FF3DDE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_1_5CB62CD209998E83(::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InputActionEvent>*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_5CB62CD209998E83_OFFSET))(this, a1);
	}

	::System::Void Method_1_E1EF622ABB9EF4AC(::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_E1EF622ABB9EF4AC_OFFSET))(this, a1);
	}

	::MoleMole::MonoGamepadModule* Method_1_1665F4830A5B97A1(::System::String* a1)
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_1665F4830A5B97A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEE30B8B3EAFCE24(::System::UInt32& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_EEE30B8B3EAFCE24_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_1_EA3063A5CDD6F164_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_1_OFFSET))(this);
	}

	::System::Void Method_1_8AD5708EF113F9D4(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_8AD5708EF113F9D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FC7B189C457FDFE4(::MoleMole::EUILayoutPlatform a1, ::MoleMole::EUILayoutPlatform a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EUILayoutPlatform, ::MoleMole::EUILayoutPlatform))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_FC7B189C457FDFE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_1_EA3063A5CDD6F164_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_2_OFFSET))(this);
	}

	::System::Void Method_1_EA3063A5CDD6F164_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_3_OFFSET))(this);
	}

	::System::Void Method_1_EA3063A5CDD6F164_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_EA3063A5CDD6F164_4_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* Method_1_4CB981FB169BC7A4()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_4CB981FB169BC7A4_OFFSET))(this);
	}

	::System::Void Method_1_EDC14BF43D2DE2A9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_EDC14BF43D2DE2A9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* Method_1_D2DA3920D701428C()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_D2DA3920D701428C_OFFSET))(this);
	}

	::System::Void Method_1_F1B848332C932E9F(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_F1B848332C932E9F_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F53C61BF23AF094(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_8F53C61BF23AF094_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7E8ADB6D58C96FE(::MoleMole::UIWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_B7E8ADB6D58C96FE_OFFSET))(this, a1);
	}

	::System::Void Method_1_674F73509924BD16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_674F73509924BD16_OFFSET))(this);
	}

	::System::Void Method_1_96980C17A8BB1F06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_96980C17A8BB1F06_OFFSET))(this);
	}

	::System::Void Method_1_3658BD3488A73B2E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_3658BD3488A73B2E_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_A3D116BA5AD8FBEF(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_A3D116BA5AD8FBEF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_A3FAE12D7B6ACD62_1_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C2CF07E92698C538_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}
};
