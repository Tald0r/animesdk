#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFlowerMainTargetImgWidgetController; }
namespace MoleMole { class UIFlowerMainTargetRoleWidgetController; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_3F217C90780E6324_METHOD_2_57DFF24ACF7DBF36_OFFSET UNITYSDK_OFFSET(0xC4F73C0)
#define CLASS_2_3F217C90780E6324_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xC4F7560)
#define CLASS_2_3F217C90780E6324_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xC4F7630)
#define CLASS_2_3F217C90780E6324__CTOR_OFFSET UNITYSDK_OFFSET(0xC4F7620)

inline static constexpr unsigned int Class_2_3F217C90780E6324_TypeDefinitionIndex = 78386;

class Class_2_3F217C90780E6324 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIFlowerMainTargetImgWidgetController*>* Field_2_1; // 0x18
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIFlowerMainTargetRoleWidgetController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_57DFF24ACF7DBF36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324_METHOD_2_57DFF24ACF7DBF36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F217C90780E6324_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
