#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5F4_1.h"
#include "unitysdk/Foundation/AssetPath.h"

class Class_1_B07646C690BFECE0;
class Class_2_04999CCE6E77B4A2_3;
class Class_2_3EB92686D65E00AD;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelLocalRoleShieldChildWindowController; }
namespace MoleMole { class UIInLevelMPTeammateInfoChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudLevelChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudTagChildWindowController; }
namespace MoleMole { class UIInLevelMonsterHudWidgetChildWindowController; }
namespace MoleMole { class UIInLevelNPCNameWidgetController; }
namespace MoleMole { class UIInLevelUpToolBarBossWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_62001BE7E113A827_METHOD_3_136171502A06842C_OFFSET UNITYSDK_OFFSET(0x65A62F0)
#define CLASS_3_62001BE7E113A827_METHOD_3_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x65A4FE0)
#define CLASS_3_62001BE7E113A827_METHOD_3_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x65A4C00)
#define CLASS_3_62001BE7E113A827_METHOD_3_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x65A4120)
#define CLASS_3_62001BE7E113A827_METHOD_3_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x65A4B90)
#define CLASS_3_62001BE7E113A827_METHOD_3_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x65A6820)
#define CLASS_3_62001BE7E113A827_METHOD_3_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x65A6280)
#define CLASS_3_62001BE7E113A827_METHOD_3_40A1EC2B00F2037B_OFFSET UNITYSDK_OFFSET(0x65A73F0)
#define CLASS_3_62001BE7E113A827_METHOD_3_41997AFD133B2134_OFFSET UNITYSDK_OFFSET(0x65A6890)
#define CLASS_3_62001BE7E113A827_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x65A46D0)
#define CLASS_3_62001BE7E113A827_METHOD_3_45944906BA3A3060_OFFSET UNITYSDK_OFFSET(0x65A7100)
#define CLASS_3_62001BE7E113A827_METHOD_3_4F2DC0FF84269C5A_OFFSET UNITYSDK_OFFSET(0x65A5AD0)
#define CLASS_3_62001BE7E113A827_METHOD_3_5EBE23180774F4D5_OFFSET UNITYSDK_OFFSET(0x65A4770)
#define CLASS_3_62001BE7E113A827_METHOD_3_61AD3F148D03F19D_1_OFFSET UNITYSDK_OFFSET(0x65A6590)
#define CLASS_3_62001BE7E113A827_METHOD_3_61AD3F148D03F19D_OFFSET UNITYSDK_OFFSET(0x65A55D0)
#define CLASS_3_62001BE7E113A827_METHOD_3_6965CE7D9AF162A0_OFFSET UNITYSDK_OFFSET(0x65A6D30)
#define CLASS_3_62001BE7E113A827_METHOD_3_6B10D68B994755BE_OFFSET UNITYSDK_OFFSET(0x65A5A50)
#define CLASS_3_62001BE7E113A827_METHOD_3_75BF73811C1F39E2_OFFSET UNITYSDK_OFFSET(0x65A6000)
#define CLASS_3_62001BE7E113A827_METHOD_3_7C767A57736B78AB_OFFSET UNITYSDK_OFFSET(0x65A4620)
#define CLASS_3_62001BE7E113A827_METHOD_3_8573716B751478C1_OFFSET UNITYSDK_OFFSET(0x65A5950)
#define CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_1_OFFSET UNITYSDK_OFFSET(0x65A5B50)
#define CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_2_OFFSET UNITYSDK_OFFSET(0x65A6190)
#define CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_3_OFFSET UNITYSDK_OFFSET(0x65A5860)
#define CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_4_OFFSET UNITYSDK_OFFSET(0x65A6EB0)
#define CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x65A4A20)
#define CLASS_3_62001BE7E113A827_METHOD_3_92CA70DBBD9B2929_OFFSET UNITYSDK_OFFSET(0x65A6FA0)
#define CLASS_3_62001BE7E113A827_METHOD_3_B2A9E476CE8053F4_OFFSET UNITYSDK_OFFSET(0x65A6C40)
#define CLASS_3_62001BE7E113A827_METHOD_3_BF5E2DCAE0BF038A_1_OFFSET UNITYSDK_OFFSET(0x65A4AB0)
#define CLASS_3_62001BE7E113A827_METHOD_3_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x65A4940)
#define CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x65A5BE0)
#define CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x65A6220)
#define CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x65A6530)
#define CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x65A6F40)
#define CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x65A7390)
#define CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x65A76B0)
#define CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x65A58F0)
#define CLASS_3_62001BE7E113A827_METHOD_3_D48AA42514929BB1_OFFSET UNITYSDK_OFFSET(0x65A5C40)
#define CLASS_3_62001BE7E113A827_METHOD_3_D7C722FE99895757_OFFSET UNITYSDK_OFFSET(0x65A7550)
#define CLASS_3_62001BE7E113A827_METHOD_3_EC2956354B919FE0_OFFSET UNITYSDK_OFFSET(0x65A5240)
#define CLASS_3_62001BE7E113A827_METHOD_3_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x65A5420)
#define CLASS_3_62001BE7E113A827_METHOD_3_FEBD3BD5DAE52F3C_OFFSET UNITYSDK_OFFSET(0x65A59D0)
#define CLASS_3_62001BE7E113A827_METHOD_3_FED3DFA8643F2D27_OFFSET UNITYSDK_OFFSET(0x65A6CB0)
#define CLASS_3_62001BE7E113A827__CCTOR_OFFSET UNITYSDK_OFFSET(0x65A5590)
#define CLASS_3_62001BE7E113A827__CTOR_OFFSET UNITYSDK_OFFSET(0x65A5510)

inline static constexpr unsigned int Class_3_62001BE7E113A827_TypeDefinitionIndex = 70663;

class Class_3_62001BE7E113A827 : public ::Class_2_534AF681CC2BD5F4_1<::Class_3_62001BE7E113A827*>
{
public:
	static ::System::String** StaticGet_Field_3_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_62001BE7E113A827_TypeDefinitionIndex)->GetStaticField(0x39B40);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_3_2; // 0x70
	::Class_1_B07646C690BFECE0* Field_3_1; // 0x78
	::UnityEngine::GameObject* Field_3_4; // 0x80
	::Class_2_04999CCE6E77B4A2_3* Field_3_0; // 0x88
	::System::Boolean Field_3_3; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827__CCTOR_OFFSET))();
	}

	::System::Void Method_3_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_3_7C767A57736B78AB(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_7C767A57736B78AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_5EBE23180774F4D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_5EBE23180774F4D5_OFFSET))(this);
	}

	::System::Void Method_3_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_3_BF5E2DCAE0BF038A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_BF5E2DCAE0BF038A_1_OFFSET))(this);
	}

	::System::Void Method_3_3E6AC14EE28F55D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_3E6AC14EE28F55D4_OFFSET))(this);
	}

	::System::Void Method_3_28C834B59E1D0120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_28C834B59E1D0120_OFFSET))(this);
	}

	::System::Void Method_3_EC2956354B919FE0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_EC2956354B919FE0_OFFSET))(this, a1);
	}

	::System::Void Method_3_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelNPCNameWidgetController* Method_3_61AD3F148D03F19D(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelNPCNameWidgetController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_61AD3F148D03F19D_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_8573716B751478C1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_8573716B751478C1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_3_FEBD3BD5DAE52F3C(::MoleMole::UIInLevelMonsterHudLevelChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_FEBD3BD5DAE52F3C_OFFSET))(this, a1);
	}

	::System::Void Method_3_6B10D68B994755BE(::MoleMole::UIInLevelMonsterHudWidgetChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_6B10D68B994755BE_OFFSET))(this, a1);
	}

	::System::Void Method_3_4F2DC0FF84269C5A(::MoleMole::UIInLevelMonsterHudTagChildWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelMonsterHudTagChildWindowController*))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_4F2DC0FF84269C5A_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_3B258437A86233AC_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31_2()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_2_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelMonsterHudWidgetChildWindowController* Method_3_136171502A06842C(::System::Boolean a1)
	{
		return ((::MoleMole::UIInLevelMonsterHudWidgetChildWindowController*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_136171502A06842C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::MoleMole::UIInLevelNPCNameWidgetController* Method_3_61AD3F148D03F19D_1(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelNPCNameWidgetController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_61AD3F148D03F19D_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_41997AFD133B2134(::Class_2_3EB92686D65E00AD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3EB92686D65E00AD*))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_41997AFD133B2134_OFFSET))(this, a1);
	}

	::System::Void Method_3_D48AA42514929BB1(::Foundation::AssetPath a1, ::UnityEngine::GameObject*& a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_D48AA42514929BB1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B2A9E476CE8053F4(::MoleMole::UIControllerContextBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_B2A9E476CE8053F4_OFFSET))(this, a1);
	}

	::System::Void Method_3_FED3DFA8643F2D27(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_FED3DFA8643F2D27_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31_3()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_3_OFFSET))(this);
	}

	::MoleMole::UIInLevelUpToolBarBossWidgetController* Method_3_6965CE7D9AF162A0()
	{
		return ((::MoleMole::UIInLevelUpToolBarBossWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_6965CE7D9AF162A0_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::MoleMole::UIInLevelMonsterHudTagChildWindowController* Method_3_92CA70DBBD9B2929()
	{
		return ((::MoleMole::UIInLevelMonsterHudTagChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_92CA70DBBD9B2929_OFFSET))(this);
	}

	::MoleMole::UIInLevelMPTeammateInfoChildWindowController* Method_3_45944906BA3A3060(::System::UInt32 a1)
	{
		return ((::MoleMole::UIInLevelMPTeammateInfoChildWindowController*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_45944906BA3A3060_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_90EC931103FB6F31_4()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_90EC931103FB6F31_4_OFFSET))(this);
	}

	::System::Void Method_3_75BF73811C1F39E2(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_75BF73811C1F39E2_OFFSET))(this, a1);
	}

	::MoleMole::UIInLevelLocalRoleShieldChildWindowController* Method_3_40A1EC2B00F2037B()
	{
		return ((::MoleMole::UIInLevelLocalRoleShieldChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_40A1EC2B00F2037B_OFFSET))(this);
	}

	::MoleMole::UIInLevelMonsterHudLevelChildWindowController* Method_3_D7C722FE99895757()
	{
		return ((::MoleMole::UIInLevelMonsterHudLevelChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_D7C722FE99895757_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62001BE7E113A827_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}
};
