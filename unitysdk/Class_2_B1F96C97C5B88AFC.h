#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"

#define CLASS_2_B1F96C97C5B88AFC_METHOD_2_433C892707E2E598_OFFSET UNITYSDK_OFFSET(0x6A6B160)
#define CLASS_2_B1F96C97C5B88AFC_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x6A6B050)
#define CLASS_2_B1F96C97C5B88AFC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6A6B100)
#define CLASS_2_B1F96C97C5B88AFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x6A6AFD0)
#define CLASS_2_B1F96C97C5B88AFC__CTOR_OFFSET UNITYSDK_OFFSET(0x6A6B040)

inline static constexpr unsigned int Class_2_B1F96C97C5B88AFC_TypeDefinitionIndex = 56716;

class Class_2_B1F96C97C5B88AFC : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x115; // 0x0
	::MoleMole::FlowCanvas::Nodes::EDoorOperation Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_433C892707E2E598(::MoleMole::FlowCanvas::Nodes::EDoorOperation a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EDoorOperation))((::PBYTE)hIl2Cpp + CLASS_2_B1F96C97C5B88AFC_METHOD_2_433C892707E2E598_OFFSET))(this, a1);
	}
};
