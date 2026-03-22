#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_132;
class Class_2_0EE69E002DF27678_Class_2_E89DC7541B30248D_17;
namespace MoleMole { class UIInLevelPlayerMoveChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_0EE69E002DF27678_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x7AA3410)
#define CLASS_2_0EE69E002DF27678_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x7AA3330)
#define CLASS_2_0EE69E002DF27678_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x7AA3340)
#define CLASS_2_0EE69E002DF27678_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7AA3490)
#define CLASS_2_0EE69E002DF27678__CTOR_OFFSET UNITYSDK_OFFSET(0x7AA3480)

inline static constexpr unsigned int Class_2_0EE69E002DF27678_TypeDefinitionIndex = 60138;

class Class_2_0EE69E002DF27678 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::MoleMole::UIInLevelPlayerMoveChildWindowController* Field_2_0; // 0x28
	::Class_2_0EE69E002DF27678_Class_2_E89DC7541B30248D_17* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EE69E002DF27678__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EE69E002DF27678_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_0EE69E002DF27678_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EE69E002DF27678_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EE69E002DF27678_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
