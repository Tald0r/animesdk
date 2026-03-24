#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2BB5A4A452E9A1B4.h"

namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace System { class String; }

#define CLASS_3_B0491C180D29B3FA_METHOD_3_90D65721BD86F1DF_OFFSET UNITYSDK_OFFSET(0xBC64000)
#define CLASS_3_B0491C180D29B3FA_METHOD_3_DCE0A903A9E7E199_OFFSET UNITYSDK_OFFSET(0xBC64090)
#define CLASS_3_B0491C180D29B3FA__CTOR_OFFSET UNITYSDK_OFFSET(0xBC63FD0)

inline static constexpr unsigned int Class_3_B0491C180D29B3FA_TypeDefinitionIndex = 39138;

class Class_3_B0491C180D29B3FA : public ::Class_2_2BB5A4A452E9A1B4<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>
{
public:
	::System::String* Field_3_1; // 0x28
	::System::Single Field_3_0; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_90D65721BD86F1DF(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA_METHOD_3_90D65721BD86F1DF_OFFSET))(this, a1);
	}

	::System::Void Method_3_DCE0A903A9E7E199(::MoleMole::UIBabeltowerTrickScoreRowWidgetController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickScoreRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_3_B0491C180D29B3FA_METHOD_3_DCE0A903A9E7E199_OFFSET))(this, a1);
	}
};
