#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIAntiqueCollectWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_610A77DD6369D942_METHOD_2_0A421A6D2D1A1BFD_OFFSET UNITYSDK_OFFSET(0x8055FF0)
#define CLASS_2_610A77DD6369D942_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x8056190)
#define CLASS_2_610A77DD6369D942_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8056260)
#define CLASS_2_610A77DD6369D942__CTOR_OFFSET UNITYSDK_OFFSET(0x8056250)

inline static constexpr unsigned int Class_2_610A77DD6369D942_TypeDefinitionIndex = 72108;

class Class_2_610A77DD6369D942 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIAntiqueCollectWidgetController*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610A77DD6369D942__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0A421A6D2D1A1BFD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_610A77DD6369D942_METHOD_2_0A421A6D2D1A1BFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_610A77DD6369D942_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_610A77DD6369D942_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
