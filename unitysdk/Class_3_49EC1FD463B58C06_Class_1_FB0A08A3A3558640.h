#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/IndicatorLightData.h"
#include "unitysdk/MoleMole/Config/IndicatorLightType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_49EC1FD463B58C06_CLASS_1_FB0A08A3A3558640__CTOR_OFFSET UNITYSDK_OFFSET(0x90CE700)

inline static constexpr unsigned int Class_3_49EC1FD463B58C06_Class_1_FB0A08A3A3558640_TypeDefinitionIndex = 74468;

class Class_3_49EC1FD463B58C06_Class_1_FB0A08A3A3558640 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::IndicatorLightData>* Field_1_1; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::MoleMole::Config::IndicatorLightType Field_1_0; // 0x1C
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49EC1FD463B58C06_CLASS_1_FB0A08A3A3558640__CTOR_OFFSET))(this);
	}
};
