#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_EEA0111A28582B57;
class Class_2_0082F110AC4E220D_1;
class Class_2_79AE422BA06F6D26_147;
namespace MoleMole { class UIActivityWeekRewardComponentPopWindowController; }

#define CLASS_1_173891FB8834E8E5_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0xAD9B780)
#define CLASS_1_173891FB8834E8E5_METHOD_1_100C37D9D1141569_OFFSET UNITYSDK_OFFSET(0xAD9C210)
#define CLASS_1_173891FB8834E8E5_METHOD_1_477437DD4EF9815F_OFFSET UNITYSDK_OFFSET(0xAD9BE20)
#define CLASS_1_173891FB8834E8E5_METHOD_1_6A5EE7A0919C2BEE_OFFSET UNITYSDK_OFFSET(0xAD9C7E0)
#define CLASS_1_173891FB8834E8E5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAD9C9F0)
#define CLASS_1_173891FB8834E8E5_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0xAD9C420)
#define CLASS_1_173891FB8834E8E5__CTOR_OFFSET UNITYSDK_OFFSET(0xAD9B750)

inline static constexpr unsigned int Class_1_173891FB8834E8E5_TypeDefinitionIndex = 64901;

class Class_1_173891FB8834E8E5 : public ::System::Object
{
public:
	::Class_2_79AE422BA06F6D26_147* Field_1_1; // 0x10
	::Class_2_0082F110AC4E220D_1* Field_1_6; // 0x18
	::MoleMole::UIActivityWeekRewardComponentPopWindowController* Field_1_0; // 0x20
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_4; // 0x2C
	::Foundation::Coroutine::CoroutineHandle Field_1_5; // 0x30
	::System::Single Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_1_477437DD4EF9815F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_477437DD4EF9815F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_100C37D9D1141569(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_100C37D9D1141569_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_6A5EE7A0919C2BEE(::MoleMole::UIActivityWeekRewardComponentPopWindowController* a1, ::Class_1_EEA0111A28582B57* a2, ::Class_2_0082F110AC4E220D_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityWeekRewardComponentPopWindowController*, ::Class_1_EEA0111A28582B57*, ::Class_2_0082F110AC4E220D_1*))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_6A5EE7A0919C2BEE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173891FB8834E8E5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
