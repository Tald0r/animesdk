#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/Enum_3_BB5DFC1116609E15.h"
#include "unitysdk/Enum_3_D716341FB3B6F6CC.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameContext.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_6;
class Class_1_B0BA31736A3CCA24;
class Class_1_B61C4EDDF0AF60D0;
class Class_1_C2937544035FD07F;
class Class_1_F23B38E9DDCD5F0A;
class Class_2_4B0D186A1228FA4E_3;
class Class_2_785FDC7D0DA58280;
class Class_3_AE02BC8285203464_37;
class UFightServerConnectionEventCallback;
namespace MoleMole::MiniGame { class MiniGameWorldBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_469466241042B140_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xB7F4290)
#define CLASS_1_469466241042B140_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xB7F3ED0)
#define CLASS_1_469466241042B140_METHOD_1_26118586AB0EF52A_OFFSET UNITYSDK_OFFSET(0xB7F4790)
#define CLASS_1_469466241042B140_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0xB7F5640)
#define CLASS_1_469466241042B140_METHOD_1_4603E8F797EE9134_OFFSET UNITYSDK_OFFSET(0xB7F44E0)
#define CLASS_1_469466241042B140_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xB7F4390)
#define CLASS_1_469466241042B140_METHOD_1_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0xB7F5650)
#define CLASS_1_469466241042B140_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0xB7F3E00)
#define CLASS_1_469466241042B140_METHOD_1_66474CCBFC6641B7_OFFSET UNITYSDK_OFFSET(0xB7F3A20)
#define CLASS_1_469466241042B140_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xB7F4A30)
#define CLASS_1_469466241042B140_METHOD_1_73AD9AEDA223EE7A_OFFSET UNITYSDK_OFFSET(0xB7F4D00)
#define CLASS_1_469466241042B140_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xB7F5660)
#define CLASS_1_469466241042B140_METHOD_1_8B7DB6DA817DCE5A_OFFSET UNITYSDK_OFFSET(0xB7F4E20)
#define CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0xB7F5830)
#define CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0xB7F5750)
#define CLASS_1_469466241042B140_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xB7F3CC0)
#define CLASS_1_469466241042B140_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xB7F58B0)
#define CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB7F4230)
#define CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB7F41D0)
#define CLASS_1_469466241042B140_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xB7F57C0)
#define CLASS_1_469466241042B140_METHOD_1_D93D2303F1967C64_OFFSET UNITYSDK_OFFSET(0xB7F5430)
#define CLASS_1_469466241042B140_METHOD_1_DF8652737A9E91AB_OFFSET UNITYSDK_OFFSET(0xB7F3F70)
#define CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xB7F58C0)
#define CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xB7F3A10)
#define CLASS_1_469466241042B140__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F5630)

inline static constexpr unsigned int Class_1_469466241042B140_TypeDefinitionIndex = 74062;

class Class_1_469466241042B140 : public ::System::Object
{
public:
	::UFightServerConnectionEventCallback* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B0BA31736A3CCA24*>* Field_1_5; // 0x18
	::MoleMole::MiniGame::MiniGameWorldBase* Field_1_6; // 0x20
	::MoleMole::MiniGame::MiniGameContext Field_1_0; // 0x28
	::Class_1_F23B38E9DDCD5F0A* Field_1_10; // 0x68
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x70
	::Class_2_785FDC7D0DA58280* Field_1_7; // 0x78
	::Class_2_4B0D186A1228FA4E_3* Field_1_9; // 0x80
	::Class_1_C2937544035FD07F* Field_1_8; // 0x88
	::System::Action* Field_1_2; // 0x90
	::System::UInt64 Field_1_15; // 0x98
	::System::Boolean Field_1_12; // 0xA0
	::System::Boolean Field_1_13; // 0xA1
	::System::Boolean Field_1_17; // 0xA2
	::System::Boolean Field_1_18; // 0xA3
	::System::Boolean Field_1_16; // 0xA4
	::System::Boolean Field_1_14; // 0xA5
	::Enum_3_D716341FB3B6F6CC Field_1_3; // 0xA8
	::System::Int32 Field_1_20; // 0xAC
	::System::Int32 Field_1_19; // 0xB0
	::Foundation::Coroutine::CoroutineHandle Field_1_11; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_66474CCBFC6641B7(::MoleMole::MiniGame::MiniGameContext a1, ::System::Action_1<::System::Boolean>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::MiniGameContext, ::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_66474CCBFC6641B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_DF8652737A9E91AB(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_DF8652737A9E91AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_4603E8F797EE9134(::System::Boolean a1, ::System::Nullable_1<::System::Boolean> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_4603E8F797EE9134_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_26118586AB0EF52A(::UFightServerConnectionEventCallback* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UFightServerConnectionEventCallback*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_26118586AB0EF52A_OFFSET))(this, a1);
	}

	::System::Void Method_1_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_1_73AD9AEDA223EE7A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_73AD9AEDA223EE7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B7DB6DA817DCE5A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_8B7DB6DA817DCE5A_OFFSET))(this, a1);
	}

	::Class_2_785FDC7D0DA58280* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_785FDC7D0DA58280*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_58BA0C8308C8127F(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_D93D2303F1967C64()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_D93D2303F1967C64_OFFSET))();
	}

	::System::Void Method_1_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
