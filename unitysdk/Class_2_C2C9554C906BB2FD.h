#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MapIconDetailWidgetController; }
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_C2C9554C906BB2FD_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x612D330)
#define CLASS_2_C2C9554C906BB2FD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x612D450)
#define CLASS_2_C2C9554C906BB2FD_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x612D190)
#define CLASS_2_C2C9554C906BB2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x612D430)

inline static constexpr unsigned int Class_2_C2C9554C906BB2FD_TypeDefinitionIndex = 64925;

class Class_2_C2C9554C906BB2FD : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController*>* Field_2_0; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIInLevelPauseMiniscapeMapWidget_MapIconDetailWidgetController*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
