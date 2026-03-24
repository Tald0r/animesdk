#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2EF95CAD9F4FAEA2.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_204;
class Class_0_16E4307DCC419505_355;
class Class_1_390DAF1033803DE3;
class Class_1_43BD383C98B4C0C5_63;
class Class_1_7883C51142BE2152;
class Class_1_A11CB4C08EF906E4;
class Class_2_2B455251E8F574AB;
class Class_2_D8B4D798C7AEFA5D;
class Class_3_E342D954CB576697;
class MonoUITableScrollGroup;
class MonoUITableScrollV2;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIInterKnotPageConfig; }
namespace MoleMole { class UIInterKnotPostRowWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_D15EABFC012D3014_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x82FEC70)
#define CLASS_1_D15EABFC012D3014_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x82F9710)
#define CLASS_1_D15EABFC012D3014_METHOD_1_2A1B4870D8BC7351_OFFSET UNITYSDK_OFFSET(0x82FB250)
#define CLASS_1_D15EABFC012D3014_METHOD_1_3097EEC3AE88DFB4_OFFSET UNITYSDK_OFFSET(0x82FA070)
#define CLASS_1_D15EABFC012D3014_METHOD_1_31A8FE53540B1DA2_OFFSET UNITYSDK_OFFSET(0x83007A0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_3D9A2004C2668857_OFFSET UNITYSDK_OFFSET(0x82FA260)
#define CLASS_1_D15EABFC012D3014_METHOD_1_508BA5D293ED942A_OFFSET UNITYSDK_OFFSET(0x82FE280)
#define CLASS_1_D15EABFC012D3014_METHOD_1_665D486857B54488_OFFSET UNITYSDK_OFFSET(0x82FEF40)
#define CLASS_1_D15EABFC012D3014_METHOD_1_6C273AD21D8531E7_OFFSET UNITYSDK_OFFSET(0x82F9790)
#define CLASS_1_D15EABFC012D3014_METHOD_1_70E7A03F5C9E6DFF_OFFSET UNITYSDK_OFFSET(0x82F97B0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_7251E73A45DF0488_OFFSET UNITYSDK_OFFSET(0x82FE880)
#define CLASS_1_D15EABFC012D3014_METHOD_1_725AB824BE3F32F2_OFFSET UNITYSDK_OFFSET(0x82F9D30)
#define CLASS_1_D15EABFC012D3014_METHOD_1_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x82FF640)
#define CLASS_1_D15EABFC012D3014_METHOD_1_7A6DDBF48046CC47_OFFSET UNITYSDK_OFFSET(0x82FB900)
#define CLASS_1_D15EABFC012D3014_METHOD_1_7D42E2D0B38E1B10_OFFSET UNITYSDK_OFFSET(0x82FB2C0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_8618CA7CE20C80DB_1_OFFSET UNITYSDK_OFFSET(0x82FF650)
#define CLASS_1_D15EABFC012D3014_METHOD_1_8618CA7CE20C80DB_OFFSET UNITYSDK_OFFSET(0x82FE1D0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_868B6E2C92CF00BE_OFFSET UNITYSDK_OFFSET(0x82FAAB0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_8AE95AA4C13FC56D_OFFSET UNITYSDK_OFFSET(0x82FD140)
#define CLASS_1_D15EABFC012D3014_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x82F9960)
#define CLASS_1_D15EABFC012D3014_METHOD_1_94457A29A0D1E94E_OFFSET UNITYSDK_OFFSET(0x82FC700)
#define CLASS_1_D15EABFC012D3014_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x8301090)
#define CLASS_1_D15EABFC012D3014_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x82F9BD0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_A3E94568D5184024_OFFSET UNITYSDK_OFFSET(0x82FD0D0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x82FE7C0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_A94090F88A41BFC1_OFFSET UNITYSDK_OFFSET(0x82FC490)
#define CLASS_1_D15EABFC012D3014_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x82FC690)
#define CLASS_1_D15EABFC012D3014_METHOD_1_B6BB704B01BCC35B_OFFSET UNITYSDK_OFFSET(0x82FFAD0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_B704FED5906E0FCF_OFFSET UNITYSDK_OFFSET(0x82FED10)
#define CLASS_1_D15EABFC012D3014_METHOD_1_BC570091FF4994F0_OFFSET UNITYSDK_OFFSET(0x82FF700)
#define CLASS_1_D15EABFC012D3014_METHOD_1_BD5B14E333F744D7_OFFSET UNITYSDK_OFFSET(0x82FEF50)
#define CLASS_1_D15EABFC012D3014_METHOD_1_C575C4AD4DDA68C6_OFFSET UNITYSDK_OFFSET(0x82FC1C0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_D3BB21F847C39851_OFFSET UNITYSDK_OFFSET(0x82FD8B0)
#define CLASS_1_D15EABFC012D3014_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x82FA090)
#define CLASS_1_D15EABFC012D3014_METHOD_1_EC48B5A309947452_OFFSET UNITYSDK_OFFSET(0x82F9C50)
#define CLASS_1_D15EABFC012D3014_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x82F9C40)
#define CLASS_1_D15EABFC012D3014_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x8300F60)
#define CLASS_1_D15EABFC012D3014_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x82F90D0)
#define CLASS_1_D15EABFC012D3014__CTOR_OFFSET UNITYSDK_OFFSET(0x82F9850)

inline static constexpr unsigned int Class_1_D15EABFC012D3014_TypeDefinitionIndex = 49597;

