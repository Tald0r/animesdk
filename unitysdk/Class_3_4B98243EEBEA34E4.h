#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/GameManager_1.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_5.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_6.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_6FCC27424971804A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4B98243EEBEA34E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8078240)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_13B61572EF8DDB90_OFFSET UNITYSDK_OFFSET(0x807BF60)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_1D1F6463FC3FA28C_OFFSET UNITYSDK_OFFSET(0x807B820)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_218124418542E081_OFFSET UNITYSDK_OFFSET(0x8078D10)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_219F1A94B63A8139_OFFSET UNITYSDK_OFFSET(0x807BA60)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x8077E10)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_2F7320AEAEF1B01C_OFFSET UNITYSDK_OFFSET(0x807B4C0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_3A08507C299C9176_OFFSET UNITYSDK_OFFSET(0x807A610)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_4EBA645F7572DB79_OFFSET UNITYSDK_OFFSET(0x80791A0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8078870)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x8077C00)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x8078610)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_5EDA420E95B8B086_OFFSET UNITYSDK_OFFSET(0x807B9F0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_607EDCE411323F3E_OFFSET UNITYSDK_OFFSET(0x807B0B0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_6173AF17811AED4B_OFFSET UNITYSDK_OFFSET(0x807A680)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x8079040)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_8420DC088664D618_OFFSET UNITYSDK_OFFSET(0x80784E0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_84D2CF41A744CC73_OFFSET UNITYSDK_OFFSET(0x80789E0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_933CEED22A77CAC7_OFFSET UNITYSDK_OFFSET(0x807A6F0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_9F847E6C66FD045A_OFFSET UNITYSDK_OFFSET(0x807B880)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_A4A8A95D4C2E41FB_OFFSET UNITYSDK_OFFSET(0x807BAE0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_BB4F3E29F39DF610_OFFSET UNITYSDK_OFFSET(0x8079870)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x807B050)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_D182AE5B1ACE3E41_OFFSET UNITYSDK_OFFSET(0x807A4F0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_D430F4530A98091D_OFFSET UNITYSDK_OFFSET(0x8079C80)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_E5C8CCC7A4E8A34F_OFFSET UNITYSDK_OFFSET(0x807BB80)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_E633A443AC0D3A42_OFFSET UNITYSDK_OFFSET(0x8079DC0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_EB77572BBCE0EE44_OFFSET UNITYSDK_OFFSET(0x8079120)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_EF35140FAFF48EF9_OFFSET UNITYSDK_OFFSET(0x807B550)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_F11FC6B94B14A312_OFFSET UNITYSDK_OFFSET(0x8079A80)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_F55DD6625EA390A2_OFFSET UNITYSDK_OFFSET(0x80793D0)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_F88D2F6C9BDF2E16_OFFSET UNITYSDK_OFFSET(0x8079B40)
#define CLASS_3_4B98243EEBEA34E4_METHOD_3_FFE24DF54B83FB77_OFFSET UNITYSDK_OFFSET(0x807C230)
#define CLASS_3_4B98243EEBEA34E4_ONCREATE_OFFSET UNITYSDK_OFFSET(0x8077B30)
#define CLASS_3_4B98243EEBEA34E4_ONSTART_OFFSET UNITYSDK_OFFSET(0x8077B90)
#define CLASS_3_4B98243EEBEA34E4_UPDATE_OFFSET UNITYSDK_OFFSET(0x8077D90)
#define CLASS_3_4B98243EEBEA34E4__CTOR_OFFSET UNITYSDK_OFFSET(0x80782F0)

inline static constexpr unsigned int Class_3_4B98243EEBEA34E4_TypeDefinitionIndex = 75699;

