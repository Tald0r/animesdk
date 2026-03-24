#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_F29EAF7C636E5981_Class_2_0D5D8405826EE6F8_23;
class Class_2_F29EAF7C636E5981_Class_2_38BDEE38FAF3DCC6_1;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFashionStoreEditPanelWidgetController; }
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_F29EAF7C636E5981_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x63BC000)
#define CLASS_2_F29EAF7C636E5981_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x63BC2F0)
#define CLASS_2_F29EAF7C636E5981_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x63BC490)
#define CLASS_2_F29EAF7C636E5981__CTOR_OFFSET UNITYSDK_OFFSET(0x63BC480)

inline static constexpr unsigned int Class_2_F29EAF7C636E5981_TypeDefinitionIndex = 60668;

class Class_2_F29EAF7C636E5981 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_5; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_F29EAF7C636E5981_Class_2_38BDEE38FAF3DCC6_1*>* Field_2_3; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIFashionStorePreviewPanelWidgetController*>* Field_2_1; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_F29EAF7C636E5981_Class_2_0D5D8405826EE6F8_23*>* Field_2_6; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIFashionStoreEditPanelWidgetController*>* Field_2_2; // 0x40
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
