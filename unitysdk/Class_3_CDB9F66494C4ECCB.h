#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5F4_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Struct_2_3C85541F28E72E6B.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_2_04999CCE6E77B4A2_2;
class Class_4_3D4EFA6B3CC691CC;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMonsterFantasyRoleItemWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xA0E4510)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xA0E3A00)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA0E3C60)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA0E3DB0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xA0E3E50)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xA0E4450)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_1_OFFSET UNITYSDK_OFFSET(0xA0E5660)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_OFFSET UNITYSDK_OFFSET(0xA0E5570)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_9C3D8ED2211D368B_OFFSET UNITYSDK_OFFSET(0xA0E47C0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_BCC1EE49EAAACF06_OFFSET UNITYSDK_OFFSET(0xA0E4D40)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA0E4B20)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA0E4C20)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xA0E4C80)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xA0E4CE0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xA0E5440)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA0E4AC0)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_DB4B43E60DCCA4C1_OFFSET UNITYSDK_OFFSET(0xA0E4B80)
#define CLASS_3_CDB9F66494C4ECCB_METHOD_3_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0xA0E54A0)
#define CLASS_3_CDB9F66494C4ECCB__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0E4A80)
#define CLASS_3_CDB9F66494C4ECCB__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E4880)

inline static constexpr unsigned int Class_3_CDB9F66494C4ECCB_TypeDefinitionIndex = 38004;

class Class_3_CDB9F66494C4ECCB : public ::Class_2_534AF681CC2BD5F4_1<::Class_3_CDB9F66494C4ECCB*>
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CDB9F66494C4ECCB_TypeDefinitionIndex)->GetStaticField(0x34F30);
	}
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* Field_3_9; // 0x70
	::System::Collections::Generic::List_1<::Struct_2_3C85541F28E72E6B>* Field_3_5; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_3_3; // 0x80
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::UIMonsterFantasyRoleItemWidgetController*, ::System::String*>>* Field_3_10; // 0x88
	::Cysharp::Threading::Tasks::UniTask Field_3_8; // 0x90
	::System::Threading::CancellationTokenSource* Field_3_7; // 0xA0
	::Class_2_04999CCE6E77B4A2_2* Field_3_1; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* Field_3_2; // 0xB0
	::Class_4_3D4EFA6B3CC691CC* Field_3_6; // 0xB8
	::System::Collections::Generic::List_1<::Struct_2_3C85541F28E72E6B>* Field_3_4; // 0xC0
	::System::Boolean Field_3_11; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB__CCTOR_OFFSET))();
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_3_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_DB4B43E60DCCA4C1(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_DB4B43E60DCCA4C1_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_9C3D8ED2211D368B(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_9C3D8ED2211D368B_OFFSET))(this, a1);
	}

	::System::Void Method_3_BCC1EE49EAAACF06(::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_BCC1EE49EAAACF06_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Int32 Method_3_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_3_866057E5772343C9(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_3_866057E5772343C9_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_3_CDB9F66494C4ECCB_METHOD_3_866057E5772343C9_1_OFFSET))(this, a1);
	}
};