class Class_3_4B98243EEBEA34E4 : public ::Foundation::GameManager_1<::Class_3_4B98243EEBEA34E4*>
{
public:
	// static const ::System::String* Field_3_11; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_7; // 0x10
	::Il2CppArray<::Class_1_6FCC27424971804A*>* Field_3_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_9; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InputType, ::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_5>*>* Field_3_12; // 0x28
	::System::String* Field_3_0; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_8; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_6>*>* Field_3_10; // 0x40
	::System::Collections::Generic::HashSet_1<::MoleMole::Config::InputGroup>* Field_3_6; // 0x48
	::System::Boolean Field_3_5; // 0x50
	::System::Boolean Field_3_4; // 0x51
	::System::Boolean Field_3_1; // 0x52
	::System::Boolean Field_3_3; // 0x53

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_ONSTART_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_8420DC088664D618(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_8420DC088664D618_OFFSET))(this, a1);
	}

	::System::Void Method_3_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Method_3_84D2CF41A744CC73(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_84D2CF41A744CC73_OFFSET))(this, a1);
	}

	::System::Void Method_3_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_3_4EBA645F7572DB79(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_4EBA645F7572DB79_OFFSET))(this, a1);
	}

	::System::Void Method_3_BB4F3E29F39DF610(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_BB4F3E29F39DF610_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_F55DD6625EA390A2(::MoleMole::Config::InputGroup a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_F55DD6625EA390A2_OFFSET))(this, a1);
	}

	::System::Void Method_3_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_218124418542E081_OFFSET))(this);
	}

	::System::Boolean Method_3_D430F4530A98091D(::MoleMole::Config::InputType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_D430F4530A98091D_OFFSET))(this, a1);
	}

	::System::Void Method_3_E633A443AC0D3A42(::MoleMole::Config::InputGroup a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_E633A443AC0D3A42_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D182AE5B1ACE3E41(::System::String* a1, ::MoleMole::Config::InputType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_D182AE5B1ACE3E41_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EB77572BBCE0EE44(::System::Int32 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_EB77572BBCE0EE44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6173AF17811AED4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_6173AF17811AED4B_OFFSET))(this);
	}

	::System::Void Method_3_F88D2F6C9BDF2E16(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_F88D2F6C9BDF2E16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_933CEED22A77CAC7(::System::String* a1, ::MoleMole::Config::InputGroup a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5, ::System::UInt32 a6, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputGroup, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::Collections::Generic::List_1<::MoleMole::Config::InputType>*))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_933CEED22A77CAC7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_3_607EDCE411323F3E(::MoleMole::Config::InputType a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_607EDCE411323F3E_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_6FCC27424971804A* Method_3_2F7320AEAEF1B01C(::MoleMole::Config::InputType a1)
	{
		return ((::Class_1_6FCC27424971804A*(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_2F7320AEAEF1B01C_OFFSET))(this, a1);
	}

	::System::Void Method_3_EF35140FAFF48EF9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_EF35140FAFF48EF9_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_6FCC27424971804A*>* Method_3_1D1F6463FC3FA28C()
	{
		return ((::Il2CppArray<::Class_1_6FCC27424971804A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_1D1F6463FC3FA28C_OFFSET))(this);
	}

	::System::Void Method_3_9F847E6C66FD045A(::System::String* a1, ::MoleMole::Config::InputType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::InputType, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_9F847E6C66FD045A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_5EDA420E95B8B086(::Il2CppArray<::Class_1_6FCC27424971804A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_6FCC27424971804A*>*))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_5EDA420E95B8B086_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_219F1A94B63A8139(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_219F1A94B63A8139_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A4A8A95D4C2E41FB(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_A4A8A95D4C2E41FB_OFFSET))(this, a1);
	}

	::System::Void Method_3_E5C8CCC7A4E8A34F(::MoleMole::Config::InputType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_E5C8CCC7A4E8A34F_OFFSET))(this, a1);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_3_13B61572EF8DDB90(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_13B61572EF8DDB90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_FFE24DF54B83FB77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_FFE24DF54B83FB77_OFFSET))(this, a1);
	}

	::System::Void Method_3_F11FC6B94B14A312(::MoleMole::Config::InputGroup a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InputGroup, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_F11FC6B94B14A312_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::Config::InputGroup Method_3_3A08507C299C9176(::MoleMole::Config::InputType a1)
	{
		return ((::MoleMole::Config::InputGroup(*)(::PVOID, ::MoleMole::Config::InputType))((::PBYTE)hIl2Cpp + CLASS_3_4B98243EEBEA34E4_METHOD_3_3A08507C299C9176_OFFSET))(this, a1);
	}
};
