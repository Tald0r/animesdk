#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }

#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_345795AFB8760AAE_OFFSET UNITYSDK_OFFSET(0xA953420)
#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_451128A24F29622D_1_OFFSET UNITYSDK_OFFSET(0xA953430)
#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_451128A24F29622D_OFFSET UNITYSDK_OFFSET(0xA953400)
#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_95E323BF776B2B6D_OFFSET UNITYSDK_OFFSET(0xA9533E0)
#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0xA953190)
#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_F086E082034F96CA_1_OFFSET UNITYSDK_OFFSET(0xA953410)
#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_F086E082034F96CA_OFFSET UNITYSDK_OFFSET(0xA9533F0)
#define CLASS_3_B7445BEDE3BE9B24_METHOD_3_F542621131A5D653_OFFSET UNITYSDK_OFFSET(0xA9530C0)
#define CLASS_3_B7445BEDE3BE9B24__CTOR_OFFSET UNITYSDK_OFFSET(0xA953360)

inline static constexpr unsigned int Class_3_B7445BEDE3BE9B24_TypeDefinitionIndex = 40674;

class Class_3_B7445BEDE3BE9B24 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	::MonoUITableScrollV2* Field_3_4; // 0x28
	::MonoUITableScrollV2* Field_3_3; // 0x30
	::MoleMole::MonoGamepadModule* Field_3_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_F542621131A5D653(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_F542621131A5D653_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void Method_3_95E323BF776B2B6D(::MoleMole::MonoGamepadModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_95E323BF776B2B6D_OFFSET))(this, a1);
	}

	::MonoUITableScrollV2* Method_3_F086E082034F96CA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_F086E082034F96CA_OFFSET))(this);
	}

	::System::Void Method_3_451128A24F29622D(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_451128A24F29622D_OFFSET))(this, a1);
	}

	::MonoUITableScrollV2* Method_3_F086E082034F96CA_1()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_F086E082034F96CA_1_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* Method_3_345795AFB8760AAE()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_345795AFB8760AAE_OFFSET))(this);
	}

	::System::Void Method_3_451128A24F29622D_1(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_3_B7445BEDE3BE9B24_METHOD_3_451128A24F29622D_1_OFFSET))(this, a1);
	}
};