class Class_1_D15EABFC012D3014 : public ::System::Object
{
public:
	::MoleMole::UIBaseController* Field_1_23; // 0x10
	::MoleMole::UIInterKnotPageConfig* Field_1_21; // 0x18
	::UnityEngine::UI::LayoutElement* Field_1_15; // 0x20
	::UnityEngine::UI::Text* Field_1_17; // 0x28
	::Class_3_E342D954CB576697* Field_1_22; // 0x30
	::System::Action* Field_1_24; // 0x38
	::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* Field_1_7; // 0x40
	::MoleMole::UIWindowController* Field_1_11; // 0x48
	::MoleMole::MonoGamepadNestedListDelegate* Field_1_12; // 0x50
	::MonoUITableScrollGroup* Field_1_0; // 0x58
	::Class_1_390DAF1033803DE3* Field_1_26; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_3; // 0x68
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_7883C51142BE2152*>*>* Field_1_4; // 0x70
	::UnityEngine::GameObject* Field_1_20; // 0x78
	::System::Func_2<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*>* Field_1_25; // 0x80
	::UnityEngine::Transform* Field_1_16; // 0x88
	::MoleMole::UIInterKnotPostRowWidgetController* Field_1_19; // 0x90
	::System::Single Field_1_13; // 0x98
	::System::Boolean Field_1_27; // 0x9C
	::System::Boolean Field_1_6; // 0x9D
	::System::Boolean Field_1_5; // 0x9E
	::System::Boolean Field_1_28; // 0x9F
	::System::Boolean Field_1_8; // 0xA0
	::System::Boolean Field_1_18; // 0xA1
	::System::Boolean Field_1_10; // 0xA2
	::System::Int32 Field_1_29; // 0xA4
	::System::Int32 Field_1_14; // 0xA8
	::System::Int32 Field_1_1; // 0xAC
	::System::Int32 Field_1_2; // 0xB0
	::System::Int32 Field_1_9; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014__CTOR_OFFSET))(this);
	}

	::System::Boolean OnScroll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_ONSCROLL_OFFSET))(this);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_D8B4D798C7AEFA5D* Method_1_EC48B5A309947452()
	{
		return ((::Class_2_D8B4D798C7AEFA5D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_EC48B5A309947452_OFFSET))(this);
	}

	::System::Single Method_1_725AB824BE3F32F2(::Class_0_16E4307DCC419505_355* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_0_16E4307DCC419505_355*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_725AB824BE3F32F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_3D9A2004C2668857(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_3D9A2004C2668857_OFFSET))(this, a1, a2);
	}

	::Class_1_A11CB4C08EF906E4* Method_1_868B6E2C92CF00BE(::MoleMole::ConfigNewbie_HighLightDynamicData* a1)
	{
		return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_868B6E2C92CF00BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A1B4870D8BC7351(::System::Func_2<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_2A1B4870D8BC7351_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D42E2D0B38E1B10(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_7D42E2D0B38E1B10_OFFSET))(this, a1);
	}

	::System::Void Method_1_7A6DDBF48046CC47(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_7A6DDBF48046CC47_OFFSET))(this, a1);
	}

	::System::Void Method_1_C575C4AD4DDA68C6(::MonoUITableScrollV2* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_C575C4AD4DDA68C6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A94090F88A41BFC1(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_A94090F88A41BFC1_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_94457A29A0D1E94E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_94457A29A0D1E94E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3E94568D5184024(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_A3E94568D5184024_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_8AE95AA4C13FC56D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_8AE95AA4C13FC56D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3BB21F847C39851(::Class_2_2B455251E8F574AB* a1, ::Enum_3_2EF95CAD9F4FAEA2 a2, ::MoleMole::UIWindowController* a3, ::MoleMole::UIInterKnotPageConfig* a4, ::System::Boolean a5, ::System::Int32 a6, ::System::Action* a7, ::System::Action* a8, ::System::Action* a9, ::System::Func_2<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*>* a10)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2B455251E8F574AB*, ::Enum_3_2EF95CAD9F4FAEA2, ::MoleMole::UIWindowController*, ::MoleMole::UIInterKnotPageConfig*, ::System::Boolean, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action*, ::System::Func_2<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_D3BB21F847C39851_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_8618CA7CE20C80DB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_8618CA7CE20C80DB_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Int32 Method_1_7251E73A45DF0488(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_7251E73A45DF0488_OFFSET))(this, a1);
	}

	::System::Void Method_1_70E7A03F5C9E6DFF(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_70E7A03F5C9E6DFF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_390DAF1033803DE3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_390DAF1033803DE3*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B704FED5906E0FCF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_B704FED5906E0FCF_OFFSET))(this, a1);
	}

	::System::Void Method_1_665D486857B54488(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_665D486857B54488_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_BD5B14E333F744D7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_BD5B14E333F744D7_OFFSET))(this);
	}

	::System::Void Method_1_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_737220D2233A9067_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_355*, ::System::Single>* Method_1_3097EEC3AE88DFB4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_355*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_3097EEC3AE88DFB4_OFFSET))(this);
	}

	::System::Void Method_1_508BA5D293ED942A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_508BA5D293ED942A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8618CA7CE20C80DB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_8618CA7CE20C80DB_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>* Method_1_6C273AD21D8531E7()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_204*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_6C273AD21D8531E7_OFFSET))(this);
	}

	::System::Void Method_1_BC570091FF4994F0(::Class_1_43BD383C98B4C0C5_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_63*))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_BC570091FF4994F0_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_204* Method_1_31A8FE53540B1DA2(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_0_16E4307DCC419505_204*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_31A8FE53540B1DA2_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_F39234F2606D8D97_OFFSET))();
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}

	::System::Void Method_1_B6BB704B01BCC35B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15EABFC012D3014_METHOD_1_B6BB704B01BCC35B_OFFSET))(this);
	}
};
