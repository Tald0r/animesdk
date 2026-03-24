#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_1_D5F08B6364839D11;
class Class_2_4DD794443FE34DAB;
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_AFB10CA68C024D1B_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x6FC6B70)
#define CLASS_1_AFB10CA68C024D1B_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x6FC7240)
#define CLASS_1_AFB10CA68C024D1B_METHOD_1_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x6FC71A0)
#define CLASS_1_AFB10CA68C024D1B_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x6FC72F0)
#define CLASS_1_AFB10CA68C024D1B_METHOD_1_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x6FC7480)
#define CLASS_1_AFB10CA68C024D1B_METHOD_1_8C53DB7903FE40A3_OFFSET UNITYSDK_OFFSET(0x6FC70F0)
#define CLASS_1_AFB10CA68C024D1B_METHOD_1_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0x6FC6C60)
#define CLASS_1_AFB10CA68C024D1B_METHOD_1_BEF4584D1C5EA346_OFFSET UNITYSDK_OFFSET(0x6FC6EA0)
#define CLASS_1_AFB10CA68C024D1B__CTOR_OFFSET UNITYSDK_OFFSET(0x6FC6B00)

inline static constexpr unsigned int Class_1_AFB10CA68C024D1B_TypeDefinitionIndex = 44988;

class Class_1_AFB10CA68C024D1B : public ::System::Object
{
public:
	::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* Field_1_2; // 0x10
	::Class_1_D5F08B6364839D11* Field_1_1; // 0x18
	::System::Collections::Generic::Queue_1<::Class_2_4DD794443FE34DAB*>* Field_1_3; // 0x20
	::System::Single Field_1_9; // 0x28
	::System::Single Field_1_7; // 0x2C
	::System::UInt32 Field_1_0; // 0x30
	::System::Single Field_1_4; // 0x34
	::System::Single Field_1_10; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_5; // 0x40
	::System::Single Field_1_8; // 0x44

	::System::Void _ctor(::System::UInt32 a1, ::Class_1_D5F08B6364839D11* a2, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* a3, ::System::Collections::Generic::Queue_1<::Class_2_4DD794443FE34DAB*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_D5F08B6364839D11*, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*, ::System::Collections::Generic::Queue_1<::Class_2_4DD794443FE34DAB*>*))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Method_1_BEF4584D1C5EA346(::System::UInt32 a1, ::Class_1_2CDF619C23140440* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_2CDF619C23140440*))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_BEF4584D1C5EA346_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Method_1_9D8CB5E47C1952BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_9D8CB5E47C1952BD_OFFSET))(this);
	}

	::System::Void Method_1_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_1_8C53DB7903FE40A3(::Class_2_4DD794443FE34DAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4DD794443FE34DAB*))((::PBYTE)hIl2Cpp + CLASS_1_AFB10CA68C024D1B_METHOD_1_8C53DB7903FE40A3_OFFSET))(this, a1);
	}
};
