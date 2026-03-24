#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_F565C1781196F0E8_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0x88BB550)
#define CLASS_2_F565C1781196F0E8_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x88BB6F0)
#define CLASS_2_F565C1781196F0E8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x88BB830)
#define CLASS_2_F565C1781196F0E8__CTOR_OFFSET UNITYSDK_OFFSET(0x88BB820)

inline static constexpr unsigned int Class_2_F565C1781196F0E8_TypeDefinitionIndex = 53041;

class Class_2_F565C1781196F0E8 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F565C1781196F0E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F565C1781196F0E8_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F565C1781196F0E8_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F565C1781196F0E8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
