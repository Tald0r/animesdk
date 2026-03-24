#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/System/Object.h"

class Class_1_5A585DEB704A07E2;
class Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF;
class Class_2_79AE422BA06F6D26_23;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralDropDownControllerContext; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_9F79166E94E6BD41_METHOD_1_0F4A55AD4ED47C8A_OFFSET UNITYSDK_OFFSET(0x789E6D0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x789EBF0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_3BB542010233E9C7_OFFSET UNITYSDK_OFFSET(0x789ED90)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x789E650)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_55A20CBCCFED7C17_OFFSET UNITYSDK_OFFSET(0x789D500)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_8DDC9C512A861AF8_OFFSET UNITYSDK_OFFSET(0x789DE20)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x789E1B0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x789EAF0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_A0341C7992B0DE61_OFFSET UNITYSDK_OFFSET(0x789EC80)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x789E940)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_B5390CE7564A79DD_OFFSET UNITYSDK_OFFSET(0x789E410)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x789D9B0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x789E130)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_DE771242C34E9404_OFFSET UNITYSDK_OFFSET(0x789E030)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x789D5F0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_F31B59EEF7AFE71A_OFFSET UNITYSDK_OFFSET(0x789E6C0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x789EEC0)
#define CLASS_1_9F79166E94E6BD41_METHOD_1_FA9FF233BF055A70_OFFSET UNITYSDK_OFFSET(0x789E9D0)
#define CLASS_1_9F79166E94E6BD41_ONCLICK_OFFSET UNITYSDK_OFFSET(0x789D110)
#define CLASS_1_9F79166E94E6BD41__CTOR_OFFSET UNITYSDK_OFFSET(0x789D100)

inline static constexpr unsigned int Class_1_9F79166E94E6BD41_TypeDefinitionIndex = 81265;

class Class_1_9F79166E94E6BD41 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_14; // 0x10
	::System::Func_2<::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*>* Field_1_0; // 0x18
	::MoleMole::NotificationBadgeEx* Field_1_13; // 0x20
	::Il2CppArray<::Struct_2_037D21AC29ED1130>* Field_1_3; // 0x28
	::Class_2_79AE422BA06F6D26_23* Field_1_2; // 0x30
	::MoleMole::UIGeneralDynamicTipsPopWindowController* Field_1_6; // 0x38
	::MoleMole::UIGeneralDropDownControllerContext* Field_1_7; // 0x40
	::MoleMole::UIBaseController* Field_1_1; // 0x48
	::System::Action_1<::System::Int32>* Field_1_5; // 0x50
	::System::Int32 Field_1_8; // 0x58
	::Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1 Field_1_10; // 0x5C
	::System::Boolean Field_1_4; // 0x60
	::System::Boolean Field_1_12; // 0x61
	::Enum_3_0A43EA4B15EC3408 Field_1_9; // 0x64
	::MoleMole::InputLogicEventType Field_1_11; // 0x68

	::System::Void _ctor(::Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9F79166E94E6BD41_Enum_3_CA7C9A6C1BE1373B_1))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_1_55A20CBCCFED7C17(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_23* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32 a4, ::Enum_3_0A43EA4B15EC3408 a5, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_23*, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_55A20CBCCFED7C17_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_8DDC9C512A861AF8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_8DDC9C512A861AF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE771242C34E9404(::Il2CppArray<::Struct_2_037D21AC29ED1130>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_DE771242C34E9404_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_B5390CE7564A79DD(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_B5390CE7564A79DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::MoleMole::UIGeneralDynamicTipsPopWindowController* Method_1_F31B59EEF7AFE71A()
	{
		return ((::MoleMole::UIGeneralDynamicTipsPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_F31B59EEF7AFE71A_OFFSET))(this);
	}

	::System::Void Method_1_0F4A55AD4ED47C8A(::MoleMole::NotificationBadgeEx* a1, ::Class_1_5A585DEB704A07E2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_5A585DEB704A07E2*))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_0F4A55AD4ED47C8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA9FF233BF055A70(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_FA9FF233BF055A70_OFFSET))(this, a1);
	}

	::System::Void Method_1_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_92F2FCA8316DB56D_OFFSET))(this, a1);
	}

	::System::Void Method_1_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_13004921ED9C7319_OFFSET))(this, a1);
	}

	::Struct_2_037D21AC29ED1130 Method_1_A0341C7992B0DE61(::System::Int32 a1)
	{
		return ((::Struct_2_037D21AC29ED1130(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_A0341C7992B0DE61_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB542010233E9C7(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_23* a2, ::Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF* a3, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_23*, ::Class_1_9F79166E94E6BD41_Class_1_A9DF9F4312C529DF*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_3BB542010233E9C7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F79166E94E6BD41_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}
};
