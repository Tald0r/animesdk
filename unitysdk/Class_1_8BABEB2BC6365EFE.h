#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8BABEB2BC6365EFE_Enum_3_CA7C9A6C1BE1373B.h"
#include "unitysdk/Enum_3_0A43EA4B15EC3408.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/Struct_2_037D21AC29ED1130.h"
#include "unitysdk/System/Object.h"

class Class_1_79526D80B8F6897C;
class Class_1_8BABEB2BC6365EFE_Class_1_A9DF9F4312C529DF;
class Class_2_79AE422BA06F6D26_6;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralDropDownControllerContext; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_0F4A55AD4ED47C8A_OFFSET UNITYSDK_OFFSET(0x79C9180)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_13004921ED9C7319_OFFSET UNITYSDK_OFFSET(0x79C86F0)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_1944E732868B43F0_OFFSET UNITYSDK_OFFSET(0x79C8C00)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x79C8780)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_6DCD9220112B913A_OFFSET UNITYSDK_OFFSET(0x79C8D30)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_8DDC9C512A861AF8_OFFSET UNITYSDK_OFFSET(0x79C9C60)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x79C9A00)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_92F2FCA8316DB56D_OFFSET UNITYSDK_OFFSET(0x79CA010)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_A0341C7992B0DE61_OFFSET UNITYSDK_OFFSET(0x79C9F00)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_AF769CD15806BD66_OFFSET UNITYSDK_OFFSET(0x79C9E70)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_B5390CE7564A79DD_OFFSET UNITYSDK_OFFSET(0x79C8F40)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x79C93F0)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x79C9970)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x79C87F0)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_EBEAEC73367B6BDF_OFFSET UNITYSDK_OFFSET(0x79C9870)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_F31B59EEF7AFE71A_OFFSET UNITYSDK_OFFSET(0x79C99F0)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x79C8BB0)
#define CLASS_1_8BABEB2BC6365EFE_METHOD_1_FA9FF233BF055A70_OFFSET UNITYSDK_OFFSET(0x79C8E20)
#define CLASS_1_8BABEB2BC6365EFE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x79C8300)
#define CLASS_1_8BABEB2BC6365EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x79C82F0)

inline static constexpr unsigned int Class_1_8BABEB2BC6365EFE_TypeDefinitionIndex = 59018;

class Class_1_8BABEB2BC6365EFE : public ::System::Object
{
public:
	::MoleMole::UIBaseController* Field_1_1; // 0x10
	::Class_2_79AE422BA06F6D26_6* Field_1_2; // 0x18
	::System::Action_1<::System::Boolean>* Field_1_14; // 0x20
	::MoleMole::NotificationBadgeEx* Field_1_13; // 0x28
	::Il2CppArray<::Struct_2_037D21AC29ED1130>* Field_1_3; // 0x30
	::MoleMole::UIGeneralDynamicTipsPopWindowController* Field_1_6; // 0x38
	::System::Func_2<::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*>* Field_1_0; // 0x40
	::System::Action_1<::System::Int32>* Field_1_5; // 0x48
	::MoleMole::UIGeneralDropDownControllerContext* Field_1_7; // 0x50
	::Class_1_8BABEB2BC6365EFE_Enum_3_CA7C9A6C1BE1373B Field_1_10; // 0x58
	::MoleMole::InputLogicEventType Field_1_11; // 0x5C
	::Enum_3_0A43EA4B15EC3408 Field_1_9; // 0x60
	::System::Int32 Field_1_8; // 0x64
	::System::Boolean Field_1_12; // 0x68
	::System::Boolean Field_1_4; // 0x69

	::System::Void _ctor(::Class_1_8BABEB2BC6365EFE_Enum_3_CA7C9A6C1BE1373B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8BABEB2BC6365EFE_Enum_3_CA7C9A6C1BE1373B))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnClick()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_ONCLICK_OFFSET))(this);
	}

	::System::Void Method_1_13004921ED9C7319(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_13004921ED9C7319_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_1944E732868B43F0(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_6* a2, ::Class_1_8BABEB2BC6365EFE_Class_1_A9DF9F4312C529DF* a3, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_6*, ::Class_1_8BABEB2BC6365EFE_Class_1_A9DF9F4312C529DF*, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_1944E732868B43F0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FA9FF233BF055A70(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_FA9FF233BF055A70_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5390CE7564A79DD(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_B5390CE7564A79DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0F4A55AD4ED47C8A(::MoleMole::NotificationBadgeEx* a1, ::Class_1_79526D80B8F6897C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadgeEx*, ::Class_1_79526D80B8F6897C*))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_0F4A55AD4ED47C8A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_1_EBEAEC73367B6BDF(::Il2CppArray<::Struct_2_037D21AC29ED1130>* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_EBEAEC73367B6BDF_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UIGeneralDynamicTipsPopWindowController* Method_1_F31B59EEF7AFE71A()
	{
		return ((::MoleMole::UIGeneralDynamicTipsPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_F31B59EEF7AFE71A_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DDC9C512A861AF8(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_8DDC9C512A861AF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6DCD9220112B913A(::MoleMole::UIBaseController* a1, ::Class_2_79AE422BA06F6D26_6* a2, ::System::Action_1<::System::Int32>* a3, ::System::Int32 a4, ::Enum_3_0A43EA4B15EC3408 a5, ::Il2CppArray<::Struct_2_037D21AC29ED1130>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_2_79AE422BA06F6D26_6*, ::System::Action_1<::System::Int32>*, ::System::Int32, ::Enum_3_0A43EA4B15EC3408, ::Il2CppArray<::Struct_2_037D21AC29ED1130>*))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_6DCD9220112B913A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_AF769CD15806BD66(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_AF769CD15806BD66_OFFSET))(this, a1);
	}

	::Struct_2_037D21AC29ED1130 Method_1_A0341C7992B0DE61(::System::Int32 a1)
	{
		return ((::Struct_2_037D21AC29ED1130(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_A0341C7992B0DE61_OFFSET))(this, a1);
	}

	::System::Void Method_1_92F2FCA8316DB56D(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_8BABEB2BC6365EFE_METHOD_1_92F2FCA8316DB56D_OFFSET))(this, a1);
	}
};
