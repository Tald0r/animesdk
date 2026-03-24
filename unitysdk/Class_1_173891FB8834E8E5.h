#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_EEA0111A28582B57;
class Class_2_0082F110AC4E220D;
class Class_2_79AE422BA06F6D26_128;
namespace MoleMole { class UIActivityWeekRewardComponentPopWindowController; }

#define CLASS_1_173891FB8834E8E5_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xB549230)
#define CLASS_1_173891FB8834E8E5_METHOD_1_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0xB5498D0)
#define CLASS_1_173891FB8834E8E5_METHOD_1_477437DD4EF9815F_OFFSET UNITYSDK_OFFSET(0xB549AE0)
#define CLASS_1_173891FB8834E8E5_METHOD_1_6A5EE7A0919C2BEE_OFFSET UNITYSDK_OFFSET(0xB54A2E0)
#define CLASS_1_173891FB8834E8E5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB549EC0)
#define CLASS_1_173891FB8834E8E5_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xB549F30)
#define CLASS_1_173891FB8834E8E5__CTOR_OFFSET UNITYSDK_OFFSET(0xB549200)

inline static constexpr unsigned int Class_1_173891FB8834E8E5_TypeDefinitionIndex = 78729;

class Class_1_173891FB8834E8E5 : public ::System::Object
{
public:
	::MoleMole::UIActivityWeekRewardComponentPopWindowController* Field_1_0; // 0x10
	::Class_2_79AE422BA06F6D26_128* Field_1_1; // 0x18
	::Class_2_0082F110AC4E220D* Field_1_6; // 0x20
	::Foundation::Coroutine::CoroutineHandle Field_1_5; // 0x28
	::System::Single Field_1_2; // 0x2C
	::System::Single Field_1_3; // 0x30
	::System::Single Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_1_100C37D9D1141569(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_100C37D9D1141569_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_6A5EE7A0919C2BEE(::MoleMole::UIActivityWeekRewardComponentPopWindowController* a1, ::Class_1_EEA0111A28582B57* a2, ::Class_2_0082F110AC4E220D* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityWeekRewardComponentPopWindowController*, ::Class_1_EEA0111A28582B57*, ::Class_2_0082F110AC4E220D*))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_6A5EE7A0919C2BEE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_477437DD4EF9815F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_477437DD4EF9815F_OFFSET))(this, a1, a2);
	}
};
