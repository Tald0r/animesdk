#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMiniScapeMapPage_MapIconDetailWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }
namespace MoleMole { class UIMiniScapeMapPage_TopWidgetController; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_17FCF354542601B4_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x7C212C0)
#define CLASS_2_17FCF354542601B4_METHOD_2_6FDA0C1696A00F81_OFFSET UNITYSDK_OFFSET(0x7C210D0)
#define CLASS_2_17FCF354542601B4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7C21400)
#define CLASS_2_17FCF354542601B4__CTOR_OFFSET UNITYSDK_OFFSET(0x7C213F0)

inline static constexpr unsigned int Class_2_17FCF354542601B4_TypeDefinitionIndex = 70658;

class Class_2_17FCF354542601B4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIMiniScapeMapPage_TopWidgetController*>* Field_2_2; // 0x18
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIMiniScapeMapPage_MapIconDetailWidgetController*>* Field_2_1; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIMiniScapeMapPage_MapWidgetController*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6FDA0C1696A00F81(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4_METHOD_2_6FDA0C1696A00F81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_17FCF354542601B4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
