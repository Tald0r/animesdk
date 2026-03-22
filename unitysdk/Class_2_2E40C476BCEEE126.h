#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIArpeggioCardWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_2E40C476BCEEE126_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x8100A70)
#define CLASS_2_2E40C476BCEEE126_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x81006D0)
#define CLASS_2_2E40C476BCEEE126_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8100B80)
#define CLASS_2_2E40C476BCEEE126_METHOD_2_DFD45D28AA07ADDA_OFFSET UNITYSDK_OFFSET(0x8100870)
#define CLASS_2_2E40C476BCEEE126__CTOR_OFFSET UNITYSDK_OFFSET(0x8100B70)

inline static constexpr unsigned int Class_2_2E40C476BCEEE126_TypeDefinitionIndex = 55108;

class Class_2_2E40C476BCEEE126 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIArpeggioCardWidgetController*>*>* Field_2_0; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIArpeggioCardWidgetController*>*>* Method_2_DFD45D28AA07ADDA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_A2BF74BADF6F7D16<::MoleMole::UIArpeggioCardWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_DFD45D28AA07ADDA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2E40C476BCEEE126_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
