#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_103E1D96FB04CA85_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xE97D670)
#define CLASS_2_103E1D96FB04CA85_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0xE97D4C0)
#define CLASS_2_103E1D96FB04CA85_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE97D720)
#define CLASS_2_103E1D96FB04CA85__CTOR_OFFSET UNITYSDK_OFFSET(0xE97D710)

inline static constexpr unsigned int Class_2_103E1D96FB04CA85_TypeDefinitionIndex = 42937;

class Class_2_103E1D96FB04CA85 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::ShaderAniHelp* Field_2_2; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_103E1D96FB04CA85_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
