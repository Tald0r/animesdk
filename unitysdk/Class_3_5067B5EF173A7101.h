#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define CLASS_3_5067B5EF173A7101_METHOD_3_451128A24F29622D_OFFSET UNITYSDK_OFFSET(0x92F3BA0)
#define CLASS_3_5067B5EF173A7101_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x92F3A60)
#define CLASS_3_5067B5EF173A7101_METHOD_3_8BFA46780D3D20DC_OFFSET UNITYSDK_OFFSET(0x92F3910)
#define CLASS_3_5067B5EF173A7101_METHOD_3_F086E082034F96CA_OFFSET UNITYSDK_OFFSET(0x92F3BB0)
#define CLASS_3_5067B5EF173A7101__CTOR_OFFSET UNITYSDK_OFFSET(0x92F3B20)

inline static constexpr unsigned int Class_3_5067B5EF173A7101_TypeDefinitionIndex = 47062;

class Class_3_5067B5EF173A7101 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::MonoUITableScrollV2* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5067B5EF173A7101__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_8BFA46780D3D20DC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_5067B5EF173A7101_METHOD_3_8BFA46780D3D20DC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5067B5EF173A7101_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_3_451128A24F29622D(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_3_5067B5EF173A7101_METHOD_3_451128A24F29622D_OFFSET))(this, a1);
	}

	::MonoUITableScrollV2* Method_3_F086E082034F96CA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5067B5EF173A7101_METHOD_3_F086E082034F96CA_OFFSET))(this);
	}
};
