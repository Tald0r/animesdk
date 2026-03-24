#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_C3EE32D79E4AC77A_Class_2_BE69EBBF22C8BFCF;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMain_LeftWidgetController; }
namespace MoleMole { class UIFlowerMain_RightWidgetController; }
namespace MoleMole { class UIFlowerMain_TopWidgetController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_C3EE32D79E4AC77A_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x6605450)
#define CLASS_2_C3EE32D79E4AC77A_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x6605690)
#define CLASS_2_C3EE32D79E4AC77A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x66057B0)
#define CLASS_2_C3EE32D79E4AC77A__CTOR_OFFSET UNITYSDK_OFFSET(0x66057A0)

inline static constexpr unsigned int Class_2_C3EE32D79E4AC77A_TypeDefinitionIndex = 52527;

class Class_2_C3EE32D79E4AC77A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIFlowerMain_LeftWidgetController*>* Field_2_2; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIFlowerMain_RightWidgetController*>* Field_2_3; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIFlowerMain_TopWidgetController*>* Field_2_1; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_C3EE32D79E4AC77A_Class_2_BE69EBBF22C8BFCF*>* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3EE32D79E4AC77A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3EE32D79E4AC77A_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3EE32D79E4AC77A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3EE32D79E4AC77A_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
